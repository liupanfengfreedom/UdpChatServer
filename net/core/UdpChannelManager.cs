#define UTF16
using System;
using System.Collections.Generic;
using System.Text;
using System.Net;
using System.Net.Sockets;
using System.Threading;
using Newtonsoft.Json;
using ChannelidType = System.Byte;//System.Int32

namespace ChatServer
{

    public delegate void OnchannelReceivedata(ref byte[] buffer, ref String str);
    class UdpChannelManager : SuperUdpClient
    {
        public Dictionary<ChannelidType, UdpChannel> OnchannelReceivedatacallbackmap;
        public UdpChannelManager(UdpServer udpserver, EndPoint remoteendpoint) : base(udpserver, remoteendpoint)
        {
            unreliabledatareceiveddelegate += unreliabledatareceivedcallback;
            reliabledatareceiveddelegate += reliabledatareceivedcallback;
            OnchannelReceivedatacallbackmap = new Dictionary<ChannelidType, UdpChannel>();
        }
        ~UdpChannelManager()
        {
            Console.WriteLine("UdpChannelManager garbag collection");
        }
        public bool CreateChannel(ChannelidType channelid, out UdpChannel channel )
        {
            bool b = OnchannelReceivedatacallbackmap.ContainsKey(channelid);
            if (b)
            {
                channel = default;
                return false;//channelid already exist ,I am so sorry;
            }
            channel = new UdpChannel(this,channelid);
            OnchannelReceivedatacallbackmap.Add(channelid,channel);
            return true;
        }
        public bool DestoryChannel(ChannelidType channelid)
        {
            bool b = OnchannelReceivedatacallbackmap.ContainsKey(channelid);
            if (b)
            {
                OnchannelReceivedatacallbackmap.Remove(channelid);
            }
            b = OnchannelReceivedatacallbackmap.ContainsKey(channelid);
            return !b;
        }
        void unreliabledatareceivedcallback(ref byte[] buffer)
        {
            byte[] temparray;
            String str;
            ChannelidType id;
            getvalidedata(ref buffer, out temparray, out str, out id);
            bool bcontain = OnchannelReceivedatacallbackmap.ContainsKey(id);
            if (bcontain)
            {
                OnchannelReceivedatacallbackmap[id].unreliabledatareceiveddelegate.Invoke(ref temparray, ref str);
            }
            else {
                ChatClient chatClient=new ChatClient(this,id);
            }
        }
        void reliabledatareceivedcallback(ref byte[] buffer)
        {
            byte[] temparray;
            String str;
            ChannelidType id;
            getvalidedata(ref buffer, out temparray, out str, out id);
            bool bcontain = OnchannelReceivedatacallbackmap.ContainsKey(id);
            if (bcontain)
            { 
              // OnchannelReceivedatacallbackmap[id].reliabledatareceiveddelegate.Invoke(ref temparray,ref str);
            }
            else
            {
                ChatClient chatClient = new ChatClient(this, id);
            }
            OnchannelReceivedatacallbackmap[id].reliabledatareceiveddelegate.Invoke(ref temparray, ref str);
        }
        void getvalidedata(ref byte[] buffer, out byte[] validebuffer, out String str1 ,out ChannelidType id)
        {
            id = ByteArraytoChannelidType.DeSerialize(ref buffer);
            int idsize = sizeof(ChannelidType);
            Int32 playloadsize = buffer.Length - idsize;
            validebuffer = new byte[playloadsize];
            Array.ConstrainedCopy(buffer, idsize, validebuffer, 0, playloadsize);
#if UTF16
            var str = System.Text.Encoding.Unicode.GetString(validebuffer);
#else
            var str = System.Text.Encoding.UTF8.GetString(realdata);
#endif
            str1 = str;
        }
    }
    class UdpChannel
    {
        protected UdpChannelManager mchannelmanager;
        protected ChannelidType mchannelid;
        public UdpChannel(UdpChannelManager channelmanager, ChannelidType channelid) {
            mchannelmanager = channelmanager;
            mchannelid = channelid;
            bool bcontain = channelmanager.OnchannelReceivedatacallbackmap.ContainsKey(channelid);
            if (bcontain)
            {
                Console.ForegroundColor = ConsoleColor.Red;
                Console.WriteLine("warning  channel id already exist");
                Console.ResetColor();
            }
            else
            { 
               channelmanager.OnchannelReceivedatacallbackmap.Add(channelid,this);
            }
        }
        ~UdpChannel() { 
           
        }
        public OnchannelReceivedata unreliabledatareceiveddelegate;
        public OnchannelReceivedata reliabledatareceiveddelegate;
        public void destroythischannel()
        {
            mchannelmanager.DestoryChannel(mchannelid);
        }
        public void sendunreliable(ref byte[] buffer)
        {
            int channelidsize = sizeof(ChannelidType);
            byte[] temparray = new byte[buffer.Length + channelidsize];
            Array.ConstrainedCopy(ByteArraytoChannelidType.Serialize(mchannelid), 0, temparray, 0, channelidsize);
            Array.ConstrainedCopy(buffer, 0, temparray, channelidsize, buffer.Length);
            mchannelmanager.sendunreliable(ref temparray);
        }
        public void sendreliable(ref byte[] buffer)
        {
            int channelidsize = sizeof(ChannelidType);
            byte[] temparray = new byte[buffer.Length + channelidsize];
            Array.ConstrainedCopy(ByteArraytoChannelidType.Serialize(mchannelid), 0, temparray, 0, channelidsize);
            Array.ConstrainedCopy(buffer, 0, temparray, channelidsize, buffer.Length);
            mchannelmanager.sendreliable(ref temparray);
        }

        public void sendunreliable(ref String serialized)
        {
#if UTF16
            UnicodeEncoding asen = new UnicodeEncoding();
#else
            ASCIIEncoding asen = new ASCIIEncoding();
#endif
            byte[] buffe = asen.GetBytes(serialized);
            sendunreliable(ref buffe);
        }
        public void sendreliable(ref String serialized)
        {
#if UTF16
            UnicodeEncoding asen = new UnicodeEncoding();
#else
            ASCIIEncoding asen = new ASCIIEncoding();
#endif
            byte[] buffe = asen.GetBytes(serialized);
            sendreliable(ref buffe);
        }
    }
    static class ByteArraytoChannelidType
    {
        public static ChannelidType DeSerialize(ref byte[] m)
        {
            int sizeofidtype = sizeof(ChannelidType);
            int sizeofarray = m.Length;
            int validsize = sizeofidtype < sizeofarray ? sizeofidtype : sizeofarray;
            ChannelidType channelid;
            unsafe
            {
                byte* channelidp = (byte*)&channelid;
                for (int i = 0; i < validsize; i++)
                {
                    *(channelidp + i) = m[i];
                }
            }
            return channelid;
        }
        public static byte[] Serialize(ChannelidType m)
        {
            int sizeofidtype = sizeof(ChannelidType);
            byte[] bytearray = new byte[sizeofidtype];           
            unsafe
            {
                byte* channelidp = (byte*)&m;
                for (int i = 0; i < sizeofidtype; i++)
                {
                    bytearray[i]= * (channelidp + i);
                }
            }
            return bytearray;
        }
    }
}

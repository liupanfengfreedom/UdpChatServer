#define UTF16
using System;
using System.Collections.Generic;
using System.Text;
using System.Net;
using System.Net.Sockets;
using System.Threading;
namespace ChatServer
{
    public delegate void OnSuperudpReceivedCompleted(ref byte[] buffer);

    class UdpClient
    {
        public EndPoint mremoteEP;
        public UdpServer mudpserver;
        const int BUFFER_SIZE = 65507;
        public byte[] receivebuffer = new byte[BUFFER_SIZE];
        public OnReceivedCompleted OnReceivedCompletePointer = null;
        public UdpClient(UdpServer udpserver, EndPoint remoteendpoint)
        {
            mremoteEP = remoteendpoint;
            mudpserver = udpserver;
        }
        ~UdpClient()
        {
            Console.WriteLine("UdpClient In destructor.");
        }
        public void Send(byte[] buffer)
        {
            if (mudpserver != null)
            {
                mudpserver.UdpListener.SendTo(buffer, mremoteEP);
            }
        }
        public void receivecallback(ref byte[] buffer)
        {
            OnReceivedCompletePointer.Invoke(ref buffer);
        }
    }
    class SuperUdpClient
    {
        byte UNRELIABLESIGN = 0x33;
        byte RELIABLESIGN = 0xee;
        byte ACKSIGN = 0x0e;
        byte NORMALDATASIGN = 0xdd;
        byte[] realdata;
        static List<byte> header = new List<byte>();
        public UdpClient mudpclient;
        Queue<byte[]> Queuedreliabledata;
        readonly object QueuedreliabledataLock = new object();
        byte reliabledataid =0;
        public static bool isvalidedata(ref byte[] receivedata)
        {
            bool b = receivedata[0] == 0xaa;
            bool b1 = receivedata[1] == 0x55;
            bool b2 = receivedata[2] == 0xaa;
            bool b3 = receivedata[3] == 0x55;
            bool b4 = receivedata[4] == 0xaa;
            bool b5 = receivedata[5] == 0x55;
            bool b6 = receivedata[6] == 0xaa;
            bool b7 = receivedata[7] == 0x55;
            return b && b1 && b2 && b3 && b4 && b5 && b6 && b7;
        }
        byte receiveackid=0xff;
        byte lastsendackid= 0xff;
        static SuperUdpClient()
        {
            header.Add(0xaa);
            header.Add(0x55);
            header.Add(0xaa);
            header.Add(0x55);
            header.Add(0xaa);
            header.Add(0x55);
            header.Add(0xaa);
            header.Add(0x55);
        }
        public SuperUdpClient(UdpServer udpserver, EndPoint remoteendpoint)
        {

            Queuedreliabledata = new Queue<byte[]>();
            mudpclient = new UdpClient(udpserver,remoteendpoint);
            mudpclient.OnReceivedCompletePointer = (ref byte[] buffer)=>{
                if (isvalidedata(ref buffer))
                {
                    //int datasize = buffer.Length;
                    int headersize = header.Count;
                    byte un_reliablebyte = buffer[headersize];
                    if (un_reliablebyte == UNRELIABLESIGN)
                    {
                        byte normal_ackbyte = buffer[headersize + 1];
                        if (normal_ackbyte == NORMALDATASIGN)
                        {
                            int commandsize = headersize + 1 + 1;
                            int playloadsize;//= datasize - commandsize;
                            byte[] sizebyte = new byte[2];
                            Array.ConstrainedCopy(buffer, commandsize, sizebyte, 0, 2);//here is 2 byte valide data length
                            playloadsize = ByteArraytoUint16.DeSerialize(ref sizebyte);//here is 2 byte valide data length
                            realdata = new byte[playloadsize];
                            Array.ConstrainedCopy(buffer, commandsize + 2, realdata, 0, playloadsize);//here is 2 byte valide data length

                            unreliabledatareceiveddelegate.Invoke(ref realdata);
                        }
                        else if (normal_ackbyte == ACKSIGN)
                        {
                            receiveackid = buffer[headersize + 2];
                            Console.WriteLine("receiveackid"+ receiveackid);
                        }
                    }
                    else if (un_reliablebyte == RELIABLESIGN)
                    {
                            byte messageid = buffer[headersize + 1];
                            bool bspecial = messageid == 0 && lastsendackid == 0xff;
                        if (bspecial || messageid > lastsendackid)
                        {
							lastsendackid = messageid;
                            //+ reliable  + id
                            int commandsize = headersize + 1 + +1;
                            int playloadsize;//= datasize - commandsize;
                            byte[] sizebyte = new byte[2];
                            Array.ConstrainedCopy(buffer, commandsize, sizebyte, 0, 2);//here is 2 byte valide data length
                            playloadsize = ByteArraytoUint16.DeSerialize(ref sizebyte);//here is 2 byte valide data length
                            realdata = new byte[playloadsize];
                            Array.ConstrainedCopy(buffer, commandsize + 2, realdata, 0, playloadsize);//here is 2 byte valide data length

                            reliabledatareceiveddelegate.Invoke(ref realdata);
                        }
                         sendack(messageid);

                    }
                }
            };
            Thread TransferListenerthread = new Thread(reliabletickwork);
            TransferListenerthread.IsBackground = true;
            TransferListenerthread.Start();
        }
        ~SuperUdpClient()
        { 
        
        }
        public void sendunreliable(ref string serialized)
        {
#if UTF16
            UnicodeEncoding asen = new UnicodeEncoding();
#else
            ASCIIEncoding asen = new ASCIIEncoding();
#endif
            byte[] buffe = asen.GetBytes(serialized);
            sendunreliable(ref buffe);
        }
        void sendack(byte messageid)
        {
            List<byte> tempcontent=new List<byte>();
            tempcontent.AddRange(header);
            tempcontent.Add(UNRELIABLESIGN);//mean unreliable
            tempcontent.Add(ACKSIGN);//mean this is ack
            tempcontent.Add(messageid);
            mudpclient.Send(tempcontent.ToArray());
        }
        public void sendunreliable(ref byte[] buffer)
        {
            List<byte> tempcontent = new List<byte>();
            tempcontent.AddRange(header);
            tempcontent.Add(UNRELIABLESIGN);//mean unreliable
            tempcontent.Add(NORMALDATASIGN);//mean this is normal data
            int headersize = tempcontent.Count;
            byte[] temparray = new byte[headersize + 2 + buffer.Length];// 2 mean 2 byte valide data length
            Array.ConstrainedCopy(tempcontent.ToArray(), 0, temparray, 0, headersize);//load header
            Array.ConstrainedCopy(ByteArraytoUint16.Serialize((UInt16)buffer.Length), 0, temparray, headersize, 2);// load 2 byte valide data length
            Array.ConstrainedCopy(buffer, 0, temparray, headersize+2, buffer.Length);
            mudpclient.Send(temparray);
        }
        public void sendreliable(ref byte[] buffer)
        {
            List<byte> tempcontent = new List<byte>();
            tempcontent.AddRange(header);
            tempcontent.Add(RELIABLESIGN);//mean reliable
            tempcontent.Add(reliabledataid++);//mean reliable message id
            int headersize = tempcontent.Count;
            byte[] temparray = new byte[headersize + 2 + buffer.Length];// 2 mean 2 byte valide data length
            Array.ConstrainedCopy(tempcontent.ToArray(), 0, temparray, 0, headersize);//load header
            Array.ConstrainedCopy(ByteArraytoUint16.Serialize((UInt16)buffer.Length), 0, temparray, headersize, 2);// load 2 byte valide data length
            Array.ConstrainedCopy(buffer, 0, temparray, headersize + 2, buffer.Length);
            lock (QueuedreliabledataLock)
            { 
               Queuedreliabledata.Enqueue(temparray);
            }

        }
        public void sendreliable(ref string serialized)
        {
#if UTF16
            UnicodeEncoding asen = new UnicodeEncoding();
#else
            ASCIIEncoding asen = new ASCIIEncoding();
#endif
            byte[] buffe = asen.GetBytes(serialized);
            sendreliable(ref buffe);
        }
        void reliabletickwork(object state)
        {
            while (true)
            {
                reliabletick();
                Thread.Sleep(100);
            }

        }
        void reliabletick()
        {
            lock (QueuedreliabledataLock)
            {
                if (Queuedreliabledata.Count == 0)
                {
                    return;
                }
                byte[] NewAudioBuffer;
                NewAudioBuffer = Queuedreliabledata.Peek();
                if (NewAudioBuffer != null)
                {
                    int headersize = header.Count;
                    int idindex = headersize + 1;
                    if (NewAudioBuffer[idindex] == receiveackid)
                    {
                        Queuedreliabledata.Dequeue();
                    }
                }
                if (Queuedreliabledata.Count == 0)
                {
                    return;
                }
                NewAudioBuffer = Queuedreliabledata.Peek();
                if (NewAudioBuffer != null)
                {
                    mudpclient.Send(NewAudioBuffer);
                }
            }
        }

        protected OnSuperudpReceivedCompleted unreliabledatareceiveddelegate;
        protected OnSuperudpReceivedCompleted reliabledatareceiveddelegate;

    }
    static class ByteArraytoUint16
    {
        public static  UInt16 DeSerialize(ref byte[] m)
        {
            int sizeofidtype = sizeof(UInt16);
            int sizeofarray = m.Length;
            int validsize = sizeofidtype < sizeofarray ? sizeofidtype : sizeofarray;
            UInt16 channelid;
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
        public static byte[] Serialize(UInt16 m)
        {
            int sizeofidtype = sizeof(UInt16);
            byte[] bytearray = new byte[sizeofidtype];
            unsafe
            {
                byte* channelidp = (byte*)&m;
                for (int i = 0; i < sizeofidtype; i++)
                {
                    bytearray[i] = *(channelidp + i);
                }
            }
            return bytearray;
        }
    }
}

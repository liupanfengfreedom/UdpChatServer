using System;
using System.Collections.Generic;
using System.Text;
using System.Net;
using System.Net.Sockets;
using System.Threading;
using Newtonsoft.Json;
using System.Timers;
using ChannelidType = System.Byte;//System.Int32

namespace ChatServer
{
    class ChatClient : UdpChannel
    {
        Room<ChatClient> room;
        public String roomid { private set; get; }
        public String proxyguid { private set; get; }
        public String localplayerguid { private set; get; }
        public bool islocalplayer { private set; get; }
        List<ChatClient> proxyclients_list;
        ChatClient localplayer;
        private  System.Timers.Timer aTimer;
        private const Int16 LIFEVALUE = 2;
        private Int16 lifetime = LIFEVALUE;
        public ChatClient(UdpChannelManager channelmanager, ChannelidType channelid) : base(channelmanager, channelid)
        {
            unreliabledatareceiveddelegate += unreliabledatareceivedcallback;
            reliabledatareceiveddelegate += reliabledatareceivedcallback;
            proxyclients_list = new List<ChatClient>();
            SetTimer();
        }
        private void SetTimer()
        {
            // Create a timer with a two second interval.
            aTimer = new System.Timers.Timer(1000*60);
            // Hook up the Elapsed event for the timer. 
            aTimer.Elapsed += OnTimedEventremoveplayer;
            aTimer.AutoReset = true;
            aTimer.Enabled = true;
        }
        private  void OnTimedEventremoveplayer(Object source, ElapsedEventArgs e)
        {
            if (lifetime-- <= 0)
            {
                if (islocalplayer)
                {
                    room.Remove(this);
                    mchannelmanager.mudpclient.mudpserver.removeclient(mchannelmanager.mudpclient.mremoteEP);//remove thisUdpChannelManager
                }
                else
                {
                    localplayer.proxyclients_list.Remove(this);
                }
                mchannelmanager.DestoryChannel(mchannelid);
                aTimer.Close();
                Console.WriteLine("mchannelmanager.DestoryChannel"+ mchannelid);
            }

            FDataPackage mp = new FDataPackage("");
            mp.MT = DataType.PING;
            String str = JsonConvert.SerializeObject(mp);
            sendreliable(ref str);
        }
        void unreliabledatareceivedcallback(ref byte[] buffer, ref String str)
        {
            foreach (ChatClient v in proxyclients_list)
            {
                v.sendunreliable(ref str);
            }
        }
        void reliabledatareceivedcallback(ref byte[] buffer, ref String str)
        {
            try
            {
                bool bisjson = Utility.IsValidJson(str);
                if (!bisjson)
                {
                    return;
                }
                FDataPackage mp;
                mp = JsonConvert.DeserializeObject<FDataPackage>(str);
                switch (mp.MT)
                {
                    case DataType.LOCALPLAYERJOINROOM:                        
                        islocalplayer = true;
                        String[] strarray = mp.PayLoad.Split('?');
                        proxyguid = localplayerguid = strarray[0];//clientguid
                        roomid = strarray[1];//roomID
                        room = Room<ChatClient>.JoinClientroom(roomid,this);
                        Console.ForegroundColor = ConsoleColor.DarkGray;
                        Console.WriteLine("LOCALPLAYERJOINROOM" + localplayerguid);
                        Console.ResetColor();
                        foreach (var people in room.GetAllMember())
                        {
                            mp.MT = DataType.ORDERPROXYREPORT;
                            mp.PayLoad = people.localplayerguid;
                            str = JsonConvert.SerializeObject(mp);
                            people.sendreliable(ref str);
                            Console.WriteLine("ORDERPROXYREPORT  localplayerguid:" + people.localplayerguid);
                        }

                        lifetime = LIFEVALUE;
                        break;
                    case DataType.PROXYREPORT:
                        islocalplayer = false;
                        strarray = mp.PayLoad.Split('?');
                        localplayerguid = strarray[0];//clientguid
                        roomid = strarray[1];//roomID
                        proxyguid = strarray[2];//proxyguid
                        Console.WriteLine("PROXYREPORT" + "localplayerguid :" + localplayerguid + "proxyguid :"+ proxyguid);
                        room = Room<ChatClient>.getroomfromroommap(roomid);
                        ChatClient localcc = room.findmemberfromroom((ChatClient cc) => { return cc.localplayerguid == proxyguid; });
                        localcc.proxyclients_list.Add(this);
                        localplayer = localcc;
                        lifetime = LIFEVALUE;
                        break;
                    case DataType.PING:
                        lifetime = LIFEVALUE;
                         //Console.WriteLine("PING:");
                        break;
                }
            }
            catch (Exception e)
            {
                Console.WriteLine(e);
            }


        }
    }
}

// Fill out your copyright notice in the Description page of Project Settings.
#define UTF16
#include "UdpChannelMannger.h"
#include "UdpClient.h"
#include "Networking.h"
#include "Engine.h"
#include "MyBlueprintFunctionLibrary.h"
TSharedPtr<UdpChannelMannger, ESPMode::ThreadSafe> UdpChannelMannger::_msingleston = nullptr;
UdpChannelMannger::UdpChannelMannger()
{
	superudpclient = new SuperUdpClient();
	superudpclient->udpclient->setserveraddress("120.55.126.186",8888);
	auto helpfunc = [this](const TArray<uint8>& recdata,FString & outstr, channelidtype & id) {
				id = *(channelidtype*)recdata.GetData();
				int idsize = sizeof(channelidtype);
				int32 playloadsize = recdata.Num() - idsize;
				realdata.SetNum(playloadsize);
				FMemory::Memcpy(realdata.GetData(), recdata.GetData() + idsize, playloadsize);
		#ifdef UTF16
				FString datatostring = FString(realdata.Num() >> 1, (TCHAR*)&realdata[0]);
				UMyBlueprintFunctionLibrary::CLogtofile(datatostring);
		#else
				FString datatostring = FString(UTF8_TO_TCHAR(&realdata[0])).Left(realdata.Num());
		#endif // SENDUTF16	
				outstr = datatostring;
	};
	superudpclient->reliabledatareceiveddelegate.BindLambda([this, helpfunc](const TArray<uint8>& recdata) {
//		channelidtype id = *(channelidtype*)recdata.GetData();
//		int idsize = sizeof(channelidtype);
//		int32 playloadsize = recdata.Num() - idsize;
//		realdata.SetNum(playloadsize);
//		FMemory::Memcpy(realdata.GetData(), recdata.GetData() + idsize, playloadsize);
//#ifdef UTF16
//		FString datatostring = FString(realdata.Num() >> 1, (TCHAR*)&realdata[0]);
//		UMyBlueprintFunctionLibrary::CLogtofile(datatostring);
//#else
//		FString datatostring = FString(UTF8_TO_TCHAR(&realdata[0])).Left(realdata.Num());
//#endif // SENDUTF16			
		channelidtype id;
		FString datatostring;
		helpfunc(recdata,datatostring,id);
		bool bcontain = OnchannelReceivedatacallbackmap.Contains(id);
		if (bcontain)
		{
			OnchannelReceivedatacallbackmap[id]->reliabledatareceiveddelegate.ExecuteIfBound(realdata, datatostring);
		}
	});

	superudpclient->unreliabledatareceiveddelegate.BindLambda([this, helpfunc](const TArray<uint8>& recdata) {
//		channelidtype id = *(channelidtype*)recdata.GetData();
//		int idsize = sizeof(channelidtype);
//		int32 playloadsize = recdata.Num() - idsize;
//		realdata.SetNum(playloadsize);
//		FMemory::Memcpy(realdata.GetData(), recdata.GetData() + idsize, playloadsize);
//#ifdef UTF16
//		FString datatostring = FString(realdata.Num() >> 1, (TCHAR*)&realdata[0]);
//		UMyBlueprintFunctionLibrary::CLogtofile(datatostring);
//#else
//		FString datatostring = FString(UTF8_TO_TCHAR(&realdata[0])).Left(realdata.Num());
//#endif // SENDUTF16			
		channelidtype id;
		FString datatostring;
		helpfunc(recdata, datatostring, id);
		bool bcontain = OnchannelReceivedatacallbackmap.Contains(id);
		if (bcontain)
		{
			OnchannelReceivedatacallbackmap[id]->unreliabledatareceiveddelegate.ExecuteIfBound(realdata, datatostring);
		}
		});
}

UdpChannelMannger::~UdpChannelMannger()
{
	superudpclient->exitthread = true;
}
TSharedPtr<UdpChannelMannger, ESPMode::ThreadSafe> UdpChannelMannger::Getsingleston()
{
	if (_msingleston == nullptr)
	{
		_msingleston = MakeShareable(new UdpChannelMannger());
	}
	return _msingleston;
}
bool UdpChannelMannger::CreateChannel(channelidtype channelid, TSharedPtr<UdpChannel, ESPMode::ThreadSafe> & out)
{
	bool b = OnchannelReceivedatacallbackmap.Contains(channelid);
	if (b)
	{
		return false;//channelid already exist ,I am so sorry;
	}
	TSharedPtr<UdpChannel, ESPMode::ThreadSafe> temp = MakeShareable(new UdpChannel(channelid));
	temp->channelid = channelid;
	out = temp;
	OnchannelReceivedatacallbackmap.Add(channelid,temp);
	return true;
}
bool UdpChannelMannger::DestoryChannel(channelidtype channelid)
{
	bool b = OnchannelReceivedatacallbackmap.Contains(channelid);
	if (b)
	{
		OnchannelReceivedatacallbackmap.Remove(channelid);
	}
	b = OnchannelReceivedatacallbackmap.Contains(channelid);
	return !b;
}
UdpChannel::UdpChannel(channelidtype id)
{
	channelid = id;
	udpchannelmanager = UdpChannelMannger::Getsingleston();
	auto createvalididfunc = [this]()->channelidtype {
		channelidtype i = 1;
tryagain:
		bool bcontain = udpchannelmanager->OnchannelReceivedatacallbackmap.Contains(i);
		if (bcontain)
		{
			if (i++ > 0xfe)
			{
				return 0;
			}
			goto tryagain;
		}
		return i;
	};
	channelidtype currentid = createvalididfunc();
	if (currentid == 0)
	{
		GEngine->AddOnScreenDebugMessage(-1, 35.0f, FColor::Red, TEXT("warning  channel id already exist"));
	}
	else
	{
		channelid = currentid;
		udpchannelmanager->OnchannelReceivedatacallbackmap.Add(currentid, MakeShareable(this));
	}
	//bool bcontain = udpchannelmanager->OnchannelReceivedatacallbackmap.Contains(id);
	//if (bcontain)
	//{
	//	GEngine->AddOnScreenDebugMessage(-1, 35.0f, FColor::Red, TEXT("warning  channel id already exist"));
	//}
	//else
	//{
	//	udpchannelmanager->OnchannelReceivedatacallbackmap.Add(id, MakeShareable(this));
	//}
}

UdpChannel::~UdpChannel()
{
	udpchannelmanager->OnchannelReceivedatacallbackmap.Remove(channelid);
}
void UdpChannel::sendunreliable(const uint8* content, const int32& size)
{
	int idsize = sizeof(channelidtype);
	TArray<uint8> tempcontent;
	tempcontent.SetNum(idsize + size);
	FMemory::Memcpy(tempcontent.GetData() , (uint8*)&channelid, idsize);
	FMemory::Memcpy(tempcontent.GetData() + idsize, content, size);
	UdpChannelMannger::Getsingleston()->superudpclient->sendunreliable(tempcontent.GetData(), idsize + size);
}
void UdpChannel::sendreliable(const uint8* content, const int32& size)
{
	int idsize = sizeof(channelidtype);
	TArray<uint8> tempcontent;
	tempcontent.SetNum(idsize + size);
	FMemory::Memcpy(tempcontent.GetData(), (uint8*)&channelid, idsize);
	FMemory::Memcpy(tempcontent.GetData() + idsize, content, size);
	UdpChannelMannger::Getsingleston()->superudpclient->sendreliable(tempcontent.GetData(), idsize + size);
}
void UdpChannel::sendunreliable(FString& serialized)
{
	int32 sent = 0;
	uint8* pointer;
#ifdef UTF16
	int64 outsize;
	UMyBlueprintFunctionLibrary::FStringtoUTF16(serialized, pointer, outsize);
	sendunreliable(pointer, outsize);
#else
	TCHAR* serializedChar = serialized.GetCharArray().GetData();
	int32 size = FCString::Strlen(serializedChar);
	pointer = (uint8*)TCHAR_TO_UTF8(serializedChar);
	sendunreliable(pointer, size);
#endif // SENDUTF16
}
void UdpChannel::sendreliable(FString& serialized)
{
	int32 sent = 0;
	uint8* pointer;
#ifdef UTF16
	int64 outsize;
	UMyBlueprintFunctionLibrary::FStringtoUTF16(serialized, pointer, outsize);
	sendreliable(pointer, outsize);
#else
	TCHAR* serializedChar = serialized.GetCharArray().GetData();
	int32 size = FCString::Strlen(serializedChar);
	pointer = (uint8*)TCHAR_TO_UTF8(serializedChar);
	sendreliable(pointer, size);
#endif // SENDUTF16
}
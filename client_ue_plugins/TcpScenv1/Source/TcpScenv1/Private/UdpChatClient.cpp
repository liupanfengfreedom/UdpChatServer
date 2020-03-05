// Fill out your copyright notice in the Description page of Project Settings.


#include "UdpChatClient.h"
#include "TcpCommunicatorv1.h"
#include "JsonUtilities.h"
#include "Json.h"


UdpChatClient::~UdpChatClient()
{
	
}
void UdpChatClient::unreliabledatareceivedcallback(const TArray<uint8>& buffer, const FString& str)
{
	GEngine->AddOnScreenDebugMessage(-1, 2.0f, FColor::Yellow, str);
	GEngine->AddOnScreenDebugMessage(-1, 2.0f, FColor::Yellow, FString::FromInt(buffer.Num()));

}
void UdpChatClient::reliabledatareceivedcallback(const TArray<uint8>&, const FString& str)
{
	GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Yellow, *str);
	FDataPackage mp;
	FJsonObjectConverter::JsonObjectStringToUStruct<FDataPackage>(str, &mp, 0, 0);
	if (mp.MT == DataType::ORDERPROXYREPORT)
	{
		GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Yellow, FString(" ORDERPROXYREPORT"));
		//FString left, right;
		//mp.PayLoad.Split("?", &left, &right);
		Onorderproxytoreportdelegate.ExecuteIfBound(mp.PayLoad);
	}
}
void UdpChatClient::ping()
{
	FDataPackage messagepackage(DataType::LOCALPLAYERJOINROOM, FString(""));

	FString outstring;
	messagepackage.MT = DataType::PING;
	FJsonObjectConverter::UStructToJsonObjectString<FDataPackage>(messagepackage, outstring);
	sendreliable(outstring);
}
void UdpChatClient::localplayerjoinroom(FString &number, FString&roomid)
{
	FDataPackage messagepackage(DataType::LOCALPLAYERJOINROOM, FString(""));

	FString outstring;
	messagepackage.MT = DataType::LOCALPLAYERJOINROOM;
	messagepackage.PayLoad = number + "?" + roomid;
	FJsonObjectConverter::UStructToJsonObjectString<FDataPackage>(messagepackage, outstring);
	sendreliable(outstring);

}
void UdpChatClient::proxyreport(const FString& localplayerguid, const FString& roomid, const FString& proxyguid)
{
	GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Yellow, FString(" PROXYREPORT entry"));

	FDataPackage messagepackage(DataType::LOCALPLAYERJOINROOM, FString(""));

	FString outstring;
	messagepackage.MT = DataType::PROXYREPORT;
	messagepackage.PayLoad = localplayerguid + "?" + roomid + "?" + proxyguid;
	FJsonObjectConverter::UStructToJsonObjectString<FDataPackage>(messagepackage, outstring);
	sendreliable(outstring);
	GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Yellow, FString(" PROXYREPORT end"));
}
void UdpChatClient::sendunreliable1(FString& serialized)
{	
	sendunreliable(serialized);
}
void UdpChatClient::sendunreliable1(const uint8* content, const int32& size)
{
	sendunreliable(content, size);
}
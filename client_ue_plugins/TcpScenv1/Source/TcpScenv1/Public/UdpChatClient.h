// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UdpChannelMannger.h"
#include "Engine.h"


/**
 * 
 */
DECLARE_DELEGATE_OneParam(FOnOrderproxytoreport, const FString &);
DECLARE_DELEGATE_OneParam(FOnunreliablebytestreamreceived, const TArray<uint8>&);
class TCPSCENV1_API UdpChatClient:UdpChannel
{
public:
	UdpChatClient(channelidtype id) :UdpChannel(id)
	{
		unreliabledatareceiveddelegate.BindRaw(this, &UdpChatClient::unreliabledatareceivedcallback);
		reliabledatareceiveddelegate.BindRaw(this, &UdpChatClient::reliabledatareceivedcallback);
	}
	~UdpChatClient();
private:
	void unreliabledatareceivedcallback(const TArray<uint8>&, const FString&);
	void reliabledatareceivedcallback(const TArray<uint8>&, const FString&);
	void ping();
public:
	void localplayerjoinroom(FString &number,FString&roomid);
	void proxyreport(const FString& localplayerguid, const FString& roomid, const FString& proxyguid);
	void sendunreliable1(const uint8* content, const int32& size);
	void sendunreliable1(FString& serialized);
	FOnOrderproxytoreport Onorderproxytoreportdelegate;
	FOnunreliablebytestreamreceived onunreliablebytestreamreceived;
};

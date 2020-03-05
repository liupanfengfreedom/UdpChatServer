// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UdpChannelMannger.h"
#include "Engine.h"


/**
 * 
 */
DECLARE_DELEGATE_OneParam(FOnOrderproxytoreport, const FString &);
class TCPSCENV1_API UdpChatClient:UdpChannel
{
public:
	UdpChatClient(channelidtype id) :UdpChannel(id)
	{
		unreliabledatareceiveddelegate.BindRaw(this, &UdpChatClient::unreliabledatareceivedcallback);
		reliabledatareceiveddelegate.BindRaw(this, &UdpChatClient::reliabledatareceivedcallback);

			Async(EAsyncExecution::ThreadPool, [=]() {
			while (true)
			{
				FPlatformProcess::Sleep(10);
				if (exitthread)
				{
					delete this;

					break;
				}
				ping();
			}
			; }, nullptr);
	}
	~UdpChatClient();
private:
	void unreliabledatareceivedcallback(const TArray<uint8>&, const FString&);
	void reliabledatareceivedcallback(const TArray<uint8>&, const FString&);
public:
	void ping();
	void localplayerjoinroom(FString &number,FString&roomid);
	void proxyreport(const FString& localplayerguid, const FString& roomid, const FString& proxyguid);
	void sendunreliable1(const uint8* content, const int32& size);
	void sendunreliable1(FString& serialized);
	FOnOrderproxytoreport Onorderproxytoreportdelegate;
	bool exitthread = false;
};

// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

//#include "CoreMinimal.h"
#include "TcpCommunicatorv1.h"
//#include "UObject/NoExportTypes.h"
//#include "UTcpCommunicatorv2.generated.h"

/**
 * 
 */
//UCLASS()
class TCPSCENV1_API UUTcpCommunicatorv2 //: public UObject
{
	//GENERATED_BODY()
	//UTcpCommunicatorv1 * tcpclient;
	static UUTcpCommunicatorv2 *MatchClient;
	static class TcpClientv * mtcp;
	static void clientexit();
	FString LevelShouldBeLoaded; 
	FTimerHandle th;
	//UFUNCTION()
		void OnTcpResponse(const TArray<uint8>&p, const FString & str);
public:
	static UUTcpCommunicatorv2 * GetMatchClient();
	FString username="";
	class UWorld* world;
	void init();
	void OpenServermap(UWorld* world,FString mapname,FString mapID,FString nvn);
	void EntyMapOkMessage();
	//FString GetMapArchiveInfor(FString mapname);

	FString number;
	FString roomid;
	//UFUNCTION()
	//void onfilereceivesucceed(FString &filecontent, MessageType type);
};

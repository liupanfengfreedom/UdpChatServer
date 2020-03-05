// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
#include "CoreMinimal.h"
#include "Runtime/Engine/Classes/Engine/EngineTypes.h"
#include "UObject/NoExportTypes.h"
#include "TcpCommunicatorv1.generated.h"
UENUM(BlueprintType)		//"BlueprintType" is essential to include
enum class MessageType : uint8
{
	FILE,//changless
	FILEEND,//changless
	CLIENT_FILE,
	CLIENT_FILEEND,
	CLIENT_FILERECEIVEOK,
	SINGUP,
	LOGIN,
	MATCH,
	SAVEMAPACTORINFOR,
	GETMAPACTORINFOR,
	MAPACTORINFORSENDOK,
	EntryMAP,
	EntryMAPOK,
	MAPISFULL,//the number in the map has reach the ceilling
	EXITGAME,
	FILERECEIVEOK,//server side receive ok
	GUID,
	NUMBER,
};
USTRUCT()
struct FMessagePackage {
	GENERATED_BODY()
		UPROPERTY()
		MessageType MT;
	UPROPERTY()
		FString PayLoad;
	FMessagePackage()
	{
		MT = MessageType::LOGIN;
		PayLoad = "";
	}
	FMessagePackage(MessageType mMT, FString mPayLoad)
	{
		MT = mMT;
		PayLoad = mPayLoad;
	}
};
////////////////////////////////////////////////////////////////////////////////////////////////////////
UENUM(BlueprintType)		//"BlueprintType" is essential to include
enum class DataType : uint8
{
	GUID,
	EXITGAME,
	DATA,
	LOCALPLAYERJOINROOM,
	LOCALPLAYERJOINOK,
	PROXYREPORT,
	PROXYREPORTOK,
	ORDERPROXYREPORT,
	PING,
};
USTRUCT()
struct FDataPackage {
	GENERATED_BODY()
		UPROPERTY()
		DataType MT;
	UPROPERTY()
		FString PayLoad;
	FDataPackage()
	{
		MT = DataType::GUID;
	}
	FDataPackage(DataType mMT, FString mPayLoad)
	{
		MT = mMT;
		PayLoad = mPayLoad;
	}
};
/**
 * 
 */
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnLogInsucceed);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnFileReceiveSucceed,FString&,file, MessageType,type);
UCLASS()
class TCPSCENV1_API UTcpCommunicatorv1 : public UObject
{
	GENERATED_BODY()
	UTcpCommunicatorv1(const FObjectInitializer& ObjectInitializer);
	static class TcpClientv * mtcp;
	static void clientexit();
	FTimerHandle th;
	void thwork();
	bool isfile = false;
	bool isfilegoing = false;
	bool isfilereceiveok = false;
	UFUNCTION()
		void OnTcpResponse(const TArray<uint8>&p, const FString & str);
private:
	FString filestringpayload="";
	bool isconnected = false;
	int OnTcpResponsestate = 0;
	void Sendfile(FString &filecontent);
	void Sendfilethread();
	FString stringtosend;
	MessageType m_filetype;
	FString m_mapname;
public:
	class UWorld* world;
	bool ConnectServer();
	void SignUp(FString username, FString password);
	void LogIn(FString username, FString password);
	void SendMapActorInforfile(FString&mapname,FString &filecontent);
	void GetMapActorInforfile(FString& mapname);

	UPROPERTY()
	FOnLogInsucceed OnLogInSucceed;
	UPROPERTY()
	FOnFileReceiveSucceed OnFileReceiveSucceed;
};

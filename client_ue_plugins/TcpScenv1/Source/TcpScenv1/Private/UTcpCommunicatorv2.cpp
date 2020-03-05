// Fill out your copyright notice in the Description page of Project Settings.


#include "UTcpCommunicatorv2.h"
#include "TcpClientv.h"
#include "Engine.h"
#include "JsonUtilities.h"
#include "Json.h"
#include "MyBlueprintFunctionLibrary.h"
class TcpClientv* UUTcpCommunicatorv2::mtcp = nullptr;
class UUTcpCommunicatorv2* UUTcpCommunicatorv2::MatchClient = nullptr;
void UUTcpCommunicatorv2::clientexit()
{
	FString outstring;
	FMessagePackage messagepackage;
	messagepackage.MT = MessageType::EXITGAME;
	FJsonObjectConverter::UStructToJsonObjectString<FMessagePackage>(messagepackage, outstring);
	if (UUTcpCommunicatorv2::mtcp == nullptr)
	{
		return;
	}
	UUTcpCommunicatorv2::mtcp->Send(outstring);
	FPlatformProcess::Sleep(0.03);
	UMyBlueprintFunctionLibrary::CLogtofile(FString("OnGameEndevent.Broadcast();"));
	UUTcpCommunicatorv2::mtcp->exitthread = true;
}
UUTcpCommunicatorv2 * UUTcpCommunicatorv2::GetMatchClient()
{
	if (MatchClient == nullptr)
	{
		MatchClient = new UUTcpCommunicatorv2();
		MatchClient->init();
	}
	return MatchClient;
}
void UUTcpCommunicatorv2::init()
{
	UMyBlueprintFunctionLibrary::AddfunctiontoOnGameexitArray(&UUTcpCommunicatorv2::clientexit);
	//tcpclient = tcpgameinstance->GetSignUpLoginClient();
	//check(tcpclient);
	//tcpclient->OnFileReceiveSucceed.AddDynamic(this, &UUTcpCommunicatorv2::onfilereceivesucceed);
}
void UUTcpCommunicatorv2::OnTcpResponse(const TArray<uint8>&p, const FString & str)
{
	GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Yellow, *str);
	FMessagePackage mp;
	FJsonObjectConverter::JsonObjectStringToUStruct<FMessagePackage>(str, &mp, 0, 0);
	if (mp.MT == MessageType::EntryMAP)
	{
		FString pld = mp.PayLoad;
		roomid = pld;
		FString param = FString::Printf(TEXT("?%s?%s"), *LevelShouldBeLoaded, *username);
		pld.Append(param);
		UGameplayStatics::OpenLevel(world, *pld);
		//UGameplayStatics::OpenLevel(GetWorld(), "192.168.1.240:7788");
		//FString outstring;
		//mp.MT = MessageType::EntryMAPOK;
		//FJsonObjectConverter::UStructToJsonObjectString<FMessagePackage>(mp, outstring);
		//mtcp->Send(outstring);
	}
	else if (mp.MT == MessageType::MAPISFULL)
	{
		GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Yellow, TEXT("the number of people in the map has reach the ceilling"));
	}
	else if (mp.MT == MessageType::NUMBER)
	{
		number = mp.PayLoad;
		GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Blue, FString("number ").Append(number));
	}
}
void UUTcpCommunicatorv2::OpenServermap(UWorld* pworld,FString pmapname, FString mapID, FString nvn)
{
	MatchClient->world = pworld;
	FMessagePackage messagepackage(MessageType::MATCH, FString("hi"));
	LevelShouldBeLoaded = pmapname;
	if (mtcp)
	{	
		FString outstring;
		messagepackage.MT = MessageType::EXITGAME;
		FJsonObjectConverter::UStructToJsonObjectString<FMessagePackage>(messagepackage, outstring);
		mtcp->Send(outstring);
		UMyBlueprintFunctionLibrary::CLogtofile(FString("OnGameEndevent.Broadcast();"));
		mtcp->exitthread = true;
		FPlatformProcess::Sleep(0.03);
		mtcp = nullptr;
	}
	mtcp = new TcpClientv();

		FString outstring;
		messagepackage.MT = MessageType::MATCH;
		messagepackage.PayLoad = LevelShouldBeLoaded+"?"+mapID+"?"+nvn;
		FJsonObjectConverter::UStructToJsonObjectString<FMessagePackage>(messagepackage, outstring);
		mtcp->Connecttoserver(120, 55, 126, 186, 8001);
		//mtcp->OnTcpClientReceiveddata.AddDynamic(this, &UUTcpCommunicatorv2::OnTcpResponse);
		mtcp->OnTcpClientReceiveddatav1.BindRaw(this, &UUTcpCommunicatorv2::OnTcpResponse);
		mtcp->Send(outstring);
		
		GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Yellow, *outstring);
}
void UUTcpCommunicatorv2::EntyMapOkMessage()
{
	FMessagePackage mp;
	FString outstring;
	mp.MT = MessageType::EntryMAPOK;
	FJsonObjectConverter::UStructToJsonObjectString<FMessagePackage>(mp, outstring);
	mtcp->Send(outstring);
}
//FString UUTcpCommunicatorv2::GetMapArchiveInfor(FString name)
//{
//	check(tcpclient);
//	tcpclient->GetMapActorInforfile(name);
//	return "";
//}

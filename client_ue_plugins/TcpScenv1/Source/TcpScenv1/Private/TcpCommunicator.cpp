// Fill out your copyright notice in the Description page of Project Settings.


#include "TcpCommunicator.h"
#include "TcpClientv.h"
#include "JsonUtilities.h"
#include "Json.h"
#include "MyBlueprintFunctionLibrary.h"

//bool TcpCommunicator::connected = false;
//TcpClientv* TcpCommunicator::mtcp = nullptr;
//TcpCommunicator*  TcpCommunicator::singleton = nullptr;
//
//TcpCommunicator* TcpCommunicator::Getinstance()
//{
//	if (singleton == nullptr)
//	{
//		singleton = new TcpCommunicator();
//	}
//	return singleton;
//}
TcpCommunicator::TcpCommunicator()
{
	//if (mtcp == nullptr)
	//{
	//	mtcp = new TcpClientv();
	//	UMyBlueprintFunctionLibrary::AddfunctiontoOnGameexitArray(&TcpCommunicator::clientexit);
	//}
}

TcpCommunicator::~TcpCommunicator()
{
}
//void TcpCommunicator::clientexit()
//{
//
//	FString outstring;
//	FMessagePackage messagepackage;
//	messagepackage.MT = MessageType::EXITGAME;
//	FJsonObjectConverter::UStructToJsonObjectString<FMessagePackage>(messagepackage, outstring);
//	mtcp->Send(outstring);
//	//Uentryuicpp::mtcp->Send((uint8*)outstring.GetCharArray().GetData(),outstring.Len()*2);
//	//UMyBlueprintFunctionLibrary::CLogtofile(FString("OnGameEndevent.Broadcast();"));
//	mtcp->exitthread = true;
//
//
//}

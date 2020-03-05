// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
//enum class MessageType : uint8
//{
//	SENDEND,
//	SINGUP,
//	LOGIN,
//	MATCH,
//	EntryMAP,
//	EntryMAPOK,
//	EXITGAME,
//	FILE,
//	FILEEND,
//};
//struct FMessagePackage {
//		MessageType MT;
//		FString PayLoad;
//	FMessagePackage()
//	{
//		MT = MessageType::LOGIN;
//		PayLoad = "";
//	}
//	FMessagePackage(MessageType mMT, FString mPayLoad)
//	{
//		MT = mMT;
//		PayLoad = mPayLoad;
//	}
//};
/**
 * 
 */
class TCPSCENV1_API TcpCommunicator
{
	//bool isfilegoing = false;
	//static bool connected;
	//static TcpCommunicator* singleton;
	//FMessagePackage messagepackage;

public:
	TcpCommunicator();
	~TcpCommunicator();
	//static class TcpClientv * mtcp;
	//static void clientexit();
	//static TcpCommunicator* Getinstance();

};

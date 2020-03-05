// Fill out your copyright notice in the Description page of Project Settings.


#include "TcpCommunicatorv1.h"
#include "TcpClientv.h"
#include "Engine.h"
#include "JsonUtilities.h"
#include "Json.h"
#include "MyBlueprintFunctionLibrary.h"
class TcpClientv* UTcpCommunicatorv1::mtcp = nullptr;
UTcpCommunicatorv1::UTcpCommunicatorv1(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{//UObject(const FObjectInitializer& ObjectInitializer)

}
void UTcpCommunicatorv1::clientexit()
{

	FString outstring;
	FMessagePackage messagepackage;
	messagepackage.MT = MessageType::EXITGAME;
	FJsonObjectConverter::UStructToJsonObjectString<FMessagePackage>(messagepackage, outstring);
	if (UTcpCommunicatorv1::mtcp == nullptr)
	{
		return;
	}
	UTcpCommunicatorv1::mtcp->Send(outstring);
	FPlatformProcess::Sleep(0.03);
	UTcpCommunicatorv1::mtcp->exitthread = true;

}
bool UTcpCommunicatorv1::ConnectServer()
{
	if (mtcp == nullptr)
	{
		mtcp = new TcpClientv();
		isconnected = mtcp->Connecttoserver(192, 168, 1, 240, 8002);
		mtcp->OnTcpClientReceiveddata.AddDynamic(this, &UTcpCommunicatorv1::OnTcpResponse);
		if (isconnected)
		{

		}
		UMyBlueprintFunctionLibrary::AddfunctiontoOnGameexitArray(&UTcpCommunicatorv1::clientexit);
		//check(world);
		world->GetTimerManager().SetTimer(th, this, &UTcpCommunicatorv1::thwork, 0.5, true, 1);
	}
	return isconnected;
}
void UTcpCommunicatorv1::SignUp(FString username, FString password)
{
	FString outstring;
	FMessagePackage messagepackage;
	messagepackage.MT = MessageType::SINGUP;
	if (username.Equals(""))
	{
		return;
	}
	messagepackage.PayLoad = username + "?" + password;
	FJsonObjectConverter::UStructToJsonObjectString<FMessagePackage>(messagepackage, outstring);
	mtcp->Send(outstring);
}
void UTcpCommunicatorv1::LogIn(FString username, FString password)
{
	FString outstring;
	FMessagePackage messagepackage;
	messagepackage.MT = MessageType::LOGIN;
	if (username.Equals(""))
	{
		return;
	}
	messagepackage.PayLoad = username + "?" + password;
	FJsonObjectConverter::UStructToJsonObjectString<FMessagePackage>(messagepackage, outstring);
	mtcp->Send(outstring);
}
#define CHUNCKSIZE TCPSENDBUFFERSIZE/2
void UTcpCommunicatorv1::Sendfile(FString &str)
{
	FString outstring;
	FMessagePackage messagepackage;
	messagepackage.MT = MessageType::FILE;
	FJsonObjectConverter::UStructToJsonObjectString<FMessagePackage>(messagepackage, outstring);
	mtcp->Send(outstring);
	while (!isfilegoing)
	{
		FPlatformProcess::Sleep(0.03);
	}
	isfilegoing = false;
	FString strpersistent;
	do {
		FString file_str = str.Len() > CHUNCKSIZE ? str.Left(CHUNCKSIZE) : str;//string should be encode by unicode
		mtcp->Send(file_str);
		str = str.RightChop(CHUNCKSIZE);
		while (!isfilegoing)
		{
			FPlatformProcess::Sleep(0.03);
		}
		isfilegoing = false;
	} while (!str.IsEmpty());
	messagepackage.MT = MessageType::FILEEND;
	FJsonObjectConverter::UStructToJsonObjectString<FMessagePackage>(messagepackage, outstring);
	mtcp->Send(outstring);
	while (!isfilereceiveok)
	{
		FPlatformProcess::Sleep(0.03);
	}
	isfilereceiveok = false;
}
void UTcpCommunicatorv1::Sendfilethread()
{
	Sendfile(stringtosend);
	FString outstring;
	FMessagePackage messagepackage;
	messagepackage.MT = m_filetype;
	messagepackage.PayLoad = m_mapname;
	FJsonObjectConverter::UStructToJsonObjectString<FMessagePackage>(messagepackage, outstring);
	mtcp->Send(outstring);
}
void UTcpCommunicatorv1::SendMapActorInforfile(FString&mapname, FString &str)
{
	stringtosend = str;
	m_filetype = MessageType::SAVEMAPACTORINFOR;
	m_mapname = mapname;
	Async(EAsyncExecution::ThreadPool, [=]() {Sendfilethread(); }, nullptr);
	//Sendfile(str);
	//FString outstring;
	//FMessagePackage messagepackage;
	//messagepackage.MT = MessageType::SAVEMAPACTORINFOR;
	//messagepackage.PayLoad = mapname;
	//FJsonObjectConverter::UStructToJsonObjectString<FMessagePackage>(messagepackage, outstring);
	//mtcp->Send(outstring);
}

void UTcpCommunicatorv1::GetMapActorInforfile(FString & mapname)
{
	FString outstring;
	FMessagePackage messagepackage;
	messagepackage.MT = MessageType::GETMAPACTORINFOR;
	messagepackage.PayLoad = mapname;
	FJsonObjectConverter::UStructToJsonObjectString<FMessagePackage>(messagepackage, outstring);
	mtcp->Send(outstring);
}

void UTcpCommunicatorv1::OnTcpResponse(const TArray<uint8>& p, const FString & str)
{
	FMessagePackage mp; 
	GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Yellow, *str);
	int len = str.Len();
	FString filestr = "{\"MT\":2,\"PayLoad\":null}";
	FString filestrmobile = "{\n\t\"mT\": \"FILE";
	FString fileendstr = "{\"MT\":3,\"PayLoad\":null}";
	FString fileendstrmobile = "{\n\t\"mT\": \"FILEEND";
	if (isfile)
	{
		FString strsend;
		if (str.StartsWith(fileendstr) || str.StartsWith(fileendstrmobile))
		{
			int size = filestringpayload.Len();
			isfile = false;
			mp.MT = MessageType::CLIENT_FILERECEIVEOK;//receive ok           
			FString outstring;
			FJsonObjectConverter::UStructToJsonObjectString<FMessagePackage>(mp, outstring);
			mtcp->Send(outstring);
			UMyBlueprintFunctionLibrary::CLogtofile(TEXT("isfile = false;"));
			return;
		}
		filestringpayload += str;
		int size1 = filestringpayload.Len();
		mp.MT = MessageType::CLIENT_FILE;//go on             
		FString outstring;
		FJsonObjectConverter::UStructToJsonObjectString<FMessagePackage>(mp, outstring);
		mtcp->Send(outstring);
		UMyBlueprintFunctionLibrary::CLogtofile(TEXT("mp.MT = MessageType::CLIENT_FILE;//go on"));
		return;
	}
	if (str.StartsWith(filestr) || str.StartsWith(filestrmobile))
	{
		UMyBlueprintFunctionLibrary::CLogtofile(TEXT("isfile = true"));
		isfile = true;
		return;
	}
	FJsonObjectConverter::JsonObjectStringToUStruct<FMessagePackage>(str, &mp, 0, 0);
	if (mp.MT == MessageType::SINGUP)
	{
		FString pld = mp.PayLoad;
		if (pld.Equals("succeed"))
		{
			GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Yellow, TEXT("signup succeed"));

		}
		else
		{
			GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Yellow, TEXT("signup failed"));

		}
	}
	else if (mp.MT == MessageType::LOGIN)
	{
		FString pld = mp.PayLoad;
		if (pld.Equals("succeed"))
		{
			GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Yellow, TEXT("login succeed"));
			OnTcpResponsestate = 1;
		}
		else
		{
			GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Yellow, TEXT("login failed"));

		}

	}
	else if (mp.MT == MessageType::FILE)//server say keep sending
	{
		isfilegoing = true;
	}
	else if (mp.MT == MessageType::FILERECEIVEOK)//server side file receive ok so go on 
	{
		isfilereceiveok = true;
	}
	else if (mp.MT == MessageType::MAPACTORINFORSENDOK)//server send this message mean this file is a mapactorinfor
	{
		OnTcpResponsestate = 2;
	}
}
void UTcpCommunicatorv1::thwork()
{
	GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Yellow, TEXT("thwork"));
	if (OnTcpResponsestate == 1)
	{
		if (OnLogInSucceed.IsBound())
		{
			OnLogInSucceed.Broadcast();
			OnTcpResponsestate = 0;
		}
	}
	else if (OnTcpResponsestate == 2)
	{
		if (OnFileReceiveSucceed.IsBound())
		{
			OnFileReceiveSucceed.Broadcast(filestringpayload, MessageType::MAPACTORINFORSENDOK);
			OnTcpResponsestate = 0;
		}
	}
}
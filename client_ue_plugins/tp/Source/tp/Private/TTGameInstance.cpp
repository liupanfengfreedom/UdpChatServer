// Fill out your copyright notice in the Description page of Project Settings.


#include "TTGameInstance.h"
#include "UTcpCommunicatorv2.h"

void UTTGameInstance::Openservermap(UObject*obj, FString pmapname, FString mapID, FString nvn)
{
	tcpcommunicationv2 = UUTcpCommunicatorv2::GetMatchClient();
	tcpcommunicationv2->OpenServermap(obj->GetWorld(), pmapname, mapID, nvn);
}
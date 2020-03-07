// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/GameInstance.h"
#include "TTGameInstance.generated.h"

/**
 * 
 */
UCLASS()
class TP_API UTTGameInstance : public UGameInstance
{
	GENERATED_BODY()
public:
		UFUNCTION(BlueprintCallable, Category = "UTTGameInstance")
		void Openservermap(UObject*obj, FString pmapname, FString mapID, FString nvn);
		class UUTcpCommunicatorv2* tcpcommunicationv2;
};

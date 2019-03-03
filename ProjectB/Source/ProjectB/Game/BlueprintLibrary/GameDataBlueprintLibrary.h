// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Game/Data/Define/GameDataStruct.h"
#include "GameDataBlueprintLibrary.generated.h"

/**
 * 
 */

class UFactoryEntity;
class UMenuEntity;

UCLASS()
class PROJECTB_API UGameDataBlueprintLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
	
public:
	UFUNCTION(BlueprintPure)
	static const TMap<int32, UMenuEntity*>& GetMenuEntityList();

	UFUNCTION(BlueprintPure)
	static const TMap<int32, UFactoryEntity*>& GetFactoryEntityList();
};

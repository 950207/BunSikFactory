// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Game/Data/Define/GameDataStruct.h"
#include "Game/DB/DBStruct.h"
#include "UObject/NoExportTypes.h"
#include "FactoryEntity.generated.h"

/**
 * 하나의 공장에 대한 객체정의.
 */

UCLASS(Blueprintable)
class PROJECTB_API UFactoryEntity : public UObject
{
	GENERATED_BODY()

public:
	UPROPERTY(BlueprintReadWrite)
	FFactory_Table FactoryTable;
};

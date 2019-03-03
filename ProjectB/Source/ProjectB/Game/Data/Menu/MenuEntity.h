// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Game/DB/DBStruct.h"
#include "UObject/NoExportTypes.h"
#include "MenuEntity.generated.h"

/**
 * 하나의 메뉴에 대한 객체정의
 */

UCLASS(Blueprintable)
class PROJECTB_API UMenuEntity : public UObject
{
	GENERATED_BODY()
	
public:
	UPROPERTY(BlueprintReadWrite)
	FMenu_Table MenuTable;
};

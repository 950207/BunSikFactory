// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/DataTable.h"
#include "DBStruct.h"
#include "DBHelper.generated.h"

/**
 * 
 */
UCLASS()
class PROJECTB_API UDBHelper : public UObject
{
	GENERATED_BODY()

	UDBHelper();

public:
	static const FLevel_Table* GetLevelData(int32 InLevel);

public:
	static TMap<int32, FLevel_Table*> LevelDataMap;
};

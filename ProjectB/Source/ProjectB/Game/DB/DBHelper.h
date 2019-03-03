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
	static TMap<int32, FLevel_Table*> LevelMap;
	static TMap<int32, FConfig_Table*> ConfigMap;
	static TMap<int32, FItem_Table*> ItemMap;
	static TMap<int32, FFactory_Table*> FactoryMap;
	static TMap<int32, FMenu_Table*> MenuMap;
};

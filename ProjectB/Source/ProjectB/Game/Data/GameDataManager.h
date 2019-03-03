// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Util/SingletonBase.h"
#include "Game/Data/Define/GameDataStruct.h"
#include "UObject/NoExportTypes.h"
#include "GameDataManager.generated.h"

#define GameDataManager UGameDataManager::Get()

/**
 * 
 */

struct FLevel_Table;

UCLASS()
class PROJECTB_API UGameDataManager : public UObject, public TGameTimeSingletonObject<UGameDataManager>
{
	GENERATED_BODY()

private:
	TMap<int32, FMenuData> MenuDataList;
	TMap<int32, FFactoryData> FactoryDataList;

public:
	virtual void EnterInGame() override;
	virtual void LeaveInGame() override;

public:
	/** 메뉴 데이터 얻어오기 */
	const TMap<int32, FMenuData>& GetMenuDataList();
	/** 공장 데이터 얻어오기 */
	const TMap<int32, FFactoryData>& GetFactoryDataList();
};

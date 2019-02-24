// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Game/Data/Define/GameDataStruct.h"
#include "UObject/NoExportTypes.h"
#include "GameDataManager.generated.h"

/**
 * 
 */
UCLASS()
class PROJECTB_API UGameDataManager : public UObject
{
	GENERATED_BODY()

private:
	UPROPERTY()
	TMap<int32, FMenuData> MenuDataList;

	UPROPERTY()
	TMap<int32, FFactoryData> FactoryDataList;

public:
	/** 초기화 */
	UFUNCTION(BlueprintCallable)
	void Initialize();

public:
	/** 메뉴 데이터 얻어오기 */
	const TMap<int32, FMenuData>& GetMenuDataList();
	/** 공장 데이터 얻어오기 */
	const TMap<int32, FFactoryData>& GetFactoryDataList();
};

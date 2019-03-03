// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Util/SingletonBase.h"
#include "Game/Data/Define/GameDataStruct.h"
#include "UObject/NoExportTypes.h"
#include "GameDataManager.generated.h"

#define GameDataManager UGameDataManager::Get()

/**
 *  메뉴, 팩토리 데이터를 관리한다.
 */

class UFactoryEntity;
class UMenuEntity;

UCLASS()
class PROJECTB_API UGameDataManager : public UObject, public TGameTimeSingletonObject<UGameDataManager>
{
	GENERATED_BODY()

private:
	UPROPERTY()
	TMap<int32, UMenuEntity*> MenuEntityList;
	UPROPERTY()
	TMap<int32, UFactoryEntity*> FactoryEntityList;

public:
	virtual void EnterInGame() override;
	virtual void LeaveInGame() override;

public:
	/** 메뉴 엔티티 얻어오기 */
	const TMap<int32, UMenuEntity*>& GetMenuEntityList();
	/** 공장 엔티티 얻어오기 */
	UFUNCTION(BlueprintPure)
	const TMap<int32, UFactoryEntity*>& GetFactoryEntityList();
};

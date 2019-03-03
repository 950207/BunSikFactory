// Fill out your copyright notice in the Description page of Project Settings.

#include "GameDataManager.h"
#include "Game/DB/DBHelper.h"

#include "Game/Data/Menu/MenuEntity.h"
#include "Game/Data/Factory/FactoryEntity.h"

void UGameDataManager::EnterInGame()
{
	for (const auto& MenuTable : UDBHelper::MenuMap)
	{
		UMenuEntity* MenuEntity = NewObject<UMenuEntity>();
		MenuEntity->TID = MenuTable.Value->TID;
		MenuEntityList.Add(MenuEntity->TID, MenuEntity);
	}

	for (const auto& FactoryTable : UDBHelper::FactoryMap)
	{
		UFactoryEntity* FactoryEntity = NewObject<UFactoryEntity>();
		FactoryEntity->TID = FactoryTable.Value->TID;
		FactoryEntityList.Add(FactoryEntity->TID, FactoryEntity);
	}
}

void UGameDataManager::LeaveInGame()
{
	MenuEntityList.Empty();
	FactoryEntityList.Empty();
}

const TMap<int32, UMenuEntity*>& UGameDataManager::GetMenuEntityList()
{
	return MenuEntityList;
}

const TMap<int32, UFactoryEntity*>& UGameDataManager::GetFactoryEntityList()
{
	return FactoryEntityList;
}

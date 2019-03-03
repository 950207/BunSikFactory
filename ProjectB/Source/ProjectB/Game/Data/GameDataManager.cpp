// Fill out your copyright notice in the Description page of Project Settings.

#include "GameDataManager.h"
#include "Game/DB/DBHelper.h"

void UGameDataManager::EnterInGame()
{
}

void UGameDataManager::LeaveInGame()
{
	FactoryDataList.Empty();
}

const TMap<int32, FMenuData>& UGameDataManager::GetMenuDataList()
{
	return MenuDataList;
}
const TMap<int32, FFactoryData>& UGameDataManager::GetFactoryDataList()
{
	return FactoryDataList;
}

// Fill out your copyright notice in the Description page of Project Settings.

#include "GameDataManager.h"

void UGameDataManager::Initialize()
{

}

const TMap<int32, FMenuData>& UGameDataManager::GetMenuDataList()
{
	return MenuDataList;
}
const TMap<int32, FFactoryData>& UGameDataManager::GetFactoryDataList()
{
	return FactoryDataList;
}

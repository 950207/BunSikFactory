// Fill out your copyright notice in the Description page of Project Settings.

#include "GameDataBlueprintLibrary.h"
#include "Game/Data/GameDataManager.h"
#include "Game/Data/Menu/MenuEntity.h"

const TMap<int32, UMenuEntity*>& UGameDataBlueprintLibrary::GetMenuEntityList()
{
	return GameDataManager->GetMenuEntityList();
}

const TMap<int32, UFactoryEntity*>& UGameDataBlueprintLibrary::GetFactoryEntityList()
{
	return GameDataManager->GetFactoryEntityList();
}

const TArray<UMenuEntity*> UGameDataBlueprintLibrary::GetMenuEntityListByMenuType(E_MenuType InMenuType)
{
	TArray<UMenuEntity*> MenuArr;
	auto EntityList = GameDataManager->GetMenuEntityList();
	for (const auto MenuEntity : EntityList)
	{
		if (MenuEntity.Value->MenuTable.MenuType == InMenuType)
		{
			MenuArr.Emplace(MenuEntity.Value);
		}
	}
	return MenuArr;
}

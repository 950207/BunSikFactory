// Fill out your copyright notice in the Description page of Project Settings.

#include "GameDataBlueprintLibrary.h"
#include "Game/Data/GameDataManager.h"

const TMap<int32, UMenuEntity*>& UGameDataBlueprintLibrary::GetMenuEntityList()
{
	return GameDataManager->GetMenuEntityList();
}

const TMap<int32, UFactoryEntity*>& UGameDataBlueprintLibrary::GetFactoryEntityList()
{
	return GameDataManager->GetFactoryEntityList();
}
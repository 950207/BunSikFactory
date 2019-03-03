// Fill out your copyright notice in the Description page of Project Settings.

#include "GameDataBlueprintLibrary.h"
#include "Game/Data/GameDataManager.h"

const TMap<int32, FMenuData>& UGameDataBlueprintLibrary::GetMenuDataList()
{
	return GameDataManager->GetMenuDataList();
}
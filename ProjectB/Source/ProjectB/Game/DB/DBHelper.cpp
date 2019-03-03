// Fill out your copyright notice in the Description page of Project Settings.

#include "DBHelper.h"
#include "ConstructorHelpers.h"

TMap<int32, FLevel_Table*> UDBHelper::LevelMap;
TMap<int32, FConfig_Table*> UDBHelper::ConfigMap;
TMap<int32, FItem_Table*> UDBHelper::ItemMap;
TMap<int32, FFactory_Table*> UDBHelper::FactoryMap;
TMap<int32, FMenu_Table*> UDBHelper::MenuMap;

UDBHelper::UDBHelper()
{
	LevelMap.Empty();
	static ConstructorHelpers::FObjectFinder<UDataTable> Level_Table(TEXT("/Game/DataTable/Level_Table.Level_Table"));
	if (Level_Table.Succeeded())
	{
		if (UDataTable* LevelData = Level_Table.Object)
		{
			TArray<FLevel_Table*> LevelArr;
			LevelData->GetAllRows<FLevel_Table>("", LevelArr);
			for (const auto RowData : LevelArr)
			{
				LevelMap.Emplace(RowData->TID, RowData);
			}
		}
	}

	ConfigMap.Empty();
	static ConstructorHelpers::FObjectFinder<UDataTable> Config_Table(TEXT("/Game/DataTable/Config_Table.Config_Table"));
	if (Config_Table.Succeeded())
	{
		if (UDataTable* ConfigData = Config_Table.Object)
		{
			TArray<FConfig_Table*> ConfigArr;
			ConfigData->GetAllRows<FConfig_Table>("", ConfigArr);
			for (const auto RowData : ConfigArr)
			{
				ConfigMap.Emplace(RowData->TID, RowData);
			}
		}
	}

	ItemMap.Empty();
	static ConstructorHelpers::FObjectFinder<UDataTable> Item_Table(TEXT("/Game/DataTable/Item_Table.Item_Table"));
	if (Item_Table.Succeeded())
	{
		if (UDataTable* ItemData = Item_Table.Object)
		{
			TArray<FItem_Table*> ItemArr;
			ItemData->GetAllRows<FItem_Table>("", ItemArr);
			for (const auto RowData : ItemArr)
			{
				ItemMap.Emplace(RowData->TID, RowData);
			}
		}
	}

	FactoryMap.Empty();
	static ConstructorHelpers::FObjectFinder<UDataTable> Factory_Table(TEXT("/Game/DataTable/Factory_Table.Factory_Table"));
	if (Factory_Table.Succeeded())
	{
		if (UDataTable* FactoryData = Factory_Table.Object)
		{
			TArray<FFactory_Table*> FactoryArr;
			FactoryData->GetAllRows<FFactory_Table>("", FactoryArr);
			for (const auto RowData : FactoryArr)
			{
				FactoryMap.Emplace(RowData->TID, RowData);
			}
		}
	}

	MenuMap.Empty();
	static ConstructorHelpers::FObjectFinder<UDataTable> Menu_Table(TEXT("/Game/DataTable/Menu_Table.Menu_Table"));
	if (Menu_Table.Succeeded())
	{
		if (UDataTable* MenuData = Menu_Table.Object)
		{
			TArray<FMenu_Table*> MenuArr;
			MenuData->GetAllRows<FMenu_Table>("", MenuArr);
			for (const auto RowData : MenuArr)
			{
				MenuMap.Emplace(RowData->TID, RowData);
			}
		}
	}
}
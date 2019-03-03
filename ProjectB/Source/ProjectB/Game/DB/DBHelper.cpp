// Fill out your copyright notice in the Description page of Project Settings.

#include "DBHelper.h"
#include "ConstructorHelpers.h"

TMap<int32, FLevel_Table*> UDBHelper::LevelDataMap;

UDBHelper::UDBHelper()
{
	LevelDataMap.Empty();

	static ConstructorHelpers::FObjectFinder<UDataTable> Level_DataTable(TEXT("/Game/DataTable/Level_Table.Level_Table"));
	if (Level_DataTable.Succeeded())
	{
		if (UDataTable* LevelData = Level_DataTable.Object)
		{
			TArray<FLevel_Table*> LevelArr;
			LevelData->GetAllRows<FLevel_Table>("", LevelArr);
			for (const auto RowData : LevelArr)
			{
				LevelDataMap.Emplace(RowData->Level, RowData);
			}
		}
	}
}

const FLevel_Table * UDBHelper::GetLevelData(int32 InLevel)
{
	if (auto FindData = LevelDataMap.Find(InLevel))
	{
		return *FindData;
	}

	return nullptr;
}

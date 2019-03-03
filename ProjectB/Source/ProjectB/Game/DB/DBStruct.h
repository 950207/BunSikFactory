// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "DBEnums.h"
#include "DBStruct.generated.h"

/**
 * 
 */
USTRUCT(BlueprintType)
struct FLevel_Table : public FTableRowBase
{
	GENERATED_USTRUCT_BODY()

public:

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Data|Level")
	int32 TID;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Data|Level")
	int32 Level;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Data|Level")
	int32 OpenPrice;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Data|Level")
	int32 Duration;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Data|Level")
	int32 EarnMoney;
};

USTRUCT(BlueprintType)
struct FMenu_Table : public FTableRowBase
{
	GENERATED_USTRUCT_BODY()

public:

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Data|Menu")
	int32 TID;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Data|Menu")
	E_MenuType MenuType;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Data|Menu")
	int32 FactoryLevel;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Data|Menu")
	FName IconName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Data|Menu")
	FName Name;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Data|Menu")
	FName Description;
};


USTRUCT(BlueprintType)
struct FConfig_Table : public FTableRowBase
{
	GENERATED_USTRUCT_BODY()

public:

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Data|Config")
	int32 TID;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Data|Config")
	FName Key;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Data|Config")
	int32 Value;
};

USTRUCT(BlueprintType)
struct FFactory_Table : public FTableRowBase
{
	GENERATED_USTRUCT_BODY()

public:

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Data|Factory")
	int32 TID;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Data|Factory")
	E_FactoryType FactoryType;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Data|Factory")
	FName Name;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Data|Factory")
	float Weight;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Data|Factory")
	FName Description;
};


USTRUCT(BlueprintType)
struct FItem_Table : public FTableRowBase
{
	GENERATED_USTRUCT_BODY()

public:

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Data|Item")
	int32 TID;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Data|Item")

	FName Name;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Data|Item")
	FName Description;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Data|Item")
	E_EffectType Effect;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Data|Item")
	int32 Value;
};


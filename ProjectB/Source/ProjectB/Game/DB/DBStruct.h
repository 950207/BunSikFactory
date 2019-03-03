// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataTable.h"
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


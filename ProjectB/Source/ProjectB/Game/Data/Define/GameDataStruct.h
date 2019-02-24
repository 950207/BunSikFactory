#pragma once

#include "CoreMinimal.h"
#include "GameDataStruct.generated.h"

USTRUCT(BlueprintType)
struct FMenuData
{
	GENERATED_BODY()

	UPROPERTY(BlueprintReadWrite, Category = "Menu")
	int32 TID;
	UPROPERTY(BlueprintReadWrite, Category = "Menu")
	FString Name;
};

USTRUCT(BlueprintType)
struct FFactoryData
{
	GENERATED_BODY()

	UPROPERTY(BlueprintReadWrite, Category = "Factory")
	int32 TID;
	UPROPERTY(BlueprintReadWrite, Category = "Factory")
	FString Name;
};
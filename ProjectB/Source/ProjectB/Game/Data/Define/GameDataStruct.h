#pragma once

#include "CoreMinimal.h"
#include "GameDataStruct.generated.h"

UENUM(BlueprintType)
enum class E_FactoryState : uint8 
{
	None = 0,
	Upgrading = 1
};

USTRUCT(BlueprintType)
struct FMenuInfo
{
	GENERATED_BODY()

public:
	UPROPERTY(BlueprintReadWrite, Category = "Menu")
	int32 TID;
	UPROPERTY(BlueprintReadWrite, Category = "Menu")
	FString Name;
};

USTRUCT(BlueprintType)
struct FFactoryInfo
{
	GENERATED_BODY()

public:
	UPROPERTY(BlueprintReadWrite, Category = "Factory")
	int32 TID;
	UPROPERTY(BlueprintReadWrite, Category = "Factory")
	FString Name;
	UPROPERTY(BlueprintReadWrite, Category = "Factory")
	E_FactoryState State;
};
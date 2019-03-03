// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "DBEnums.generated.h"

/**
 * 
 */
UENUM(BlueprintType)
enum class E_MenuType : uint8
{
	TTEOKBOKKI = 0,
	FISHCAKE = 1,
	SUNDAE = 2,
	KIMBAB = 3,
	AUTO = 4,
};

UENUM(BlueprintType)
enum class E_FactoryType : uint8
{
	MENU = 0,
	AUTO = 1,
};

UENUM(BlueprintType)
enum class E_EffectType : uint8
{
	REDUCE_TIME = 0,
	INCREASE_EARN = 1,
};

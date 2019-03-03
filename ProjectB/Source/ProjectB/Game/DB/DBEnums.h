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
	Tteokbokki = 0,
	Fishcake = 1,
	Sundae = 2,
	Kimbab = 3,
	Auto = 4,
};

UENUM(BlueprintType)
enum class E_FactoryType : uint8
{
	Menu = 0,
	Auto = 1,
};

UENUM(BlueprintType)
enum class E_EffectType : uint8
{
	Reduce_Time = 0,
	Increase_Earn =1,
};

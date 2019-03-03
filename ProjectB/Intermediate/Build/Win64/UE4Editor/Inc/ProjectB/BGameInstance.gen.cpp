// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProjectB/Game/BGameInstance.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBGameInstance() {}
// Cross Module References
	PROJECTB_API UClass* Z_Construct_UClass_UBGameInstance_NoRegister();
	PROJECTB_API UClass* Z_Construct_UClass_UBGameInstance();
	ENGINE_API UClass* Z_Construct_UClass_UGameInstance();
	UPackage* Z_Construct_UPackage__Script_ProjectB();
// End Cross Module References
	void UBGameInstance::StaticRegisterNativesUBGameInstance()
	{
	}
	UClass* Z_Construct_UClass_UBGameInstance_NoRegister()
	{
		return UBGameInstance::StaticClass();
	}
	struct Z_Construct_UClass_UBGameInstance_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBGameInstance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_ProjectB,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBGameInstance_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Game/BGameInstance.h" },
		{ "ModuleRelativePath", "Game/BGameInstance.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBGameInstance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBGameInstance>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBGameInstance_Statics::ClassParams = {
		&UBGameInstance::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x001000A8u,
		nullptr, 0,
		nullptr, 0,
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UBGameInstance_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UBGameInstance_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBGameInstance()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBGameInstance_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBGameInstance, 708604160);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBGameInstance(Z_Construct_UClass_UBGameInstance, &UBGameInstance::StaticClass, TEXT("/Script/ProjectB"), TEXT("UBGameInstance"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBGameInstance);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

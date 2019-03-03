// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PROJECTB_BGameInstance_generated_h
#error "BGameInstance.generated.h already included, missing '#pragma once' in BGameInstance.h"
#endif
#define PROJECTB_BGameInstance_generated_h

#define ProjectB_Source_ProjectB_Game_BGameInstance_h_15_RPC_WRAPPERS
#define ProjectB_Source_ProjectB_Game_BGameInstance_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define ProjectB_Source_ProjectB_Game_BGameInstance_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBGameInstance(); \
	friend struct Z_Construct_UClass_UBGameInstance_Statics; \
public: \
	DECLARE_CLASS(UBGameInstance, UGameInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/ProjectB"), NO_API) \
	DECLARE_SERIALIZER(UBGameInstance)


#define ProjectB_Source_ProjectB_Game_BGameInstance_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUBGameInstance(); \
	friend struct Z_Construct_UClass_UBGameInstance_Statics; \
public: \
	DECLARE_CLASS(UBGameInstance, UGameInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/ProjectB"), NO_API) \
	DECLARE_SERIALIZER(UBGameInstance)


#define ProjectB_Source_ProjectB_Game_BGameInstance_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBGameInstance(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBGameInstance) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBGameInstance); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBGameInstance); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBGameInstance(UBGameInstance&&); \
	NO_API UBGameInstance(const UBGameInstance&); \
public:


#define ProjectB_Source_ProjectB_Game_BGameInstance_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBGameInstance(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBGameInstance(UBGameInstance&&); \
	NO_API UBGameInstance(const UBGameInstance&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBGameInstance); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBGameInstance); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBGameInstance)


#define ProjectB_Source_ProjectB_Game_BGameInstance_h_15_PRIVATE_PROPERTY_OFFSET
#define ProjectB_Source_ProjectB_Game_BGameInstance_h_12_PROLOG
#define ProjectB_Source_ProjectB_Game_BGameInstance_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ProjectB_Source_ProjectB_Game_BGameInstance_h_15_PRIVATE_PROPERTY_OFFSET \
	ProjectB_Source_ProjectB_Game_BGameInstance_h_15_RPC_WRAPPERS \
	ProjectB_Source_ProjectB_Game_BGameInstance_h_15_INCLASS \
	ProjectB_Source_ProjectB_Game_BGameInstance_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ProjectB_Source_ProjectB_Game_BGameInstance_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ProjectB_Source_ProjectB_Game_BGameInstance_h_15_PRIVATE_PROPERTY_OFFSET \
	ProjectB_Source_ProjectB_Game_BGameInstance_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	ProjectB_Source_ProjectB_Game_BGameInstance_h_15_INCLASS_NO_PURE_DECLS \
	ProjectB_Source_ProjectB_Game_BGameInstance_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ProjectB_Source_ProjectB_Game_BGameInstance_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

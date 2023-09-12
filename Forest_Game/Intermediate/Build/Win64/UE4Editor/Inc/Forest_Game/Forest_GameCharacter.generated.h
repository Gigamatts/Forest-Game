// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef FOREST_GAME_Forest_GameCharacter_generated_h
#error "Forest_GameCharacter.generated.h already included, missing '#pragma once' in Forest_GameCharacter.h"
#endif
#define FOREST_GAME_Forest_GameCharacter_generated_h

#define Forest_Game_Source_Forest_Game_Forest_GameCharacter_h_12_SPARSE_DATA
#define Forest_Game_Source_Forest_Game_Forest_GameCharacter_h_12_RPC_WRAPPERS
#define Forest_Game_Source_Forest_Game_Forest_GameCharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define Forest_Game_Source_Forest_Game_Forest_GameCharacter_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAForest_GameCharacter(); \
	friend struct Z_Construct_UClass_AForest_GameCharacter_Statics; \
public: \
	DECLARE_CLASS(AForest_GameCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Forest_Game"), NO_API) \
	DECLARE_SERIALIZER(AForest_GameCharacter)


#define Forest_Game_Source_Forest_Game_Forest_GameCharacter_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAForest_GameCharacter(); \
	friend struct Z_Construct_UClass_AForest_GameCharacter_Statics; \
public: \
	DECLARE_CLASS(AForest_GameCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Forest_Game"), NO_API) \
	DECLARE_SERIALIZER(AForest_GameCharacter)


#define Forest_Game_Source_Forest_Game_Forest_GameCharacter_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AForest_GameCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AForest_GameCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AForest_GameCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AForest_GameCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AForest_GameCharacter(AForest_GameCharacter&&); \
	NO_API AForest_GameCharacter(const AForest_GameCharacter&); \
public:


#define Forest_Game_Source_Forest_Game_Forest_GameCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AForest_GameCharacter(AForest_GameCharacter&&); \
	NO_API AForest_GameCharacter(const AForest_GameCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AForest_GameCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AForest_GameCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AForest_GameCharacter)


#define Forest_Game_Source_Forest_Game_Forest_GameCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CameraBoom() { return STRUCT_OFFSET(AForest_GameCharacter, CameraBoom); } \
	FORCEINLINE static uint32 __PPO__FollowCamera() { return STRUCT_OFFSET(AForest_GameCharacter, FollowCamera); }


#define Forest_Game_Source_Forest_Game_Forest_GameCharacter_h_9_PROLOG
#define Forest_Game_Source_Forest_Game_Forest_GameCharacter_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Forest_Game_Source_Forest_Game_Forest_GameCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	Forest_Game_Source_Forest_Game_Forest_GameCharacter_h_12_SPARSE_DATA \
	Forest_Game_Source_Forest_Game_Forest_GameCharacter_h_12_RPC_WRAPPERS \
	Forest_Game_Source_Forest_Game_Forest_GameCharacter_h_12_INCLASS \
	Forest_Game_Source_Forest_Game_Forest_GameCharacter_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Forest_Game_Source_Forest_Game_Forest_GameCharacter_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Forest_Game_Source_Forest_Game_Forest_GameCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	Forest_Game_Source_Forest_Game_Forest_GameCharacter_h_12_SPARSE_DATA \
	Forest_Game_Source_Forest_Game_Forest_GameCharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	Forest_Game_Source_Forest_Game_Forest_GameCharacter_h_12_INCLASS_NO_PURE_DECLS \
	Forest_Game_Source_Forest_Game_Forest_GameCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FOREST_GAME_API UClass* StaticClass<class AForest_GameCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Forest_Game_Source_Forest_Game_Forest_GameCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

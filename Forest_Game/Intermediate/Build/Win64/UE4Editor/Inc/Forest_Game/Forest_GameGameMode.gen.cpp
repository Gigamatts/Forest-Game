// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Forest_Game/Forest_GameGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeForest_GameGameMode() {}
// Cross Module References
	FOREST_GAME_API UClass* Z_Construct_UClass_AForest_GameGameMode_NoRegister();
	FOREST_GAME_API UClass* Z_Construct_UClass_AForest_GameGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_Forest_Game();
// End Cross Module References
	void AForest_GameGameMode::StaticRegisterNativesAForest_GameGameMode()
	{
	}
	UClass* Z_Construct_UClass_AForest_GameGameMode_NoRegister()
	{
		return AForest_GameGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AForest_GameGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AForest_GameGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Forest_Game,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AForest_GameGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "Forest_GameGameMode.h" },
		{ "ModuleRelativePath", "Forest_GameGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AForest_GameGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AForest_GameGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AForest_GameGameMode_Statics::ClassParams = {
		&AForest_GameGameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008802ACu,
		METADATA_PARAMS(Z_Construct_UClass_AForest_GameGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AForest_GameGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AForest_GameGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AForest_GameGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AForest_GameGameMode, 1655220090);
	template<> FOREST_GAME_API UClass* StaticClass<AForest_GameGameMode>()
	{
		return AForest_GameGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AForest_GameGameMode(Z_Construct_UClass_AForest_GameGameMode, &AForest_GameGameMode::StaticClass, TEXT("/Script/Forest_Game"), TEXT("AForest_GameGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AForest_GameGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

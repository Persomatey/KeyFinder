// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProjectPraeter/ProjectPraeterGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeProjectPraeterGameMode() {}
// Cross Module References
	PROJECTPRAETER_API UClass* Z_Construct_UClass_AProjectPraeterGameMode_NoRegister();
	PROJECTPRAETER_API UClass* Z_Construct_UClass_AProjectPraeterGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_ProjectPraeter();
// End Cross Module References
	void AProjectPraeterGameMode::StaticRegisterNativesAProjectPraeterGameMode()
	{
	}
	UClass* Z_Construct_UClass_AProjectPraeterGameMode_NoRegister()
	{
		return AProjectPraeterGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AProjectPraeterGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AProjectPraeterGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_ProjectPraeter,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProjectPraeterGameMode_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * The GameMode defines the game being played. It governs the game rules, scoring, what actors\n * are allowed to exist in this game type, and who may enter the game.\n *\n * This game mode just sets the default pawn to be the MyCharacter asset, which is a subclass of ProjectPraeterCharacter\n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "ProjectPraeterGameMode.h" },
		{ "ModuleRelativePath", "ProjectPraeterGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
		{ "ToolTip", "The GameMode defines the game being played. It governs the game rules, scoring, what actors\nare allowed to exist in this game type, and who may enter the game.\n\nThis game mode just sets the default pawn to be the MyCharacter asset, which is a subclass of ProjectPraeterCharacter" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AProjectPraeterGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AProjectPraeterGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AProjectPraeterGameMode_Statics::ClassParams = {
		&AProjectPraeterGameMode::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AProjectPraeterGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AProjectPraeterGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AProjectPraeterGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AProjectPraeterGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AProjectPraeterGameMode, 1361041875);
	template<> PROJECTPRAETER_API UClass* StaticClass<AProjectPraeterGameMode>()
	{
		return AProjectPraeterGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AProjectPraeterGameMode(Z_Construct_UClass_AProjectPraeterGameMode, &AProjectPraeterGameMode::StaticClass, TEXT("/Script/ProjectPraeter"), TEXT("AProjectPraeterGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AProjectPraeterGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

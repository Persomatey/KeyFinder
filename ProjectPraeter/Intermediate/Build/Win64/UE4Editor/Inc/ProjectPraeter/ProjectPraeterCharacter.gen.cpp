// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProjectPraeter/ProjectPraeterCharacter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeProjectPraeterCharacter() {}
// Cross Module References
	PROJECTPRAETER_API UClass* Z_Construct_UClass_AProjectPraeterCharacter_NoRegister();
	PROJECTPRAETER_API UClass* Z_Construct_UClass_AProjectPraeterCharacter();
	PAPER2D_API UClass* Z_Construct_UClass_APaperCharacter();
	UPackage* Z_Construct_UPackage__Script_ProjectPraeter();
	ENGINE_API UClass* Z_Construct_UClass_USoundBase_NoRegister();
	PAPER2D_API UClass* Z_Construct_UClass_UPaperFlipbook_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AProjectPraeterCharacter::execTakeDamage)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->TakeDamage();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AProjectPraeterCharacter::execHealPlayer)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_amount);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HealPlayer(Z_Param_amount);
		P_NATIVE_END;
	}
	static FName NAME_AProjectPraeterCharacter_PlayerDeath = FName(TEXT("PlayerDeath"));
	void AProjectPraeterCharacter::PlayerDeath()
	{
		ProcessEvent(FindFunctionChecked(NAME_AProjectPraeterCharacter_PlayerDeath),NULL);
	}
	void AProjectPraeterCharacter::StaticRegisterNativesAProjectPraeterCharacter()
	{
		UClass* Class = AProjectPraeterCharacter::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "HealPlayer", &AProjectPraeterCharacter::execHealPlayer },
			{ "TakeDamage", &AProjectPraeterCharacter::execTakeDamage },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AProjectPraeterCharacter_HealPlayer_Statics
	{
		struct ProjectPraeterCharacter_eventHealPlayer_Parms
		{
			int32 amount;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_amount;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_AProjectPraeterCharacter_HealPlayer_Statics::NewProp_amount = { "amount", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ProjectPraeterCharacter_eventHealPlayer_Parms, amount), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AProjectPraeterCharacter_HealPlayer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AProjectPraeterCharacter_HealPlayer_Statics::NewProp_amount,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AProjectPraeterCharacter_HealPlayer_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "ProjectPraeterCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AProjectPraeterCharacter_HealPlayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AProjectPraeterCharacter, nullptr, "HealPlayer", nullptr, nullptr, sizeof(ProjectPraeterCharacter_eventHealPlayer_Parms), Z_Construct_UFunction_AProjectPraeterCharacter_HealPlayer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AProjectPraeterCharacter_HealPlayer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AProjectPraeterCharacter_HealPlayer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AProjectPraeterCharacter_HealPlayer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AProjectPraeterCharacter_HealPlayer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AProjectPraeterCharacter_HealPlayer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AProjectPraeterCharacter_PlayerDeath_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AProjectPraeterCharacter_PlayerDeath_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "ProjectPraeterCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AProjectPraeterCharacter_PlayerDeath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AProjectPraeterCharacter, nullptr, "PlayerDeath", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AProjectPraeterCharacter_PlayerDeath_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AProjectPraeterCharacter_PlayerDeath_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AProjectPraeterCharacter_PlayerDeath()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AProjectPraeterCharacter_PlayerDeath_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AProjectPraeterCharacter_TakeDamage_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AProjectPraeterCharacter_TakeDamage_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "ProjectPraeterCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AProjectPraeterCharacter_TakeDamage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AProjectPraeterCharacter, nullptr, "TakeDamage", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AProjectPraeterCharacter_TakeDamage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AProjectPraeterCharacter_TakeDamage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AProjectPraeterCharacter_TakeDamage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AProjectPraeterCharacter_TakeDamage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AProjectPraeterCharacter_NoRegister()
	{
		return AProjectPraeterCharacter::StaticClass();
	}
	struct Z_Construct_UClass_AProjectPraeterCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_playerIsAttacking_MetaData[];
#endif
		static void NewProp_playerIsAttacking_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_playerIsAttacking;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_isDead_MetaData[];
#endif
		static void NewProp_isDead_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isDead;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_takingDamage_MetaData[];
#endif
		static void NewProp_takingDamage_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_takingDamage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_health_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_health;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_isJumping_MetaData[];
#endif
		static void NewProp_isJumping_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isJumping;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_landSFX_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_landSFX;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_jumpSFX_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_jumpSFX;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_takeDamageSFX_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_takeDamageSFX;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_attackSFX_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_attackSFX;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DeathAnimation_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DeathAnimation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HurtAnimation_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HurtAnimation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttackAnimation_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AttackAnimation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FallingAnimation_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FallingAnimation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_JumpingAnimation_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_JumpingAnimation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IdleAnimation_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_IdleAnimation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RunningAnimation_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RunningAnimation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CameraBoom_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CameraBoom;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SideViewCameraComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SideViewCameraComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AProjectPraeterCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APaperCharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_ProjectPraeter,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AProjectPraeterCharacter_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AProjectPraeterCharacter_HealPlayer, "HealPlayer" }, // 387599842
		{ &Z_Construct_UFunction_AProjectPraeterCharacter_PlayerDeath, "PlayerDeath" }, // 2216743130
		{ &Z_Construct_UFunction_AProjectPraeterCharacter_TakeDamage, "TakeDamage" }, // 3845374448
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProjectPraeterCharacter_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * This class is the default character for ProjectPraeter, and it is responsible for all\n * physical interaction between the player and the world.\n *\n * The capsule component (inherited from ACharacter) handles collision with the world\n * The CharacterMovementComponent (inherited from ACharacter) handles movement of the collision capsule\n * The Sprite component (inherited from APaperCharacter) handles the visuals\n */" },
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "ProjectPraeterCharacter.h" },
		{ "ModuleRelativePath", "ProjectPraeterCharacter.h" },
		{ "ToolTip", "This class is the default character for ProjectPraeter, and it is responsible for all\nphysical interaction between the player and the world.\n\nThe capsule component (inherited from ACharacter) handles collision with the world\nThe CharacterMovementComponent (inherited from ACharacter) handles movement of the collision capsule\nThe Sprite component (inherited from APaperCharacter) handles the visuals" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProjectPraeterCharacter_Statics::NewProp_playerIsAttacking_MetaData[] = {
		{ "Category", "ProjectPraeterCharacter" },
		{ "ModuleRelativePath", "ProjectPraeterCharacter.h" },
	};
#endif
	void Z_Construct_UClass_AProjectPraeterCharacter_Statics::NewProp_playerIsAttacking_SetBit(void* Obj)
	{
		((AProjectPraeterCharacter*)Obj)->playerIsAttacking = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AProjectPraeterCharacter_Statics::NewProp_playerIsAttacking = { "playerIsAttacking", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AProjectPraeterCharacter), &Z_Construct_UClass_AProjectPraeterCharacter_Statics::NewProp_playerIsAttacking_SetBit, METADATA_PARAMS(Z_Construct_UClass_AProjectPraeterCharacter_Statics::NewProp_playerIsAttacking_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AProjectPraeterCharacter_Statics::NewProp_playerIsAttacking_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProjectPraeterCharacter_Statics::NewProp_isDead_MetaData[] = {
		{ "Category", "ProjectPraeterCharacter" },
		{ "ModuleRelativePath", "ProjectPraeterCharacter.h" },
	};
#endif
	void Z_Construct_UClass_AProjectPraeterCharacter_Statics::NewProp_isDead_SetBit(void* Obj)
	{
		((AProjectPraeterCharacter*)Obj)->isDead = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AProjectPraeterCharacter_Statics::NewProp_isDead = { "isDead", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AProjectPraeterCharacter), &Z_Construct_UClass_AProjectPraeterCharacter_Statics::NewProp_isDead_SetBit, METADATA_PARAMS(Z_Construct_UClass_AProjectPraeterCharacter_Statics::NewProp_isDead_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AProjectPraeterCharacter_Statics::NewProp_isDead_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProjectPraeterCharacter_Statics::NewProp_takingDamage_MetaData[] = {
		{ "Category", "ProjectPraeterCharacter" },
		{ "ModuleRelativePath", "ProjectPraeterCharacter.h" },
	};
#endif
	void Z_Construct_UClass_AProjectPraeterCharacter_Statics::NewProp_takingDamage_SetBit(void* Obj)
	{
		((AProjectPraeterCharacter*)Obj)->takingDamage = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AProjectPraeterCharacter_Statics::NewProp_takingDamage = { "takingDamage", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AProjectPraeterCharacter), &Z_Construct_UClass_AProjectPraeterCharacter_Statics::NewProp_takingDamage_SetBit, METADATA_PARAMS(Z_Construct_UClass_AProjectPraeterCharacter_Statics::NewProp_takingDamage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AProjectPraeterCharacter_Statics::NewProp_takingDamage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProjectPraeterCharacter_Statics::NewProp_health_MetaData[] = {
		{ "Category", "ProjectPraeterCharacter" },
		{ "ModuleRelativePath", "ProjectPraeterCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AProjectPraeterCharacter_Statics::NewProp_health = { "health", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AProjectPraeterCharacter, health), METADATA_PARAMS(Z_Construct_UClass_AProjectPraeterCharacter_Statics::NewProp_health_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AProjectPraeterCharacter_Statics::NewProp_health_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProjectPraeterCharacter_Statics::NewProp_isJumping_MetaData[] = {
		{ "Category", "Animations" },
		{ "ModuleRelativePath", "ProjectPraeterCharacter.h" },
	};
#endif
	void Z_Construct_UClass_AProjectPraeterCharacter_Statics::NewProp_isJumping_SetBit(void* Obj)
	{
		((AProjectPraeterCharacter*)Obj)->isJumping = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AProjectPraeterCharacter_Statics::NewProp_isJumping = { "isJumping", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AProjectPraeterCharacter), &Z_Construct_UClass_AProjectPraeterCharacter_Statics::NewProp_isJumping_SetBit, METADATA_PARAMS(Z_Construct_UClass_AProjectPraeterCharacter_Statics::NewProp_isJumping_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AProjectPraeterCharacter_Statics::NewProp_isJumping_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProjectPraeterCharacter_Statics::NewProp_landSFX_MetaData[] = {
		{ "Category", "Gameplay" },
		{ "ModuleRelativePath", "ProjectPraeterCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AProjectPraeterCharacter_Statics::NewProp_landSFX = { "landSFX", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AProjectPraeterCharacter, landSFX), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AProjectPraeterCharacter_Statics::NewProp_landSFX_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AProjectPraeterCharacter_Statics::NewProp_landSFX_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProjectPraeterCharacter_Statics::NewProp_jumpSFX_MetaData[] = {
		{ "Category", "Gameplay" },
		{ "ModuleRelativePath", "ProjectPraeterCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AProjectPraeterCharacter_Statics::NewProp_jumpSFX = { "jumpSFX", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AProjectPraeterCharacter, jumpSFX), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AProjectPraeterCharacter_Statics::NewProp_jumpSFX_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AProjectPraeterCharacter_Statics::NewProp_jumpSFX_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProjectPraeterCharacter_Statics::NewProp_takeDamageSFX_MetaData[] = {
		{ "Category", "Gameplay" },
		{ "ModuleRelativePath", "ProjectPraeterCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AProjectPraeterCharacter_Statics::NewProp_takeDamageSFX = { "takeDamageSFX", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AProjectPraeterCharacter, takeDamageSFX), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AProjectPraeterCharacter_Statics::NewProp_takeDamageSFX_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AProjectPraeterCharacter_Statics::NewProp_takeDamageSFX_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProjectPraeterCharacter_Statics::NewProp_attackSFX_MetaData[] = {
		{ "Category", "Gameplay" },
		{ "Comment", "// Sound Effects \n" },
		{ "ModuleRelativePath", "ProjectPraeterCharacter.h" },
		{ "ToolTip", "Sound Effects" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AProjectPraeterCharacter_Statics::NewProp_attackSFX = { "attackSFX", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AProjectPraeterCharacter, attackSFX), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AProjectPraeterCharacter_Statics::NewProp_attackSFX_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AProjectPraeterCharacter_Statics::NewProp_attackSFX_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProjectPraeterCharacter_Statics::NewProp_DeathAnimation_MetaData[] = {
		{ "Category", "Animations" },
		{ "ModuleRelativePath", "ProjectPraeterCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AProjectPraeterCharacter_Statics::NewProp_DeathAnimation = { "DeathAnimation", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AProjectPraeterCharacter, DeathAnimation), Z_Construct_UClass_UPaperFlipbook_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AProjectPraeterCharacter_Statics::NewProp_DeathAnimation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AProjectPraeterCharacter_Statics::NewProp_DeathAnimation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProjectPraeterCharacter_Statics::NewProp_HurtAnimation_MetaData[] = {
		{ "Category", "Animations" },
		{ "ModuleRelativePath", "ProjectPraeterCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AProjectPraeterCharacter_Statics::NewProp_HurtAnimation = { "HurtAnimation", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AProjectPraeterCharacter, HurtAnimation), Z_Construct_UClass_UPaperFlipbook_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AProjectPraeterCharacter_Statics::NewProp_HurtAnimation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AProjectPraeterCharacter_Statics::NewProp_HurtAnimation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProjectPraeterCharacter_Statics::NewProp_AttackAnimation_MetaData[] = {
		{ "Category", "Animations" },
		{ "ModuleRelativePath", "ProjectPraeterCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AProjectPraeterCharacter_Statics::NewProp_AttackAnimation = { "AttackAnimation", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AProjectPraeterCharacter, AttackAnimation), Z_Construct_UClass_UPaperFlipbook_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AProjectPraeterCharacter_Statics::NewProp_AttackAnimation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AProjectPraeterCharacter_Statics::NewProp_AttackAnimation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProjectPraeterCharacter_Statics::NewProp_FallingAnimation_MetaData[] = {
		{ "Category", "Animations" },
		{ "ModuleRelativePath", "ProjectPraeterCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AProjectPraeterCharacter_Statics::NewProp_FallingAnimation = { "FallingAnimation", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AProjectPraeterCharacter, FallingAnimation), Z_Construct_UClass_UPaperFlipbook_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AProjectPraeterCharacter_Statics::NewProp_FallingAnimation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AProjectPraeterCharacter_Statics::NewProp_FallingAnimation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProjectPraeterCharacter_Statics::NewProp_JumpingAnimation_MetaData[] = {
		{ "Category", "Animations" },
		{ "ModuleRelativePath", "ProjectPraeterCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AProjectPraeterCharacter_Statics::NewProp_JumpingAnimation = { "JumpingAnimation", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AProjectPraeterCharacter, JumpingAnimation), Z_Construct_UClass_UPaperFlipbook_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AProjectPraeterCharacter_Statics::NewProp_JumpingAnimation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AProjectPraeterCharacter_Statics::NewProp_JumpingAnimation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProjectPraeterCharacter_Statics::NewProp_IdleAnimation_MetaData[] = {
		{ "Category", "Animations" },
		{ "ModuleRelativePath", "ProjectPraeterCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AProjectPraeterCharacter_Statics::NewProp_IdleAnimation = { "IdleAnimation", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AProjectPraeterCharacter, IdleAnimation), Z_Construct_UClass_UPaperFlipbook_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AProjectPraeterCharacter_Statics::NewProp_IdleAnimation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AProjectPraeterCharacter_Statics::NewProp_IdleAnimation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProjectPraeterCharacter_Statics::NewProp_RunningAnimation_MetaData[] = {
		{ "Category", "Animations" },
		{ "Comment", "// Animations \n" },
		{ "ModuleRelativePath", "ProjectPraeterCharacter.h" },
		{ "ToolTip", "Animations" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AProjectPraeterCharacter_Statics::NewProp_RunningAnimation = { "RunningAnimation", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AProjectPraeterCharacter, RunningAnimation), Z_Construct_UClass_UPaperFlipbook_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AProjectPraeterCharacter_Statics::NewProp_RunningAnimation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AProjectPraeterCharacter_Statics::NewProp_RunningAnimation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProjectPraeterCharacter_Statics::NewProp_CameraBoom_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "ProjectPraeterCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AProjectPraeterCharacter_Statics::NewProp_CameraBoom = { "CameraBoom", nullptr, (EPropertyFlags)0x00400000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AProjectPraeterCharacter, CameraBoom), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AProjectPraeterCharacter_Statics::NewProp_CameraBoom_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AProjectPraeterCharacter_Statics::NewProp_CameraBoom_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProjectPraeterCharacter_Statics::NewProp_SideViewCameraComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "ProjectPraeterCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AProjectPraeterCharacter_Statics::NewProp_SideViewCameraComponent = { "SideViewCameraComponent", nullptr, (EPropertyFlags)0x00400000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AProjectPraeterCharacter, SideViewCameraComponent), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AProjectPraeterCharacter_Statics::NewProp_SideViewCameraComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AProjectPraeterCharacter_Statics::NewProp_SideViewCameraComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AProjectPraeterCharacter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProjectPraeterCharacter_Statics::NewProp_playerIsAttacking,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProjectPraeterCharacter_Statics::NewProp_isDead,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProjectPraeterCharacter_Statics::NewProp_takingDamage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProjectPraeterCharacter_Statics::NewProp_health,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProjectPraeterCharacter_Statics::NewProp_isJumping,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProjectPraeterCharacter_Statics::NewProp_landSFX,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProjectPraeterCharacter_Statics::NewProp_jumpSFX,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProjectPraeterCharacter_Statics::NewProp_takeDamageSFX,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProjectPraeterCharacter_Statics::NewProp_attackSFX,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProjectPraeterCharacter_Statics::NewProp_DeathAnimation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProjectPraeterCharacter_Statics::NewProp_HurtAnimation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProjectPraeterCharacter_Statics::NewProp_AttackAnimation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProjectPraeterCharacter_Statics::NewProp_FallingAnimation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProjectPraeterCharacter_Statics::NewProp_JumpingAnimation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProjectPraeterCharacter_Statics::NewProp_IdleAnimation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProjectPraeterCharacter_Statics::NewProp_RunningAnimation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProjectPraeterCharacter_Statics::NewProp_CameraBoom,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProjectPraeterCharacter_Statics::NewProp_SideViewCameraComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AProjectPraeterCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AProjectPraeterCharacter>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AProjectPraeterCharacter_Statics::ClassParams = {
		&AProjectPraeterCharacter::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AProjectPraeterCharacter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AProjectPraeterCharacter_Statics::PropPointers),
		0,
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AProjectPraeterCharacter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AProjectPraeterCharacter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AProjectPraeterCharacter()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AProjectPraeterCharacter_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AProjectPraeterCharacter, 1786795752);
	template<> PROJECTPRAETER_API UClass* StaticClass<AProjectPraeterCharacter>()
	{
		return AProjectPraeterCharacter::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AProjectPraeterCharacter(Z_Construct_UClass_AProjectPraeterCharacter, &AProjectPraeterCharacter::StaticClass, TEXT("/Script/ProjectPraeter"), TEXT("AProjectPraeterCharacter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AProjectPraeterCharacter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

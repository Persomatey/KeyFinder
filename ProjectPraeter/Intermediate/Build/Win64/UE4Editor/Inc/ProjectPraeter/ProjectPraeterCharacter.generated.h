// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PROJECTPRAETER_ProjectPraeterCharacter_generated_h
#error "ProjectPraeterCharacter.generated.h already included, missing '#pragma once' in ProjectPraeterCharacter.h"
#endif
#define PROJECTPRAETER_ProjectPraeterCharacter_generated_h

#define ProjectPraeter_Source_ProjectPraeter_ProjectPraeterCharacter_h_20_SPARSE_DATA
#define ProjectPraeter_Source_ProjectPraeter_ProjectPraeterCharacter_h_20_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execTakeDamage); \
	DECLARE_FUNCTION(execHealPlayer);


#define ProjectPraeter_Source_ProjectPraeter_ProjectPraeterCharacter_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execTakeDamage); \
	DECLARE_FUNCTION(execHealPlayer);


#define ProjectPraeter_Source_ProjectPraeter_ProjectPraeterCharacter_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAProjectPraeterCharacter(); \
	friend struct Z_Construct_UClass_AProjectPraeterCharacter_Statics; \
public: \
	DECLARE_CLASS(AProjectPraeterCharacter, APaperCharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ProjectPraeter"), NO_API) \
	DECLARE_SERIALIZER(AProjectPraeterCharacter)


#define ProjectPraeter_Source_ProjectPraeter_ProjectPraeterCharacter_h_20_INCLASS \
private: \
	static void StaticRegisterNativesAProjectPraeterCharacter(); \
	friend struct Z_Construct_UClass_AProjectPraeterCharacter_Statics; \
public: \
	DECLARE_CLASS(AProjectPraeterCharacter, APaperCharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ProjectPraeter"), NO_API) \
	DECLARE_SERIALIZER(AProjectPraeterCharacter)


#define ProjectPraeter_Source_ProjectPraeter_ProjectPraeterCharacter_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AProjectPraeterCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AProjectPraeterCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AProjectPraeterCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AProjectPraeterCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AProjectPraeterCharacter(AProjectPraeterCharacter&&); \
	NO_API AProjectPraeterCharacter(const AProjectPraeterCharacter&); \
public:


#define ProjectPraeter_Source_ProjectPraeter_ProjectPraeterCharacter_h_20_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AProjectPraeterCharacter(AProjectPraeterCharacter&&); \
	NO_API AProjectPraeterCharacter(const AProjectPraeterCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AProjectPraeterCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AProjectPraeterCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AProjectPraeterCharacter)


#define ProjectPraeter_Source_ProjectPraeter_ProjectPraeterCharacter_h_20_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__SideViewCameraComponent() { return STRUCT_OFFSET(AProjectPraeterCharacter, SideViewCameraComponent); } \
	FORCEINLINE static uint32 __PPO__CameraBoom() { return STRUCT_OFFSET(AProjectPraeterCharacter, CameraBoom); } \
	FORCEINLINE static uint32 __PPO__RunningAnimation() { return STRUCT_OFFSET(AProjectPraeterCharacter, RunningAnimation); } \
	FORCEINLINE static uint32 __PPO__IdleAnimation() { return STRUCT_OFFSET(AProjectPraeterCharacter, IdleAnimation); } \
	FORCEINLINE static uint32 __PPO__JumpingAnimation() { return STRUCT_OFFSET(AProjectPraeterCharacter, JumpingAnimation); } \
	FORCEINLINE static uint32 __PPO__FallingAnimation() { return STRUCT_OFFSET(AProjectPraeterCharacter, FallingAnimation); } \
	FORCEINLINE static uint32 __PPO__AttackAnimation() { return STRUCT_OFFSET(AProjectPraeterCharacter, AttackAnimation); } \
	FORCEINLINE static uint32 __PPO__HurtAnimation() { return STRUCT_OFFSET(AProjectPraeterCharacter, HurtAnimation); } \
	FORCEINLINE static uint32 __PPO__isJumping() { return STRUCT_OFFSET(AProjectPraeterCharacter, isJumping); } \
	FORCEINLINE static uint32 __PPO__health() { return STRUCT_OFFSET(AProjectPraeterCharacter, health); } \
	FORCEINLINE static uint32 __PPO__takingDamage() { return STRUCT_OFFSET(AProjectPraeterCharacter, takingDamage); } \
	FORCEINLINE static uint32 __PPO__playerIsAttacking() { return STRUCT_OFFSET(AProjectPraeterCharacter, playerIsAttacking); }


#define ProjectPraeter_Source_ProjectPraeter_ProjectPraeterCharacter_h_17_PROLOG
#define ProjectPraeter_Source_ProjectPraeter_ProjectPraeterCharacter_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ProjectPraeter_Source_ProjectPraeter_ProjectPraeterCharacter_h_20_PRIVATE_PROPERTY_OFFSET \
	ProjectPraeter_Source_ProjectPraeter_ProjectPraeterCharacter_h_20_SPARSE_DATA \
	ProjectPraeter_Source_ProjectPraeter_ProjectPraeterCharacter_h_20_RPC_WRAPPERS \
	ProjectPraeter_Source_ProjectPraeter_ProjectPraeterCharacter_h_20_INCLASS \
	ProjectPraeter_Source_ProjectPraeter_ProjectPraeterCharacter_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ProjectPraeter_Source_ProjectPraeter_ProjectPraeterCharacter_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ProjectPraeter_Source_ProjectPraeter_ProjectPraeterCharacter_h_20_PRIVATE_PROPERTY_OFFSET \
	ProjectPraeter_Source_ProjectPraeter_ProjectPraeterCharacter_h_20_SPARSE_DATA \
	ProjectPraeter_Source_ProjectPraeter_ProjectPraeterCharacter_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	ProjectPraeter_Source_ProjectPraeter_ProjectPraeterCharacter_h_20_INCLASS_NO_PURE_DECLS \
	ProjectPraeter_Source_ProjectPraeter_ProjectPraeterCharacter_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PROJECTPRAETER_API UClass* StaticClass<class AProjectPraeterCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ProjectPraeter_Source_ProjectPraeter_ProjectPraeterCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Character/FFCharacter.h"

#ifdef FREELANCEFELONSTWO_FFCharacter_generated_h
#error "FFCharacter.generated.h already included, missing '#pragma once' in FFCharacter.h"
#endif
#define FREELANCEFELONSTWO_FFCharacter_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FInputActionValue;

// ********** Begin Class AFFCharacter *************************************************************
#define FID_FreelanceFelonsTwo_Source_FreelanceFelonsTwo_Public_Character_FFCharacter_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSneakPressed); \
	DECLARE_FUNCTION(execSprintPressed); \
	DECLARE_FUNCTION(execJumpPressed); \
	DECLARE_FUNCTION(execMove); \
	DECLARE_FUNCTION(execLook);


struct Z_Construct_UClass_AFFCharacter_Statics;
FREELANCEFELONSTWO_API UClass* Z_Construct_UClass_AFFCharacter_NoRegister();

#define FID_FreelanceFelonsTwo_Source_FreelanceFelonsTwo_Public_Character_FFCharacter_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFFCharacter(); \
	friend struct ::Z_Construct_UClass_AFFCharacter_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend FREELANCEFELONSTWO_API UClass* ::Z_Construct_UClass_AFFCharacter_NoRegister(); \
public: \
	DECLARE_CLASS2(AFFCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FreelanceFelonsTwo"), Z_Construct_UClass_AFFCharacter_NoRegister) \
	DECLARE_SERIALIZER(AFFCharacter)


#define FID_FreelanceFelonsTwo_Source_FreelanceFelonsTwo_Public_Character_FFCharacter_h_17_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	AFFCharacter(AFFCharacter&&) = delete; \
	AFFCharacter(const AFFCharacter&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFFCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFFCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AFFCharacter) \
	NO_API virtual ~AFFCharacter();


#define FID_FreelanceFelonsTwo_Source_FreelanceFelonsTwo_Public_Character_FFCharacter_h_14_PROLOG
#define FID_FreelanceFelonsTwo_Source_FreelanceFelonsTwo_Public_Character_FFCharacter_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_FreelanceFelonsTwo_Source_FreelanceFelonsTwo_Public_Character_FFCharacter_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_FreelanceFelonsTwo_Source_FreelanceFelonsTwo_Public_Character_FFCharacter_h_17_INCLASS_NO_PURE_DECLS \
	FID_FreelanceFelonsTwo_Source_FreelanceFelonsTwo_Public_Character_FFCharacter_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AFFCharacter;

// ********** End Class AFFCharacter ***************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_FreelanceFelonsTwo_Source_FreelanceFelonsTwo_Public_Character_FFCharacter_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS

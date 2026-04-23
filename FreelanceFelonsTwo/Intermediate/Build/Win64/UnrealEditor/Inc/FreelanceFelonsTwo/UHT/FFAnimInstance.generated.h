// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Character/FFAnimInstance.h"

#ifdef FREELANCEFELONSTWO_FFAnimInstance_generated_h
#error "FFAnimInstance.generated.h already included, missing '#pragma once' in FFAnimInstance.h"
#endif
#define FREELANCEFELONSTWO_FFAnimInstance_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UFFAnimInstance **********************************************************
struct Z_Construct_UClass_UFFAnimInstance_Statics;
FREELANCEFELONSTWO_API UClass* Z_Construct_UClass_UFFAnimInstance_NoRegister();

#define FID_FreelanceFelonsTwo_Source_FreelanceFelonsTwo_Public_Character_FFAnimInstance_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFFAnimInstance(); \
	friend struct ::Z_Construct_UClass_UFFAnimInstance_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend FREELANCEFELONSTWO_API UClass* ::Z_Construct_UClass_UFFAnimInstance_NoRegister(); \
public: \
	DECLARE_CLASS2(UFFAnimInstance, UAnimInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/FreelanceFelonsTwo"), Z_Construct_UClass_UFFAnimInstance_NoRegister) \
	DECLARE_SERIALIZER(UFFAnimInstance)


#define FID_FreelanceFelonsTwo_Source_FreelanceFelonsTwo_Public_Character_FFAnimInstance_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFFAnimInstance(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UFFAnimInstance(UFFAnimInstance&&) = delete; \
	UFFAnimInstance(const UFFAnimInstance&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFFAnimInstance); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFFAnimInstance); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFFAnimInstance) \
	NO_API virtual ~UFFAnimInstance();


#define FID_FreelanceFelonsTwo_Source_FreelanceFelonsTwo_Public_Character_FFAnimInstance_h_13_PROLOG
#define FID_FreelanceFelonsTwo_Source_FreelanceFelonsTwo_Public_Character_FFAnimInstance_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_FreelanceFelonsTwo_Source_FreelanceFelonsTwo_Public_Character_FFAnimInstance_h_16_INCLASS_NO_PURE_DECLS \
	FID_FreelanceFelonsTwo_Source_FreelanceFelonsTwo_Public_Character_FFAnimInstance_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UFFAnimInstance;

// ********** End Class UFFAnimInstance ************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_FreelanceFelonsTwo_Source_FreelanceFelonsTwo_Public_Character_FFAnimInstance_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS

// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Controller/FFPlayerController.h"

#ifdef FREELANCEFELONSTWO_FFPlayerController_generated_h
#error "FFPlayerController.generated.h already included, missing '#pragma once' in FFPlayerController.h"
#endif
#define FREELANCEFELONSTWO_FFPlayerController_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class AFFPlayerController ******************************************************
struct Z_Construct_UClass_AFFPlayerController_Statics;
FREELANCEFELONSTWO_API UClass* Z_Construct_UClass_AFFPlayerController_NoRegister();

#define FID_FreelanceFelonsTwo_Source_FreelanceFelonsTwo_Public_Controller_FFPlayerController_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFFPlayerController(); \
	friend struct ::Z_Construct_UClass_AFFPlayerController_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend FREELANCEFELONSTWO_API UClass* ::Z_Construct_UClass_AFFPlayerController_NoRegister(); \
public: \
	DECLARE_CLASS2(AFFPlayerController, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FreelanceFelonsTwo"), Z_Construct_UClass_AFFPlayerController_NoRegister) \
	DECLARE_SERIALIZER(AFFPlayerController)


#define FID_FreelanceFelonsTwo_Source_FreelanceFelonsTwo_Public_Controller_FFPlayerController_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AFFPlayerController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	AFFPlayerController(AFFPlayerController&&) = delete; \
	AFFPlayerController(const AFFPlayerController&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFFPlayerController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFFPlayerController); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFFPlayerController) \
	NO_API virtual ~AFFPlayerController();


#define FID_FreelanceFelonsTwo_Source_FreelanceFelonsTwo_Public_Controller_FFPlayerController_h_12_PROLOG
#define FID_FreelanceFelonsTwo_Source_FreelanceFelonsTwo_Public_Controller_FFPlayerController_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_FreelanceFelonsTwo_Source_FreelanceFelonsTwo_Public_Controller_FFPlayerController_h_15_INCLASS_NO_PURE_DECLS \
	FID_FreelanceFelonsTwo_Source_FreelanceFelonsTwo_Public_Controller_FFPlayerController_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AFFPlayerController;

// ********** End Class AFFPlayerController ********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_FreelanceFelonsTwo_Source_FreelanceFelonsTwo_Public_Controller_FFPlayerController_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS

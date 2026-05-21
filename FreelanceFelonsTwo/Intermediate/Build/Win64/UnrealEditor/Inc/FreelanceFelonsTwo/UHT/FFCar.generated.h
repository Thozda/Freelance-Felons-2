// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Vehicle/FFCar.h"

#ifdef FREELANCEFELONSTWO_FFCar_generated_h
#error "FFCar.generated.h already included, missing '#pragma once' in FFCar.h"
#endif
#define FREELANCEFELONSTWO_FFCar_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class AFFCar *******************************************************************
struct Z_Construct_UClass_AFFCar_Statics;
FREELANCEFELONSTWO_API UClass* Z_Construct_UClass_AFFCar_NoRegister();

#define FID_FreelanceFelonsTwo_Source_FreelanceFelonsTwo_Public_Vehicle_FFCar_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFFCar(); \
	friend struct ::Z_Construct_UClass_AFFCar_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend FREELANCEFELONSTWO_API UClass* ::Z_Construct_UClass_AFFCar_NoRegister(); \
public: \
	DECLARE_CLASS2(AFFCar, AFFVehicle, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FreelanceFelonsTwo"), Z_Construct_UClass_AFFCar_NoRegister) \
	DECLARE_SERIALIZER(AFFCar)


#define FID_FreelanceFelonsTwo_Source_FreelanceFelonsTwo_Public_Vehicle_FFCar_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AFFCar(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	AFFCar(AFFCar&&) = delete; \
	AFFCar(const AFFCar&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFFCar); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFFCar); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AFFCar) \
	NO_API virtual ~AFFCar();


#define FID_FreelanceFelonsTwo_Source_FreelanceFelonsTwo_Public_Vehicle_FFCar_h_12_PROLOG
#define FID_FreelanceFelonsTwo_Source_FreelanceFelonsTwo_Public_Vehicle_FFCar_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_FreelanceFelonsTwo_Source_FreelanceFelonsTwo_Public_Vehicle_FFCar_h_15_INCLASS_NO_PURE_DECLS \
	FID_FreelanceFelonsTwo_Source_FreelanceFelonsTwo_Public_Vehicle_FFCar_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AFFCar;

// ********** End Class AFFCar *********************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_FreelanceFelonsTwo_Source_FreelanceFelonsTwo_Public_Vehicle_FFCar_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS

// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Vehicle/FFVehicle.h"

#ifdef FREELANCEFELONSTWO_FFVehicle_generated_h
#error "FFVehicle.generated.h already included, missing '#pragma once' in FFVehicle.h"
#endif
#define FREELANCEFELONSTWO_FFVehicle_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FInputActionValue;

// ********** Begin ScriptStruct FDoorData *********************************************************
struct Z_Construct_UScriptStruct_FDoorData_Statics;
#define FID_FreelanceFelonsTwo_Source_FreelanceFelonsTwo_Public_Vehicle_FFVehicle_h_32_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FDoorData_Statics; \
	FREELANCEFELONSTWO_API static class UScriptStruct* StaticStruct();


struct FDoorData;
// ********** End ScriptStruct FDoorData ***********************************************************

// ********** Begin ScriptStruct FWheelData ********************************************************
struct Z_Construct_UScriptStruct_FWheelData_Statics;
#define FID_FreelanceFelonsTwo_Source_FreelanceFelonsTwo_Public_Vehicle_FFVehicle_h_45_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FWheelData_Statics; \
	FREELANCEFELONSTWO_API static class UScriptStruct* StaticStruct();


struct FWheelData;
// ********** End ScriptStruct FWheelData **********************************************************

// ********** Begin Class AFFVehicle ***************************************************************
#define FID_FreelanceFelonsTwo_Source_FreelanceFelonsTwo_Public_Vehicle_FFVehicle_h_58_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execFFMove); \
	DECLARE_FUNCTION(execFFLook); \
	DECLARE_FUNCTION(execCharacterExit);


#define FID_FreelanceFelonsTwo_Source_FreelanceFelonsTwo_Public_Vehicle_FFVehicle_h_58_CALLBACK_WRAPPERS
struct Z_Construct_UClass_AFFVehicle_Statics;
FREELANCEFELONSTWO_API UClass* Z_Construct_UClass_AFFVehicle_NoRegister();

#define FID_FreelanceFelonsTwo_Source_FreelanceFelonsTwo_Public_Vehicle_FFVehicle_h_58_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFFVehicle(); \
	friend struct ::Z_Construct_UClass_AFFVehicle_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend FREELANCEFELONSTWO_API UClass* ::Z_Construct_UClass_AFFVehicle_NoRegister(); \
public: \
	DECLARE_CLASS2(AFFVehicle, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FreelanceFelonsTwo"), Z_Construct_UClass_AFFVehicle_NoRegister) \
	DECLARE_SERIALIZER(AFFVehicle) \
	virtual UObject* _getUObject() const override { return const_cast<AFFVehicle*>(this); }


#define FID_FreelanceFelonsTwo_Source_FreelanceFelonsTwo_Public_Vehicle_FFVehicle_h_58_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	AFFVehicle(AFFVehicle&&) = delete; \
	AFFVehicle(const AFFVehicle&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFFVehicle); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFFVehicle); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AFFVehicle) \
	NO_API virtual ~AFFVehicle();


#define FID_FreelanceFelonsTwo_Source_FreelanceFelonsTwo_Public_Vehicle_FFVehicle_h_55_PROLOG
#define FID_FreelanceFelonsTwo_Source_FreelanceFelonsTwo_Public_Vehicle_FFVehicle_h_58_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_FreelanceFelonsTwo_Source_FreelanceFelonsTwo_Public_Vehicle_FFVehicle_h_58_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_FreelanceFelonsTwo_Source_FreelanceFelonsTwo_Public_Vehicle_FFVehicle_h_58_CALLBACK_WRAPPERS \
	FID_FreelanceFelonsTwo_Source_FreelanceFelonsTwo_Public_Vehicle_FFVehicle_h_58_INCLASS_NO_PURE_DECLS \
	FID_FreelanceFelonsTwo_Source_FreelanceFelonsTwo_Public_Vehicle_FFVehicle_h_58_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AFFVehicle;

// ********** End Class AFFVehicle *****************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_FreelanceFelonsTwo_Source_FreelanceFelonsTwo_Public_Vehicle_FFVehicle_h

// ********** Begin Enum EVehicleState *************************************************************
#define FOREACH_ENUM_EVEHICLESTATE(op) \
	op(EVehicleState::EVS_Parked) \
	op(EVehicleState::EVS_Traffic) \
	op(EVehicleState::EVS_Transition) \
	op(EVehicleState::EVS_Player) 

enum class EVehicleState : uint8;
template<> struct TIsUEnumClass<EVehicleState> { enum { Value = true }; };
template<> FREELANCEFELONSTWO_NON_ATTRIBUTED_API UEnum* StaticEnum<EVehicleState>();
// ********** End Enum EVehicleState ***************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS

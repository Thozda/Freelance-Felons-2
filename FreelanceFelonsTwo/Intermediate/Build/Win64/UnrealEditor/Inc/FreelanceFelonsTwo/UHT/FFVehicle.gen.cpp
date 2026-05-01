// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Vehicle/FFVehicle.h"
#include "InputActionValue.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeFFVehicle() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_APawn();
ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_APlayerController_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
ENHANCEDINPUT_API UScriptStruct* Z_Construct_UScriptStruct_FInputActionValue();
FREELANCEFELONSTWO_API UClass* Z_Construct_UClass_AFFVehicle();
FREELANCEFELONSTWO_API UClass* Z_Construct_UClass_AFFVehicle_NoRegister();
FREELANCEFELONSTWO_API UClass* Z_Construct_UClass_UInteractInterface_NoRegister();
FREELANCEFELONSTWO_API UEnum* Z_Construct_UEnum_FreelanceFelonsTwo_EVehicleState();
FREELANCEFELONSTWO_API UScriptStruct* Z_Construct_UScriptStruct_FDoorData();
UPackage* Z_Construct_UPackage__Script_FreelanceFelonsTwo();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum EVehicleState *************************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EVehicleState;
static UEnum* EVehicleState_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EVehicleState.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EVehicleState.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_FreelanceFelonsTwo_EVehicleState, (UObject*)Z_Construct_UPackage__Script_FreelanceFelonsTwo(), TEXT("EVehicleState"));
	}
	return Z_Registration_Info_UEnum_EVehicleState.OuterSingleton;
}
template<> FREELANCEFELONSTWO_NON_ATTRIBUTED_API UEnum* StaticEnum<EVehicleState>()
{
	return EVehicleState_StaticEnum();
}
struct Z_Construct_UEnum_FreelanceFelonsTwo_EVehicleState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "EVS_MAX.Name", "EVehicleState::EVS_MAX" },
		{ "EVS_Parked.Name", "EVehicleState::EVS_Parked" },
		{ "EVS_Player.Name", "EVehicleState::EVS_Player" },
		{ "EVS_Traffic.Name", "EVehicleState::EVS_Traffic" },
		{ "EVS_Transition.Name", "EVehicleState::EVS_Transition" },
		{ "ModuleRelativePath", "Public/Vehicle/FFVehicle.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EVehicleState::EVS_Parked", (int64)EVehicleState::EVS_Parked },
		{ "EVehicleState::EVS_Traffic", (int64)EVehicleState::EVS_Traffic },
		{ "EVehicleState::EVS_Transition", (int64)EVehicleState::EVS_Transition },
		{ "EVehicleState::EVS_Player", (int64)EVehicleState::EVS_Player },
		{ "EVehicleState::EVS_MAX", (int64)EVehicleState::EVS_MAX },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_FreelanceFelonsTwo_EVehicleState_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_FreelanceFelonsTwo_EVehicleState_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_FreelanceFelonsTwo,
	nullptr,
	"EVehicleState",
	"EVehicleState",
	Z_Construct_UEnum_FreelanceFelonsTwo_EVehicleState_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_FreelanceFelonsTwo_EVehicleState_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_FreelanceFelonsTwo_EVehicleState_Statics::Enum_MetaDataParams), Z_Construct_UEnum_FreelanceFelonsTwo_EVehicleState_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_FreelanceFelonsTwo_EVehicleState()
{
	if (!Z_Registration_Info_UEnum_EVehicleState.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EVehicleState.InnerSingleton, Z_Construct_UEnum_FreelanceFelonsTwo_EVehicleState_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EVehicleState.InnerSingleton;
}
// ********** End Enum EVehicleState ***************************************************************

// ********** Begin ScriptStruct FDoorData *********************************************************
struct Z_Construct_UScriptStruct_FDoorData_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FDoorData); }
	static inline consteval int16 GetStructAlignment() { return alignof(FDoorData); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Vehicle/FFVehicle.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DoorMesh_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Vehicle/FFVehicle.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TracePoint_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Vehicle/FFVehicle.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FDoorData constinit property declarations *************************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DoorMesh;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TracePoint;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FDoorData constinit property declarations ***************************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDoorData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FDoorData_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FDoorData;
class UScriptStruct* FDoorData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FDoorData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FDoorData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDoorData, (UObject*)Z_Construct_UPackage__Script_FreelanceFelonsTwo(), TEXT("DoorData"));
	}
	return Z_Registration_Info_UScriptStruct_FDoorData.OuterSingleton;
	}

// ********** Begin ScriptStruct FDoorData Property Definitions ************************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FDoorData_Statics::NewProp_DoorMesh = { "DoorMesh", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDoorData, DoorMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DoorMesh_MetaData), NewProp_DoorMesh_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FDoorData_Statics::NewProp_TracePoint = { "TracePoint", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDoorData, TracePoint), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TracePoint_MetaData), NewProp_TracePoint_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDoorData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDoorData_Statics::NewProp_DoorMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDoorData_Statics::NewProp_TracePoint,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDoorData_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FDoorData Property Definitions **************************************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDoorData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_FreelanceFelonsTwo,
	nullptr,
	&NewStructOps,
	"DoorData",
	Z_Construct_UScriptStruct_FDoorData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDoorData_Statics::PropPointers),
	sizeof(FDoorData),
	alignof(FDoorData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000005),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDoorData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FDoorData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FDoorData()
{
	if (!Z_Registration_Info_UScriptStruct_FDoorData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FDoorData.InnerSingleton, Z_Construct_UScriptStruct_FDoorData_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FDoorData.InnerSingleton);
}
// ********** End ScriptStruct FDoorData ***********************************************************

// ********** Begin Class AFFVehicle Function AnimateDoorEntry *************************************
static FName NAME_AFFVehicle_AnimateDoorEntry = FName(TEXT("AnimateDoorEntry"));
void AFFVehicle::AnimateDoorEntry()
{
	UFunction* Func = FindFunctionChecked(NAME_AFFVehicle_AnimateDoorEntry);
	ProcessEvent(Func,NULL);
}
struct Z_Construct_UFunction_AFFVehicle_AnimateDoorEntry_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Vehicle/FFVehicle.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function AnimateDoorEntry constinit property declarations **********************
// ********** End Function AnimateDoorEntry constinit property declarations ************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFFVehicle_AnimateDoorEntry_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AFFVehicle, nullptr, "AnimateDoorEntry", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AFFVehicle_AnimateDoorEntry_Statics::Function_MetaDataParams), Z_Construct_UFunction_AFFVehicle_AnimateDoorEntry_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_AFFVehicle_AnimateDoorEntry()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFFVehicle_AnimateDoorEntry_Statics::FuncParams);
	}
	return ReturnFunction;
}
// ********** End Class AFFVehicle Function AnimateDoorEntry ***************************************

// ********** Begin Class AFFVehicle Function AnimateDoorEntryClose ********************************
static FName NAME_AFFVehicle_AnimateDoorEntryClose = FName(TEXT("AnimateDoorEntryClose"));
void AFFVehicle::AnimateDoorEntryClose()
{
	UFunction* Func = FindFunctionChecked(NAME_AFFVehicle_AnimateDoorEntryClose);
	ProcessEvent(Func,NULL);
}
struct Z_Construct_UFunction_AFFVehicle_AnimateDoorEntryClose_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Vehicle/FFVehicle.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function AnimateDoorEntryClose constinit property declarations *****************
// ********** End Function AnimateDoorEntryClose constinit property declarations *******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFFVehicle_AnimateDoorEntryClose_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AFFVehicle, nullptr, "AnimateDoorEntryClose", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AFFVehicle_AnimateDoorEntryClose_Statics::Function_MetaDataParams), Z_Construct_UFunction_AFFVehicle_AnimateDoorEntryClose_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_AFFVehicle_AnimateDoorEntryClose()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFFVehicle_AnimateDoorEntryClose_Statics::FuncParams);
	}
	return ReturnFunction;
}
// ********** End Class AFFVehicle Function AnimateDoorEntryClose **********************************

// ********** Begin Class AFFVehicle Function AnimateDoorExitOpen **********************************
static FName NAME_AFFVehicle_AnimateDoorExitOpen = FName(TEXT("AnimateDoorExitOpen"));
void AFFVehicle::AnimateDoorExitOpen()
{
	UFunction* Func = FindFunctionChecked(NAME_AFFVehicle_AnimateDoorExitOpen);
	ProcessEvent(Func,NULL);
}
struct Z_Construct_UFunction_AFFVehicle_AnimateDoorExitOpen_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Vehicle/FFVehicle.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function AnimateDoorExitOpen constinit property declarations *******************
// ********** End Function AnimateDoorExitOpen constinit property declarations *********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFFVehicle_AnimateDoorExitOpen_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AFFVehicle, nullptr, "AnimateDoorExitOpen", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AFFVehicle_AnimateDoorExitOpen_Statics::Function_MetaDataParams), Z_Construct_UFunction_AFFVehicle_AnimateDoorExitOpen_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_AFFVehicle_AnimateDoorExitOpen()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFFVehicle_AnimateDoorExitOpen_Statics::FuncParams);
	}
	return ReturnFunction;
}
// ********** End Class AFFVehicle Function AnimateDoorExitOpen ************************************

// ********** Begin Class AFFVehicle Function CharacterExit ****************************************
struct Z_Construct_UFunction_AFFVehicle_CharacterExit_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Vehicle/FFVehicle.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function CharacterExit constinit property declarations *************************
// ********** End Function CharacterExit constinit property declarations ***************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFFVehicle_CharacterExit_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AFFVehicle, nullptr, "CharacterExit", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AFFVehicle_CharacterExit_Statics::Function_MetaDataParams), Z_Construct_UFunction_AFFVehicle_CharacterExit_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_AFFVehicle_CharacterExit()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFFVehicle_CharacterExit_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AFFVehicle::execCharacterExit)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->CharacterExit();
	P_NATIVE_END;
}
// ********** End Class AFFVehicle Function CharacterExit ******************************************

// ********** Begin Class AFFVehicle Function FFLook ***********************************************
struct Z_Construct_UFunction_AFFVehicle_FFLook_Statics
{
	struct FFVehicle_eventFFLook_Parms
	{
		FInputActionValue Value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Vehicle/FFVehicle.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function FFLook constinit property declarations ********************************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function FFLook constinit property declarations **********************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function FFLook Property Definitions *******************************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFFVehicle_FFLook_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFVehicle_eventFFLook_Parms, Value), Z_Construct_UScriptStruct_FInputActionValue, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) }; // 3592307271
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFFVehicle_FFLook_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFFVehicle_FFLook_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AFFVehicle_FFLook_Statics::PropPointers) < 2048);
// ********** End Function FFLook Property Definitions *********************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFFVehicle_FFLook_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AFFVehicle, nullptr, "FFLook", 	Z_Construct_UFunction_AFFVehicle_FFLook_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_AFFVehicle_FFLook_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_AFFVehicle_FFLook_Statics::FFVehicle_eventFFLook_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00440401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AFFVehicle_FFLook_Statics::Function_MetaDataParams), Z_Construct_UFunction_AFFVehicle_FFLook_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AFFVehicle_FFLook_Statics::FFVehicle_eventFFLook_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AFFVehicle_FFLook()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFFVehicle_FFLook_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AFFVehicle::execFFLook)
{
	P_GET_STRUCT_REF(FInputActionValue,Z_Param_Out_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->FFLook(Z_Param_Out_Value);
	P_NATIVE_END;
}
// ********** End Class AFFVehicle Function FFLook *************************************************

// ********** Begin Class AFFVehicle Function FFMove ***********************************************
struct Z_Construct_UFunction_AFFVehicle_FFMove_Statics
{
	struct FFVehicle_eventFFMove_Parms
	{
		FInputActionValue Value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Vehicle/FFVehicle.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function FFMove constinit property declarations ********************************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function FFMove constinit property declarations **********************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function FFMove Property Definitions *******************************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFFVehicle_FFMove_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFVehicle_eventFFMove_Parms, Value), Z_Construct_UScriptStruct_FInputActionValue, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) }; // 3592307271
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFFVehicle_FFMove_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFFVehicle_FFMove_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AFFVehicle_FFMove_Statics::PropPointers) < 2048);
// ********** End Function FFMove Property Definitions *********************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFFVehicle_FFMove_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AFFVehicle, nullptr, "FFMove", 	Z_Construct_UFunction_AFFVehicle_FFMove_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_AFFVehicle_FFMove_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_AFFVehicle_FFMove_Statics::FFVehicle_eventFFMove_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00440401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AFFVehicle_FFMove_Statics::Function_MetaDataParams), Z_Construct_UFunction_AFFVehicle_FFMove_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AFFVehicle_FFMove_Statics::FFVehicle_eventFFMove_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AFFVehicle_FFMove()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFFVehicle_FFMove_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AFFVehicle::execFFMove)
{
	P_GET_STRUCT_REF(FInputActionValue,Z_Param_Out_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->FFMove(Z_Param_Out_Value);
	P_NATIVE_END;
}
// ********** End Class AFFVehicle Function FFMove *************************************************

// ********** Begin Class AFFVehicle ***************************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_AFFVehicle;
UClass* AFFVehicle::GetPrivateStaticClass()
{
	using TClass = AFFVehicle;
	if (!Z_Registration_Info_UClass_AFFVehicle.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("FFVehicle"),
			Z_Registration_Info_UClass_AFFVehicle.InnerSingleton,
			StaticRegisterNativesAFFVehicle,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_AFFVehicle.InnerSingleton;
}
UClass* Z_Construct_UClass_AFFVehicle_NoRegister()
{
	return AFFVehicle::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AFFVehicle_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Vehicle/FFVehicle.h" },
		{ "ModuleRelativePath", "Public/Vehicle/FFVehicle.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EnterMontage_MetaData[] = {
		{ "Category", "Animations" },
		{ "ModuleRelativePath", "Public/Vehicle/FFVehicle.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExitAnim_MetaData[] = {
		{ "Category", "Animations" },
		{ "ModuleRelativePath", "Public/Vehicle/FFVehicle.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentDoor_MetaData[] = {
		{ "Category", "FFVehicle" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Vehicle/FFVehicle.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EnteringDriversDoor_MetaData[] = {
		{ "Category", "FFVehicle" },
		{ "ModuleRelativePath", "Public/Vehicle/FFVehicle.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InstigatorCharacter_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\n//Player\n//\n" },
#endif
		{ "ModuleRelativePath", "Public/Vehicle/FFVehicle.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Player" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayerController_MetaData[] = {
		{ "ModuleRelativePath", "Public/Vehicle/FFVehicle.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Root_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\n//Components\n//\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Vehicle/FFVehicle.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Components" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Camera_MetaData[] = {
		{ "Category", "FFVehicle" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Vehicle/FFVehicle.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CameraArm_MetaData[] = {
		{ "Category", "FFVehicle" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Vehicle/FFVehicle.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Body_MetaData[] = {
		{ "Category", "FFVehicle" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Vehicle/FFVehicle.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CharacterSocketLeft_MetaData[] = {
		{ "Category", "FFVehicle" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Vehicle/FFVehicle.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CharacterSocketRight_MetaData[] = {
		{ "Category", "FFVehicle" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Vehicle/FFVehicle.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LeftDoor_MetaData[] = {
		{ "Category", "FFVehicle" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Doors\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Vehicle/FFVehicle.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Doors" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LeftDoorTracePoint_MetaData[] = {
		{ "Category", "FFVehicle" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Vehicle/FFVehicle.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RightDoor_MetaData[] = {
		{ "Category", "FFVehicle" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Vehicle/FFVehicle.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RightDoorTracePoint_MetaData[] = {
		{ "Category", "FFVehicle" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Vehicle/FFVehicle.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Doors_MetaData[] = {
		{ "ModuleRelativePath", "Public/Vehicle/FFVehicle.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FrontLeftWheel_MetaData[] = {
		{ "Category", "FFVehicle" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Wheels\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Vehicle/FFVehicle.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Wheels" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FrontRightWheel_MetaData[] = {
		{ "Category", "FFVehicle" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Vehicle/FFVehicle.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RearLeftWheel_MetaData[] = {
		{ "Category", "FFVehicle" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Vehicle/FFVehicle.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RearRightWheel_MetaData[] = {
		{ "Category", "FFVehicle" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Vehicle/FFVehicle.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LookAction_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/Vehicle/FFVehicle.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MoveAction_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/Vehicle/FFVehicle.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InteractAction_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/Vehicle/FFVehicle.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VehicleInteractAction_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/Vehicle/FFVehicle.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HandbreakAction_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/Vehicle/FFVehicle.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class AFFVehicle constinit property declarations *******************************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_EnterMontage;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ExitAnim;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CurrentDoor;
	static void NewProp_EnteringDriversDoor_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_EnteringDriversDoor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InstigatorCharacter;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerController;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Root;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Camera;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CameraArm;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Body;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CharacterSocketLeft;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CharacterSocketRight;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LeftDoor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LeftDoorTracePoint;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RightDoor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RightDoorTracePoint;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Doors_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Doors;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FrontLeftWheel;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FrontRightWheel;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RearLeftWheel;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RearRightWheel;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LookAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MoveAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InteractAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_VehicleInteractAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HandbreakAction;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class AFFVehicle constinit property declarations *********************************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("CharacterExit"), .Pointer = &AFFVehicle::execCharacterExit },
		{ .NameUTF8 = UTF8TEXT("FFLook"), .Pointer = &AFFVehicle::execFFLook },
		{ .NameUTF8 = UTF8TEXT("FFMove"), .Pointer = &AFFVehicle::execFFMove },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AFFVehicle_AnimateDoorEntry, "AnimateDoorEntry" }, // 4194290209
		{ &Z_Construct_UFunction_AFFVehicle_AnimateDoorEntryClose, "AnimateDoorEntryClose" }, // 2146714678
		{ &Z_Construct_UFunction_AFFVehicle_AnimateDoorExitOpen, "AnimateDoorExitOpen" }, // 2481663596
		{ &Z_Construct_UFunction_AFFVehicle_CharacterExit, "CharacterExit" }, // 3841983033
		{ &Z_Construct_UFunction_AFFVehicle_FFLook, "FFLook" }, // 882398517
		{ &Z_Construct_UFunction_AFFVehicle_FFMove, "FFMove" }, // 1410202813
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFFVehicle>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_AFFVehicle_Statics

// ********** Begin Class AFFVehicle Property Definitions ******************************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFFVehicle_Statics::NewProp_EnterMontage = { "EnterMontage", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFFVehicle, EnterMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EnterMontage_MetaData), NewProp_EnterMontage_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFFVehicle_Statics::NewProp_ExitAnim = { "ExitAnim", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFFVehicle, ExitAnim), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExitAnim_MetaData), NewProp_ExitAnim_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFFVehicle_Statics::NewProp_CurrentDoor = { "CurrentDoor", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFFVehicle, CurrentDoor), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentDoor_MetaData), NewProp_CurrentDoor_MetaData) };
void Z_Construct_UClass_AFFVehicle_Statics::NewProp_EnteringDriversDoor_SetBit(void* Obj)
{
	((AFFVehicle*)Obj)->EnteringDriversDoor = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AFFVehicle_Statics::NewProp_EnteringDriversDoor = { "EnteringDriversDoor", nullptr, (EPropertyFlags)0x0020080000020015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AFFVehicle), &Z_Construct_UClass_AFFVehicle_Statics::NewProp_EnteringDriversDoor_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EnteringDriversDoor_MetaData), NewProp_EnteringDriversDoor_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFFVehicle_Statics::NewProp_InstigatorCharacter = { "InstigatorCharacter", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFFVehicle, InstigatorCharacter), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InstigatorCharacter_MetaData), NewProp_InstigatorCharacter_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFFVehicle_Statics::NewProp_PlayerController = { "PlayerController", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFFVehicle, PlayerController), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayerController_MetaData), NewProp_PlayerController_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFFVehicle_Statics::NewProp_Root = { "Root", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFFVehicle, Root), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Root_MetaData), NewProp_Root_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFFVehicle_Statics::NewProp_Camera = { "Camera", nullptr, (EPropertyFlags)0x00400000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFFVehicle, Camera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Camera_MetaData), NewProp_Camera_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFFVehicle_Statics::NewProp_CameraArm = { "CameraArm", nullptr, (EPropertyFlags)0x00400000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFFVehicle, CameraArm), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CameraArm_MetaData), NewProp_CameraArm_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFFVehicle_Statics::NewProp_Body = { "Body", nullptr, (EPropertyFlags)0x00400000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFFVehicle, Body), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Body_MetaData), NewProp_Body_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFFVehicle_Statics::NewProp_CharacterSocketLeft = { "CharacterSocketLeft", nullptr, (EPropertyFlags)0x00400000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFFVehicle, CharacterSocketLeft), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CharacterSocketLeft_MetaData), NewProp_CharacterSocketLeft_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFFVehicle_Statics::NewProp_CharacterSocketRight = { "CharacterSocketRight", nullptr, (EPropertyFlags)0x00400000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFFVehicle, CharacterSocketRight), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CharacterSocketRight_MetaData), NewProp_CharacterSocketRight_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFFVehicle_Statics::NewProp_LeftDoor = { "LeftDoor", nullptr, (EPropertyFlags)0x00400000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFFVehicle, LeftDoor), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LeftDoor_MetaData), NewProp_LeftDoor_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFFVehicle_Statics::NewProp_LeftDoorTracePoint = { "LeftDoorTracePoint", nullptr, (EPropertyFlags)0x00400000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFFVehicle, LeftDoorTracePoint), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LeftDoorTracePoint_MetaData), NewProp_LeftDoorTracePoint_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFFVehicle_Statics::NewProp_RightDoor = { "RightDoor", nullptr, (EPropertyFlags)0x00400000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFFVehicle, RightDoor), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RightDoor_MetaData), NewProp_RightDoor_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFFVehicle_Statics::NewProp_RightDoorTracePoint = { "RightDoorTracePoint", nullptr, (EPropertyFlags)0x00400000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFFVehicle, RightDoorTracePoint), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RightDoorTracePoint_MetaData), NewProp_RightDoorTracePoint_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AFFVehicle_Statics::NewProp_Doors_Inner = { "Doors", nullptr, (EPropertyFlags)0x0000008000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FDoorData, METADATA_PARAMS(0, nullptr) }; // 1016745551
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AFFVehicle_Statics::NewProp_Doors = { "Doors", nullptr, (EPropertyFlags)0x0040008000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFFVehicle, Doors), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Doors_MetaData), NewProp_Doors_MetaData) }; // 1016745551
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFFVehicle_Statics::NewProp_FrontLeftWheel = { "FrontLeftWheel", nullptr, (EPropertyFlags)0x00400000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFFVehicle, FrontLeftWheel), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FrontLeftWheel_MetaData), NewProp_FrontLeftWheel_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFFVehicle_Statics::NewProp_FrontRightWheel = { "FrontRightWheel", nullptr, (EPropertyFlags)0x00400000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFFVehicle, FrontRightWheel), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FrontRightWheel_MetaData), NewProp_FrontRightWheel_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFFVehicle_Statics::NewProp_RearLeftWheel = { "RearLeftWheel", nullptr, (EPropertyFlags)0x00400000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFFVehicle, RearLeftWheel), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RearLeftWheel_MetaData), NewProp_RearLeftWheel_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFFVehicle_Statics::NewProp_RearRightWheel = { "RearRightWheel", nullptr, (EPropertyFlags)0x00400000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFFVehicle, RearRightWheel), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RearRightWheel_MetaData), NewProp_RearRightWheel_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFFVehicle_Statics::NewProp_LookAction = { "LookAction", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFFVehicle, LookAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LookAction_MetaData), NewProp_LookAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFFVehicle_Statics::NewProp_MoveAction = { "MoveAction", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFFVehicle, MoveAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MoveAction_MetaData), NewProp_MoveAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFFVehicle_Statics::NewProp_InteractAction = { "InteractAction", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFFVehicle, InteractAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InteractAction_MetaData), NewProp_InteractAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFFVehicle_Statics::NewProp_VehicleInteractAction = { "VehicleInteractAction", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFFVehicle, VehicleInteractAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VehicleInteractAction_MetaData), NewProp_VehicleInteractAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFFVehicle_Statics::NewProp_HandbreakAction = { "HandbreakAction", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFFVehicle, HandbreakAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HandbreakAction_MetaData), NewProp_HandbreakAction_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFFVehicle_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFFVehicle_Statics::NewProp_EnterMontage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFFVehicle_Statics::NewProp_ExitAnim,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFFVehicle_Statics::NewProp_CurrentDoor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFFVehicle_Statics::NewProp_EnteringDriversDoor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFFVehicle_Statics::NewProp_InstigatorCharacter,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFFVehicle_Statics::NewProp_PlayerController,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFFVehicle_Statics::NewProp_Root,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFFVehicle_Statics::NewProp_Camera,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFFVehicle_Statics::NewProp_CameraArm,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFFVehicle_Statics::NewProp_Body,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFFVehicle_Statics::NewProp_CharacterSocketLeft,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFFVehicle_Statics::NewProp_CharacterSocketRight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFFVehicle_Statics::NewProp_LeftDoor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFFVehicle_Statics::NewProp_LeftDoorTracePoint,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFFVehicle_Statics::NewProp_RightDoor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFFVehicle_Statics::NewProp_RightDoorTracePoint,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFFVehicle_Statics::NewProp_Doors_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFFVehicle_Statics::NewProp_Doors,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFFVehicle_Statics::NewProp_FrontLeftWheel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFFVehicle_Statics::NewProp_FrontRightWheel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFFVehicle_Statics::NewProp_RearLeftWheel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFFVehicle_Statics::NewProp_RearRightWheel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFFVehicle_Statics::NewProp_LookAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFFVehicle_Statics::NewProp_MoveAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFFVehicle_Statics::NewProp_InteractAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFFVehicle_Statics::NewProp_VehicleInteractAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFFVehicle_Statics::NewProp_HandbreakAction,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AFFVehicle_Statics::PropPointers) < 2048);
// ********** End Class AFFVehicle Property Definitions ********************************************
UObject* (*const Z_Construct_UClass_AFFVehicle_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APawn,
	(UObject* (*)())Z_Construct_UPackage__Script_FreelanceFelonsTwo,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AFFVehicle_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AFFVehicle_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UInteractInterface_NoRegister, (int32)VTABLE_OFFSET(AFFVehicle, IInteractInterface), false },  // 274582102
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_AFFVehicle_Statics::ClassParams = {
	&AFFVehicle::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AFFVehicle_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AFFVehicle_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFFVehicle_Statics::Class_MetaDataParams), Z_Construct_UClass_AFFVehicle_Statics::Class_MetaDataParams)
};
void AFFVehicle::StaticRegisterNativesAFFVehicle()
{
	UClass* Class = AFFVehicle::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_AFFVehicle_Statics::Funcs));
}
UClass* Z_Construct_UClass_AFFVehicle()
{
	if (!Z_Registration_Info_UClass_AFFVehicle.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AFFVehicle.OuterSingleton, Z_Construct_UClass_AFFVehicle_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AFFVehicle.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, AFFVehicle);
AFFVehicle::~AFFVehicle() {}
// ********** End Class AFFVehicle *****************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_FreelanceFelonsTwo_Source_FreelanceFelonsTwo_Public_Vehicle_FFVehicle_h__Script_FreelanceFelonsTwo_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EVehicleState_StaticEnum, TEXT("EVehicleState"), &Z_Registration_Info_UEnum_EVehicleState, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1771876355U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FDoorData::StaticStruct, Z_Construct_UScriptStruct_FDoorData_Statics::NewStructOps, TEXT("DoorData"),&Z_Registration_Info_UScriptStruct_FDoorData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDoorData), 1016745551U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AFFVehicle, AFFVehicle::StaticClass, TEXT("AFFVehicle"), &Z_Registration_Info_UClass_AFFVehicle, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AFFVehicle), 3471410843U) },
	};
}; // Z_CompiledInDeferFile_FID_FreelanceFelonsTwo_Source_FreelanceFelonsTwo_Public_Vehicle_FFVehicle_h__Script_FreelanceFelonsTwo_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_FreelanceFelonsTwo_Source_FreelanceFelonsTwo_Public_Vehicle_FFVehicle_h__Script_FreelanceFelonsTwo_198604409{
	TEXT("/Script/FreelanceFelonsTwo"),
	Z_CompiledInDeferFile_FID_FreelanceFelonsTwo_Source_FreelanceFelonsTwo_Public_Vehicle_FFVehicle_h__Script_FreelanceFelonsTwo_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_FreelanceFelonsTwo_Source_FreelanceFelonsTwo_Public_Vehicle_FFVehicle_h__Script_FreelanceFelonsTwo_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_FreelanceFelonsTwo_Source_FreelanceFelonsTwo_Public_Vehicle_FFVehicle_h__Script_FreelanceFelonsTwo_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_FreelanceFelonsTwo_Source_FreelanceFelonsTwo_Public_Vehicle_FFVehicle_h__Script_FreelanceFelonsTwo_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_FreelanceFelonsTwo_Source_FreelanceFelonsTwo_Public_Vehicle_FFVehicle_h__Script_FreelanceFelonsTwo_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_FreelanceFelonsTwo_Source_FreelanceFelonsTwo_Public_Vehicle_FFVehicle_h__Script_FreelanceFelonsTwo_Statics::EnumInfo),
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS

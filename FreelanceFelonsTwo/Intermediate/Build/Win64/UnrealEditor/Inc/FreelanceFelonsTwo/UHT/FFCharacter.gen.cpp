// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Character/FFCharacter.h"
#include "InputActionValue.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeFFCharacter() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_ACharacter();
ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UCharacterMovementComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
ENHANCEDINPUT_API UScriptStruct* Z_Construct_UScriptStruct_FInputActionValue();
FREELANCEFELONSTWO_API UClass* Z_Construct_UClass_AFFCharacter();
FREELANCEFELONSTWO_API UClass* Z_Construct_UClass_AFFCharacter_NoRegister();
FREELANCEFELONSTWO_API UEnum* Z_Construct_UEnum_FreelanceFelonsTwo_ELocomotionState();
UPackage* Z_Construct_UPackage__Script_FreelanceFelonsTwo();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum ELocomotionState **********************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ELocomotionState;
static UEnum* ELocomotionState_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ELocomotionState.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ELocomotionState.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_FreelanceFelonsTwo_ELocomotionState, (UObject*)Z_Construct_UPackage__Script_FreelanceFelonsTwo(), TEXT("ELocomotionState"));
	}
	return Z_Registration_Info_UEnum_ELocomotionState.OuterSingleton;
}
template<> FREELANCEFELONSTWO_NON_ATTRIBUTED_API UEnum* StaticEnum<ELocomotionState>()
{
	return ELocomotionState_StaticEnum();
}
struct Z_Construct_UEnum_FreelanceFelonsTwo_ELocomotionState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "ELS_Jump.Name", "ELocomotionState::ELS_Jump" },
		{ "ELS_MAX.Name", "ELocomotionState::ELS_MAX" },
		{ "ELS_Sneak.Name", "ELocomotionState::ELS_Sneak" },
		{ "ELS_Sprint.Name", "ELocomotionState::ELS_Sprint" },
		{ "ELS_Walk.Name", "ELocomotionState::ELS_Walk" },
		{ "ModuleRelativePath", "Public/Character/FFCharacter.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ELocomotionState::ELS_Sneak", (int64)ELocomotionState::ELS_Sneak },
		{ "ELocomotionState::ELS_Walk", (int64)ELocomotionState::ELS_Walk },
		{ "ELocomotionState::ELS_Sprint", (int64)ELocomotionState::ELS_Sprint },
		{ "ELocomotionState::ELS_Jump", (int64)ELocomotionState::ELS_Jump },
		{ "ELocomotionState::ELS_MAX", (int64)ELocomotionState::ELS_MAX },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_FreelanceFelonsTwo_ELocomotionState_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_FreelanceFelonsTwo_ELocomotionState_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_FreelanceFelonsTwo,
	nullptr,
	"ELocomotionState",
	"ELocomotionState",
	Z_Construct_UEnum_FreelanceFelonsTwo_ELocomotionState_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_FreelanceFelonsTwo_ELocomotionState_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_FreelanceFelonsTwo_ELocomotionState_Statics::Enum_MetaDataParams), Z_Construct_UEnum_FreelanceFelonsTwo_ELocomotionState_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_FreelanceFelonsTwo_ELocomotionState()
{
	if (!Z_Registration_Info_UEnum_ELocomotionState.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ELocomotionState.InnerSingleton, Z_Construct_UEnum_FreelanceFelonsTwo_ELocomotionState_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ELocomotionState.InnerSingleton;
}
// ********** End Enum ELocomotionState ************************************************************

// ********** Begin Class AFFCharacter Function FFLook *********************************************
struct Z_Construct_UFunction_AFFCharacter_FFLook_Statics
{
	struct FFCharacter_eventFFLook_Parms
	{
		FInputActionValue Value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Character/FFCharacter.h" },
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
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFFCharacter_FFLook_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFCharacter_eventFFLook_Parms, Value), Z_Construct_UScriptStruct_FInputActionValue, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) }; // 3592307271
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFFCharacter_FFLook_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFFCharacter_FFLook_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AFFCharacter_FFLook_Statics::PropPointers) < 2048);
// ********** End Function FFLook Property Definitions *********************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFFCharacter_FFLook_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AFFCharacter, nullptr, "FFLook", 	Z_Construct_UFunction_AFFCharacter_FFLook_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_AFFCharacter_FFLook_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_AFFCharacter_FFLook_Statics::FFCharacter_eventFFLook_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00440401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AFFCharacter_FFLook_Statics::Function_MetaDataParams), Z_Construct_UFunction_AFFCharacter_FFLook_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AFFCharacter_FFLook_Statics::FFCharacter_eventFFLook_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AFFCharacter_FFLook()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFFCharacter_FFLook_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AFFCharacter::execFFLook)
{
	P_GET_STRUCT_REF(FInputActionValue,Z_Param_Out_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->FFLook(Z_Param_Out_Value);
	P_NATIVE_END;
}
// ********** End Class AFFCharacter Function FFLook ***********************************************

// ********** Begin Class AFFCharacter Function FFMove *********************************************
struct Z_Construct_UFunction_AFFCharacter_FFMove_Statics
{
	struct FFCharacter_eventFFMove_Parms
	{
		FInputActionValue Value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Character/FFCharacter.h" },
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
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFFCharacter_FFMove_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFCharacter_eventFFMove_Parms, Value), Z_Construct_UScriptStruct_FInputActionValue, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) }; // 3592307271
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFFCharacter_FFMove_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFFCharacter_FFMove_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AFFCharacter_FFMove_Statics::PropPointers) < 2048);
// ********** End Function FFMove Property Definitions *********************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFFCharacter_FFMove_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AFFCharacter, nullptr, "FFMove", 	Z_Construct_UFunction_AFFCharacter_FFMove_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_AFFCharacter_FFMove_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_AFFCharacter_FFMove_Statics::FFCharacter_eventFFMove_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00440401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AFFCharacter_FFMove_Statics::Function_MetaDataParams), Z_Construct_UFunction_AFFCharacter_FFMove_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AFFCharacter_FFMove_Statics::FFCharacter_eventFFMove_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AFFCharacter_FFMove()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFFCharacter_FFMove_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AFFCharacter::execFFMove)
{
	P_GET_STRUCT_REF(FInputActionValue,Z_Param_Out_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->FFMove(Z_Param_Out_Value);
	P_NATIVE_END;
}
// ********** End Class AFFCharacter Function FFMove ***********************************************

// ********** Begin Class AFFCharacter Function JumpPressed ****************************************
struct Z_Construct_UFunction_AFFCharacter_JumpPressed_Statics
{
	struct FFCharacter_eventJumpPressed_Parms
	{
		FInputActionValue Value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Character/FFCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function JumpPressed constinit property declarations ***************************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function JumpPressed constinit property declarations *****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function JumpPressed Property Definitions **************************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFFCharacter_JumpPressed_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFCharacter_eventJumpPressed_Parms, Value), Z_Construct_UScriptStruct_FInputActionValue, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) }; // 3592307271
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFFCharacter_JumpPressed_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFFCharacter_JumpPressed_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AFFCharacter_JumpPressed_Statics::PropPointers) < 2048);
// ********** End Function JumpPressed Property Definitions ****************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFFCharacter_JumpPressed_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AFFCharacter, nullptr, "JumpPressed", 	Z_Construct_UFunction_AFFCharacter_JumpPressed_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_AFFCharacter_JumpPressed_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_AFFCharacter_JumpPressed_Statics::FFCharacter_eventJumpPressed_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00440401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AFFCharacter_JumpPressed_Statics::Function_MetaDataParams), Z_Construct_UFunction_AFFCharacter_JumpPressed_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AFFCharacter_JumpPressed_Statics::FFCharacter_eventJumpPressed_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AFFCharacter_JumpPressed()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFFCharacter_JumpPressed_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AFFCharacter::execJumpPressed)
{
	P_GET_STRUCT_REF(FInputActionValue,Z_Param_Out_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->JumpPressed(Z_Param_Out_Value);
	P_NATIVE_END;
}
// ********** End Class AFFCharacter Function JumpPressed ******************************************

// ********** Begin Class AFFCharacter Function SneakPressed ***************************************
struct Z_Construct_UFunction_AFFCharacter_SneakPressed_Statics
{
	struct FFCharacter_eventSneakPressed_Parms
	{
		FInputActionValue Value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Character/FFCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function SneakPressed constinit property declarations **************************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SneakPressed constinit property declarations ****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SneakPressed Property Definitions *************************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFFCharacter_SneakPressed_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFCharacter_eventSneakPressed_Parms, Value), Z_Construct_UScriptStruct_FInputActionValue, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) }; // 3592307271
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFFCharacter_SneakPressed_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFFCharacter_SneakPressed_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AFFCharacter_SneakPressed_Statics::PropPointers) < 2048);
// ********** End Function SneakPressed Property Definitions ***************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFFCharacter_SneakPressed_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AFFCharacter, nullptr, "SneakPressed", 	Z_Construct_UFunction_AFFCharacter_SneakPressed_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_AFFCharacter_SneakPressed_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_AFFCharacter_SneakPressed_Statics::FFCharacter_eventSneakPressed_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00440401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AFFCharacter_SneakPressed_Statics::Function_MetaDataParams), Z_Construct_UFunction_AFFCharacter_SneakPressed_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AFFCharacter_SneakPressed_Statics::FFCharacter_eventSneakPressed_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AFFCharacter_SneakPressed()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFFCharacter_SneakPressed_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AFFCharacter::execSneakPressed)
{
	P_GET_STRUCT_REF(FInputActionValue,Z_Param_Out_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SneakPressed(Z_Param_Out_Value);
	P_NATIVE_END;
}
// ********** End Class AFFCharacter Function SneakPressed *****************************************

// ********** Begin Class AFFCharacter Function SprintPressed **************************************
struct Z_Construct_UFunction_AFFCharacter_SprintPressed_Statics
{
	struct FFCharacter_eventSprintPressed_Parms
	{
		FInputActionValue Value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Character/FFCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function SprintPressed constinit property declarations *************************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SprintPressed constinit property declarations ***************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SprintPressed Property Definitions ************************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFFCharacter_SprintPressed_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFCharacter_eventSprintPressed_Parms, Value), Z_Construct_UScriptStruct_FInputActionValue, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) }; // 3592307271
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFFCharacter_SprintPressed_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFFCharacter_SprintPressed_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AFFCharacter_SprintPressed_Statics::PropPointers) < 2048);
// ********** End Function SprintPressed Property Definitions **************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFFCharacter_SprintPressed_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AFFCharacter, nullptr, "SprintPressed", 	Z_Construct_UFunction_AFFCharacter_SprintPressed_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_AFFCharacter_SprintPressed_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_AFFCharacter_SprintPressed_Statics::FFCharacter_eventSprintPressed_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00440401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AFFCharacter_SprintPressed_Statics::Function_MetaDataParams), Z_Construct_UFunction_AFFCharacter_SprintPressed_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AFFCharacter_SprintPressed_Statics::FFCharacter_eventSprintPressed_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AFFCharacter_SprintPressed()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFFCharacter_SprintPressed_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AFFCharacter::execSprintPressed)
{
	P_GET_STRUCT_REF(FInputActionValue,Z_Param_Out_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SprintPressed(Z_Param_Out_Value);
	P_NATIVE_END;
}
// ********** End Class AFFCharacter Function SprintPressed ****************************************

// ********** Begin Class AFFCharacter *************************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_AFFCharacter;
UClass* AFFCharacter::GetPrivateStaticClass()
{
	using TClass = AFFCharacter;
	if (!Z_Registration_Info_UClass_AFFCharacter.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("FFCharacter"),
			Z_Registration_Info_UClass_AFFCharacter.InnerSingleton,
			StaticRegisterNativesAFFCharacter,
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
	return Z_Registration_Info_UClass_AFFCharacter.InnerSingleton;
}
UClass* Z_Construct_UClass_AFFCharacter_NoRegister()
{
	return AFFCharacter::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AFFCharacter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Character/FFCharacter.h" },
		{ "ModuleRelativePath", "Public/Character/FFCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Camera_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\n//Components\n//\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Character/FFCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Components" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CameraArm_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Character/FFCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MetahumanBody_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Character/FFCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MovementComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Character/FFCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WalkSpeed_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/Character/FFCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SprintSpeed_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/Character/FFCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SneakSpeed_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/Character/FFCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LookAction_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/Character/FFCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MoveAction_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/Character/FFCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_JumpAction_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/Character/FFCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SprintAction_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/Character/FFCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SneakAction_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/Character/FFCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InteractAction_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/Character/FFCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VehicleInteractAction_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/Character/FFCharacter.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class AFFCharacter constinit property declarations *****************************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Camera;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CameraArm;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MetahumanBody;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MovementComponent;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_WalkSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SprintSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SneakSpeed;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LookAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MoveAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_JumpAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SprintAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SneakAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InteractAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_VehicleInteractAction;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class AFFCharacter constinit property declarations *******************************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("FFLook"), .Pointer = &AFFCharacter::execFFLook },
		{ .NameUTF8 = UTF8TEXT("FFMove"), .Pointer = &AFFCharacter::execFFMove },
		{ .NameUTF8 = UTF8TEXT("JumpPressed"), .Pointer = &AFFCharacter::execJumpPressed },
		{ .NameUTF8 = UTF8TEXT("SneakPressed"), .Pointer = &AFFCharacter::execSneakPressed },
		{ .NameUTF8 = UTF8TEXT("SprintPressed"), .Pointer = &AFFCharacter::execSprintPressed },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AFFCharacter_FFLook, "FFLook" }, // 3979967521
		{ &Z_Construct_UFunction_AFFCharacter_FFMove, "FFMove" }, // 987413064
		{ &Z_Construct_UFunction_AFFCharacter_JumpPressed, "JumpPressed" }, // 1156329996
		{ &Z_Construct_UFunction_AFFCharacter_SneakPressed, "SneakPressed" }, // 2935902147
		{ &Z_Construct_UFunction_AFFCharacter_SprintPressed, "SprintPressed" }, // 2241687653
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFFCharacter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_AFFCharacter_Statics

// ********** Begin Class AFFCharacter Property Definitions ****************************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFFCharacter_Statics::NewProp_Camera = { "Camera", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFFCharacter, Camera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Camera_MetaData), NewProp_Camera_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFFCharacter_Statics::NewProp_CameraArm = { "CameraArm", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFFCharacter, CameraArm), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CameraArm_MetaData), NewProp_CameraArm_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFFCharacter_Statics::NewProp_MetahumanBody = { "MetahumanBody", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFFCharacter, MetahumanBody), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MetahumanBody_MetaData), NewProp_MetahumanBody_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFFCharacter_Statics::NewProp_MovementComponent = { "MovementComponent", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFFCharacter, MovementComponent), Z_Construct_UClass_UCharacterMovementComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MovementComponent_MetaData), NewProp_MovementComponent_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFFCharacter_Statics::NewProp_WalkSpeed = { "WalkSpeed", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFFCharacter, WalkSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WalkSpeed_MetaData), NewProp_WalkSpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFFCharacter_Statics::NewProp_SprintSpeed = { "SprintSpeed", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFFCharacter, SprintSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SprintSpeed_MetaData), NewProp_SprintSpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFFCharacter_Statics::NewProp_SneakSpeed = { "SneakSpeed", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFFCharacter, SneakSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SneakSpeed_MetaData), NewProp_SneakSpeed_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFFCharacter_Statics::NewProp_LookAction = { "LookAction", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFFCharacter, LookAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LookAction_MetaData), NewProp_LookAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFFCharacter_Statics::NewProp_MoveAction = { "MoveAction", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFFCharacter, MoveAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MoveAction_MetaData), NewProp_MoveAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFFCharacter_Statics::NewProp_JumpAction = { "JumpAction", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFFCharacter, JumpAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_JumpAction_MetaData), NewProp_JumpAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFFCharacter_Statics::NewProp_SprintAction = { "SprintAction", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFFCharacter, SprintAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SprintAction_MetaData), NewProp_SprintAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFFCharacter_Statics::NewProp_SneakAction = { "SneakAction", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFFCharacter, SneakAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SneakAction_MetaData), NewProp_SneakAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFFCharacter_Statics::NewProp_InteractAction = { "InteractAction", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFFCharacter, InteractAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InteractAction_MetaData), NewProp_InteractAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFFCharacter_Statics::NewProp_VehicleInteractAction = { "VehicleInteractAction", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFFCharacter, VehicleInteractAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VehicleInteractAction_MetaData), NewProp_VehicleInteractAction_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFFCharacter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFFCharacter_Statics::NewProp_Camera,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFFCharacter_Statics::NewProp_CameraArm,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFFCharacter_Statics::NewProp_MetahumanBody,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFFCharacter_Statics::NewProp_MovementComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFFCharacter_Statics::NewProp_WalkSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFFCharacter_Statics::NewProp_SprintSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFFCharacter_Statics::NewProp_SneakSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFFCharacter_Statics::NewProp_LookAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFFCharacter_Statics::NewProp_MoveAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFFCharacter_Statics::NewProp_JumpAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFFCharacter_Statics::NewProp_SprintAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFFCharacter_Statics::NewProp_SneakAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFFCharacter_Statics::NewProp_InteractAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFFCharacter_Statics::NewProp_VehicleInteractAction,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AFFCharacter_Statics::PropPointers) < 2048);
// ********** End Class AFFCharacter Property Definitions ******************************************
UObject* (*const Z_Construct_UClass_AFFCharacter_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ACharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_FreelanceFelonsTwo,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AFFCharacter_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AFFCharacter_Statics::ClassParams = {
	&AFFCharacter::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AFFCharacter_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AFFCharacter_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFFCharacter_Statics::Class_MetaDataParams), Z_Construct_UClass_AFFCharacter_Statics::Class_MetaDataParams)
};
void AFFCharacter::StaticRegisterNativesAFFCharacter()
{
	UClass* Class = AFFCharacter::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_AFFCharacter_Statics::Funcs));
}
UClass* Z_Construct_UClass_AFFCharacter()
{
	if (!Z_Registration_Info_UClass_AFFCharacter.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AFFCharacter.OuterSingleton, Z_Construct_UClass_AFFCharacter_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AFFCharacter.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, AFFCharacter);
AFFCharacter::~AFFCharacter() {}
// ********** End Class AFFCharacter ***************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_FreelanceFelonsTwo_Source_FreelanceFelonsTwo_Public_Character_FFCharacter_h__Script_FreelanceFelonsTwo_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ELocomotionState_StaticEnum, TEXT("ELocomotionState"), &Z_Registration_Info_UEnum_ELocomotionState, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1495039854U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AFFCharacter, AFFCharacter::StaticClass, TEXT("AFFCharacter"), &Z_Registration_Info_UClass_AFFCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AFFCharacter), 80508974U) },
	};
}; // Z_CompiledInDeferFile_FID_FreelanceFelonsTwo_Source_FreelanceFelonsTwo_Public_Character_FFCharacter_h__Script_FreelanceFelonsTwo_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_FreelanceFelonsTwo_Source_FreelanceFelonsTwo_Public_Character_FFCharacter_h__Script_FreelanceFelonsTwo_4010739058{
	TEXT("/Script/FreelanceFelonsTwo"),
	Z_CompiledInDeferFile_FID_FreelanceFelonsTwo_Source_FreelanceFelonsTwo_Public_Character_FFCharacter_h__Script_FreelanceFelonsTwo_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_FreelanceFelonsTwo_Source_FreelanceFelonsTwo_Public_Character_FFCharacter_h__Script_FreelanceFelonsTwo_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_FreelanceFelonsTwo_Source_FreelanceFelonsTwo_Public_Character_FFCharacter_h__Script_FreelanceFelonsTwo_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_FreelanceFelonsTwo_Source_FreelanceFelonsTwo_Public_Character_FFCharacter_h__Script_FreelanceFelonsTwo_Statics::EnumInfo),
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS

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
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext_NoRegister();
ENHANCEDINPUT_API UScriptStruct* Z_Construct_UScriptStruct_FInputActionValue();
FREELANCEFELONSTWO_API UClass* Z_Construct_UClass_AFFCharacter();
FREELANCEFELONSTWO_API UClass* Z_Construct_UClass_AFFCharacter_NoRegister();
UPackage* Z_Construct_UPackage__Script_FreelanceFelonsTwo();
// ********** End Cross Module References **********************************************************

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

// ********** Begin Class AFFCharacter Function Look ***********************************************
struct Z_Construct_UFunction_AFFCharacter_Look_Statics
{
	struct FFCharacter_eventLook_Parms
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

// ********** Begin Function Look constinit property declarations **********************************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function Look constinit property declarations ************************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function Look Property Definitions *********************************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFFCharacter_Look_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFCharacter_eventLook_Parms, Value), Z_Construct_UScriptStruct_FInputActionValue, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) }; // 3592307271
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFFCharacter_Look_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFFCharacter_Look_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AFFCharacter_Look_Statics::PropPointers) < 2048);
// ********** End Function Look Property Definitions ***********************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFFCharacter_Look_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AFFCharacter, nullptr, "Look", 	Z_Construct_UFunction_AFFCharacter_Look_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_AFFCharacter_Look_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_AFFCharacter_Look_Statics::FFCharacter_eventLook_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00440401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AFFCharacter_Look_Statics::Function_MetaDataParams), Z_Construct_UFunction_AFFCharacter_Look_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AFFCharacter_Look_Statics::FFCharacter_eventLook_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AFFCharacter_Look()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFFCharacter_Look_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AFFCharacter::execLook)
{
	P_GET_STRUCT_REF(FInputActionValue,Z_Param_Out_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Look(Z_Param_Out_Value);
	P_NATIVE_END;
}
// ********** End Class AFFCharacter Function Look *************************************************

// ********** Begin Class AFFCharacter Function Move ***********************************************
struct Z_Construct_UFunction_AFFCharacter_Move_Statics
{
	struct FFCharacter_eventMove_Parms
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

// ********** Begin Function Move constinit property declarations **********************************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function Move constinit property declarations ************************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function Move Property Definitions *********************************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFFCharacter_Move_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFCharacter_eventMove_Parms, Value), Z_Construct_UScriptStruct_FInputActionValue, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) }; // 3592307271
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFFCharacter_Move_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFFCharacter_Move_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AFFCharacter_Move_Statics::PropPointers) < 2048);
// ********** End Function Move Property Definitions ***********************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFFCharacter_Move_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AFFCharacter, nullptr, "Move", 	Z_Construct_UFunction_AFFCharacter_Move_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_AFFCharacter_Move_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_AFFCharacter_Move_Statics::FFCharacter_eventMove_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00440401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AFFCharacter_Move_Statics::Function_MetaDataParams), Z_Construct_UFunction_AFFCharacter_Move_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AFFCharacter_Move_Statics::FFCharacter_eventMove_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AFFCharacter_Move()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFFCharacter_Move_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AFFCharacter::execMove)
{
	P_GET_STRUCT_REF(FInputActionValue,Z_Param_Out_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Move(Z_Param_Out_Value);
	P_NATIVE_END;
}
// ********** End Class AFFCharacter Function Move *************************************************

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
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InputMapping_MetaData[] = {
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
#endif // WITH_METADATA

// ********** Begin Class AFFCharacter constinit property declarations *****************************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InputMapping;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LookAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MoveAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_JumpAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SprintAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SneakAction;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class AFFCharacter constinit property declarations *******************************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("JumpPressed"), .Pointer = &AFFCharacter::execJumpPressed },
		{ .NameUTF8 = UTF8TEXT("Look"), .Pointer = &AFFCharacter::execLook },
		{ .NameUTF8 = UTF8TEXT("Move"), .Pointer = &AFFCharacter::execMove },
		{ .NameUTF8 = UTF8TEXT("SneakPressed"), .Pointer = &AFFCharacter::execSneakPressed },
		{ .NameUTF8 = UTF8TEXT("SprintPressed"), .Pointer = &AFFCharacter::execSprintPressed },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AFFCharacter_JumpPressed, "JumpPressed" }, // 1156329996
		{ &Z_Construct_UFunction_AFFCharacter_Look, "Look" }, // 1272431025
		{ &Z_Construct_UFunction_AFFCharacter_Move, "Move" }, // 404517745
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
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFFCharacter_Statics::NewProp_InputMapping = { "InputMapping", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFFCharacter, InputMapping), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InputMapping_MetaData), NewProp_InputMapping_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFFCharacter_Statics::NewProp_LookAction = { "LookAction", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFFCharacter, LookAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LookAction_MetaData), NewProp_LookAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFFCharacter_Statics::NewProp_MoveAction = { "MoveAction", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFFCharacter, MoveAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MoveAction_MetaData), NewProp_MoveAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFFCharacter_Statics::NewProp_JumpAction = { "JumpAction", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFFCharacter, JumpAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_JumpAction_MetaData), NewProp_JumpAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFFCharacter_Statics::NewProp_SprintAction = { "SprintAction", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFFCharacter, SprintAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SprintAction_MetaData), NewProp_SprintAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFFCharacter_Statics::NewProp_SneakAction = { "SneakAction", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFFCharacter, SneakAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SneakAction_MetaData), NewProp_SneakAction_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFFCharacter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFFCharacter_Statics::NewProp_InputMapping,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFFCharacter_Statics::NewProp_LookAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFFCharacter_Statics::NewProp_MoveAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFFCharacter_Statics::NewProp_JumpAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFFCharacter_Statics::NewProp_SprintAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFFCharacter_Statics::NewProp_SneakAction,
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
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AFFCharacter, AFFCharacter::StaticClass, TEXT("AFFCharacter"), &Z_Registration_Info_UClass_AFFCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AFFCharacter), 650266113U) },
	};
}; // Z_CompiledInDeferFile_FID_FreelanceFelonsTwo_Source_FreelanceFelonsTwo_Public_Character_FFCharacter_h__Script_FreelanceFelonsTwo_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_FreelanceFelonsTwo_Source_FreelanceFelonsTwo_Public_Character_FFCharacter_h__Script_FreelanceFelonsTwo_543365279{
	TEXT("/Script/FreelanceFelonsTwo"),
	Z_CompiledInDeferFile_FID_FreelanceFelonsTwo_Source_FreelanceFelonsTwo_Public_Character_FFCharacter_h__Script_FreelanceFelonsTwo_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_FreelanceFelonsTwo_Source_FreelanceFelonsTwo_Public_Character_FFCharacter_h__Script_FreelanceFelonsTwo_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS

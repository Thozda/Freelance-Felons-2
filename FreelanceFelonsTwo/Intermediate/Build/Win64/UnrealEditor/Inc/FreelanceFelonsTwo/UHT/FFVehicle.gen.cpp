// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Vehicle/FFVehicle.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeFFVehicle() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_APawn();
ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
FREELANCEFELONSTWO_API UClass* Z_Construct_UClass_AFFVehicle();
FREELANCEFELONSTWO_API UClass* Z_Construct_UClass_AFFVehicle_NoRegister();
FREELANCEFELONSTWO_API UClass* Z_Construct_UClass_UInteractInterface_NoRegister();
FREELANCEFELONSTWO_API UEnum* Z_Construct_UEnum_FreelanceFelonsTwo_EDoorSide();
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

// ********** Begin Enum EDoorSide *****************************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EDoorSide;
static UEnum* EDoorSide_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EDoorSide.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EDoorSide.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_FreelanceFelonsTwo_EDoorSide, (UObject*)Z_Construct_UPackage__Script_FreelanceFelonsTwo(), TEXT("EDoorSide"));
	}
	return Z_Registration_Info_UEnum_EDoorSide.OuterSingleton;
}
template<> FREELANCEFELONSTWO_NON_ATTRIBUTED_API UEnum* StaticEnum<EDoorSide>()
{
	return EDoorSide_StaticEnum();
}
struct Z_Construct_UEnum_FreelanceFelonsTwo_EDoorSide_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "EDS_LeftSide.Name", "EDoorSide::EDS_LeftSide" },
		{ "EDS_MAX.Name", "EDoorSide::EDS_MAX" },
		{ "EDS_RightSide.Name", "EDoorSide::EDS_RightSide" },
		{ "ModuleRelativePath", "Public/Vehicle/FFVehicle.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EDoorSide::EDS_LeftSide", (int64)EDoorSide::EDS_LeftSide },
		{ "EDoorSide::EDS_RightSide", (int64)EDoorSide::EDS_RightSide },
		{ "EDoorSide::EDS_MAX", (int64)EDoorSide::EDS_MAX },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_FreelanceFelonsTwo_EDoorSide_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_FreelanceFelonsTwo_EDoorSide_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_FreelanceFelonsTwo,
	nullptr,
	"EDoorSide",
	"EDoorSide",
	Z_Construct_UEnum_FreelanceFelonsTwo_EDoorSide_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_FreelanceFelonsTwo_EDoorSide_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_FreelanceFelonsTwo_EDoorSide_Statics::Enum_MetaDataParams), Z_Construct_UEnum_FreelanceFelonsTwo_EDoorSide_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_FreelanceFelonsTwo_EDoorSide()
{
	if (!Z_Registration_Info_UEnum_EDoorSide.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EDoorSide.InnerSingleton, Z_Construct_UEnum_FreelanceFelonsTwo_EDoorSide_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EDoorSide.InnerSingleton;
}
// ********** End Enum EDoorSide *******************************************************************

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
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InstigatorCharacter_MetaData[] = {
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
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LeftDoor_MetaData[] = {
		{ "Category", "FFVehicle" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Vehicle/FFVehicle.h" },
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
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FrontLeftWheel_MetaData[] = {
		{ "Category", "FFVehicle" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Vehicle/FFVehicle.h" },
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
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Doors_MetaData[] = {
		{ "ModuleRelativePath", "Public/Vehicle/FFVehicle.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class AFFVehicle constinit property declarations *******************************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InstigatorCharacter;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Root;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Camera;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CameraArm;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Body;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LeftDoor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LeftDoorTracePoint;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RightDoor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RightDoorTracePoint;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FrontLeftWheel;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FrontRightWheel;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RearLeftWheel;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RearRightWheel;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Doors_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Doors;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class AFFVehicle constinit property declarations *********************************
	static UObject* (*const DependentSingletons[])();
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFFVehicle>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_AFFVehicle_Statics

// ********** Begin Class AFFVehicle Property Definitions ******************************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFFVehicle_Statics::NewProp_InstigatorCharacter = { "InstigatorCharacter", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFFVehicle, InstigatorCharacter), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InstigatorCharacter_MetaData), NewProp_InstigatorCharacter_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFFVehicle_Statics::NewProp_Root = { "Root", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFFVehicle, Root), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Root_MetaData), NewProp_Root_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFFVehicle_Statics::NewProp_Camera = { "Camera", nullptr, (EPropertyFlags)0x00400000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFFVehicle, Camera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Camera_MetaData), NewProp_Camera_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFFVehicle_Statics::NewProp_CameraArm = { "CameraArm", nullptr, (EPropertyFlags)0x00400000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFFVehicle, CameraArm), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CameraArm_MetaData), NewProp_CameraArm_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFFVehicle_Statics::NewProp_Body = { "Body", nullptr, (EPropertyFlags)0x00400000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFFVehicle, Body), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Body_MetaData), NewProp_Body_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFFVehicle_Statics::NewProp_LeftDoor = { "LeftDoor", nullptr, (EPropertyFlags)0x00400000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFFVehicle, LeftDoor), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LeftDoor_MetaData), NewProp_LeftDoor_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFFVehicle_Statics::NewProp_LeftDoorTracePoint = { "LeftDoorTracePoint", nullptr, (EPropertyFlags)0x00400000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFFVehicle, LeftDoorTracePoint), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LeftDoorTracePoint_MetaData), NewProp_LeftDoorTracePoint_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFFVehicle_Statics::NewProp_RightDoor = { "RightDoor", nullptr, (EPropertyFlags)0x00400000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFFVehicle, RightDoor), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RightDoor_MetaData), NewProp_RightDoor_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFFVehicle_Statics::NewProp_RightDoorTracePoint = { "RightDoorTracePoint", nullptr, (EPropertyFlags)0x00400000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFFVehicle, RightDoorTracePoint), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RightDoorTracePoint_MetaData), NewProp_RightDoorTracePoint_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFFVehicle_Statics::NewProp_FrontLeftWheel = { "FrontLeftWheel", nullptr, (EPropertyFlags)0x00400000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFFVehicle, FrontLeftWheel), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FrontLeftWheel_MetaData), NewProp_FrontLeftWheel_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFFVehicle_Statics::NewProp_FrontRightWheel = { "FrontRightWheel", nullptr, (EPropertyFlags)0x00400000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFFVehicle, FrontRightWheel), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FrontRightWheel_MetaData), NewProp_FrontRightWheel_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFFVehicle_Statics::NewProp_RearLeftWheel = { "RearLeftWheel", nullptr, (EPropertyFlags)0x00400000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFFVehicle, RearLeftWheel), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RearLeftWheel_MetaData), NewProp_RearLeftWheel_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFFVehicle_Statics::NewProp_RearRightWheel = { "RearRightWheel", nullptr, (EPropertyFlags)0x00400000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFFVehicle, RearRightWheel), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RearRightWheel_MetaData), NewProp_RearRightWheel_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AFFVehicle_Statics::NewProp_Doors_Inner = { "Doors", nullptr, (EPropertyFlags)0x0000008000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FDoorData, METADATA_PARAMS(0, nullptr) }; // 1016745551
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AFFVehicle_Statics::NewProp_Doors = { "Doors", nullptr, (EPropertyFlags)0x0040008000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFFVehicle, Doors), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Doors_MetaData), NewProp_Doors_MetaData) }; // 1016745551
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFFVehicle_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFFVehicle_Statics::NewProp_InstigatorCharacter,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFFVehicle_Statics::NewProp_Root,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFFVehicle_Statics::NewProp_Camera,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFFVehicle_Statics::NewProp_CameraArm,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFFVehicle_Statics::NewProp_Body,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFFVehicle_Statics::NewProp_LeftDoor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFFVehicle_Statics::NewProp_LeftDoorTracePoint,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFFVehicle_Statics::NewProp_RightDoor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFFVehicle_Statics::NewProp_RightDoorTracePoint,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFFVehicle_Statics::NewProp_FrontLeftWheel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFFVehicle_Statics::NewProp_FrontRightWheel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFFVehicle_Statics::NewProp_RearLeftWheel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFFVehicle_Statics::NewProp_RearRightWheel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFFVehicle_Statics::NewProp_Doors_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFFVehicle_Statics::NewProp_Doors,
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
	nullptr,
	Z_Construct_UClass_AFFVehicle_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AFFVehicle_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFFVehicle_Statics::Class_MetaDataParams), Z_Construct_UClass_AFFVehicle_Statics::Class_MetaDataParams)
};
void AFFVehicle::StaticRegisterNativesAFFVehicle()
{
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
		{ EDoorSide_StaticEnum, TEXT("EDoorSide"), &Z_Registration_Info_UEnum_EDoorSide, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 429163426U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FDoorData::StaticStruct, Z_Construct_UScriptStruct_FDoorData_Statics::NewStructOps, TEXT("DoorData"),&Z_Registration_Info_UScriptStruct_FDoorData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDoorData), 1016745551U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AFFVehicle, AFFVehicle::StaticClass, TEXT("AFFVehicle"), &Z_Registration_Info_UClass_AFFVehicle, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AFFVehicle), 2356831407U) },
	};
}; // Z_CompiledInDeferFile_FID_FreelanceFelonsTwo_Source_FreelanceFelonsTwo_Public_Vehicle_FFVehicle_h__Script_FreelanceFelonsTwo_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_FreelanceFelonsTwo_Source_FreelanceFelonsTwo_Public_Vehicle_FFVehicle_h__Script_FreelanceFelonsTwo_2736505552{
	TEXT("/Script/FreelanceFelonsTwo"),
	Z_CompiledInDeferFile_FID_FreelanceFelonsTwo_Source_FreelanceFelonsTwo_Public_Vehicle_FFVehicle_h__Script_FreelanceFelonsTwo_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_FreelanceFelonsTwo_Source_FreelanceFelonsTwo_Public_Vehicle_FFVehicle_h__Script_FreelanceFelonsTwo_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_FreelanceFelonsTwo_Source_FreelanceFelonsTwo_Public_Vehicle_FFVehicle_h__Script_FreelanceFelonsTwo_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_FreelanceFelonsTwo_Source_FreelanceFelonsTwo_Public_Vehicle_FFVehicle_h__Script_FreelanceFelonsTwo_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_FreelanceFelonsTwo_Source_FreelanceFelonsTwo_Public_Vehicle_FFVehicle_h__Script_FreelanceFelonsTwo_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_FreelanceFelonsTwo_Source_FreelanceFelonsTwo_Public_Vehicle_FFVehicle_h__Script_FreelanceFelonsTwo_Statics::EnumInfo),
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS

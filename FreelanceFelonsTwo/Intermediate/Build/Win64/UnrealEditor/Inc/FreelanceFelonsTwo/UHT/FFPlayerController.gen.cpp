// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Controller/FFPlayerController.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeFFPlayerController() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_APlayerController();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext_NoRegister();
FREELANCEFELONSTWO_API UClass* Z_Construct_UClass_AFFPlayerController();
FREELANCEFELONSTWO_API UClass* Z_Construct_UClass_AFFPlayerController_NoRegister();
UPackage* Z_Construct_UPackage__Script_FreelanceFelonsTwo();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AFFPlayerController ******************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_AFFPlayerController;
UClass* AFFPlayerController::GetPrivateStaticClass()
{
	using TClass = AFFPlayerController;
	if (!Z_Registration_Info_UClass_AFFPlayerController.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("FFPlayerController"),
			Z_Registration_Info_UClass_AFFPlayerController.InnerSingleton,
			StaticRegisterNativesAFFPlayerController,
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
	return Z_Registration_Info_UClass_AFFPlayerController.InnerSingleton;
}
UClass* Z_Construct_UClass_AFFPlayerController_NoRegister()
{
	return AFFPlayerController::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AFFPlayerController_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "Controller/FFPlayerController.h" },
		{ "ModuleRelativePath", "Public/Controller/FFPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MouseSensitivity_MetaData[] = {
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\n//Input\n//\n" },
#endif
		{ "ModuleRelativePath", "Public/Controller/FFPlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Input" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BaseInputContext_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/Controller/FFPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WalkInputContext_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/Controller/FFPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VehicleInputContext_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/Controller/FFPlayerController.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class AFFPlayerController constinit property declarations **********************
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MouseSensitivity;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BaseInputContext;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WalkInputContext;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_VehicleInputContext;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class AFFPlayerController constinit property declarations ************************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFFPlayerController>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_AFFPlayerController_Statics

// ********** Begin Class AFFPlayerController Property Definitions *********************************
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFFPlayerController_Statics::NewProp_MouseSensitivity = { "MouseSensitivity", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFFPlayerController, MouseSensitivity), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MouseSensitivity_MetaData), NewProp_MouseSensitivity_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFFPlayerController_Statics::NewProp_BaseInputContext = { "BaseInputContext", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFFPlayerController, BaseInputContext), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BaseInputContext_MetaData), NewProp_BaseInputContext_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFFPlayerController_Statics::NewProp_WalkInputContext = { "WalkInputContext", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFFPlayerController, WalkInputContext), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WalkInputContext_MetaData), NewProp_WalkInputContext_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFFPlayerController_Statics::NewProp_VehicleInputContext = { "VehicleInputContext", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFFPlayerController, VehicleInputContext), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VehicleInputContext_MetaData), NewProp_VehicleInputContext_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFFPlayerController_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFFPlayerController_Statics::NewProp_MouseSensitivity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFFPlayerController_Statics::NewProp_BaseInputContext,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFFPlayerController_Statics::NewProp_WalkInputContext,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFFPlayerController_Statics::NewProp_VehicleInputContext,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AFFPlayerController_Statics::PropPointers) < 2048);
// ********** End Class AFFPlayerController Property Definitions ***********************************
UObject* (*const Z_Construct_UClass_AFFPlayerController_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APlayerController,
	(UObject* (*)())Z_Construct_UPackage__Script_FreelanceFelonsTwo,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AFFPlayerController_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AFFPlayerController_Statics::ClassParams = {
	&AFFPlayerController::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AFFPlayerController_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AFFPlayerController_Statics::PropPointers),
	0,
	0x009002A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFFPlayerController_Statics::Class_MetaDataParams), Z_Construct_UClass_AFFPlayerController_Statics::Class_MetaDataParams)
};
void AFFPlayerController::StaticRegisterNativesAFFPlayerController()
{
}
UClass* Z_Construct_UClass_AFFPlayerController()
{
	if (!Z_Registration_Info_UClass_AFFPlayerController.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AFFPlayerController.OuterSingleton, Z_Construct_UClass_AFFPlayerController_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AFFPlayerController.OuterSingleton;
}
AFFPlayerController::AFFPlayerController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, AFFPlayerController);
AFFPlayerController::~AFFPlayerController() {}
// ********** End Class AFFPlayerController ********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_FreelanceFelonsTwo_Source_FreelanceFelonsTwo_Public_Controller_FFPlayerController_h__Script_FreelanceFelonsTwo_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AFFPlayerController, AFFPlayerController::StaticClass, TEXT("AFFPlayerController"), &Z_Registration_Info_UClass_AFFPlayerController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AFFPlayerController), 2171943276U) },
	};
}; // Z_CompiledInDeferFile_FID_FreelanceFelonsTwo_Source_FreelanceFelonsTwo_Public_Controller_FFPlayerController_h__Script_FreelanceFelonsTwo_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_FreelanceFelonsTwo_Source_FreelanceFelonsTwo_Public_Controller_FFPlayerController_h__Script_FreelanceFelonsTwo_3774150521{
	TEXT("/Script/FreelanceFelonsTwo"),
	Z_CompiledInDeferFile_FID_FreelanceFelonsTwo_Source_FreelanceFelonsTwo_Public_Controller_FFPlayerController_h__Script_FreelanceFelonsTwo_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_FreelanceFelonsTwo_Source_FreelanceFelonsTwo_Public_Controller_FFPlayerController_h__Script_FreelanceFelonsTwo_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS

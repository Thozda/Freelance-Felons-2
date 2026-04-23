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
#endif // WITH_METADATA

// ********** Begin Class AFFPlayerController constinit property declarations **********************
// ********** End Class AFFPlayerController constinit property declarations ************************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFFPlayerController>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_AFFPlayerController_Statics
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
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
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
		{ Z_Construct_UClass_AFFPlayerController, AFFPlayerController::StaticClass, TEXT("AFFPlayerController"), &Z_Registration_Info_UClass_AFFPlayerController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AFFPlayerController), 3359814091U) },
	};
}; // Z_CompiledInDeferFile_FID_FreelanceFelonsTwo_Source_FreelanceFelonsTwo_Public_Controller_FFPlayerController_h__Script_FreelanceFelonsTwo_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_FreelanceFelonsTwo_Source_FreelanceFelonsTwo_Public_Controller_FFPlayerController_h__Script_FreelanceFelonsTwo_4091180232{
	TEXT("/Script/FreelanceFelonsTwo"),
	Z_CompiledInDeferFile_FID_FreelanceFelonsTwo_Source_FreelanceFelonsTwo_Public_Controller_FFPlayerController_h__Script_FreelanceFelonsTwo_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_FreelanceFelonsTwo_Source_FreelanceFelonsTwo_Public_Controller_FFPlayerController_h__Script_FreelanceFelonsTwo_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS

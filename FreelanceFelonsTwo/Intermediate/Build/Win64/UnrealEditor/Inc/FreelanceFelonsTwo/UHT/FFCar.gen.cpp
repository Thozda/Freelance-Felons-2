// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Vehicle/FFCar.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeFFCar() {}

// ********** Begin Cross Module References ********************************************************
FREELANCEFELONSTWO_API UClass* Z_Construct_UClass_AFFCar();
FREELANCEFELONSTWO_API UClass* Z_Construct_UClass_AFFCar_NoRegister();
FREELANCEFELONSTWO_API UClass* Z_Construct_UClass_AFFVehicle();
UPackage* Z_Construct_UPackage__Script_FreelanceFelonsTwo();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AFFCar *******************************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_AFFCar;
UClass* AFFCar::GetPrivateStaticClass()
{
	using TClass = AFFCar;
	if (!Z_Registration_Info_UClass_AFFCar.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("FFCar"),
			Z_Registration_Info_UClass_AFFCar.InnerSingleton,
			StaticRegisterNativesAFFCar,
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
	return Z_Registration_Info_UClass_AFFCar.InnerSingleton;
}
UClass* Z_Construct_UClass_AFFCar_NoRegister()
{
	return AFFCar::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AFFCar_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Vehicle/FFCar.h" },
		{ "ModuleRelativePath", "Public/Vehicle/FFCar.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class AFFCar constinit property declarations ***********************************
// ********** End Class AFFCar constinit property declarations *************************************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFFCar>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_AFFCar_Statics
UObject* (*const Z_Construct_UClass_AFFCar_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AFFVehicle,
	(UObject* (*)())Z_Construct_UPackage__Script_FreelanceFelonsTwo,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AFFCar_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AFFCar_Statics::ClassParams = {
	&AFFCar::StaticClass,
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
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFFCar_Statics::Class_MetaDataParams), Z_Construct_UClass_AFFCar_Statics::Class_MetaDataParams)
};
void AFFCar::StaticRegisterNativesAFFCar()
{
}
UClass* Z_Construct_UClass_AFFCar()
{
	if (!Z_Registration_Info_UClass_AFFCar.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AFFCar.OuterSingleton, Z_Construct_UClass_AFFCar_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AFFCar.OuterSingleton;
}
AFFCar::AFFCar() {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, AFFCar);
AFFCar::~AFFCar() {}
// ********** End Class AFFCar *********************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_FreelanceFelonsTwo_Source_FreelanceFelonsTwo_Public_Vehicle_FFCar_h__Script_FreelanceFelonsTwo_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AFFCar, AFFCar::StaticClass, TEXT("AFFCar"), &Z_Registration_Info_UClass_AFFCar, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AFFCar), 3895819028U) },
	};
}; // Z_CompiledInDeferFile_FID_FreelanceFelonsTwo_Source_FreelanceFelonsTwo_Public_Vehicle_FFCar_h__Script_FreelanceFelonsTwo_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_FreelanceFelonsTwo_Source_FreelanceFelonsTwo_Public_Vehicle_FFCar_h__Script_FreelanceFelonsTwo_2997414893{
	TEXT("/Script/FreelanceFelonsTwo"),
	Z_CompiledInDeferFile_FID_FreelanceFelonsTwo_Source_FreelanceFelonsTwo_Public_Vehicle_FFCar_h__Script_FreelanceFelonsTwo_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_FreelanceFelonsTwo_Source_FreelanceFelonsTwo_Public_Vehicle_FFCar_h__Script_FreelanceFelonsTwo_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS

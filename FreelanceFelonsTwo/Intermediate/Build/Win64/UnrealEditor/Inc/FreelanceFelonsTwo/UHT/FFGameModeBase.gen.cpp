// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameMode/FFGameModeBase.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeFFGameModeBase() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
FREELANCEFELONSTWO_API UClass* Z_Construct_UClass_AFFGameModeBase();
FREELANCEFELONSTWO_API UClass* Z_Construct_UClass_AFFGameModeBase_NoRegister();
UPackage* Z_Construct_UPackage__Script_FreelanceFelonsTwo();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AFFGameModeBase **********************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_AFFGameModeBase;
UClass* AFFGameModeBase::GetPrivateStaticClass()
{
	using TClass = AFFGameModeBase;
	if (!Z_Registration_Info_UClass_AFFGameModeBase.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("FFGameModeBase"),
			Z_Registration_Info_UClass_AFFGameModeBase.InnerSingleton,
			StaticRegisterNativesAFFGameModeBase,
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
	return Z_Registration_Info_UClass_AFFGameModeBase.InnerSingleton;
}
UClass* Z_Construct_UClass_AFFGameModeBase_NoRegister()
{
	return AFFGameModeBase::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AFFGameModeBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "GameMode/FFGameModeBase.h" },
		{ "ModuleRelativePath", "Public/GameMode/FFGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA

// ********** Begin Class AFFGameModeBase constinit property declarations **************************
// ********** End Class AFFGameModeBase constinit property declarations ****************************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFFGameModeBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_AFFGameModeBase_Statics
UObject* (*const Z_Construct_UClass_AFFGameModeBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_FreelanceFelonsTwo,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AFFGameModeBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AFFGameModeBase_Statics::ClassParams = {
	&AFFGameModeBase::StaticClass,
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
	0x009002ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFFGameModeBase_Statics::Class_MetaDataParams), Z_Construct_UClass_AFFGameModeBase_Statics::Class_MetaDataParams)
};
void AFFGameModeBase::StaticRegisterNativesAFFGameModeBase()
{
}
UClass* Z_Construct_UClass_AFFGameModeBase()
{
	if (!Z_Registration_Info_UClass_AFFGameModeBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AFFGameModeBase.OuterSingleton, Z_Construct_UClass_AFFGameModeBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AFFGameModeBase.OuterSingleton;
}
AFFGameModeBase::AFFGameModeBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, AFFGameModeBase);
AFFGameModeBase::~AFFGameModeBase() {}
// ********** End Class AFFGameModeBase ************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_FreelanceFelonsTwo_Source_FreelanceFelonsTwo_Public_GameMode_FFGameModeBase_h__Script_FreelanceFelonsTwo_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AFFGameModeBase, AFFGameModeBase::StaticClass, TEXT("AFFGameModeBase"), &Z_Registration_Info_UClass_AFFGameModeBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AFFGameModeBase), 1717363518U) },
	};
}; // Z_CompiledInDeferFile_FID_FreelanceFelonsTwo_Source_FreelanceFelonsTwo_Public_GameMode_FFGameModeBase_h__Script_FreelanceFelonsTwo_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_FreelanceFelonsTwo_Source_FreelanceFelonsTwo_Public_GameMode_FFGameModeBase_h__Script_FreelanceFelonsTwo_1743190931{
	TEXT("/Script/FreelanceFelonsTwo"),
	Z_CompiledInDeferFile_FID_FreelanceFelonsTwo_Source_FreelanceFelonsTwo_Public_GameMode_FFGameModeBase_h__Script_FreelanceFelonsTwo_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_FreelanceFelonsTwo_Source_FreelanceFelonsTwo_Public_GameMode_FFGameModeBase_h__Script_FreelanceFelonsTwo_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS

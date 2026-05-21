// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Interface/InteractInterface.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeInteractInterface() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
FREELANCEFELONSTWO_API UClass* Z_Construct_UClass_UInteractInterface();
FREELANCEFELONSTWO_API UClass* Z_Construct_UClass_UInteractInterface_NoRegister();
UPackage* Z_Construct_UPackage__Script_FreelanceFelonsTwo();
// ********** End Cross Module References **********************************************************

// ********** Begin Interface UInteractInterface ***************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UInteractInterface;
UClass* UInteractInterface::GetPrivateStaticClass()
{
	using TClass = UInteractInterface;
	if (!Z_Registration_Info_UClass_UInteractInterface.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("InteractInterface"),
			Z_Registration_Info_UClass_UInteractInterface.InnerSingleton,
			StaticRegisterNativesUInteractInterface,
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
	return Z_Registration_Info_UClass_UInteractInterface.InnerSingleton;
}
UClass* Z_Construct_UClass_UInteractInterface_NoRegister()
{
	return UInteractInterface::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UInteractInterface_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Interface/InteractInterface.h" },
	};
#endif // WITH_METADATA

// ********** Begin Interface UInteractInterface constinit property declarations *******************
// ********** End Interface UInteractInterface constinit property declarations *********************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IInteractInterface>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UInteractInterface_Statics
UObject* (*const Z_Construct_UClass_UInteractInterface_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_FreelanceFelonsTwo,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInteractInterface_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UInteractInterface_Statics::ClassParams = {
	&UInteractInterface::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x000840A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInteractInterface_Statics::Class_MetaDataParams), Z_Construct_UClass_UInteractInterface_Statics::Class_MetaDataParams)
};
void UInteractInterface::StaticRegisterNativesUInteractInterface()
{
}
UClass* Z_Construct_UClass_UInteractInterface()
{
	if (!Z_Registration_Info_UClass_UInteractInterface.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInteractInterface.OuterSingleton, Z_Construct_UClass_UInteractInterface_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UInteractInterface.OuterSingleton;
}
UInteractInterface::UInteractInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UInteractInterface);
// ********** End Interface UInteractInterface *****************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_FreelanceFelonsTwo_Source_FreelanceFelonsTwo_Public_Interface_InteractInterface_h__Script_FreelanceFelonsTwo_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UInteractInterface, UInteractInterface::StaticClass, TEXT("UInteractInterface"), &Z_Registration_Info_UClass_UInteractInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInteractInterface), 274582102U) },
	};
}; // Z_CompiledInDeferFile_FID_FreelanceFelonsTwo_Source_FreelanceFelonsTwo_Public_Interface_InteractInterface_h__Script_FreelanceFelonsTwo_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_FreelanceFelonsTwo_Source_FreelanceFelonsTwo_Public_Interface_InteractInterface_h__Script_FreelanceFelonsTwo_3139551305{
	TEXT("/Script/FreelanceFelonsTwo"),
	Z_CompiledInDeferFile_FID_FreelanceFelonsTwo_Source_FreelanceFelonsTwo_Public_Interface_InteractInterface_h__Script_FreelanceFelonsTwo_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_FreelanceFelonsTwo_Source_FreelanceFelonsTwo_Public_Interface_InteractInterface_h__Script_FreelanceFelonsTwo_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS

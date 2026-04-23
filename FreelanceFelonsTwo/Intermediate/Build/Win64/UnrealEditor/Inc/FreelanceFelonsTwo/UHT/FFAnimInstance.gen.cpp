// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Character/FFAnimInstance.h"
#include "Components/SkeletalMeshComponent.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeFFAnimInstance() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UAnimInstance();
FREELANCEFELONSTWO_API UClass* Z_Construct_UClass_AFFCharacter_NoRegister();
FREELANCEFELONSTWO_API UClass* Z_Construct_UClass_UFFAnimInstance();
FREELANCEFELONSTWO_API UClass* Z_Construct_UClass_UFFAnimInstance_NoRegister();
UPackage* Z_Construct_UPackage__Script_FreelanceFelonsTwo();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UFFAnimInstance **********************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UFFAnimInstance;
UClass* UFFAnimInstance::GetPrivateStaticClass()
{
	using TClass = UFFAnimInstance;
	if (!Z_Registration_Info_UClass_UFFAnimInstance.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("FFAnimInstance"),
			Z_Registration_Info_UClass_UFFAnimInstance.InnerSingleton,
			StaticRegisterNativesUFFAnimInstance,
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
	return Z_Registration_Info_UClass_UFFAnimInstance.InnerSingleton;
}
UClass* Z_Construct_UClass_UFFAnimInstance_NoRegister()
{
	return UFFAnimInstance::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UFFAnimInstance_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "AnimInstance" },
		{ "IncludePath", "Character/FFAnimInstance.h" },
		{ "ModuleRelativePath", "Public/Character/FFAnimInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Speed_MetaData[] = {
		{ "Category", "FFAnimInstance" },
		{ "ModuleRelativePath", "Public/Character/FFAnimInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IsSneaking_MetaData[] = {
		{ "Category", "FFAnimInstance" },
		{ "ModuleRelativePath", "Public/Character/FFAnimInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IsJumping_MetaData[] = {
		{ "Category", "FFAnimInstance" },
		{ "ModuleRelativePath", "Public/Character/FFAnimInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IsFalling_MetaData[] = {
		{ "Category", "FFAnimInstance" },
		{ "ModuleRelativePath", "Public/Character/FFAnimInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FFCharacter_MetaData[] = {
		{ "ModuleRelativePath", "Public/Character/FFAnimInstance.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UFFAnimInstance constinit property declarations **************************
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Speed;
	static void NewProp_IsSneaking_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_IsSneaking;
	static void NewProp_IsJumping_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_IsJumping;
	static void NewProp_IsFalling_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_IsFalling;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FFCharacter;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UFFAnimInstance constinit property declarations ****************************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFFAnimInstance>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UFFAnimInstance_Statics

// ********** Begin Class UFFAnimInstance Property Definitions *************************************
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFFAnimInstance_Statics::NewProp_Speed = { "Speed", nullptr, (EPropertyFlags)0x0020080000020015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFFAnimInstance, Speed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Speed_MetaData), NewProp_Speed_MetaData) };
void Z_Construct_UClass_UFFAnimInstance_Statics::NewProp_IsSneaking_SetBit(void* Obj)
{
	((UFFAnimInstance*)Obj)->IsSneaking = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFFAnimInstance_Statics::NewProp_IsSneaking = { "IsSneaking", nullptr, (EPropertyFlags)0x0020080000020015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UFFAnimInstance), &Z_Construct_UClass_UFFAnimInstance_Statics::NewProp_IsSneaking_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IsSneaking_MetaData), NewProp_IsSneaking_MetaData) };
void Z_Construct_UClass_UFFAnimInstance_Statics::NewProp_IsJumping_SetBit(void* Obj)
{
	((UFFAnimInstance*)Obj)->IsJumping = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFFAnimInstance_Statics::NewProp_IsJumping = { "IsJumping", nullptr, (EPropertyFlags)0x0020080000020015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UFFAnimInstance), &Z_Construct_UClass_UFFAnimInstance_Statics::NewProp_IsJumping_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IsJumping_MetaData), NewProp_IsJumping_MetaData) };
void Z_Construct_UClass_UFFAnimInstance_Statics::NewProp_IsFalling_SetBit(void* Obj)
{
	((UFFAnimInstance*)Obj)->IsFalling = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFFAnimInstance_Statics::NewProp_IsFalling = { "IsFalling", nullptr, (EPropertyFlags)0x0020080000020015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UFFAnimInstance), &Z_Construct_UClass_UFFAnimInstance_Statics::NewProp_IsFalling_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IsFalling_MetaData), NewProp_IsFalling_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFFAnimInstance_Statics::NewProp_FFCharacter = { "FFCharacter", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFFAnimInstance, FFCharacter), Z_Construct_UClass_AFFCharacter_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FFCharacter_MetaData), NewProp_FFCharacter_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFFAnimInstance_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFFAnimInstance_Statics::NewProp_Speed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFFAnimInstance_Statics::NewProp_IsSneaking,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFFAnimInstance_Statics::NewProp_IsJumping,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFFAnimInstance_Statics::NewProp_IsFalling,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFFAnimInstance_Statics::NewProp_FFCharacter,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFFAnimInstance_Statics::PropPointers) < 2048);
// ********** End Class UFFAnimInstance Property Definitions ***************************************
UObject* (*const Z_Construct_UClass_UFFAnimInstance_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAnimInstance,
	(UObject* (*)())Z_Construct_UPackage__Script_FreelanceFelonsTwo,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFFAnimInstance_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UFFAnimInstance_Statics::ClassParams = {
	&UFFAnimInstance::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UFFAnimInstance_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UFFAnimInstance_Statics::PropPointers),
	0,
	0x009000A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFFAnimInstance_Statics::Class_MetaDataParams), Z_Construct_UClass_UFFAnimInstance_Statics::Class_MetaDataParams)
};
void UFFAnimInstance::StaticRegisterNativesUFFAnimInstance()
{
}
UClass* Z_Construct_UClass_UFFAnimInstance()
{
	if (!Z_Registration_Info_UClass_UFFAnimInstance.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFFAnimInstance.OuterSingleton, Z_Construct_UClass_UFFAnimInstance_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UFFAnimInstance.OuterSingleton;
}
UFFAnimInstance::UFFAnimInstance(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UFFAnimInstance);
UFFAnimInstance::~UFFAnimInstance() {}
// ********** End Class UFFAnimInstance ************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_FreelanceFelonsTwo_Source_FreelanceFelonsTwo_Public_Character_FFAnimInstance_h__Script_FreelanceFelonsTwo_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UFFAnimInstance, UFFAnimInstance::StaticClass, TEXT("UFFAnimInstance"), &Z_Registration_Info_UClass_UFFAnimInstance, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFFAnimInstance), 1627048035U) },
	};
}; // Z_CompiledInDeferFile_FID_FreelanceFelonsTwo_Source_FreelanceFelonsTwo_Public_Character_FFAnimInstance_h__Script_FreelanceFelonsTwo_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_FreelanceFelonsTwo_Source_FreelanceFelonsTwo_Public_Character_FFAnimInstance_h__Script_FreelanceFelonsTwo_2229187881{
	TEXT("/Script/FreelanceFelonsTwo"),
	Z_CompiledInDeferFile_FID_FreelanceFelonsTwo_Source_FreelanceFelonsTwo_Public_Character_FFAnimInstance_h__Script_FreelanceFelonsTwo_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_FreelanceFelonsTwo_Source_FreelanceFelonsTwo_Public_Character_FFAnimInstance_h__Script_FreelanceFelonsTwo_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS

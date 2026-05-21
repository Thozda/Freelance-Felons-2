// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Interface/InteractInterface.h"

#ifdef FREELANCEFELONSTWO_InteractInterface_generated_h
#error "InteractInterface.generated.h already included, missing '#pragma once' in InteractInterface.h"
#endif
#define FREELANCEFELONSTWO_InteractInterface_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Interface UInteractInterface ***************************************************
struct Z_Construct_UClass_UInteractInterface_Statics;
FREELANCEFELONSTWO_API UClass* Z_Construct_UClass_UInteractInterface_NoRegister();

#define FID_FreelanceFelonsTwo_Source_FreelanceFelonsTwo_Public_Interface_InteractInterface_h_12_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	FREELANCEFELONSTWO_API UInteractInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UInteractInterface(UInteractInterface&&) = delete; \
	UInteractInterface(const UInteractInterface&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(FREELANCEFELONSTWO_API, UInteractInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInteractInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInteractInterface) \
	virtual ~UInteractInterface() = default;


#define FID_FreelanceFelonsTwo_Source_FreelanceFelonsTwo_Public_Interface_InteractInterface_h_12_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUInteractInterface(); \
	friend struct ::Z_Construct_UClass_UInteractInterface_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend FREELANCEFELONSTWO_API UClass* ::Z_Construct_UClass_UInteractInterface_NoRegister(); \
public: \
	DECLARE_CLASS2(UInteractInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/FreelanceFelonsTwo"), Z_Construct_UClass_UInteractInterface_NoRegister) \
	DECLARE_SERIALIZER(UInteractInterface)


#define FID_FreelanceFelonsTwo_Source_FreelanceFelonsTwo_Public_Interface_InteractInterface_h_12_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_FreelanceFelonsTwo_Source_FreelanceFelonsTwo_Public_Interface_InteractInterface_h_12_GENERATED_UINTERFACE_BODY() \
	FID_FreelanceFelonsTwo_Source_FreelanceFelonsTwo_Public_Interface_InteractInterface_h_12_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_FreelanceFelonsTwo_Source_FreelanceFelonsTwo_Public_Interface_InteractInterface_h_12_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IInteractInterface() {} \
public: \
	typedef UInteractInterface UClassType; \
	typedef IInteractInterface ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_FreelanceFelonsTwo_Source_FreelanceFelonsTwo_Public_Interface_InteractInterface_h_9_PROLOG
#define FID_FreelanceFelonsTwo_Source_FreelanceFelonsTwo_Public_Interface_InteractInterface_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_FreelanceFelonsTwo_Source_FreelanceFelonsTwo_Public_Interface_InteractInterface_h_12_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UInteractInterface;

// ********** End Interface UInteractInterface *****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_FreelanceFelonsTwo_Source_FreelanceFelonsTwo_Public_Interface_InteractInterface_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS

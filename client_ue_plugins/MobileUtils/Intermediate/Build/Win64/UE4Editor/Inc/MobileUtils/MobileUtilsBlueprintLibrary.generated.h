// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MOBILEUTILS_MobileUtilsBlueprintLibrary_generated_h
#error "MobileUtilsBlueprintLibrary.generated.h already included, missing '#pragma once' in MobileUtilsBlueprintLibrary.h"
#endif
#define MOBILEUTILS_MobileUtilsBlueprintLibrary_generated_h

#define audiov2_Plugins_MobileUtils_Source_MobileUtils_Public_MobileUtilsBlueprintLibrary_h_13_SPARSE_DATA
#define audiov2_Plugins_MobileUtils_Source_MobileUtils_Public_MobileUtilsBlueprintLibrary_h_13_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execConvertToAbsolutePath) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_path); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UMobileUtilsBlueprintLibrary::ConvertToAbsolutePath(Z_Param_path); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStartActivity) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_activity); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UMobileUtilsBlueprintLibrary::StartActivity(Z_Param_activity); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetOrientation) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_orientation); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UMobileUtilsBlueprintLibrary::SetOrientation(Z_Param_orientation); \
		P_NATIVE_END; \
	}


#define audiov2_Plugins_MobileUtils_Source_MobileUtils_Public_MobileUtilsBlueprintLibrary_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execConvertToAbsolutePath) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_path); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UMobileUtilsBlueprintLibrary::ConvertToAbsolutePath(Z_Param_path); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStartActivity) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_activity); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UMobileUtilsBlueprintLibrary::StartActivity(Z_Param_activity); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetOrientation) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_orientation); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UMobileUtilsBlueprintLibrary::SetOrientation(Z_Param_orientation); \
		P_NATIVE_END; \
	}


#define audiov2_Plugins_MobileUtils_Source_MobileUtils_Public_MobileUtilsBlueprintLibrary_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMobileUtilsBlueprintLibrary(); \
	friend struct Z_Construct_UClass_UMobileUtilsBlueprintLibrary_Statics; \
public: \
	DECLARE_CLASS(UMobileUtilsBlueprintLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MobileUtils"), NO_API) \
	DECLARE_SERIALIZER(UMobileUtilsBlueprintLibrary)


#define audiov2_Plugins_MobileUtils_Source_MobileUtils_Public_MobileUtilsBlueprintLibrary_h_13_INCLASS \
private: \
	static void StaticRegisterNativesUMobileUtilsBlueprintLibrary(); \
	friend struct Z_Construct_UClass_UMobileUtilsBlueprintLibrary_Statics; \
public: \
	DECLARE_CLASS(UMobileUtilsBlueprintLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MobileUtils"), NO_API) \
	DECLARE_SERIALIZER(UMobileUtilsBlueprintLibrary)


#define audiov2_Plugins_MobileUtils_Source_MobileUtils_Public_MobileUtilsBlueprintLibrary_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMobileUtilsBlueprintLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMobileUtilsBlueprintLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMobileUtilsBlueprintLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMobileUtilsBlueprintLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMobileUtilsBlueprintLibrary(UMobileUtilsBlueprintLibrary&&); \
	NO_API UMobileUtilsBlueprintLibrary(const UMobileUtilsBlueprintLibrary&); \
public:


#define audiov2_Plugins_MobileUtils_Source_MobileUtils_Public_MobileUtilsBlueprintLibrary_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMobileUtilsBlueprintLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMobileUtilsBlueprintLibrary(UMobileUtilsBlueprintLibrary&&); \
	NO_API UMobileUtilsBlueprintLibrary(const UMobileUtilsBlueprintLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMobileUtilsBlueprintLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMobileUtilsBlueprintLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMobileUtilsBlueprintLibrary)


#define audiov2_Plugins_MobileUtils_Source_MobileUtils_Public_MobileUtilsBlueprintLibrary_h_13_PRIVATE_PROPERTY_OFFSET
#define audiov2_Plugins_MobileUtils_Source_MobileUtils_Public_MobileUtilsBlueprintLibrary_h_10_PROLOG
#define audiov2_Plugins_MobileUtils_Source_MobileUtils_Public_MobileUtilsBlueprintLibrary_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	audiov2_Plugins_MobileUtils_Source_MobileUtils_Public_MobileUtilsBlueprintLibrary_h_13_PRIVATE_PROPERTY_OFFSET \
	audiov2_Plugins_MobileUtils_Source_MobileUtils_Public_MobileUtilsBlueprintLibrary_h_13_SPARSE_DATA \
	audiov2_Plugins_MobileUtils_Source_MobileUtils_Public_MobileUtilsBlueprintLibrary_h_13_RPC_WRAPPERS \
	audiov2_Plugins_MobileUtils_Source_MobileUtils_Public_MobileUtilsBlueprintLibrary_h_13_INCLASS \
	audiov2_Plugins_MobileUtils_Source_MobileUtils_Public_MobileUtilsBlueprintLibrary_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define audiov2_Plugins_MobileUtils_Source_MobileUtils_Public_MobileUtilsBlueprintLibrary_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	audiov2_Plugins_MobileUtils_Source_MobileUtils_Public_MobileUtilsBlueprintLibrary_h_13_PRIVATE_PROPERTY_OFFSET \
	audiov2_Plugins_MobileUtils_Source_MobileUtils_Public_MobileUtilsBlueprintLibrary_h_13_SPARSE_DATA \
	audiov2_Plugins_MobileUtils_Source_MobileUtils_Public_MobileUtilsBlueprintLibrary_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	audiov2_Plugins_MobileUtils_Source_MobileUtils_Public_MobileUtilsBlueprintLibrary_h_13_INCLASS_NO_PURE_DECLS \
	audiov2_Plugins_MobileUtils_Source_MobileUtils_Public_MobileUtilsBlueprintLibrary_h_13_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class MobileUtilsBlueprintLibrary."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MOBILEUTILS_API UClass* StaticClass<class UMobileUtilsBlueprintLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID audiov2_Plugins_MobileUtils_Source_MobileUtils_Public_MobileUtilsBlueprintLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

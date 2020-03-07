// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
#ifdef UTILITY_HttpServicev_generated_h
#error "HttpServicev.generated.h already included, missing '#pragma once' in HttpServicev.h"
#endif
#define UTILITY_HttpServicev_generated_h

#define audiov2_Plugins_Utility_Source_Utility_Public_HttpServicev_h_17_DELEGATE \
struct _Script_Utility_eventOnHttpResponseProgress_Parms \
{ \
	int32 a; \
	int32 b; \
	UObject* extra; \
}; \
static inline void FOnHttpResponseProgress_DelegateWrapper(const FMulticastScriptDelegate& OnHttpResponseProgress, int32 a, int32 b, UObject* extra) \
{ \
	_Script_Utility_eventOnHttpResponseProgress_Parms Parms; \
	Parms.a=a; \
	Parms.b=b; \
	Parms.extra=extra; \
	OnHttpResponseProgress.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define audiov2_Plugins_Utility_Source_Utility_Public_HttpServicev_h_16_DELEGATE \
struct _Script_Utility_eventOnHttpResponseComplete_Parms \
{ \
	FString Responsestring; \
	TArray<uint8> Responsecontent; \
	UObject* extra; \
}; \
static inline void FOnHttpResponseComplete_DelegateWrapper(const FMulticastScriptDelegate& OnHttpResponseComplete, const FString& Responsestring, TArray<uint8> const& Responsecontent, UObject* extra) \
{ \
	_Script_Utility_eventOnHttpResponseComplete_Parms Parms; \
	Parms.Responsestring=Responsestring; \
	Parms.Responsecontent=Responsecontent; \
	Parms.extra=extra; \
	OnHttpResponseComplete.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define audiov2_Plugins_Utility_Source_Utility_Public_HttpServicev_h_15_DELEGATE \
static inline void FOnHtpResponseFailed_DelegateWrapper(const FMulticastScriptDelegate& OnHtpResponseFailed) \
{ \
	OnHtpResponseFailed.ProcessMulticastDelegate<UObject>(NULL); \
}


#define audiov2_Plugins_Utility_Source_Utility_Public_HttpServicev_h_22_SPARSE_DATA
#define audiov2_Plugins_Utility_Source_Utility_Public_HttpServicev_h_22_RPC_WRAPPERS
#define audiov2_Plugins_Utility_Source_Utility_Public_HttpServicev_h_22_RPC_WRAPPERS_NO_PURE_DECLS
#define audiov2_Plugins_Utility_Source_Utility_Public_HttpServicev_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUHttpServicev(); \
	friend struct Z_Construct_UClass_UHttpServicev_Statics; \
public: \
	DECLARE_CLASS(UHttpServicev, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Utility"), NO_API) \
	DECLARE_SERIALIZER(UHttpServicev)


#define audiov2_Plugins_Utility_Source_Utility_Public_HttpServicev_h_22_INCLASS \
private: \
	static void StaticRegisterNativesUHttpServicev(); \
	friend struct Z_Construct_UClass_UHttpServicev_Statics; \
public: \
	DECLARE_CLASS(UHttpServicev, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Utility"), NO_API) \
	DECLARE_SERIALIZER(UHttpServicev)


#define audiov2_Plugins_Utility_Source_Utility_Public_HttpServicev_h_22_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UHttpServicev(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UHttpServicev) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHttpServicev); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHttpServicev); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UHttpServicev(UHttpServicev&&); \
	NO_API UHttpServicev(const UHttpServicev&); \
public:


#define audiov2_Plugins_Utility_Source_Utility_Public_HttpServicev_h_22_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UHttpServicev(UHttpServicev&&); \
	NO_API UHttpServicev(const UHttpServicev&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHttpServicev); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHttpServicev); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UHttpServicev)


#define audiov2_Plugins_Utility_Source_Utility_Public_HttpServicev_h_22_PRIVATE_PROPERTY_OFFSET
#define audiov2_Plugins_Utility_Source_Utility_Public_HttpServicev_h_19_PROLOG
#define audiov2_Plugins_Utility_Source_Utility_Public_HttpServicev_h_22_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	audiov2_Plugins_Utility_Source_Utility_Public_HttpServicev_h_22_PRIVATE_PROPERTY_OFFSET \
	audiov2_Plugins_Utility_Source_Utility_Public_HttpServicev_h_22_SPARSE_DATA \
	audiov2_Plugins_Utility_Source_Utility_Public_HttpServicev_h_22_RPC_WRAPPERS \
	audiov2_Plugins_Utility_Source_Utility_Public_HttpServicev_h_22_INCLASS \
	audiov2_Plugins_Utility_Source_Utility_Public_HttpServicev_h_22_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define audiov2_Plugins_Utility_Source_Utility_Public_HttpServicev_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	audiov2_Plugins_Utility_Source_Utility_Public_HttpServicev_h_22_PRIVATE_PROPERTY_OFFSET \
	audiov2_Plugins_Utility_Source_Utility_Public_HttpServicev_h_22_SPARSE_DATA \
	audiov2_Plugins_Utility_Source_Utility_Public_HttpServicev_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	audiov2_Plugins_Utility_Source_Utility_Public_HttpServicev_h_22_INCLASS_NO_PURE_DECLS \
	audiov2_Plugins_Utility_Source_Utility_Public_HttpServicev_h_22_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UTILITY_API UClass* StaticClass<class UHttpServicev>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID audiov2_Plugins_Utility_Source_Utility_Public_HttpServicev_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

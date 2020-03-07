// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
#ifdef UTILITY_TcpClient_generated_h
#error "TcpClient.generated.h already included, missing '#pragma once' in TcpClient.h"
#endif
#define UTILITY_TcpClient_generated_h

#define audiov2_Plugins_Utility_Source_Utility_Public_TcpClient_h_9_DELEGATE \
struct _Script_Utility_eventOnTcpClientvReceiveddata_Parms \
{ \
	TArray<uint8> data; \
	FString str; \
}; \
static inline void FOnTcpClientvReceiveddata_DelegateWrapper(const FMulticastScriptDelegate& OnTcpClientvReceiveddata, TArray<uint8> const& data, const FString& str) \
{ \
	_Script_Utility_eventOnTcpClientvReceiveddata_Parms Parms; \
	Parms.data=data; \
	Parms.str=str; \
	OnTcpClientvReceiveddata.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define audiov2_Plugins_Utility_Source_Utility_Public_TcpClient_h_8_DELEGATE \
struct _Script_Utility_eventOnTcpClientReceiveddata_Parms \
{ \
	TArray<uint8> data; \
	FString str; \
	UObject* extra; \
}; \
static inline void FOnTcpClientReceiveddata_DelegateWrapper(const FMulticastScriptDelegate& OnTcpClientReceiveddata, TArray<uint8> const& data, const FString& str, UObject* extra) \
{ \
	_Script_Utility_eventOnTcpClientReceiveddata_Parms Parms; \
	Parms.data=data; \
	Parms.str=str; \
	Parms.extra=extra; \
	OnTcpClientReceiveddata.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define audiov2_Plugins_Utility_Source_Utility_Public_TcpClient_h_17_SPARSE_DATA
#define audiov2_Plugins_Utility_Source_Utility_Public_TcpClient_h_17_RPC_WRAPPERS
#define audiov2_Plugins_Utility_Source_Utility_Public_TcpClient_h_17_RPC_WRAPPERS_NO_PURE_DECLS
#define audiov2_Plugins_Utility_Source_Utility_Public_TcpClient_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTcpClient(); \
	friend struct Z_Construct_UClass_UTcpClient_Statics; \
public: \
	DECLARE_CLASS(UTcpClient, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Utility"), NO_API) \
	DECLARE_SERIALIZER(UTcpClient)


#define audiov2_Plugins_Utility_Source_Utility_Public_TcpClient_h_17_INCLASS \
private: \
	static void StaticRegisterNativesUTcpClient(); \
	friend struct Z_Construct_UClass_UTcpClient_Statics; \
public: \
	DECLARE_CLASS(UTcpClient, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Utility"), NO_API) \
	DECLARE_SERIALIZER(UTcpClient)


#define audiov2_Plugins_Utility_Source_Utility_Public_TcpClient_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTcpClient(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTcpClient) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTcpClient); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTcpClient); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTcpClient(UTcpClient&&); \
	NO_API UTcpClient(const UTcpClient&); \
public:


#define audiov2_Plugins_Utility_Source_Utility_Public_TcpClient_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTcpClient(UTcpClient&&); \
	NO_API UTcpClient(const UTcpClient&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTcpClient); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTcpClient); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UTcpClient)


#define audiov2_Plugins_Utility_Source_Utility_Public_TcpClient_h_17_PRIVATE_PROPERTY_OFFSET
#define audiov2_Plugins_Utility_Source_Utility_Public_TcpClient_h_14_PROLOG
#define audiov2_Plugins_Utility_Source_Utility_Public_TcpClient_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	audiov2_Plugins_Utility_Source_Utility_Public_TcpClient_h_17_PRIVATE_PROPERTY_OFFSET \
	audiov2_Plugins_Utility_Source_Utility_Public_TcpClient_h_17_SPARSE_DATA \
	audiov2_Plugins_Utility_Source_Utility_Public_TcpClient_h_17_RPC_WRAPPERS \
	audiov2_Plugins_Utility_Source_Utility_Public_TcpClient_h_17_INCLASS \
	audiov2_Plugins_Utility_Source_Utility_Public_TcpClient_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define audiov2_Plugins_Utility_Source_Utility_Public_TcpClient_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	audiov2_Plugins_Utility_Source_Utility_Public_TcpClient_h_17_PRIVATE_PROPERTY_OFFSET \
	audiov2_Plugins_Utility_Source_Utility_Public_TcpClient_h_17_SPARSE_DATA \
	audiov2_Plugins_Utility_Source_Utility_Public_TcpClient_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	audiov2_Plugins_Utility_Source_Utility_Public_TcpClient_h_17_INCLASS_NO_PURE_DECLS \
	audiov2_Plugins_Utility_Source_Utility_Public_TcpClient_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UTILITY_API UClass* StaticClass<class UTcpClient>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID audiov2_Plugins_Utility_Source_Utility_Public_TcpClient_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

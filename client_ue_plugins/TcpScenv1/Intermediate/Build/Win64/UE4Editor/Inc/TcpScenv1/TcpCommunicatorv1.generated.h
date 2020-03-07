// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class MessageType : uint8;
#ifdef TCPSCENV1_TcpCommunicatorv1_generated_h
#error "TcpCommunicatorv1.generated.h already included, missing '#pragma once' in TcpCommunicatorv1.h"
#endif
#define TCPSCENV1_TcpCommunicatorv1_generated_h

#define audiov2_Plugins_TcpScenv1_Source_TcpScenv1_Public_TcpCommunicatorv1_h_64_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FDataPackage_Statics; \
	TCPSCENV1_API static class UScriptStruct* StaticStruct();


template<> TCPSCENV1_API UScriptStruct* StaticStruct<struct FDataPackage>();

#define audiov2_Plugins_TcpScenv1_Source_TcpScenv1_Public_TcpCommunicatorv1_h_32_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMessagePackage_Statics; \
	TCPSCENV1_API static class UScriptStruct* StaticStruct();


template<> TCPSCENV1_API UScriptStruct* StaticStruct<struct FMessagePackage>();

#define audiov2_Plugins_TcpScenv1_Source_TcpScenv1_Public_TcpCommunicatorv1_h_83_DELEGATE \
struct _Script_TcpScenv1_eventOnFileReceiveSucceed_Parms \
{ \
	FString file; \
	MessageType type; \
}; \
static inline void FOnFileReceiveSucceed_DelegateWrapper(const FMulticastScriptDelegate& OnFileReceiveSucceed, FString& file, MessageType type) \
{ \
	_Script_TcpScenv1_eventOnFileReceiveSucceed_Parms Parms; \
	Parms.file=file; \
	Parms.type=type; \
	OnFileReceiveSucceed.ProcessMulticastDelegate<UObject>(&Parms); \
	file=Parms.file; \
}


#define audiov2_Plugins_TcpScenv1_Source_TcpScenv1_Public_TcpCommunicatorv1_h_82_DELEGATE \
static inline void FOnLogInsucceed_DelegateWrapper(const FMulticastScriptDelegate& OnLogInsucceed) \
{ \
	OnLogInsucceed.ProcessMulticastDelegate<UObject>(NULL); \
}


#define audiov2_Plugins_TcpScenv1_Source_TcpScenv1_Public_TcpCommunicatorv1_h_87_SPARSE_DATA
#define audiov2_Plugins_TcpScenv1_Source_TcpScenv1_Public_TcpCommunicatorv1_h_87_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnTcpResponse) \
	{ \
		P_GET_TARRAY_REF(uint8,Z_Param_Out_p); \
		P_GET_PROPERTY(UStrProperty,Z_Param_str); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnTcpResponse(Z_Param_Out_p,Z_Param_str); \
		P_NATIVE_END; \
	}


#define audiov2_Plugins_TcpScenv1_Source_TcpScenv1_Public_TcpCommunicatorv1_h_87_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnTcpResponse) \
	{ \
		P_GET_TARRAY_REF(uint8,Z_Param_Out_p); \
		P_GET_PROPERTY(UStrProperty,Z_Param_str); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnTcpResponse(Z_Param_Out_p,Z_Param_str); \
		P_NATIVE_END; \
	}


#define audiov2_Plugins_TcpScenv1_Source_TcpScenv1_Public_TcpCommunicatorv1_h_87_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTcpCommunicatorv1(); \
	friend struct Z_Construct_UClass_UTcpCommunicatorv1_Statics; \
public: \
	DECLARE_CLASS(UTcpCommunicatorv1, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TcpScenv1"), NO_API) \
	DECLARE_SERIALIZER(UTcpCommunicatorv1)


#define audiov2_Plugins_TcpScenv1_Source_TcpScenv1_Public_TcpCommunicatorv1_h_87_INCLASS \
private: \
	static void StaticRegisterNativesUTcpCommunicatorv1(); \
	friend struct Z_Construct_UClass_UTcpCommunicatorv1_Statics; \
public: \
	DECLARE_CLASS(UTcpCommunicatorv1, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TcpScenv1"), NO_API) \
	DECLARE_SERIALIZER(UTcpCommunicatorv1)


#define audiov2_Plugins_TcpScenv1_Source_TcpScenv1_Public_TcpCommunicatorv1_h_87_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTcpCommunicatorv1(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTcpCommunicatorv1) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTcpCommunicatorv1); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTcpCommunicatorv1); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTcpCommunicatorv1(UTcpCommunicatorv1&&); \
	NO_API UTcpCommunicatorv1(const UTcpCommunicatorv1&); \
public:


#define audiov2_Plugins_TcpScenv1_Source_TcpScenv1_Public_TcpCommunicatorv1_h_87_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTcpCommunicatorv1(UTcpCommunicatorv1&&); \
	NO_API UTcpCommunicatorv1(const UTcpCommunicatorv1&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTcpCommunicatorv1); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTcpCommunicatorv1); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTcpCommunicatorv1)


#define audiov2_Plugins_TcpScenv1_Source_TcpScenv1_Public_TcpCommunicatorv1_h_87_PRIVATE_PROPERTY_OFFSET
#define audiov2_Plugins_TcpScenv1_Source_TcpScenv1_Public_TcpCommunicatorv1_h_84_PROLOG
#define audiov2_Plugins_TcpScenv1_Source_TcpScenv1_Public_TcpCommunicatorv1_h_87_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	audiov2_Plugins_TcpScenv1_Source_TcpScenv1_Public_TcpCommunicatorv1_h_87_PRIVATE_PROPERTY_OFFSET \
	audiov2_Plugins_TcpScenv1_Source_TcpScenv1_Public_TcpCommunicatorv1_h_87_SPARSE_DATA \
	audiov2_Plugins_TcpScenv1_Source_TcpScenv1_Public_TcpCommunicatorv1_h_87_RPC_WRAPPERS \
	audiov2_Plugins_TcpScenv1_Source_TcpScenv1_Public_TcpCommunicatorv1_h_87_INCLASS \
	audiov2_Plugins_TcpScenv1_Source_TcpScenv1_Public_TcpCommunicatorv1_h_87_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define audiov2_Plugins_TcpScenv1_Source_TcpScenv1_Public_TcpCommunicatorv1_h_87_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	audiov2_Plugins_TcpScenv1_Source_TcpScenv1_Public_TcpCommunicatorv1_h_87_PRIVATE_PROPERTY_OFFSET \
	audiov2_Plugins_TcpScenv1_Source_TcpScenv1_Public_TcpCommunicatorv1_h_87_SPARSE_DATA \
	audiov2_Plugins_TcpScenv1_Source_TcpScenv1_Public_TcpCommunicatorv1_h_87_RPC_WRAPPERS_NO_PURE_DECLS \
	audiov2_Plugins_TcpScenv1_Source_TcpScenv1_Public_TcpCommunicatorv1_h_87_INCLASS_NO_PURE_DECLS \
	audiov2_Plugins_TcpScenv1_Source_TcpScenv1_Public_TcpCommunicatorv1_h_87_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TCPSCENV1_API UClass* StaticClass<class UTcpCommunicatorv1>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID audiov2_Plugins_TcpScenv1_Source_TcpScenv1_Public_TcpCommunicatorv1_h


#define FOREACH_ENUM_DATATYPE(op) \
	op(DataType::GUID) \
	op(DataType::EXITGAME) \
	op(DataType::DATA) \
	op(DataType::LOCALPLAYERJOINROOM) \
	op(DataType::LOCALPLAYERJOINOK) \
	op(DataType::PROXYREPORT) \
	op(DataType::PROXYREPORTOK) \
	op(DataType::ORDERPROXYREPORT) \
	op(DataType::PING) 

enum class DataType : uint8;
template<> TCPSCENV1_API UEnum* StaticEnum<DataType>();

#define FOREACH_ENUM_MESSAGETYPE(op) \
	op(MessageType::FILE) \
	op(MessageType::FILEEND) \
	op(MessageType::CLIENT_FILE) \
	op(MessageType::CLIENT_FILEEND) \
	op(MessageType::CLIENT_FILERECEIVEOK) \
	op(MessageType::SINGUP) \
	op(MessageType::LOGIN) \
	op(MessageType::MATCH) \
	op(MessageType::SAVEMAPACTORINFOR) \
	op(MessageType::GETMAPACTORINFOR) \
	op(MessageType::MAPACTORINFORSENDOK) \
	op(MessageType::EntryMAP) \
	op(MessageType::EntryMAPOK) \
	op(MessageType::MAPISFULL) \
	op(MessageType::EXITGAME) \
	op(MessageType::FILERECEIVEOK) \
	op(MessageType::GUID) \
	op(MessageType::NUMBER) 

enum class MessageType : uint8;
template<> TCPSCENV1_API UEnum* StaticEnum<MessageType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS

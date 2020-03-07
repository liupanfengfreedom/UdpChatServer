// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TcpScenv1/Public/TcpCommunicatorv1.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTcpCommunicatorv1() {}
// Cross Module References
	TCPSCENV1_API UFunction* Z_Construct_UDelegateFunction_TcpScenv1_OnFileReceiveSucceed__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_TcpScenv1();
	TCPSCENV1_API UEnum* Z_Construct_UEnum_TcpScenv1_MessageType();
	TCPSCENV1_API UFunction* Z_Construct_UDelegateFunction_TcpScenv1_OnLogInsucceed__DelegateSignature();
	TCPSCENV1_API UEnum* Z_Construct_UEnum_TcpScenv1_DataType();
	TCPSCENV1_API UScriptStruct* Z_Construct_UScriptStruct_FDataPackage();
	TCPSCENV1_API UScriptStruct* Z_Construct_UScriptStruct_FMessagePackage();
	TCPSCENV1_API UClass* Z_Construct_UClass_UTcpCommunicatorv1_NoRegister();
	TCPSCENV1_API UClass* Z_Construct_UClass_UTcpCommunicatorv1();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	TCPSCENV1_API UFunction* Z_Construct_UFunction_UTcpCommunicatorv1_OnTcpResponse();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_TcpScenv1_OnFileReceiveSucceed__DelegateSignature_Statics
	{
		struct _Script_TcpScenv1_eventOnFileReceiveSucceed_Parms
		{
			FString file;
			MessageType type;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_type;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_type_Underlying;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_file;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_TcpScenv1_OnFileReceiveSucceed__DelegateSignature_Statics::NewProp_type = { "type", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_TcpScenv1_eventOnFileReceiveSucceed_Parms, type), Z_Construct_UEnum_TcpScenv1_MessageType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_TcpScenv1_OnFileReceiveSucceed__DelegateSignature_Statics::NewProp_type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_TcpScenv1_OnFileReceiveSucceed__DelegateSignature_Statics::NewProp_file = { "file", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_TcpScenv1_eventOnFileReceiveSucceed_Parms, file), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_TcpScenv1_OnFileReceiveSucceed__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_TcpScenv1_OnFileReceiveSucceed__DelegateSignature_Statics::NewProp_type,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_TcpScenv1_OnFileReceiveSucceed__DelegateSignature_Statics::NewProp_type_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_TcpScenv1_OnFileReceiveSucceed__DelegateSignature_Statics::NewProp_file,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_TcpScenv1_OnFileReceiveSucceed__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TcpCommunicatorv1.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_TcpScenv1_OnFileReceiveSucceed__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_TcpScenv1, nullptr, "OnFileReceiveSucceed__DelegateSignature", nullptr, nullptr, sizeof(_Script_TcpScenv1_eventOnFileReceiveSucceed_Parms), Z_Construct_UDelegateFunction_TcpScenv1_OnFileReceiveSucceed__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_TcpScenv1_OnFileReceiveSucceed__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_TcpScenv1_OnFileReceiveSucceed__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_TcpScenv1_OnFileReceiveSucceed__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_TcpScenv1_OnFileReceiveSucceed__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_TcpScenv1_OnFileReceiveSucceed__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_TcpScenv1_OnLogInsucceed__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_TcpScenv1_OnLogInsucceed__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "ModuleRelativePath", "Public/TcpCommunicatorv1.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_TcpScenv1_OnLogInsucceed__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_TcpScenv1, nullptr, "OnLogInsucceed__DelegateSignature", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_TcpScenv1_OnLogInsucceed__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_TcpScenv1_OnLogInsucceed__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_TcpScenv1_OnLogInsucceed__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_TcpScenv1_OnLogInsucceed__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	static UEnum* DataType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_TcpScenv1_DataType, Z_Construct_UPackage__Script_TcpScenv1(), TEXT("DataType"));
		}
		return Singleton;
	}
	template<> TCPSCENV1_API UEnum* StaticEnum<DataType>()
	{
		return DataType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_DataType(DataType_StaticEnum, TEXT("/Script/TcpScenv1"), TEXT("DataType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_TcpScenv1_DataType_Hash() { return 1687291855U; }
	UEnum* Z_Construct_UEnum_TcpScenv1_DataType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_TcpScenv1();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("DataType"), 0, Get_Z_Construct_UEnum_TcpScenv1_DataType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "DataType::GUID", (int64)DataType::GUID },
				{ "DataType::EXITGAME", (int64)DataType::EXITGAME },
				{ "DataType::DATA", (int64)DataType::DATA },
				{ "DataType::LOCALPLAYERJOINROOM", (int64)DataType::LOCALPLAYERJOINROOM },
				{ "DataType::LOCALPLAYERJOINOK", (int64)DataType::LOCALPLAYERJOINOK },
				{ "DataType::PROXYREPORT", (int64)DataType::PROXYREPORT },
				{ "DataType::PROXYREPORTOK", (int64)DataType::PROXYREPORTOK },
				{ "DataType::ORDERPROXYREPORT", (int64)DataType::ORDERPROXYREPORT },
				{ "DataType::PING", (int64)DataType::PING },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Comment", "////////////////////////////////////////////////////////////////////////////////////////////////////////\n//\"BlueprintType\" is essential to include\n" },
				{ "DATA.Name", "DataType::DATA" },
				{ "EXITGAME.Name", "DataType::EXITGAME" },
				{ "GUID.Name", "DataType::GUID" },
				{ "LOCALPLAYERJOINOK.Name", "DataType::LOCALPLAYERJOINOK" },
				{ "LOCALPLAYERJOINROOM.Name", "DataType::LOCALPLAYERJOINROOM" },
				{ "ModuleRelativePath", "Public/TcpCommunicatorv1.h" },
				{ "ORDERPROXYREPORT.Name", "DataType::ORDERPROXYREPORT" },
				{ "PING.Name", "DataType::PING" },
				{ "PROXYREPORT.Name", "DataType::PROXYREPORT" },
				{ "PROXYREPORTOK.Name", "DataType::PROXYREPORTOK" },
				{ "ToolTip", "\"BlueprintType\" is essential to include" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_TcpScenv1,
				nullptr,
				"DataType",
				"DataType",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* MessageType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_TcpScenv1_MessageType, Z_Construct_UPackage__Script_TcpScenv1(), TEXT("MessageType"));
		}
		return Singleton;
	}
	template<> TCPSCENV1_API UEnum* StaticEnum<MessageType>()
	{
		return MessageType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_MessageType(MessageType_StaticEnum, TEXT("/Script/TcpScenv1"), TEXT("MessageType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_TcpScenv1_MessageType_Hash() { return 3583655084U; }
	UEnum* Z_Construct_UEnum_TcpScenv1_MessageType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_TcpScenv1();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("MessageType"), 0, Get_Z_Construct_UEnum_TcpScenv1_MessageType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "MessageType::FILE", (int64)MessageType::FILE },
				{ "MessageType::FILEEND", (int64)MessageType::FILEEND },
				{ "MessageType::CLIENT_FILE", (int64)MessageType::CLIENT_FILE },
				{ "MessageType::CLIENT_FILEEND", (int64)MessageType::CLIENT_FILEEND },
				{ "MessageType::CLIENT_FILERECEIVEOK", (int64)MessageType::CLIENT_FILERECEIVEOK },
				{ "MessageType::SINGUP", (int64)MessageType::SINGUP },
				{ "MessageType::LOGIN", (int64)MessageType::LOGIN },
				{ "MessageType::MATCH", (int64)MessageType::MATCH },
				{ "MessageType::SAVEMAPACTORINFOR", (int64)MessageType::SAVEMAPACTORINFOR },
				{ "MessageType::GETMAPACTORINFOR", (int64)MessageType::GETMAPACTORINFOR },
				{ "MessageType::MAPACTORINFORSENDOK", (int64)MessageType::MAPACTORINFORSENDOK },
				{ "MessageType::EntryMAP", (int64)MessageType::EntryMAP },
				{ "MessageType::EntryMAPOK", (int64)MessageType::EntryMAPOK },
				{ "MessageType::MAPISFULL", (int64)MessageType::MAPISFULL },
				{ "MessageType::EXITGAME", (int64)MessageType::EXITGAME },
				{ "MessageType::FILERECEIVEOK", (int64)MessageType::FILERECEIVEOK },
				{ "MessageType::GUID", (int64)MessageType::GUID },
				{ "MessageType::NUMBER", (int64)MessageType::NUMBER },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "CLIENT_FILE.Comment", "//changless\n" },
				{ "CLIENT_FILE.Name", "MessageType::CLIENT_FILE" },
				{ "CLIENT_FILE.ToolTip", "changless" },
				{ "CLIENT_FILEEND.Name", "MessageType::CLIENT_FILEEND" },
				{ "CLIENT_FILERECEIVEOK.Name", "MessageType::CLIENT_FILERECEIVEOK" },
				{ "Comment", "//\"BlueprintType\" is essential to include\n" },
				{ "EntryMAP.Name", "MessageType::EntryMAP" },
				{ "EntryMAPOK.Name", "MessageType::EntryMAPOK" },
				{ "EXITGAME.Comment", "//the number in the map has reach the ceilling\n" },
				{ "EXITGAME.Name", "MessageType::EXITGAME" },
				{ "EXITGAME.ToolTip", "the number in the map has reach the ceilling" },
				{ "FILE.Name", "MessageType::FILE" },
				{ "FILEEND.Comment", "//changless\n" },
				{ "FILEEND.Name", "MessageType::FILEEND" },
				{ "FILEEND.ToolTip", "changless" },
				{ "FILERECEIVEOK.Name", "MessageType::FILERECEIVEOK" },
				{ "GETMAPACTORINFOR.Name", "MessageType::GETMAPACTORINFOR" },
				{ "GUID.Comment", "//server side receive ok\n" },
				{ "GUID.Name", "MessageType::GUID" },
				{ "GUID.ToolTip", "server side receive ok" },
				{ "LOGIN.Name", "MessageType::LOGIN" },
				{ "MAPACTORINFORSENDOK.Name", "MessageType::MAPACTORINFORSENDOK" },
				{ "MAPISFULL.Name", "MessageType::MAPISFULL" },
				{ "MATCH.Name", "MessageType::MATCH" },
				{ "ModuleRelativePath", "Public/TcpCommunicatorv1.h" },
				{ "NUMBER.Name", "MessageType::NUMBER" },
				{ "SAVEMAPACTORINFOR.Name", "MessageType::SAVEMAPACTORINFOR" },
				{ "SINGUP.Name", "MessageType::SINGUP" },
				{ "ToolTip", "\"BlueprintType\" is essential to include" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_TcpScenv1,
				nullptr,
				"MessageType",
				"MessageType",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
class UScriptStruct* FDataPackage::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern TCPSCENV1_API uint32 Get_Z_Construct_UScriptStruct_FDataPackage_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FDataPackage, Z_Construct_UPackage__Script_TcpScenv1(), TEXT("DataPackage"), sizeof(FDataPackage), Get_Z_Construct_UScriptStruct_FDataPackage_Hash());
	}
	return Singleton;
}
template<> TCPSCENV1_API UScriptStruct* StaticStruct<FDataPackage>()
{
	return FDataPackage::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FDataPackage(FDataPackage::StaticStruct, TEXT("/Script/TcpScenv1"), TEXT("DataPackage"), false, nullptr, nullptr);
static struct FScriptStruct_TcpScenv1_StaticRegisterNativesFDataPackage
{
	FScriptStruct_TcpScenv1_StaticRegisterNativesFDataPackage()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("DataPackage")),new UScriptStruct::TCppStructOps<FDataPackage>);
	}
} ScriptStruct_TcpScenv1_StaticRegisterNativesFDataPackage;
	struct Z_Construct_UScriptStruct_FDataPackage_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PayLoad_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_PayLoad;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MT_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_MT;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_MT_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDataPackage_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TcpCommunicatorv1.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDataPackage_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDataPackage>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDataPackage_Statics::NewProp_PayLoad_MetaData[] = {
		{ "ModuleRelativePath", "Public/TcpCommunicatorv1.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FDataPackage_Statics::NewProp_PayLoad = { "PayLoad", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDataPackage, PayLoad), METADATA_PARAMS(Z_Construct_UScriptStruct_FDataPackage_Statics::NewProp_PayLoad_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataPackage_Statics::NewProp_PayLoad_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDataPackage_Statics::NewProp_MT_MetaData[] = {
		{ "ModuleRelativePath", "Public/TcpCommunicatorv1.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FDataPackage_Statics::NewProp_MT = { "MT", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDataPackage, MT), Z_Construct_UEnum_TcpScenv1_DataType, METADATA_PARAMS(Z_Construct_UScriptStruct_FDataPackage_Statics::NewProp_MT_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataPackage_Statics::NewProp_MT_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FDataPackage_Statics::NewProp_MT_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDataPackage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDataPackage_Statics::NewProp_PayLoad,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDataPackage_Statics::NewProp_MT,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDataPackage_Statics::NewProp_MT_Underlying,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDataPackage_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_TcpScenv1,
		nullptr,
		&NewStructOps,
		"DataPackage",
		sizeof(FDataPackage),
		alignof(FDataPackage),
		Z_Construct_UScriptStruct_FDataPackage_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataPackage_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDataPackage_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataPackage_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDataPackage()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FDataPackage_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_TcpScenv1();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("DataPackage"), sizeof(FDataPackage), Get_Z_Construct_UScriptStruct_FDataPackage_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FDataPackage_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FDataPackage_Hash() { return 2850797460U; }
class UScriptStruct* FMessagePackage::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern TCPSCENV1_API uint32 Get_Z_Construct_UScriptStruct_FMessagePackage_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMessagePackage, Z_Construct_UPackage__Script_TcpScenv1(), TEXT("MessagePackage"), sizeof(FMessagePackage), Get_Z_Construct_UScriptStruct_FMessagePackage_Hash());
	}
	return Singleton;
}
template<> TCPSCENV1_API UScriptStruct* StaticStruct<FMessagePackage>()
{
	return FMessagePackage::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMessagePackage(FMessagePackage::StaticStruct, TEXT("/Script/TcpScenv1"), TEXT("MessagePackage"), false, nullptr, nullptr);
static struct FScriptStruct_TcpScenv1_StaticRegisterNativesFMessagePackage
{
	FScriptStruct_TcpScenv1_StaticRegisterNativesFMessagePackage()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("MessagePackage")),new UScriptStruct::TCppStructOps<FMessagePackage>);
	}
} ScriptStruct_TcpScenv1_StaticRegisterNativesFMessagePackage;
	struct Z_Construct_UScriptStruct_FMessagePackage_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PayLoad_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_PayLoad;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MT_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_MT;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_MT_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMessagePackage_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TcpCommunicatorv1.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMessagePackage_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMessagePackage>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMessagePackage_Statics::NewProp_PayLoad_MetaData[] = {
		{ "ModuleRelativePath", "Public/TcpCommunicatorv1.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMessagePackage_Statics::NewProp_PayLoad = { "PayLoad", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMessagePackage, PayLoad), METADATA_PARAMS(Z_Construct_UScriptStruct_FMessagePackage_Statics::NewProp_PayLoad_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMessagePackage_Statics::NewProp_PayLoad_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMessagePackage_Statics::NewProp_MT_MetaData[] = {
		{ "ModuleRelativePath", "Public/TcpCommunicatorv1.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FMessagePackage_Statics::NewProp_MT = { "MT", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMessagePackage, MT), Z_Construct_UEnum_TcpScenv1_MessageType, METADATA_PARAMS(Z_Construct_UScriptStruct_FMessagePackage_Statics::NewProp_MT_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMessagePackage_Statics::NewProp_MT_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FMessagePackage_Statics::NewProp_MT_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMessagePackage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMessagePackage_Statics::NewProp_PayLoad,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMessagePackage_Statics::NewProp_MT,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMessagePackage_Statics::NewProp_MT_Underlying,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMessagePackage_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_TcpScenv1,
		nullptr,
		&NewStructOps,
		"MessagePackage",
		sizeof(FMessagePackage),
		alignof(FMessagePackage),
		Z_Construct_UScriptStruct_FMessagePackage_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMessagePackage_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMessagePackage_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMessagePackage_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMessagePackage()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMessagePackage_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_TcpScenv1();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MessagePackage"), sizeof(FMessagePackage), Get_Z_Construct_UScriptStruct_FMessagePackage_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FMessagePackage_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMessagePackage_Hash() { return 1961398792U; }
	void UTcpCommunicatorv1::StaticRegisterNativesUTcpCommunicatorv1()
	{
		UClass* Class = UTcpCommunicatorv1::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnTcpResponse", &UTcpCommunicatorv1::execOnTcpResponse },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UTcpCommunicatorv1_OnTcpResponse_Statics
	{
		struct TcpCommunicatorv1_eventOnTcpResponse_Parms
		{
			TArray<uint8> p;
			FString str;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_str_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_str;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_p_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_p;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_p_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTcpCommunicatorv1_OnTcpResponse_Statics::NewProp_str_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UTcpCommunicatorv1_OnTcpResponse_Statics::NewProp_str = { "str", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TcpCommunicatorv1_eventOnTcpResponse_Parms, str), METADATA_PARAMS(Z_Construct_UFunction_UTcpCommunicatorv1_OnTcpResponse_Statics::NewProp_str_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTcpCommunicatorv1_OnTcpResponse_Statics::NewProp_str_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTcpCommunicatorv1_OnTcpResponse_Statics::NewProp_p_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UTcpCommunicatorv1_OnTcpResponse_Statics::NewProp_p = { "p", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TcpCommunicatorv1_eventOnTcpResponse_Parms, p), METADATA_PARAMS(Z_Construct_UFunction_UTcpCommunicatorv1_OnTcpResponse_Statics::NewProp_p_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTcpCommunicatorv1_OnTcpResponse_Statics::NewProp_p_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UTcpCommunicatorv1_OnTcpResponse_Statics::NewProp_p_Inner = { "p", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTcpCommunicatorv1_OnTcpResponse_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTcpCommunicatorv1_OnTcpResponse_Statics::NewProp_str,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTcpCommunicatorv1_OnTcpResponse_Statics::NewProp_p,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTcpCommunicatorv1_OnTcpResponse_Statics::NewProp_p_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTcpCommunicatorv1_OnTcpResponse_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TcpCommunicatorv1.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTcpCommunicatorv1_OnTcpResponse_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTcpCommunicatorv1, nullptr, "OnTcpResponse", nullptr, nullptr, sizeof(TcpCommunicatorv1_eventOnTcpResponse_Parms), Z_Construct_UFunction_UTcpCommunicatorv1_OnTcpResponse_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTcpCommunicatorv1_OnTcpResponse_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00440401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTcpCommunicatorv1_OnTcpResponse_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTcpCommunicatorv1_OnTcpResponse_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTcpCommunicatorv1_OnTcpResponse()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTcpCommunicatorv1_OnTcpResponse_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UTcpCommunicatorv1_NoRegister()
	{
		return UTcpCommunicatorv1::StaticClass();
	}
	struct Z_Construct_UClass_UTcpCommunicatorv1_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnFileReceiveSucceed_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnFileReceiveSucceed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnLogInSucceed_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnLogInSucceed;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTcpCommunicatorv1_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_TcpScenv1,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UTcpCommunicatorv1_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UTcpCommunicatorv1_OnTcpResponse, "OnTcpResponse" }, // 4010413014
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTcpCommunicatorv1_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "TcpCommunicatorv1.h" },
		{ "ModuleRelativePath", "Public/TcpCommunicatorv1.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTcpCommunicatorv1_Statics::NewProp_OnFileReceiveSucceed_MetaData[] = {
		{ "ModuleRelativePath", "Public/TcpCommunicatorv1.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UTcpCommunicatorv1_Statics::NewProp_OnFileReceiveSucceed = { "OnFileReceiveSucceed", nullptr, (EPropertyFlags)0x0010000000080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTcpCommunicatorv1, OnFileReceiveSucceed), Z_Construct_UDelegateFunction_TcpScenv1_OnFileReceiveSucceed__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UTcpCommunicatorv1_Statics::NewProp_OnFileReceiveSucceed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTcpCommunicatorv1_Statics::NewProp_OnFileReceiveSucceed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTcpCommunicatorv1_Statics::NewProp_OnLogInSucceed_MetaData[] = {
		{ "ModuleRelativePath", "Public/TcpCommunicatorv1.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UTcpCommunicatorv1_Statics::NewProp_OnLogInSucceed = { "OnLogInSucceed", nullptr, (EPropertyFlags)0x0010000000080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTcpCommunicatorv1, OnLogInSucceed), Z_Construct_UDelegateFunction_TcpScenv1_OnLogInsucceed__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UTcpCommunicatorv1_Statics::NewProp_OnLogInSucceed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTcpCommunicatorv1_Statics::NewProp_OnLogInSucceed_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTcpCommunicatorv1_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTcpCommunicatorv1_Statics::NewProp_OnFileReceiveSucceed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTcpCommunicatorv1_Statics::NewProp_OnLogInSucceed,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTcpCommunicatorv1_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTcpCommunicatorv1>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UTcpCommunicatorv1_Statics::ClassParams = {
		&UTcpCommunicatorv1::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UTcpCommunicatorv1_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UTcpCommunicatorv1_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UTcpCommunicatorv1_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTcpCommunicatorv1_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTcpCommunicatorv1()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UTcpCommunicatorv1_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTcpCommunicatorv1, 179354491);
	template<> TCPSCENV1_API UClass* StaticClass<UTcpCommunicatorv1>()
	{
		return UTcpCommunicatorv1::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTcpCommunicatorv1(Z_Construct_UClass_UTcpCommunicatorv1, &UTcpCommunicatorv1::StaticClass, TEXT("/Script/TcpScenv1"), TEXT("UTcpCommunicatorv1"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTcpCommunicatorv1);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

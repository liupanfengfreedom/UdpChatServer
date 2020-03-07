// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Utility/Public/MyBlueprintFunctionLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyBlueprintFunctionLibrary() {}
// Cross Module References
	UTILITY_API UClass* Z_Construct_UClass_UMyBlueprintFunctionLibrary_NoRegister();
	UTILITY_API UClass* Z_Construct_UClass_UMyBlueprintFunctionLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_Utility();
	UTILITY_API UFunction* Z_Construct_UFunction_UMyBlueprintFunctionLibrary_CLogtofile();
	UTILITY_API UFunction* Z_Construct_UFunction_UMyBlueprintFunctionLibrary_FileMd5isequalSpecificMd5();
	UTILITY_API UFunction* Z_Construct_UFunction_UMyBlueprintFunctionLibrary_Loadobject();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	UTILITY_API UFunction* Z_Construct_UFunction_UMyBlueprintFunctionLibrary_Mount();
	UTILITY_API UFunction* Z_Construct_UFunction_UMyBlueprintFunctionLibrary_OnGameEndefunc();
	UTILITY_API UFunction* Z_Construct_UFunction_UMyBlueprintFunctionLibrary_Ongameinitfunc();
	UTILITY_API UFunction* Z_Construct_UFunction_UMyBlueprintFunctionLibrary_readdatafromfile();
	UTILITY_API UFunction* Z_Construct_UFunction_UMyBlueprintFunctionLibrary_readstringfromfile();
	UTILITY_API UFunction* Z_Construct_UFunction_UMyBlueprintFunctionLibrary_Screenshoot();
	UTILITY_API UFunction* Z_Construct_UFunction_UMyBlueprintFunctionLibrary_UnMount();
	UTILITY_API UFunction* Z_Construct_UFunction_UMyBlueprintFunctionLibrary_writedatatofile();
// End Cross Module References
	void UMyBlueprintFunctionLibrary::StaticRegisterNativesUMyBlueprintFunctionLibrary()
	{
		UClass* Class = UMyBlueprintFunctionLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CLogtofile", &UMyBlueprintFunctionLibrary::execCLogtofile },
			{ "FileMd5isequalSpecificMd5", &UMyBlueprintFunctionLibrary::execFileMd5isequalSpecificMd5 },
			{ "Loadobject", &UMyBlueprintFunctionLibrary::execLoadobject },
			{ "Mount", &UMyBlueprintFunctionLibrary::execMount },
			{ "OnGameEndefunc", &UMyBlueprintFunctionLibrary::execOnGameEndefunc },
			{ "Ongameinitfunc", &UMyBlueprintFunctionLibrary::execOngameinitfunc },
			{ "readdatafromfile", &UMyBlueprintFunctionLibrary::execreaddatafromfile },
			{ "readstringfromfile", &UMyBlueprintFunctionLibrary::execreadstringfromfile },
			{ "Screenshoot", &UMyBlueprintFunctionLibrary::execScreenshoot },
			{ "UnMount", &UMyBlueprintFunctionLibrary::execUnMount },
			{ "writedatatofile", &UMyBlueprintFunctionLibrary::execwritedatatofile },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMyBlueprintFunctionLibrary_CLogtofile_Statics
	{
		struct MyBlueprintFunctionLibrary_eventCLogtofile_Parms
		{
			FString msg;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_msg;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMyBlueprintFunctionLibrary_CLogtofile_Statics::NewProp_msg = { "msg", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MyBlueprintFunctionLibrary_eventCLogtofile_Parms, msg), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMyBlueprintFunctionLibrary_CLogtofile_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMyBlueprintFunctionLibrary_CLogtofile_Statics::NewProp_msg,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMyBlueprintFunctionLibrary_CLogtofile_Statics::Function_MetaDataParams[] = {
		{ "Category", "Mybp" },
		{ "ModuleRelativePath", "Public/MyBlueprintFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMyBlueprintFunctionLibrary_CLogtofile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMyBlueprintFunctionLibrary, nullptr, "CLogtofile", nullptr, nullptr, sizeof(MyBlueprintFunctionLibrary_eventCLogtofile_Parms), Z_Construct_UFunction_UMyBlueprintFunctionLibrary_CLogtofile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMyBlueprintFunctionLibrary_CLogtofile_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMyBlueprintFunctionLibrary_CLogtofile_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMyBlueprintFunctionLibrary_CLogtofile_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMyBlueprintFunctionLibrary_CLogtofile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMyBlueprintFunctionLibrary_CLogtofile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMyBlueprintFunctionLibrary_FileMd5isequalSpecificMd5_Statics
	{
		struct MyBlueprintFunctionLibrary_eventFileMd5isequalSpecificMd5_Parms
		{
			FString filepath;
			FString SpecificMd5;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SpecificMd5;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_filepath;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UMyBlueprintFunctionLibrary_FileMd5isequalSpecificMd5_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MyBlueprintFunctionLibrary_eventFileMd5isequalSpecificMd5_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMyBlueprintFunctionLibrary_FileMd5isequalSpecificMd5_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MyBlueprintFunctionLibrary_eventFileMd5isequalSpecificMd5_Parms), &Z_Construct_UFunction_UMyBlueprintFunctionLibrary_FileMd5isequalSpecificMd5_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMyBlueprintFunctionLibrary_FileMd5isequalSpecificMd5_Statics::NewProp_SpecificMd5 = { "SpecificMd5", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MyBlueprintFunctionLibrary_eventFileMd5isequalSpecificMd5_Parms, SpecificMd5), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMyBlueprintFunctionLibrary_FileMd5isequalSpecificMd5_Statics::NewProp_filepath = { "filepath", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MyBlueprintFunctionLibrary_eventFileMd5isequalSpecificMd5_Parms, filepath), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMyBlueprintFunctionLibrary_FileMd5isequalSpecificMd5_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMyBlueprintFunctionLibrary_FileMd5isequalSpecificMd5_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMyBlueprintFunctionLibrary_FileMd5isequalSpecificMd5_Statics::NewProp_SpecificMd5,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMyBlueprintFunctionLibrary_FileMd5isequalSpecificMd5_Statics::NewProp_filepath,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMyBlueprintFunctionLibrary_FileMd5isequalSpecificMd5_Statics::Function_MetaDataParams[] = {
		{ "Category", "Mybp" },
		{ "ModuleRelativePath", "Public/MyBlueprintFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMyBlueprintFunctionLibrary_FileMd5isequalSpecificMd5_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMyBlueprintFunctionLibrary, nullptr, "FileMd5isequalSpecificMd5", nullptr, nullptr, sizeof(MyBlueprintFunctionLibrary_eventFileMd5isequalSpecificMd5_Parms), Z_Construct_UFunction_UMyBlueprintFunctionLibrary_FileMd5isequalSpecificMd5_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMyBlueprintFunctionLibrary_FileMd5isequalSpecificMd5_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMyBlueprintFunctionLibrary_FileMd5isequalSpecificMd5_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMyBlueprintFunctionLibrary_FileMd5isequalSpecificMd5_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMyBlueprintFunctionLibrary_FileMd5isequalSpecificMd5()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMyBlueprintFunctionLibrary_FileMd5isequalSpecificMd5_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMyBlueprintFunctionLibrary_Loadobject_Statics
	{
		struct MyBlueprintFunctionLibrary_eventLoadobject_Parms
		{
			FString path;
			UObject* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_path;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMyBlueprintFunctionLibrary_Loadobject_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MyBlueprintFunctionLibrary_eventLoadobject_Parms, ReturnValue), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMyBlueprintFunctionLibrary_Loadobject_Statics::NewProp_path = { "path", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MyBlueprintFunctionLibrary_eventLoadobject_Parms, path), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMyBlueprintFunctionLibrary_Loadobject_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMyBlueprintFunctionLibrary_Loadobject_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMyBlueprintFunctionLibrary_Loadobject_Statics::NewProp_path,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMyBlueprintFunctionLibrary_Loadobject_Statics::Function_MetaDataParams[] = {
		{ "Category", "Mybp" },
		{ "ModuleRelativePath", "Public/MyBlueprintFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMyBlueprintFunctionLibrary_Loadobject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMyBlueprintFunctionLibrary, nullptr, "Loadobject", nullptr, nullptr, sizeof(MyBlueprintFunctionLibrary_eventLoadobject_Parms), Z_Construct_UFunction_UMyBlueprintFunctionLibrary_Loadobject_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMyBlueprintFunctionLibrary_Loadobject_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMyBlueprintFunctionLibrary_Loadobject_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMyBlueprintFunctionLibrary_Loadobject_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMyBlueprintFunctionLibrary_Loadobject()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMyBlueprintFunctionLibrary_Loadobject_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMyBlueprintFunctionLibrary_Mount_Statics
	{
		struct MyBlueprintFunctionLibrary_eventMount_Parms
		{
			FString PakFileName;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_PakFileName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UMyBlueprintFunctionLibrary_Mount_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MyBlueprintFunctionLibrary_eventMount_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMyBlueprintFunctionLibrary_Mount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MyBlueprintFunctionLibrary_eventMount_Parms), &Z_Construct_UFunction_UMyBlueprintFunctionLibrary_Mount_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMyBlueprintFunctionLibrary_Mount_Statics::NewProp_PakFileName = { "PakFileName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MyBlueprintFunctionLibrary_eventMount_Parms, PakFileName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMyBlueprintFunctionLibrary_Mount_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMyBlueprintFunctionLibrary_Mount_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMyBlueprintFunctionLibrary_Mount_Statics::NewProp_PakFileName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMyBlueprintFunctionLibrary_Mount_Statics::Function_MetaDataParams[] = {
		{ "Category", "Mybp" },
		{ "ModuleRelativePath", "Public/MyBlueprintFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMyBlueprintFunctionLibrary_Mount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMyBlueprintFunctionLibrary, nullptr, "Mount", nullptr, nullptr, sizeof(MyBlueprintFunctionLibrary_eventMount_Parms), Z_Construct_UFunction_UMyBlueprintFunctionLibrary_Mount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMyBlueprintFunctionLibrary_Mount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMyBlueprintFunctionLibrary_Mount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMyBlueprintFunctionLibrary_Mount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMyBlueprintFunctionLibrary_Mount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMyBlueprintFunctionLibrary_Mount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMyBlueprintFunctionLibrary_OnGameEndefunc_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMyBlueprintFunctionLibrary_OnGameEndefunc_Statics::Function_MetaDataParams[] = {
		{ "Category", "Mybp" },
		{ "ModuleRelativePath", "Public/MyBlueprintFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMyBlueprintFunctionLibrary_OnGameEndefunc_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMyBlueprintFunctionLibrary, nullptr, "OnGameEndefunc", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMyBlueprintFunctionLibrary_OnGameEndefunc_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMyBlueprintFunctionLibrary_OnGameEndefunc_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMyBlueprintFunctionLibrary_OnGameEndefunc()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMyBlueprintFunctionLibrary_OnGameEndefunc_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMyBlueprintFunctionLibrary_Ongameinitfunc_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMyBlueprintFunctionLibrary_Ongameinitfunc_Statics::Function_MetaDataParams[] = {
		{ "Category", "Mybp" },
		{ "ModuleRelativePath", "Public/MyBlueprintFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMyBlueprintFunctionLibrary_Ongameinitfunc_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMyBlueprintFunctionLibrary, nullptr, "Ongameinitfunc", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMyBlueprintFunctionLibrary_Ongameinitfunc_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMyBlueprintFunctionLibrary_Ongameinitfunc_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMyBlueprintFunctionLibrary_Ongameinitfunc()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMyBlueprintFunctionLibrary_Ongameinitfunc_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMyBlueprintFunctionLibrary_readdatafromfile_Statics
	{
		struct MyBlueprintFunctionLibrary_eventreaddatafromfile_Parms
		{
			FString filepath;
			TArray<uint8> content;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_content;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_content_Inner;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_filepath;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMyBlueprintFunctionLibrary_readdatafromfile_Statics::NewProp_content = { "content", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MyBlueprintFunctionLibrary_eventreaddatafromfile_Parms, content), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMyBlueprintFunctionLibrary_readdatafromfile_Statics::NewProp_content_Inner = { "content", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMyBlueprintFunctionLibrary_readdatafromfile_Statics::NewProp_filepath = { "filepath", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MyBlueprintFunctionLibrary_eventreaddatafromfile_Parms, filepath), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMyBlueprintFunctionLibrary_readdatafromfile_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMyBlueprintFunctionLibrary_readdatafromfile_Statics::NewProp_content,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMyBlueprintFunctionLibrary_readdatafromfile_Statics::NewProp_content_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMyBlueprintFunctionLibrary_readdatafromfile_Statics::NewProp_filepath,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMyBlueprintFunctionLibrary_readdatafromfile_Statics::Function_MetaDataParams[] = {
		{ "Category", "Mybp" },
		{ "ModuleRelativePath", "Public/MyBlueprintFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMyBlueprintFunctionLibrary_readdatafromfile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMyBlueprintFunctionLibrary, nullptr, "readdatafromfile", nullptr, nullptr, sizeof(MyBlueprintFunctionLibrary_eventreaddatafromfile_Parms), Z_Construct_UFunction_UMyBlueprintFunctionLibrary_readdatafromfile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMyBlueprintFunctionLibrary_readdatafromfile_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMyBlueprintFunctionLibrary_readdatafromfile_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMyBlueprintFunctionLibrary_readdatafromfile_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMyBlueprintFunctionLibrary_readdatafromfile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMyBlueprintFunctionLibrary_readdatafromfile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMyBlueprintFunctionLibrary_readstringfromfile_Statics
	{
		struct MyBlueprintFunctionLibrary_eventreadstringfromfile_Parms
		{
			FString filepath;
			FString content;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_content;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_filepath;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMyBlueprintFunctionLibrary_readstringfromfile_Statics::NewProp_content = { "content", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MyBlueprintFunctionLibrary_eventreadstringfromfile_Parms, content), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMyBlueprintFunctionLibrary_readstringfromfile_Statics::NewProp_filepath = { "filepath", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MyBlueprintFunctionLibrary_eventreadstringfromfile_Parms, filepath), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMyBlueprintFunctionLibrary_readstringfromfile_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMyBlueprintFunctionLibrary_readstringfromfile_Statics::NewProp_content,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMyBlueprintFunctionLibrary_readstringfromfile_Statics::NewProp_filepath,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMyBlueprintFunctionLibrary_readstringfromfile_Statics::Function_MetaDataParams[] = {
		{ "Category", "Mybp" },
		{ "ModuleRelativePath", "Public/MyBlueprintFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMyBlueprintFunctionLibrary_readstringfromfile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMyBlueprintFunctionLibrary, nullptr, "readstringfromfile", nullptr, nullptr, sizeof(MyBlueprintFunctionLibrary_eventreadstringfromfile_Parms), Z_Construct_UFunction_UMyBlueprintFunctionLibrary_readstringfromfile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMyBlueprintFunctionLibrary_readstringfromfile_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMyBlueprintFunctionLibrary_readstringfromfile_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMyBlueprintFunctionLibrary_readstringfromfile_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMyBlueprintFunctionLibrary_readstringfromfile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMyBlueprintFunctionLibrary_readstringfromfile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMyBlueprintFunctionLibrary_Screenshoot_Statics
	{
		struct MyBlueprintFunctionLibrary_eventScreenshoot_Parms
		{
			FString infilename;
			bool bInShowUI;
			bool bAddFilenameSuffix;
			bool brelativepath;
			FString ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static void NewProp_brelativepath_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_brelativepath;
		static void NewProp_bAddFilenameSuffix_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAddFilenameSuffix;
		static void NewProp_bInShowUI_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bInShowUI;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_infilename;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMyBlueprintFunctionLibrary_Screenshoot_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMyBlueprintFunctionLibrary_Screenshoot_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000582, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MyBlueprintFunctionLibrary_eventScreenshoot_Parms, ReturnValue), METADATA_PARAMS(Z_Construct_UFunction_UMyBlueprintFunctionLibrary_Screenshoot_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMyBlueprintFunctionLibrary_Screenshoot_Statics::NewProp_ReturnValue_MetaData)) };
	void Z_Construct_UFunction_UMyBlueprintFunctionLibrary_Screenshoot_Statics::NewProp_brelativepath_SetBit(void* Obj)
	{
		((MyBlueprintFunctionLibrary_eventScreenshoot_Parms*)Obj)->brelativepath = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMyBlueprintFunctionLibrary_Screenshoot_Statics::NewProp_brelativepath = { "brelativepath", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MyBlueprintFunctionLibrary_eventScreenshoot_Parms), &Z_Construct_UFunction_UMyBlueprintFunctionLibrary_Screenshoot_Statics::NewProp_brelativepath_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UMyBlueprintFunctionLibrary_Screenshoot_Statics::NewProp_bAddFilenameSuffix_SetBit(void* Obj)
	{
		((MyBlueprintFunctionLibrary_eventScreenshoot_Parms*)Obj)->bAddFilenameSuffix = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMyBlueprintFunctionLibrary_Screenshoot_Statics::NewProp_bAddFilenameSuffix = { "bAddFilenameSuffix", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MyBlueprintFunctionLibrary_eventScreenshoot_Parms), &Z_Construct_UFunction_UMyBlueprintFunctionLibrary_Screenshoot_Statics::NewProp_bAddFilenameSuffix_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UMyBlueprintFunctionLibrary_Screenshoot_Statics::NewProp_bInShowUI_SetBit(void* Obj)
	{
		((MyBlueprintFunctionLibrary_eventScreenshoot_Parms*)Obj)->bInShowUI = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMyBlueprintFunctionLibrary_Screenshoot_Statics::NewProp_bInShowUI = { "bInShowUI", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MyBlueprintFunctionLibrary_eventScreenshoot_Parms), &Z_Construct_UFunction_UMyBlueprintFunctionLibrary_Screenshoot_Statics::NewProp_bInShowUI_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMyBlueprintFunctionLibrary_Screenshoot_Statics::NewProp_infilename = { "infilename", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MyBlueprintFunctionLibrary_eventScreenshoot_Parms, infilename), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMyBlueprintFunctionLibrary_Screenshoot_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMyBlueprintFunctionLibrary_Screenshoot_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMyBlueprintFunctionLibrary_Screenshoot_Statics::NewProp_brelativepath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMyBlueprintFunctionLibrary_Screenshoot_Statics::NewProp_bAddFilenameSuffix,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMyBlueprintFunctionLibrary_Screenshoot_Statics::NewProp_bInShowUI,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMyBlueprintFunctionLibrary_Screenshoot_Statics::NewProp_infilename,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMyBlueprintFunctionLibrary_Screenshoot_Statics::Function_MetaDataParams[] = {
		{ "Category", "Mybp" },
		{ "CPP_Default_brelativepath", "true" },
		{ "ModuleRelativePath", "Public/MyBlueprintFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMyBlueprintFunctionLibrary_Screenshoot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMyBlueprintFunctionLibrary, nullptr, "Screenshoot", nullptr, nullptr, sizeof(MyBlueprintFunctionLibrary_eventScreenshoot_Parms), Z_Construct_UFunction_UMyBlueprintFunctionLibrary_Screenshoot_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMyBlueprintFunctionLibrary_Screenshoot_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMyBlueprintFunctionLibrary_Screenshoot_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMyBlueprintFunctionLibrary_Screenshoot_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMyBlueprintFunctionLibrary_Screenshoot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMyBlueprintFunctionLibrary_Screenshoot_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMyBlueprintFunctionLibrary_UnMount_Statics
	{
		struct MyBlueprintFunctionLibrary_eventUnMount_Parms
		{
			FString PakFileName;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_PakFileName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UMyBlueprintFunctionLibrary_UnMount_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MyBlueprintFunctionLibrary_eventUnMount_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMyBlueprintFunctionLibrary_UnMount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MyBlueprintFunctionLibrary_eventUnMount_Parms), &Z_Construct_UFunction_UMyBlueprintFunctionLibrary_UnMount_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMyBlueprintFunctionLibrary_UnMount_Statics::NewProp_PakFileName = { "PakFileName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MyBlueprintFunctionLibrary_eventUnMount_Parms, PakFileName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMyBlueprintFunctionLibrary_UnMount_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMyBlueprintFunctionLibrary_UnMount_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMyBlueprintFunctionLibrary_UnMount_Statics::NewProp_PakFileName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMyBlueprintFunctionLibrary_UnMount_Statics::Function_MetaDataParams[] = {
		{ "Category", "Mybp" },
		{ "ModuleRelativePath", "Public/MyBlueprintFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMyBlueprintFunctionLibrary_UnMount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMyBlueprintFunctionLibrary, nullptr, "UnMount", nullptr, nullptr, sizeof(MyBlueprintFunctionLibrary_eventUnMount_Parms), Z_Construct_UFunction_UMyBlueprintFunctionLibrary_UnMount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMyBlueprintFunctionLibrary_UnMount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMyBlueprintFunctionLibrary_UnMount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMyBlueprintFunctionLibrary_UnMount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMyBlueprintFunctionLibrary_UnMount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMyBlueprintFunctionLibrary_UnMount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMyBlueprintFunctionLibrary_writedatatofile_Statics
	{
		struct MyBlueprintFunctionLibrary_eventwritedatatofile_Parms
		{
			FString filepath;
			TArray<uint8> content;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_content_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_content;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_content_Inner;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_filepath;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMyBlueprintFunctionLibrary_writedatatofile_Statics::NewProp_content_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMyBlueprintFunctionLibrary_writedatatofile_Statics::NewProp_content = { "content", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MyBlueprintFunctionLibrary_eventwritedatatofile_Parms, content), METADATA_PARAMS(Z_Construct_UFunction_UMyBlueprintFunctionLibrary_writedatatofile_Statics::NewProp_content_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMyBlueprintFunctionLibrary_writedatatofile_Statics::NewProp_content_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMyBlueprintFunctionLibrary_writedatatofile_Statics::NewProp_content_Inner = { "content", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMyBlueprintFunctionLibrary_writedatatofile_Statics::NewProp_filepath = { "filepath", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MyBlueprintFunctionLibrary_eventwritedatatofile_Parms, filepath), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMyBlueprintFunctionLibrary_writedatatofile_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMyBlueprintFunctionLibrary_writedatatofile_Statics::NewProp_content,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMyBlueprintFunctionLibrary_writedatatofile_Statics::NewProp_content_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMyBlueprintFunctionLibrary_writedatatofile_Statics::NewProp_filepath,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMyBlueprintFunctionLibrary_writedatatofile_Statics::Function_MetaDataParams[] = {
		{ "Category", "Mybp" },
		{ "ModuleRelativePath", "Public/MyBlueprintFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMyBlueprintFunctionLibrary_writedatatofile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMyBlueprintFunctionLibrary, nullptr, "writedatatofile", nullptr, nullptr, sizeof(MyBlueprintFunctionLibrary_eventwritedatatofile_Parms), Z_Construct_UFunction_UMyBlueprintFunctionLibrary_writedatatofile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMyBlueprintFunctionLibrary_writedatatofile_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMyBlueprintFunctionLibrary_writedatatofile_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMyBlueprintFunctionLibrary_writedatatofile_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMyBlueprintFunctionLibrary_writedatatofile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMyBlueprintFunctionLibrary_writedatatofile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UMyBlueprintFunctionLibrary_NoRegister()
	{
		return UMyBlueprintFunctionLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UMyBlueprintFunctionLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMyBlueprintFunctionLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_Utility,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UMyBlueprintFunctionLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMyBlueprintFunctionLibrary_CLogtofile, "CLogtofile" }, // 3566860349
		{ &Z_Construct_UFunction_UMyBlueprintFunctionLibrary_FileMd5isequalSpecificMd5, "FileMd5isequalSpecificMd5" }, // 2232638114
		{ &Z_Construct_UFunction_UMyBlueprintFunctionLibrary_Loadobject, "Loadobject" }, // 157750678
		{ &Z_Construct_UFunction_UMyBlueprintFunctionLibrary_Mount, "Mount" }, // 53248034
		{ &Z_Construct_UFunction_UMyBlueprintFunctionLibrary_OnGameEndefunc, "OnGameEndefunc" }, // 457154271
		{ &Z_Construct_UFunction_UMyBlueprintFunctionLibrary_Ongameinitfunc, "Ongameinitfunc" }, // 1157625491
		{ &Z_Construct_UFunction_UMyBlueprintFunctionLibrary_readdatafromfile, "readdatafromfile" }, // 1326488653
		{ &Z_Construct_UFunction_UMyBlueprintFunctionLibrary_readstringfromfile, "readstringfromfile" }, // 3386998318
		{ &Z_Construct_UFunction_UMyBlueprintFunctionLibrary_Screenshoot, "Screenshoot" }, // 610721794
		{ &Z_Construct_UFunction_UMyBlueprintFunctionLibrary_UnMount, "UnMount" }, // 422740871
		{ &Z_Construct_UFunction_UMyBlueprintFunctionLibrary_writedatatofile, "writedatatofile" }, // 1431237465
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMyBlueprintFunctionLibrary_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "MyBlueprintFunctionLibrary.h" },
		{ "ModuleRelativePath", "Public/MyBlueprintFunctionLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMyBlueprintFunctionLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMyBlueprintFunctionLibrary>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMyBlueprintFunctionLibrary_Statics::ClassParams = {
		&UMyBlueprintFunctionLibrary::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMyBlueprintFunctionLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMyBlueprintFunctionLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMyBlueprintFunctionLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMyBlueprintFunctionLibrary_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMyBlueprintFunctionLibrary, 1074279094);
	template<> UTILITY_API UClass* StaticClass<UMyBlueprintFunctionLibrary>()
	{
		return UMyBlueprintFunctionLibrary::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMyBlueprintFunctionLibrary(Z_Construct_UClass_UMyBlueprintFunctionLibrary, &UMyBlueprintFunctionLibrary::StaticClass, TEXT("/Script/Utility"), TEXT("UMyBlueprintFunctionLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMyBlueprintFunctionLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

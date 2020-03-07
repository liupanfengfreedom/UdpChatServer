// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "tp/Public/TTGameInstance.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTTGameInstance() {}
// Cross Module References
	TP_API UClass* Z_Construct_UClass_UTTGameInstance_NoRegister();
	TP_API UClass* Z_Construct_UClass_UTTGameInstance();
	ENGINE_API UClass* Z_Construct_UClass_UGameInstance();
	UPackage* Z_Construct_UPackage__Script_tp();
	TP_API UFunction* Z_Construct_UFunction_UTTGameInstance_Openservermap();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
// End Cross Module References
	void UTTGameInstance::StaticRegisterNativesUTTGameInstance()
	{
		UClass* Class = UTTGameInstance::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Openservermap", &UTTGameInstance::execOpenservermap },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UTTGameInstance_Openservermap_Statics
	{
		struct TTGameInstance_eventOpenservermap_Parms
		{
			UObject* obj;
			FString pmapname;
			FString mapID;
			FString nvn;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_nvn;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_mapID;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_pmapname;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_obj;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UTTGameInstance_Openservermap_Statics::NewProp_nvn = { "nvn", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TTGameInstance_eventOpenservermap_Parms, nvn), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UTTGameInstance_Openservermap_Statics::NewProp_mapID = { "mapID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TTGameInstance_eventOpenservermap_Parms, mapID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UTTGameInstance_Openservermap_Statics::NewProp_pmapname = { "pmapname", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TTGameInstance_eventOpenservermap_Parms, pmapname), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTTGameInstance_Openservermap_Statics::NewProp_obj = { "obj", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TTGameInstance_eventOpenservermap_Parms, obj), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTTGameInstance_Openservermap_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTTGameInstance_Openservermap_Statics::NewProp_nvn,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTTGameInstance_Openservermap_Statics::NewProp_mapID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTTGameInstance_Openservermap_Statics::NewProp_pmapname,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTTGameInstance_Openservermap_Statics::NewProp_obj,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTTGameInstance_Openservermap_Statics::Function_MetaDataParams[] = {
		{ "Category", "UTTGameInstance" },
		{ "ModuleRelativePath", "Public/TTGameInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTTGameInstance_Openservermap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTTGameInstance, nullptr, "Openservermap", nullptr, nullptr, sizeof(TTGameInstance_eventOpenservermap_Parms), Z_Construct_UFunction_UTTGameInstance_Openservermap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTTGameInstance_Openservermap_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTTGameInstance_Openservermap_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTTGameInstance_Openservermap_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTTGameInstance_Openservermap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTTGameInstance_Openservermap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UTTGameInstance_NoRegister()
	{
		return UTTGameInstance::StaticClass();
	}
	struct Z_Construct_UClass_UTTGameInstance_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTTGameInstance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_tp,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UTTGameInstance_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UTTGameInstance_Openservermap, "Openservermap" }, // 704456125
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTTGameInstance_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "TTGameInstance.h" },
		{ "ModuleRelativePath", "Public/TTGameInstance.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTTGameInstance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTTGameInstance>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UTTGameInstance_Statics::ClassParams = {
		&UTTGameInstance::StaticClass,
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
		0x001000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UTTGameInstance_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTTGameInstance_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTTGameInstance()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UTTGameInstance_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTTGameInstance, 1170939672);
	template<> TP_API UClass* StaticClass<UTTGameInstance>()
	{
		return UTTGameInstance::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTTGameInstance(Z_Construct_UClass_UTTGameInstance, &UTTGameInstance::StaticClass, TEXT("/Script/tp"), TEXT("UTTGameInstance"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTTGameInstance);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

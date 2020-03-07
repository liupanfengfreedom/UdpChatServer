// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Utility/Public/HttpServicev.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHttpServicev() {}
// Cross Module References
	UTILITY_API UFunction* Z_Construct_UDelegateFunction_Utility_OnHttpResponseProgress__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_Utility();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	UTILITY_API UFunction* Z_Construct_UDelegateFunction_Utility_OnHttpResponseComplete__DelegateSignature();
	UTILITY_API UFunction* Z_Construct_UDelegateFunction_Utility_OnHtpResponseFailed__DelegateSignature();
	UTILITY_API UClass* Z_Construct_UClass_UHttpServicev_NoRegister();
	UTILITY_API UClass* Z_Construct_UClass_UHttpServicev();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_Utility_OnHttpResponseProgress__DelegateSignature_Statics
	{
		struct _Script_Utility_eventOnHttpResponseProgress_Parms
		{
			int32 a;
			int32 b;
			UObject* extra;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_extra;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_b;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_a;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_Utility_OnHttpResponseProgress__DelegateSignature_Statics::NewProp_extra = { "extra", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_Utility_eventOnHttpResponseProgress_Parms, extra), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_Utility_OnHttpResponseProgress__DelegateSignature_Statics::NewProp_b = { "b", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_Utility_eventOnHttpResponseProgress_Parms, b), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_Utility_OnHttpResponseProgress__DelegateSignature_Statics::NewProp_a = { "a", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_Utility_eventOnHttpResponseProgress_Parms, a), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_Utility_OnHttpResponseProgress__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Utility_OnHttpResponseProgress__DelegateSignature_Statics::NewProp_extra,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Utility_OnHttpResponseProgress__DelegateSignature_Statics::NewProp_b,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Utility_OnHttpResponseProgress__DelegateSignature_Statics::NewProp_a,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Utility_OnHttpResponseProgress__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/HttpServicev.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Utility_OnHttpResponseProgress__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Utility, nullptr, "OnHttpResponseProgress__DelegateSignature", nullptr, nullptr, sizeof(_Script_Utility_eventOnHttpResponseProgress_Parms), Z_Construct_UDelegateFunction_Utility_OnHttpResponseProgress__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Utility_OnHttpResponseProgress__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_Utility_OnHttpResponseProgress__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Utility_OnHttpResponseProgress__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_Utility_OnHttpResponseProgress__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_Utility_OnHttpResponseProgress__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_Utility_OnHttpResponseComplete__DelegateSignature_Statics
	{
		struct _Script_Utility_eventOnHttpResponseComplete_Parms
		{
			FString Responsestring;
			TArray<uint8> Responsecontent;
			UObject* extra;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_extra;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Responsecontent_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Responsecontent;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Responsecontent_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Responsestring_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Responsestring;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_Utility_OnHttpResponseComplete__DelegateSignature_Statics::NewProp_extra = { "extra", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_Utility_eventOnHttpResponseComplete_Parms, extra), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Utility_OnHttpResponseComplete__DelegateSignature_Statics::NewProp_Responsecontent_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UDelegateFunction_Utility_OnHttpResponseComplete__DelegateSignature_Statics::NewProp_Responsecontent = { "Responsecontent", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_Utility_eventOnHttpResponseComplete_Parms, Responsecontent), METADATA_PARAMS(Z_Construct_UDelegateFunction_Utility_OnHttpResponseComplete__DelegateSignature_Statics::NewProp_Responsecontent_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Utility_OnHttpResponseComplete__DelegateSignature_Statics::NewProp_Responsecontent_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_Utility_OnHttpResponseComplete__DelegateSignature_Statics::NewProp_Responsecontent_Inner = { "Responsecontent", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Utility_OnHttpResponseComplete__DelegateSignature_Statics::NewProp_Responsestring_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_Utility_OnHttpResponseComplete__DelegateSignature_Statics::NewProp_Responsestring = { "Responsestring", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_Utility_eventOnHttpResponseComplete_Parms, Responsestring), METADATA_PARAMS(Z_Construct_UDelegateFunction_Utility_OnHttpResponseComplete__DelegateSignature_Statics::NewProp_Responsestring_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Utility_OnHttpResponseComplete__DelegateSignature_Statics::NewProp_Responsestring_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_Utility_OnHttpResponseComplete__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Utility_OnHttpResponseComplete__DelegateSignature_Statics::NewProp_extra,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Utility_OnHttpResponseComplete__DelegateSignature_Statics::NewProp_Responsecontent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Utility_OnHttpResponseComplete__DelegateSignature_Statics::NewProp_Responsecontent_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Utility_OnHttpResponseComplete__DelegateSignature_Statics::NewProp_Responsestring,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Utility_OnHttpResponseComplete__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/HttpServicev.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Utility_OnHttpResponseComplete__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Utility, nullptr, "OnHttpResponseComplete__DelegateSignature", nullptr, nullptr, sizeof(_Script_Utility_eventOnHttpResponseComplete_Parms), Z_Construct_UDelegateFunction_Utility_OnHttpResponseComplete__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Utility_OnHttpResponseComplete__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_Utility_OnHttpResponseComplete__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Utility_OnHttpResponseComplete__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_Utility_OnHttpResponseComplete__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_Utility_OnHttpResponseComplete__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_Utility_OnHtpResponseFailed__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Utility_OnHtpResponseFailed__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "ModuleRelativePath", "Public/HttpServicev.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Utility_OnHtpResponseFailed__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Utility, nullptr, "OnHtpResponseFailed__DelegateSignature", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_Utility_OnHtpResponseFailed__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Utility_OnHtpResponseFailed__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_Utility_OnHtpResponseFailed__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_Utility_OnHtpResponseFailed__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	void UHttpServicev::StaticRegisterNativesUHttpServicev()
	{
	}
	UClass* Z_Construct_UClass_UHttpServicev_NoRegister()
	{
		return UHttpServicev::StaticClass();
	}
	struct Z_Construct_UClass_UHttpServicev_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UHttpServicev_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Utility,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHttpServicev_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "HttpServicev.h" },
		{ "ModuleRelativePath", "Public/HttpServicev.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UHttpServicev_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHttpServicev>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UHttpServicev_Statics::ClassParams = {
		&UHttpServicev::StaticClass,
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
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UHttpServicev_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UHttpServicev_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UHttpServicev()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UHttpServicev_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UHttpServicev, 1151562877);
	template<> UTILITY_API UClass* StaticClass<UHttpServicev>()
	{
		return UHttpServicev::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UHttpServicev(Z_Construct_UClass_UHttpServicev, &UHttpServicev::StaticClass, TEXT("/Script/Utility"), TEXT("UHttpServicev"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHttpServicev);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

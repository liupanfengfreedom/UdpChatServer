// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MobileUtils/Public/MobileUtilsBlueprintLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMobileUtilsBlueprintLibrary() {}
// Cross Module References
	MOBILEUTILS_API UClass* Z_Construct_UClass_UMobileUtilsBlueprintLibrary_NoRegister();
	MOBILEUTILS_API UClass* Z_Construct_UClass_UMobileUtilsBlueprintLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_MobileUtils();
	MOBILEUTILS_API UFunction* Z_Construct_UFunction_UMobileUtilsBlueprintLibrary_ConvertToAbsolutePath();
	MOBILEUTILS_API UFunction* Z_Construct_UFunction_UMobileUtilsBlueprintLibrary_SetOrientation();
	MOBILEUTILS_API UFunction* Z_Construct_UFunction_UMobileUtilsBlueprintLibrary_StartActivity();
// End Cross Module References
	void UMobileUtilsBlueprintLibrary::StaticRegisterNativesUMobileUtilsBlueprintLibrary()
	{
		UClass* Class = UMobileUtilsBlueprintLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ConvertToAbsolutePath", &UMobileUtilsBlueprintLibrary::execConvertToAbsolutePath },
			{ "SetOrientation", &UMobileUtilsBlueprintLibrary::execSetOrientation },
			{ "StartActivity", &UMobileUtilsBlueprintLibrary::execStartActivity },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMobileUtilsBlueprintLibrary_ConvertToAbsolutePath_Statics
	{
		struct MobileUtilsBlueprintLibrary_eventConvertToAbsolutePath_Parms
		{
			FString path;
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_path_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_path;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMobileUtilsBlueprintLibrary_ConvertToAbsolutePath_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MobileUtilsBlueprintLibrary_eventConvertToAbsolutePath_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMobileUtilsBlueprintLibrary_ConvertToAbsolutePath_Statics::NewProp_path_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMobileUtilsBlueprintLibrary_ConvertToAbsolutePath_Statics::NewProp_path = { "path", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MobileUtilsBlueprintLibrary_eventConvertToAbsolutePath_Parms, path), METADATA_PARAMS(Z_Construct_UFunction_UMobileUtilsBlueprintLibrary_ConvertToAbsolutePath_Statics::NewProp_path_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMobileUtilsBlueprintLibrary_ConvertToAbsolutePath_Statics::NewProp_path_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMobileUtilsBlueprintLibrary_ConvertToAbsolutePath_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMobileUtilsBlueprintLibrary_ConvertToAbsolutePath_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMobileUtilsBlueprintLibrary_ConvertToAbsolutePath_Statics::NewProp_path,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMobileUtilsBlueprintLibrary_ConvertToAbsolutePath_Statics::Function_MetaDataParams[] = {
		{ "Category", "MobileUtils" },
		{ "ModuleRelativePath", "Public/MobileUtilsBlueprintLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMobileUtilsBlueprintLibrary_ConvertToAbsolutePath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMobileUtilsBlueprintLibrary, nullptr, "ConvertToAbsolutePath", nullptr, nullptr, sizeof(MobileUtilsBlueprintLibrary_eventConvertToAbsolutePath_Parms), Z_Construct_UFunction_UMobileUtilsBlueprintLibrary_ConvertToAbsolutePath_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMobileUtilsBlueprintLibrary_ConvertToAbsolutePath_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMobileUtilsBlueprintLibrary_ConvertToAbsolutePath_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMobileUtilsBlueprintLibrary_ConvertToAbsolutePath_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMobileUtilsBlueprintLibrary_ConvertToAbsolutePath()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMobileUtilsBlueprintLibrary_ConvertToAbsolutePath_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMobileUtilsBlueprintLibrary_SetOrientation_Statics
	{
		struct MobileUtilsBlueprintLibrary_eventSetOrientation_Parms
		{
			int32 orientation;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_orientation;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UMobileUtilsBlueprintLibrary_SetOrientation_Statics::NewProp_orientation = { "orientation", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MobileUtilsBlueprintLibrary_eventSetOrientation_Parms, orientation), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMobileUtilsBlueprintLibrary_SetOrientation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMobileUtilsBlueprintLibrary_SetOrientation_Statics::NewProp_orientation,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMobileUtilsBlueprintLibrary_SetOrientation_Statics::Function_MetaDataParams[] = {
		{ "Category", "MobileUtils" },
		{ "ModuleRelativePath", "Public/MobileUtilsBlueprintLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMobileUtilsBlueprintLibrary_SetOrientation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMobileUtilsBlueprintLibrary, nullptr, "SetOrientation", nullptr, nullptr, sizeof(MobileUtilsBlueprintLibrary_eventSetOrientation_Parms), Z_Construct_UFunction_UMobileUtilsBlueprintLibrary_SetOrientation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMobileUtilsBlueprintLibrary_SetOrientation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMobileUtilsBlueprintLibrary_SetOrientation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMobileUtilsBlueprintLibrary_SetOrientation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMobileUtilsBlueprintLibrary_SetOrientation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMobileUtilsBlueprintLibrary_SetOrientation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMobileUtilsBlueprintLibrary_StartActivity_Statics
	{
		struct MobileUtilsBlueprintLibrary_eventStartActivity_Parms
		{
			FString activity;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_activity_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_activity;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMobileUtilsBlueprintLibrary_StartActivity_Statics::NewProp_activity_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMobileUtilsBlueprintLibrary_StartActivity_Statics::NewProp_activity = { "activity", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MobileUtilsBlueprintLibrary_eventStartActivity_Parms, activity), METADATA_PARAMS(Z_Construct_UFunction_UMobileUtilsBlueprintLibrary_StartActivity_Statics::NewProp_activity_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMobileUtilsBlueprintLibrary_StartActivity_Statics::NewProp_activity_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMobileUtilsBlueprintLibrary_StartActivity_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMobileUtilsBlueprintLibrary_StartActivity_Statics::NewProp_activity,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMobileUtilsBlueprintLibrary_StartActivity_Statics::Function_MetaDataParams[] = {
		{ "Category", "MobileUtils" },
		{ "ModuleRelativePath", "Public/MobileUtilsBlueprintLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMobileUtilsBlueprintLibrary_StartActivity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMobileUtilsBlueprintLibrary, nullptr, "StartActivity", nullptr, nullptr, sizeof(MobileUtilsBlueprintLibrary_eventStartActivity_Parms), Z_Construct_UFunction_UMobileUtilsBlueprintLibrary_StartActivity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMobileUtilsBlueprintLibrary_StartActivity_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMobileUtilsBlueprintLibrary_StartActivity_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMobileUtilsBlueprintLibrary_StartActivity_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMobileUtilsBlueprintLibrary_StartActivity()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMobileUtilsBlueprintLibrary_StartActivity_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UMobileUtilsBlueprintLibrary_NoRegister()
	{
		return UMobileUtilsBlueprintLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UMobileUtilsBlueprintLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMobileUtilsBlueprintLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_MobileUtils,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UMobileUtilsBlueprintLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMobileUtilsBlueprintLibrary_ConvertToAbsolutePath, "ConvertToAbsolutePath" }, // 2483366538
		{ &Z_Construct_UFunction_UMobileUtilsBlueprintLibrary_SetOrientation, "SetOrientation" }, // 557015224
		{ &Z_Construct_UFunction_UMobileUtilsBlueprintLibrary_StartActivity, "StartActivity" }, // 1371077751
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMobileUtilsBlueprintLibrary_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MobileUtilsBlueprintLibrary.h" },
		{ "ModuleRelativePath", "Public/MobileUtilsBlueprintLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMobileUtilsBlueprintLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMobileUtilsBlueprintLibrary>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMobileUtilsBlueprintLibrary_Statics::ClassParams = {
		&UMobileUtilsBlueprintLibrary::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UMobileUtilsBlueprintLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMobileUtilsBlueprintLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMobileUtilsBlueprintLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMobileUtilsBlueprintLibrary_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMobileUtilsBlueprintLibrary, 1450363894);
	template<> MOBILEUTILS_API UClass* StaticClass<UMobileUtilsBlueprintLibrary>()
	{
		return UMobileUtilsBlueprintLibrary::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMobileUtilsBlueprintLibrary(Z_Construct_UClass_UMobileUtilsBlueprintLibrary, &UMobileUtilsBlueprintLibrary::StaticClass, TEXT("/Script/MobileUtils"), TEXT("UMobileUtilsBlueprintLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMobileUtilsBlueprintLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

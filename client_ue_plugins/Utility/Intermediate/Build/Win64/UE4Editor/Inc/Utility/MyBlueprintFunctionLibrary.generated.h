// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
#ifdef UTILITY_MyBlueprintFunctionLibrary_generated_h
#error "MyBlueprintFunctionLibrary.generated.h already included, missing '#pragma once' in MyBlueprintFunctionLibrary.h"
#endif
#define UTILITY_MyBlueprintFunctionLibrary_generated_h

#define audiov2_Plugins_Utility_Source_Utility_Public_MyBlueprintFunctionLibrary_h_19_SPARSE_DATA
#define audiov2_Plugins_Utility_Source_Utility_Public_MyBlueprintFunctionLibrary_h_19_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnGameEndefunc) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UMyBlueprintFunctionLibrary::OnGameEndefunc(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOngameinitfunc) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UMyBlueprintFunctionLibrary::Ongameinitfunc(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execScreenshoot) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_infilename); \
		P_GET_UBOOL(Z_Param_bInShowUI); \
		P_GET_UBOOL(Z_Param_bAddFilenameSuffix); \
		P_GET_UBOOL(Z_Param_brelativepath); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UMyBlueprintFunctionLibrary::Screenshoot(Z_Param_infilename,Z_Param_bInShowUI,Z_Param_bAddFilenameSuffix,Z_Param_brelativepath); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execLoadobject) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_path); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UObject**)Z_Param__Result=UMyBlueprintFunctionLibrary::Loadobject(Z_Param_path); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCLogtofile) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_msg); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UMyBlueprintFunctionLibrary::CLogtofile(Z_Param_msg); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUnMount) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_PakFileName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UMyBlueprintFunctionLibrary::UnMount(Z_Param_PakFileName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMount) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_PakFileName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UMyBlueprintFunctionLibrary::Mount(Z_Param_PakFileName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execwritedatatofile) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_filepath); \
		P_GET_TARRAY_REF(uint8,Z_Param_Out_content); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UMyBlueprintFunctionLibrary::writedatatofile(Z_Param_filepath,Z_Param_Out_content); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFileMd5isequalSpecificMd5) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_filepath); \
		P_GET_PROPERTY(UStrProperty,Z_Param_SpecificMd5); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UMyBlueprintFunctionLibrary::FileMd5isequalSpecificMd5(Z_Param_filepath,Z_Param_SpecificMd5); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execreaddatafromfile) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_filepath); \
		P_GET_TARRAY_REF(uint8,Z_Param_Out_content); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UMyBlueprintFunctionLibrary::readdatafromfile(Z_Param_filepath,Z_Param_Out_content); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execreadstringfromfile) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_filepath); \
		P_GET_PROPERTY_REF(UStrProperty,Z_Param_Out_content); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UMyBlueprintFunctionLibrary::readstringfromfile(Z_Param_filepath,Z_Param_Out_content); \
		P_NATIVE_END; \
	}


#define audiov2_Plugins_Utility_Source_Utility_Public_MyBlueprintFunctionLibrary_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnGameEndefunc) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UMyBlueprintFunctionLibrary::OnGameEndefunc(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOngameinitfunc) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UMyBlueprintFunctionLibrary::Ongameinitfunc(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execScreenshoot) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_infilename); \
		P_GET_UBOOL(Z_Param_bInShowUI); \
		P_GET_UBOOL(Z_Param_bAddFilenameSuffix); \
		P_GET_UBOOL(Z_Param_brelativepath); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UMyBlueprintFunctionLibrary::Screenshoot(Z_Param_infilename,Z_Param_bInShowUI,Z_Param_bAddFilenameSuffix,Z_Param_brelativepath); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execLoadobject) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_path); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UObject**)Z_Param__Result=UMyBlueprintFunctionLibrary::Loadobject(Z_Param_path); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCLogtofile) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_msg); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UMyBlueprintFunctionLibrary::CLogtofile(Z_Param_msg); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUnMount) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_PakFileName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UMyBlueprintFunctionLibrary::UnMount(Z_Param_PakFileName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMount) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_PakFileName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UMyBlueprintFunctionLibrary::Mount(Z_Param_PakFileName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execwritedatatofile) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_filepath); \
		P_GET_TARRAY_REF(uint8,Z_Param_Out_content); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UMyBlueprintFunctionLibrary::writedatatofile(Z_Param_filepath,Z_Param_Out_content); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFileMd5isequalSpecificMd5) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_filepath); \
		P_GET_PROPERTY(UStrProperty,Z_Param_SpecificMd5); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UMyBlueprintFunctionLibrary::FileMd5isequalSpecificMd5(Z_Param_filepath,Z_Param_SpecificMd5); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execreaddatafromfile) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_filepath); \
		P_GET_TARRAY_REF(uint8,Z_Param_Out_content); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UMyBlueprintFunctionLibrary::readdatafromfile(Z_Param_filepath,Z_Param_Out_content); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execreadstringfromfile) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_filepath); \
		P_GET_PROPERTY_REF(UStrProperty,Z_Param_Out_content); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UMyBlueprintFunctionLibrary::readstringfromfile(Z_Param_filepath,Z_Param_Out_content); \
		P_NATIVE_END; \
	}


#define audiov2_Plugins_Utility_Source_Utility_Public_MyBlueprintFunctionLibrary_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMyBlueprintFunctionLibrary(); \
	friend struct Z_Construct_UClass_UMyBlueprintFunctionLibrary_Statics; \
public: \
	DECLARE_CLASS(UMyBlueprintFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Utility"), NO_API) \
	DECLARE_SERIALIZER(UMyBlueprintFunctionLibrary)


#define audiov2_Plugins_Utility_Source_Utility_Public_MyBlueprintFunctionLibrary_h_19_INCLASS \
private: \
	static void StaticRegisterNativesUMyBlueprintFunctionLibrary(); \
	friend struct Z_Construct_UClass_UMyBlueprintFunctionLibrary_Statics; \
public: \
	DECLARE_CLASS(UMyBlueprintFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Utility"), NO_API) \
	DECLARE_SERIALIZER(UMyBlueprintFunctionLibrary)


#define audiov2_Plugins_Utility_Source_Utility_Public_MyBlueprintFunctionLibrary_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMyBlueprintFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMyBlueprintFunctionLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMyBlueprintFunctionLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMyBlueprintFunctionLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMyBlueprintFunctionLibrary(UMyBlueprintFunctionLibrary&&); \
	NO_API UMyBlueprintFunctionLibrary(const UMyBlueprintFunctionLibrary&); \
public:


#define audiov2_Plugins_Utility_Source_Utility_Public_MyBlueprintFunctionLibrary_h_19_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMyBlueprintFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMyBlueprintFunctionLibrary(UMyBlueprintFunctionLibrary&&); \
	NO_API UMyBlueprintFunctionLibrary(const UMyBlueprintFunctionLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMyBlueprintFunctionLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMyBlueprintFunctionLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMyBlueprintFunctionLibrary)


#define audiov2_Plugins_Utility_Source_Utility_Public_MyBlueprintFunctionLibrary_h_19_PRIVATE_PROPERTY_OFFSET
#define audiov2_Plugins_Utility_Source_Utility_Public_MyBlueprintFunctionLibrary_h_16_PROLOG
#define audiov2_Plugins_Utility_Source_Utility_Public_MyBlueprintFunctionLibrary_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	audiov2_Plugins_Utility_Source_Utility_Public_MyBlueprintFunctionLibrary_h_19_PRIVATE_PROPERTY_OFFSET \
	audiov2_Plugins_Utility_Source_Utility_Public_MyBlueprintFunctionLibrary_h_19_SPARSE_DATA \
	audiov2_Plugins_Utility_Source_Utility_Public_MyBlueprintFunctionLibrary_h_19_RPC_WRAPPERS \
	audiov2_Plugins_Utility_Source_Utility_Public_MyBlueprintFunctionLibrary_h_19_INCLASS \
	audiov2_Plugins_Utility_Source_Utility_Public_MyBlueprintFunctionLibrary_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define audiov2_Plugins_Utility_Source_Utility_Public_MyBlueprintFunctionLibrary_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	audiov2_Plugins_Utility_Source_Utility_Public_MyBlueprintFunctionLibrary_h_19_PRIVATE_PROPERTY_OFFSET \
	audiov2_Plugins_Utility_Source_Utility_Public_MyBlueprintFunctionLibrary_h_19_SPARSE_DATA \
	audiov2_Plugins_Utility_Source_Utility_Public_MyBlueprintFunctionLibrary_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	audiov2_Plugins_Utility_Source_Utility_Public_MyBlueprintFunctionLibrary_h_19_INCLASS_NO_PURE_DECLS \
	audiov2_Plugins_Utility_Source_Utility_Public_MyBlueprintFunctionLibrary_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UTILITY_API UClass* StaticClass<class UMyBlueprintFunctionLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID audiov2_Plugins_Utility_Source_Utility_Public_MyBlueprintFunctionLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
#ifdef TP_TTGameInstance_generated_h
#error "TTGameInstance.generated.h already included, missing '#pragma once' in TTGameInstance.h"
#endif
#define TP_TTGameInstance_generated_h

#define audiov2_Plugins_tp_Source_tp_Public_TTGameInstance_h_15_SPARSE_DATA
#define audiov2_Plugins_tp_Source_tp_Public_TTGameInstance_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOpenservermap) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_obj); \
		P_GET_PROPERTY(UStrProperty,Z_Param_pmapname); \
		P_GET_PROPERTY(UStrProperty,Z_Param_mapID); \
		P_GET_PROPERTY(UStrProperty,Z_Param_nvn); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Openservermap(Z_Param_obj,Z_Param_pmapname,Z_Param_mapID,Z_Param_nvn); \
		P_NATIVE_END; \
	}


#define audiov2_Plugins_tp_Source_tp_Public_TTGameInstance_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOpenservermap) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_obj); \
		P_GET_PROPERTY(UStrProperty,Z_Param_pmapname); \
		P_GET_PROPERTY(UStrProperty,Z_Param_mapID); \
		P_GET_PROPERTY(UStrProperty,Z_Param_nvn); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Openservermap(Z_Param_obj,Z_Param_pmapname,Z_Param_mapID,Z_Param_nvn); \
		P_NATIVE_END; \
	}


#define audiov2_Plugins_tp_Source_tp_Public_TTGameInstance_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTTGameInstance(); \
	friend struct Z_Construct_UClass_UTTGameInstance_Statics; \
public: \
	DECLARE_CLASS(UTTGameInstance, UGameInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/tp"), NO_API) \
	DECLARE_SERIALIZER(UTTGameInstance)


#define audiov2_Plugins_tp_Source_tp_Public_TTGameInstance_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUTTGameInstance(); \
	friend struct Z_Construct_UClass_UTTGameInstance_Statics; \
public: \
	DECLARE_CLASS(UTTGameInstance, UGameInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/tp"), NO_API) \
	DECLARE_SERIALIZER(UTTGameInstance)


#define audiov2_Plugins_tp_Source_tp_Public_TTGameInstance_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTTGameInstance(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTTGameInstance) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTTGameInstance); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTTGameInstance); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTTGameInstance(UTTGameInstance&&); \
	NO_API UTTGameInstance(const UTTGameInstance&); \
public:


#define audiov2_Plugins_tp_Source_tp_Public_TTGameInstance_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTTGameInstance(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTTGameInstance(UTTGameInstance&&); \
	NO_API UTTGameInstance(const UTTGameInstance&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTTGameInstance); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTTGameInstance); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTTGameInstance)


#define audiov2_Plugins_tp_Source_tp_Public_TTGameInstance_h_15_PRIVATE_PROPERTY_OFFSET
#define audiov2_Plugins_tp_Source_tp_Public_TTGameInstance_h_12_PROLOG
#define audiov2_Plugins_tp_Source_tp_Public_TTGameInstance_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	audiov2_Plugins_tp_Source_tp_Public_TTGameInstance_h_15_PRIVATE_PROPERTY_OFFSET \
	audiov2_Plugins_tp_Source_tp_Public_TTGameInstance_h_15_SPARSE_DATA \
	audiov2_Plugins_tp_Source_tp_Public_TTGameInstance_h_15_RPC_WRAPPERS \
	audiov2_Plugins_tp_Source_tp_Public_TTGameInstance_h_15_INCLASS \
	audiov2_Plugins_tp_Source_tp_Public_TTGameInstance_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define audiov2_Plugins_tp_Source_tp_Public_TTGameInstance_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	audiov2_Plugins_tp_Source_tp_Public_TTGameInstance_h_15_PRIVATE_PROPERTY_OFFSET \
	audiov2_Plugins_tp_Source_tp_Public_TTGameInstance_h_15_SPARSE_DATA \
	audiov2_Plugins_tp_Source_tp_Public_TTGameInstance_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	audiov2_Plugins_tp_Source_tp_Public_TTGameInstance_h_15_INCLASS_NO_PURE_DECLS \
	audiov2_Plugins_tp_Source_tp_Public_TTGameInstance_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TP_API UClass* StaticClass<class UTTGameInstance>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID audiov2_Plugins_tp_Source_tp_Public_TTGameInstance_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

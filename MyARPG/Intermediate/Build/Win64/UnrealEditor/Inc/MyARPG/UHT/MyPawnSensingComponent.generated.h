// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MyPawnSensingComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
#ifdef MYARPG_MyPawnSensingComponent_generated_h
#error "MyPawnSensingComponent.generated.h already included, missing '#pragma once' in MyPawnSensingComponent.h"
#endif
#define MYARPG_MyPawnSensingComponent_generated_h

#define FID_MyARPG_Source_MyARPG_MyPawnSensingComponent_h_15_SPARSE_DATA
#define FID_MyARPG_Source_MyARPG_MyPawnSensingComponent_h_15_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_MyARPG_Source_MyARPG_MyPawnSensingComponent_h_15_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_MyARPG_Source_MyARPG_MyPawnSensingComponent_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execHasLineOfSightTo_BP);


#define FID_MyARPG_Source_MyARPG_MyPawnSensingComponent_h_15_ACCESSORS
#define FID_MyARPG_Source_MyARPG_MyPawnSensingComponent_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMyPawnSensingComponent(); \
	friend struct Z_Construct_UClass_UMyPawnSensingComponent_Statics; \
public: \
	DECLARE_CLASS(UMyPawnSensingComponent, UPawnSensingComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MyARPG"), NO_API) \
	DECLARE_SERIALIZER(UMyPawnSensingComponent)


#define FID_MyARPG_Source_MyARPG_MyPawnSensingComponent_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMyPawnSensingComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMyPawnSensingComponent(UMyPawnSensingComponent&&); \
	NO_API UMyPawnSensingComponent(const UMyPawnSensingComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMyPawnSensingComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMyPawnSensingComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMyPawnSensingComponent) \
	NO_API virtual ~UMyPawnSensingComponent();


#define FID_MyARPG_Source_MyARPG_MyPawnSensingComponent_h_12_PROLOG
#define FID_MyARPG_Source_MyARPG_MyPawnSensingComponent_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MyARPG_Source_MyARPG_MyPawnSensingComponent_h_15_SPARSE_DATA \
	FID_MyARPG_Source_MyARPG_MyPawnSensingComponent_h_15_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_MyARPG_Source_MyARPG_MyPawnSensingComponent_h_15_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_MyARPG_Source_MyARPG_MyPawnSensingComponent_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_MyARPG_Source_MyARPG_MyPawnSensingComponent_h_15_ACCESSORS \
	FID_MyARPG_Source_MyARPG_MyPawnSensingComponent_h_15_INCLASS_NO_PURE_DECLS \
	FID_MyARPG_Source_MyARPG_MyPawnSensingComponent_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MYARPG_API UClass* StaticClass<class UMyPawnSensingComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_MyARPG_Source_MyARPG_MyPawnSensingComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

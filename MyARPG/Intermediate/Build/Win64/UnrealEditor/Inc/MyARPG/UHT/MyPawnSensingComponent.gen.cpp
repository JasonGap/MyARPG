// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MyARPG/MyPawnSensingComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyPawnSensingComponent() {}
// Cross Module References
	AIMODULE_API UClass* Z_Construct_UClass_UPawnSensingComponent();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	MYARPG_API UClass* Z_Construct_UClass_UMyPawnSensingComponent();
	MYARPG_API UClass* Z_Construct_UClass_UMyPawnSensingComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_MyARPG();
// End Cross Module References
	DEFINE_FUNCTION(UMyPawnSensingComponent::execHasLineOfSightTo_BP)
	{
		P_GET_OBJECT(AActor,Z_Param_Other);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->HasLineOfSightTo_BP(Z_Param_Other);
		P_NATIVE_END;
	}
	void UMyPawnSensingComponent::StaticRegisterNativesUMyPawnSensingComponent()
	{
		UClass* Class = UMyPawnSensingComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "HasLineOfSightTo_BP", &UMyPawnSensingComponent::execHasLineOfSightTo_BP },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMyPawnSensingComponent_HasLineOfSightTo_BP_Statics
	{
		struct MyPawnSensingComponent_eventHasLineOfSightTo_BP_Parms
		{
			const AActor* Other;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Other_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Other;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMyPawnSensingComponent_HasLineOfSightTo_BP_Statics::NewProp_Other_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMyPawnSensingComponent_HasLineOfSightTo_BP_Statics::NewProp_Other = { "Other", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MyPawnSensingComponent_eventHasLineOfSightTo_BP_Parms, Other), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMyPawnSensingComponent_HasLineOfSightTo_BP_Statics::NewProp_Other_MetaData), Z_Construct_UFunction_UMyPawnSensingComponent_HasLineOfSightTo_BP_Statics::NewProp_Other_MetaData) };
	void Z_Construct_UFunction_UMyPawnSensingComponent_HasLineOfSightTo_BP_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MyPawnSensingComponent_eventHasLineOfSightTo_BP_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMyPawnSensingComponent_HasLineOfSightTo_BP_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MyPawnSensingComponent_eventHasLineOfSightTo_BP_Parms), &Z_Construct_UFunction_UMyPawnSensingComponent_HasLineOfSightTo_BP_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMyPawnSensingComponent_HasLineOfSightTo_BP_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMyPawnSensingComponent_HasLineOfSightTo_BP_Statics::NewProp_Other,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMyPawnSensingComponent_HasLineOfSightTo_BP_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMyPawnSensingComponent_HasLineOfSightTo_BP_Statics::Function_MetaDataParams[] = {
		{ "Category", "AI|Compinents|PawnSensing" },
		{ "ModuleRelativePath", "MyPawnSensingComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMyPawnSensingComponent_HasLineOfSightTo_BP_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMyPawnSensingComponent, nullptr, "HasLineOfSightTo_BP", nullptr, nullptr, Z_Construct_UFunction_UMyPawnSensingComponent_HasLineOfSightTo_BP_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMyPawnSensingComponent_HasLineOfSightTo_BP_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMyPawnSensingComponent_HasLineOfSightTo_BP_Statics::MyPawnSensingComponent_eventHasLineOfSightTo_BP_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMyPawnSensingComponent_HasLineOfSightTo_BP_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMyPawnSensingComponent_HasLineOfSightTo_BP_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMyPawnSensingComponent_HasLineOfSightTo_BP_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UMyPawnSensingComponent_HasLineOfSightTo_BP_Statics::MyPawnSensingComponent_eventHasLineOfSightTo_BP_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UMyPawnSensingComponent_HasLineOfSightTo_BP()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMyPawnSensingComponent_HasLineOfSightTo_BP_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMyPawnSensingComponent);
	UClass* Z_Construct_UClass_UMyPawnSensingComponent_NoRegister()
	{
		return UMyPawnSensingComponent::StaticClass();
	}
	struct Z_Construct_UClass_UMyPawnSensingComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMyPawnSensingComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPawnSensingComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_MyARPG,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMyPawnSensingComponent_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UMyPawnSensingComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMyPawnSensingComponent_HasLineOfSightTo_BP, "HasLineOfSightTo_BP" }, // 250797939
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMyPawnSensingComponent_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMyPawnSensingComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "AI" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Activation Components|Activation Collision Activation Components|Activation Collision" },
		{ "IncludePath", "MyPawnSensingComponent.h" },
		{ "ModuleRelativePath", "MyPawnSensingComponent.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMyPawnSensingComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMyPawnSensingComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMyPawnSensingComponent_Statics::ClassParams = {
		&UMyPawnSensingComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x00B000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMyPawnSensingComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UMyPawnSensingComponent_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UMyPawnSensingComponent()
	{
		if (!Z_Registration_Info_UClass_UMyPawnSensingComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMyPawnSensingComponent.OuterSingleton, Z_Construct_UClass_UMyPawnSensingComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMyPawnSensingComponent.OuterSingleton;
	}
	template<> MYARPG_API UClass* StaticClass<UMyPawnSensingComponent>()
	{
		return UMyPawnSensingComponent::StaticClass();
	}
	UMyPawnSensingComponent::UMyPawnSensingComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMyPawnSensingComponent);
	UMyPawnSensingComponent::~UMyPawnSensingComponent() {}
	struct Z_CompiledInDeferFile_FID_MyARPG_Source_MyARPG_MyPawnSensingComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyARPG_Source_MyARPG_MyPawnSensingComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMyPawnSensingComponent, UMyPawnSensingComponent::StaticClass, TEXT("UMyPawnSensingComponent"), &Z_Registration_Info_UClass_UMyPawnSensingComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMyPawnSensingComponent), 1051512023U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyARPG_Source_MyARPG_MyPawnSensingComponent_h_1980572405(TEXT("/Script/MyARPG"),
		Z_CompiledInDeferFile_FID_MyARPG_Source_MyARPG_MyPawnSensingComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MyARPG_Source_MyARPG_MyPawnSensingComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

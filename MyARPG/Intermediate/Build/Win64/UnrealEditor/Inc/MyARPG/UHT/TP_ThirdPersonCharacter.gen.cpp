// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MyARPG/TP_ThirdPerson/TP_ThirdPersonCharacter.h"
#include "../../Source/Runtime/Engine/Classes/Engine/HitResult.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTP_ThirdPersonCharacter() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext_NoRegister();
	MYARPG_API UClass* Z_Construct_UClass_ATP_ThirdPersonCharacter();
	MYARPG_API UClass* Z_Construct_UClass_ATP_ThirdPersonCharacter_NoRegister();
	UPackage* Z_Construct_UPackage__Script_MyARPG();
// End Cross Module References
	DEFINE_FUNCTION(ATP_ThirdPersonCharacter::execHandleDamage)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_DamageAmount);
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_HitInfo);
		P_GET_OBJECT(ATP_ThirdPersonCharacter,Z_Param_InstgatorCharacter);
		P_GET_OBJECT(AActor,Z_Param_DamageCauser);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HandleDamage(Z_Param_DamageAmount,Z_Param_Out_HitInfo,Z_Param_InstgatorCharacter,Z_Param_DamageCauser);
		P_NATIVE_END;
	}
	struct TP_ThirdPersonCharacter_eventOnDamaged_Parms
	{
		float DamageAmount;
		FHitResult HitInfo;
		ATP_ThirdPersonCharacter* InstigaterCharacter;
		AActor* DamageCauser;
	};
	static FName NAME_ATP_ThirdPersonCharacter_OnDamaged = FName(TEXT("OnDamaged"));
	void ATP_ThirdPersonCharacter::OnDamaged(float DamageAmount, FHitResult const& HitInfo, ATP_ThirdPersonCharacter* InstigaterCharacter, AActor* DamageCauser)
	{
		TP_ThirdPersonCharacter_eventOnDamaged_Parms Parms;
		Parms.DamageAmount=DamageAmount;
		Parms.HitInfo=HitInfo;
		Parms.InstigaterCharacter=InstigaterCharacter;
		Parms.DamageCauser=DamageCauser;
		ProcessEvent(FindFunctionChecked(NAME_ATP_ThirdPersonCharacter_OnDamaged),&Parms);
	}
	void ATP_ThirdPersonCharacter::StaticRegisterNativesATP_ThirdPersonCharacter()
	{
		UClass* Class = ATP_ThirdPersonCharacter::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "HandleDamage", &ATP_ThirdPersonCharacter::execHandleDamage },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ATP_ThirdPersonCharacter_HandleDamage_Statics
	{
		struct TP_ThirdPersonCharacter_eventHandleDamage_Parms
		{
			float DamageAmount;
			FHitResult HitInfo;
			ATP_ThirdPersonCharacter* InstgatorCharacter;
			AActor* DamageCauser;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DamageAmount;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HitInfo_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_HitInfo;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InstgatorCharacter;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DamageCauser;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ATP_ThirdPersonCharacter_HandleDamage_Statics::NewProp_DamageAmount = { "DamageAmount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TP_ThirdPersonCharacter_eventHandleDamage_Parms, DamageAmount), METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATP_ThirdPersonCharacter_HandleDamage_Statics::NewProp_HitInfo_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ATP_ThirdPersonCharacter_HandleDamage_Statics::NewProp_HitInfo = { "HitInfo", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TP_ThirdPersonCharacter_eventHandleDamage_Parms, HitInfo), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATP_ThirdPersonCharacter_HandleDamage_Statics::NewProp_HitInfo_MetaData), Z_Construct_UFunction_ATP_ThirdPersonCharacter_HandleDamage_Statics::NewProp_HitInfo_MetaData) }; // 1891709922
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATP_ThirdPersonCharacter_HandleDamage_Statics::NewProp_InstgatorCharacter = { "InstgatorCharacter", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TP_ThirdPersonCharacter_eventHandleDamage_Parms, InstgatorCharacter), Z_Construct_UClass_ATP_ThirdPersonCharacter_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATP_ThirdPersonCharacter_HandleDamage_Statics::NewProp_DamageCauser = { "DamageCauser", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TP_ThirdPersonCharacter_eventHandleDamage_Parms, DamageCauser), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATP_ThirdPersonCharacter_HandleDamage_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATP_ThirdPersonCharacter_HandleDamage_Statics::NewProp_DamageAmount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATP_ThirdPersonCharacter_HandleDamage_Statics::NewProp_HitInfo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATP_ThirdPersonCharacter_HandleDamage_Statics::NewProp_InstgatorCharacter,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATP_ThirdPersonCharacter_HandleDamage_Statics::NewProp_DamageCauser,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATP_ThirdPersonCharacter_HandleDamage_Statics::Function_MetaDataParams[] = {
		{ "Category", "Character" },
		{ "ModuleRelativePath", "TP_ThirdPerson/TP_ThirdPersonCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATP_ThirdPersonCharacter_HandleDamage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATP_ThirdPersonCharacter, nullptr, "HandleDamage", nullptr, nullptr, Z_Construct_UFunction_ATP_ThirdPersonCharacter_HandleDamage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATP_ThirdPersonCharacter_HandleDamage_Statics::PropPointers), sizeof(Z_Construct_UFunction_ATP_ThirdPersonCharacter_HandleDamage_Statics::TP_ThirdPersonCharacter_eventHandleDamage_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATP_ThirdPersonCharacter_HandleDamage_Statics::Function_MetaDataParams), Z_Construct_UFunction_ATP_ThirdPersonCharacter_HandleDamage_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ATP_ThirdPersonCharacter_HandleDamage_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ATP_ThirdPersonCharacter_HandleDamage_Statics::TP_ThirdPersonCharacter_eventHandleDamage_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ATP_ThirdPersonCharacter_HandleDamage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATP_ThirdPersonCharacter_HandleDamage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATP_ThirdPersonCharacter_OnDamaged_Statics
	{
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DamageAmount;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HitInfo_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_HitInfo;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InstigaterCharacter;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DamageCauser;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ATP_ThirdPersonCharacter_OnDamaged_Statics::NewProp_DamageAmount = { "DamageAmount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TP_ThirdPersonCharacter_eventOnDamaged_Parms, DamageAmount), METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATP_ThirdPersonCharacter_OnDamaged_Statics::NewProp_HitInfo_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ATP_ThirdPersonCharacter_OnDamaged_Statics::NewProp_HitInfo = { "HitInfo", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TP_ThirdPersonCharacter_eventOnDamaged_Parms, HitInfo), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATP_ThirdPersonCharacter_OnDamaged_Statics::NewProp_HitInfo_MetaData), Z_Construct_UFunction_ATP_ThirdPersonCharacter_OnDamaged_Statics::NewProp_HitInfo_MetaData) }; // 1891709922
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATP_ThirdPersonCharacter_OnDamaged_Statics::NewProp_InstigaterCharacter = { "InstigaterCharacter", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TP_ThirdPersonCharacter_eventOnDamaged_Parms, InstigaterCharacter), Z_Construct_UClass_ATP_ThirdPersonCharacter_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATP_ThirdPersonCharacter_OnDamaged_Statics::NewProp_DamageCauser = { "DamageCauser", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TP_ThirdPersonCharacter_eventOnDamaged_Parms, DamageCauser), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATP_ThirdPersonCharacter_OnDamaged_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATP_ThirdPersonCharacter_OnDamaged_Statics::NewProp_DamageAmount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATP_ThirdPersonCharacter_OnDamaged_Statics::NewProp_HitInfo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATP_ThirdPersonCharacter_OnDamaged_Statics::NewProp_InstigaterCharacter,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATP_ThirdPersonCharacter_OnDamaged_Statics::NewProp_DamageCauser,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATP_ThirdPersonCharacter_OnDamaged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "TP_ThirdPerson/TP_ThirdPersonCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATP_ThirdPersonCharacter_OnDamaged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATP_ThirdPersonCharacter, nullptr, "OnDamaged", nullptr, nullptr, Z_Construct_UFunction_ATP_ThirdPersonCharacter_OnDamaged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATP_ThirdPersonCharacter_OnDamaged_Statics::PropPointers), sizeof(TP_ThirdPersonCharacter_eventOnDamaged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08480800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATP_ThirdPersonCharacter_OnDamaged_Statics::Function_MetaDataParams), Z_Construct_UFunction_ATP_ThirdPersonCharacter_OnDamaged_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ATP_ThirdPersonCharacter_OnDamaged_Statics::PropPointers) < 2048);
	static_assert(sizeof(TP_ThirdPersonCharacter_eventOnDamaged_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ATP_ThirdPersonCharacter_OnDamaged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATP_ThirdPersonCharacter_OnDamaged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ATP_ThirdPersonCharacter);
	UClass* Z_Construct_UClass_ATP_ThirdPersonCharacter_NoRegister()
	{
		return ATP_ThirdPersonCharacter::StaticClass();
	}
	struct Z_Construct_UClass_ATP_ThirdPersonCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CameraBoom_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CameraBoom;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FollowCamera_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_FollowCamera;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultMappingContext_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DefaultMappingContext;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_JumpAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_JumpAction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MoveAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MoveAction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LookAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_LookAction;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATP_ThirdPersonCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_MyARPG,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATP_ThirdPersonCharacter_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_ATP_ThirdPersonCharacter_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ATP_ThirdPersonCharacter_HandleDamage, "HandleDamage" }, // 3477769231
		{ &Z_Construct_UFunction_ATP_ThirdPersonCharacter_OnDamaged, "OnDamaged" }, // 1804626617
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATP_ThirdPersonCharacter_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATP_ThirdPersonCharacter_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "TP_ThirdPerson/TP_ThirdPersonCharacter.h" },
		{ "ModuleRelativePath", "TP_ThirdPerson/TP_ThirdPersonCharacter.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATP_ThirdPersonCharacter_Statics::NewProp_CameraBoom_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Camera boom positioning the camera behind the character */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "TP_ThirdPerson/TP_ThirdPersonCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Camera boom positioning the camera behind the character" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATP_ThirdPersonCharacter_Statics::NewProp_CameraBoom = { "CameraBoom", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATP_ThirdPersonCharacter, CameraBoom), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATP_ThirdPersonCharacter_Statics::NewProp_CameraBoom_MetaData), Z_Construct_UClass_ATP_ThirdPersonCharacter_Statics::NewProp_CameraBoom_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATP_ThirdPersonCharacter_Statics::NewProp_FollowCamera_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Follow camera */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "TP_ThirdPerson/TP_ThirdPersonCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Follow camera" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATP_ThirdPersonCharacter_Statics::NewProp_FollowCamera = { "FollowCamera", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATP_ThirdPersonCharacter, FollowCamera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATP_ThirdPersonCharacter_Statics::NewProp_FollowCamera_MetaData), Z_Construct_UClass_ATP_ThirdPersonCharacter_Statics::NewProp_FollowCamera_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATP_ThirdPersonCharacter_Statics::NewProp_DefaultMappingContext_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** MappingContext */" },
#endif
		{ "ModuleRelativePath", "TP_ThirdPerson/TP_ThirdPersonCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "MappingContext" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATP_ThirdPersonCharacter_Statics::NewProp_DefaultMappingContext = { "DefaultMappingContext", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATP_ThirdPersonCharacter, DefaultMappingContext), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATP_ThirdPersonCharacter_Statics::NewProp_DefaultMappingContext_MetaData), Z_Construct_UClass_ATP_ThirdPersonCharacter_Statics::NewProp_DefaultMappingContext_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATP_ThirdPersonCharacter_Statics::NewProp_JumpAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Jump Input Action */" },
#endif
		{ "ModuleRelativePath", "TP_ThirdPerson/TP_ThirdPersonCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Jump Input Action" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATP_ThirdPersonCharacter_Statics::NewProp_JumpAction = { "JumpAction", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATP_ThirdPersonCharacter, JumpAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATP_ThirdPersonCharacter_Statics::NewProp_JumpAction_MetaData), Z_Construct_UClass_ATP_ThirdPersonCharacter_Statics::NewProp_JumpAction_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATP_ThirdPersonCharacter_Statics::NewProp_MoveAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Move Input Action */" },
#endif
		{ "ModuleRelativePath", "TP_ThirdPerson/TP_ThirdPersonCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Move Input Action" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATP_ThirdPersonCharacter_Statics::NewProp_MoveAction = { "MoveAction", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATP_ThirdPersonCharacter, MoveAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATP_ThirdPersonCharacter_Statics::NewProp_MoveAction_MetaData), Z_Construct_UClass_ATP_ThirdPersonCharacter_Statics::NewProp_MoveAction_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATP_ThirdPersonCharacter_Statics::NewProp_LookAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Look Input Action */" },
#endif
		{ "ModuleRelativePath", "TP_ThirdPerson/TP_ThirdPersonCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Look Input Action" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATP_ThirdPersonCharacter_Statics::NewProp_LookAction = { "LookAction", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATP_ThirdPersonCharacter, LookAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATP_ThirdPersonCharacter_Statics::NewProp_LookAction_MetaData), Z_Construct_UClass_ATP_ThirdPersonCharacter_Statics::NewProp_LookAction_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATP_ThirdPersonCharacter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATP_ThirdPersonCharacter_Statics::NewProp_CameraBoom,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATP_ThirdPersonCharacter_Statics::NewProp_FollowCamera,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATP_ThirdPersonCharacter_Statics::NewProp_DefaultMappingContext,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATP_ThirdPersonCharacter_Statics::NewProp_JumpAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATP_ThirdPersonCharacter_Statics::NewProp_MoveAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATP_ThirdPersonCharacter_Statics::NewProp_LookAction,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATP_ThirdPersonCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATP_ThirdPersonCharacter>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ATP_ThirdPersonCharacter_Statics::ClassParams = {
		&ATP_ThirdPersonCharacter::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ATP_ThirdPersonCharacter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ATP_ThirdPersonCharacter_Statics::PropPointers),
		0,
		0x008000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATP_ThirdPersonCharacter_Statics::Class_MetaDataParams), Z_Construct_UClass_ATP_ThirdPersonCharacter_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATP_ThirdPersonCharacter_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_ATP_ThirdPersonCharacter()
	{
		if (!Z_Registration_Info_UClass_ATP_ThirdPersonCharacter.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATP_ThirdPersonCharacter.OuterSingleton, Z_Construct_UClass_ATP_ThirdPersonCharacter_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ATP_ThirdPersonCharacter.OuterSingleton;
	}
	template<> MYARPG_API UClass* StaticClass<ATP_ThirdPersonCharacter>()
	{
		return ATP_ThirdPersonCharacter::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATP_ThirdPersonCharacter);
	ATP_ThirdPersonCharacter::~ATP_ThirdPersonCharacter() {}
	struct Z_CompiledInDeferFile_FID_MyARPG_Source_MyARPG_TP_ThirdPerson_TP_ThirdPersonCharacter_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyARPG_Source_MyARPG_TP_ThirdPerson_TP_ThirdPersonCharacter_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ATP_ThirdPersonCharacter, ATP_ThirdPersonCharacter::StaticClass, TEXT("ATP_ThirdPersonCharacter"), &Z_Registration_Info_UClass_ATP_ThirdPersonCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATP_ThirdPersonCharacter), 2286069667U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyARPG_Source_MyARPG_TP_ThirdPerson_TP_ThirdPersonCharacter_h_2041716968(TEXT("/Script/MyARPG"),
		Z_CompiledInDeferFile_FID_MyARPG_Source_MyARPG_TP_ThirdPerson_TP_ThirdPersonCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MyARPG_Source_MyARPG_TP_ThirdPerson_TP_ThirdPersonCharacter_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

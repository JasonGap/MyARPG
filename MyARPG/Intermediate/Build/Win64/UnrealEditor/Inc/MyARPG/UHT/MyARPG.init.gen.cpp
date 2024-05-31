// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyARPG_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_MyARPG;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_MyARPG()
	{
		if (!Z_Registration_Info_UPackage__Script_MyARPG.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/MyARPG",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000000,
				0x6DF15F72,
				0x422BBA98,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_MyARPG.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_MyARPG.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_MyARPG(Z_Construct_UPackage__Script_MyARPG, TEXT("/Script/MyARPG"), Z_Registration_Info_UPackage__Script_MyARPG, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x6DF15F72, 0x422BBA98));
PRAGMA_ENABLE_DEPRECATION_WARNINGS

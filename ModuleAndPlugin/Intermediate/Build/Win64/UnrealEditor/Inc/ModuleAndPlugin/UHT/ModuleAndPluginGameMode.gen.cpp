// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ModuleAndPlugin/ModuleAndPluginGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeModuleAndPluginGameMode() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
MODULEANDPLUGIN_API UClass* Z_Construct_UClass_AModuleAndPluginGameMode();
MODULEANDPLUGIN_API UClass* Z_Construct_UClass_AModuleAndPluginGameMode_NoRegister();
UPackage* Z_Construct_UPackage__Script_ModuleAndPlugin();
// End Cross Module References

// Begin Class AModuleAndPluginGameMode
void AModuleAndPluginGameMode::StaticRegisterNativesAModuleAndPluginGameMode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AModuleAndPluginGameMode);
UClass* Z_Construct_UClass_AModuleAndPluginGameMode_NoRegister()
{
	return AModuleAndPluginGameMode::StaticClass();
}
struct Z_Construct_UClass_AModuleAndPluginGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "ModuleAndPluginGameMode.h" },
		{ "ModuleRelativePath", "ModuleAndPluginGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AModuleAndPluginGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AModuleAndPluginGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_ModuleAndPlugin,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AModuleAndPluginGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AModuleAndPluginGameMode_Statics::ClassParams = {
	&AModuleAndPluginGameMode::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x008802ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AModuleAndPluginGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_AModuleAndPluginGameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AModuleAndPluginGameMode()
{
	if (!Z_Registration_Info_UClass_AModuleAndPluginGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AModuleAndPluginGameMode.OuterSingleton, Z_Construct_UClass_AModuleAndPluginGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AModuleAndPluginGameMode.OuterSingleton;
}
template<> MODULEANDPLUGIN_API UClass* StaticClass<AModuleAndPluginGameMode>()
{
	return AModuleAndPluginGameMode::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AModuleAndPluginGameMode);
AModuleAndPluginGameMode::~AModuleAndPluginGameMode() {}
// End Class AModuleAndPluginGameMode

// Begin Registration
struct Z_CompiledInDeferFile_FID_Homework_HomeWork10_ModuleAndPlugin_Source_ModuleAndPlugin_ModuleAndPluginGameMode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AModuleAndPluginGameMode, AModuleAndPluginGameMode::StaticClass, TEXT("AModuleAndPluginGameMode"), &Z_Registration_Info_UClass_AModuleAndPluginGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AModuleAndPluginGameMode), 4096749663U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Homework_HomeWork10_ModuleAndPlugin_Source_ModuleAndPlugin_ModuleAndPluginGameMode_h_529327962(TEXT("/Script/ModuleAndPlugin"),
	Z_CompiledInDeferFile_FID_Homework_HomeWork10_ModuleAndPlugin_Source_ModuleAndPlugin_ModuleAndPluginGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Homework_HomeWork10_ModuleAndPlugin_Source_ModuleAndPlugin_ModuleAndPluginGameMode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Slashabasha/Public/GM_Gamemode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGM_Gamemode() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
SLASHABASHA_API UClass* Z_Construct_UClass_AGM_Gamemode();
SLASHABASHA_API UClass* Z_Construct_UClass_AGM_Gamemode_NoRegister();
UPackage* Z_Construct_UPackage__Script_Slashabasha();
// End Cross Module References

// Begin Class AGM_Gamemode
void AGM_Gamemode::StaticRegisterNativesAGM_Gamemode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AGM_Gamemode);
UClass* Z_Construct_UClass_AGM_Gamemode_NoRegister()
{
	return AGM_Gamemode::StaticClass();
}
struct Z_Construct_UClass_AGM_Gamemode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "GM_Gamemode.h" },
		{ "ModuleRelativePath", "Public/GM_Gamemode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGM_Gamemode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AGM_Gamemode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_Slashabasha,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGM_Gamemode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AGM_Gamemode_Statics::ClassParams = {
	&AGM_Gamemode::StaticClass,
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
	0x009002ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGM_Gamemode_Statics::Class_MetaDataParams), Z_Construct_UClass_AGM_Gamemode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AGM_Gamemode()
{
	if (!Z_Registration_Info_UClass_AGM_Gamemode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AGM_Gamemode.OuterSingleton, Z_Construct_UClass_AGM_Gamemode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AGM_Gamemode.OuterSingleton;
}
template<> SLASHABASHA_API UClass* StaticClass<AGM_Gamemode>()
{
	return AGM_Gamemode::StaticClass();
}
AGM_Gamemode::AGM_Gamemode(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(AGM_Gamemode);
AGM_Gamemode::~AGM_Gamemode() {}
// End Class AGM_Gamemode

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_AsadU_Desktop_GameIwanttobeinmyportfolio_Slashabasha_Slashabasha_Source_Slashabasha_Public_GM_Gamemode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AGM_Gamemode, AGM_Gamemode::StaticClass, TEXT("AGM_Gamemode"), &Z_Registration_Info_UClass_AGM_Gamemode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AGM_Gamemode), 1908974555U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_AsadU_Desktop_GameIwanttobeinmyportfolio_Slashabasha_Slashabasha_Source_Slashabasha_Public_GM_Gamemode_h_1251607275(TEXT("/Script/Slashabasha"),
	Z_CompiledInDeferFile_FID_Users_AsadU_Desktop_GameIwanttobeinmyportfolio_Slashabasha_Slashabasha_Source_Slashabasha_Public_GM_Gamemode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_AsadU_Desktop_GameIwanttobeinmyportfolio_Slashabasha_Slashabasha_Source_Slashabasha_Public_GM_Gamemode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

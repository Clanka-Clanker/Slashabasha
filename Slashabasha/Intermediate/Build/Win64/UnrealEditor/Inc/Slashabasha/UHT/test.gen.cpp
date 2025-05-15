// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Slashabasha/Public/test.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodetest() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
SLASHABASHA_API UClass* Z_Construct_UClass_Atest();
SLASHABASHA_API UClass* Z_Construct_UClass_Atest_NoRegister();
UPackage* Z_Construct_UPackage__Script_Slashabasha();
// End Cross Module References

// Begin Class Atest
void Atest::StaticRegisterNativesAtest()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(Atest);
UClass* Z_Construct_UClass_Atest_NoRegister()
{
	return Atest::StaticClass();
}
struct Z_Construct_UClass_Atest_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "test.h" },
		{ "ModuleRelativePath", "Public/test.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<Atest>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_Atest_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_Slashabasha,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_Atest_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_Atest_Statics::ClassParams = {
	&Atest::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_Atest_Statics::Class_MetaDataParams), Z_Construct_UClass_Atest_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_Atest()
{
	if (!Z_Registration_Info_UClass_Atest.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_Atest.OuterSingleton, Z_Construct_UClass_Atest_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_Atest.OuterSingleton;
}
template<> SLASHABASHA_API UClass* StaticClass<Atest>()
{
	return Atest::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(Atest);
Atest::~Atest() {}
// End Class Atest

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_AsadU_Desktop_GameIwanttobeinmyportfolio_Slashabasha_Slashabasha_Source_Slashabasha_Public_test_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_Atest, Atest::StaticClass, TEXT("Atest"), &Z_Registration_Info_UClass_Atest, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(Atest), 419627064U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_AsadU_Desktop_GameIwanttobeinmyportfolio_Slashabasha_Slashabasha_Source_Slashabasha_Public_test_h_2910215652(TEXT("/Script/Slashabasha"),
	Z_CompiledInDeferFile_FID_Users_AsadU_Desktop_GameIwanttobeinmyportfolio_Slashabasha_Slashabasha_Source_Slashabasha_Public_test_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_AsadU_Desktop_GameIwanttobeinmyportfolio_Slashabasha_Slashabasha_Source_Slashabasha_Public_test_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

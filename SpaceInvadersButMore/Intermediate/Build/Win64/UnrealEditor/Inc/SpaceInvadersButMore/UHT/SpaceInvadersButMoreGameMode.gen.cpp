// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SpaceInvadersButMore/SpaceInvadersButMoreGameMode.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeSpaceInvadersButMoreGameMode() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
SPACEINVADERSBUTMORE_API UClass* Z_Construct_UClass_ASpaceInvadersButMoreGameMode();
SPACEINVADERSBUTMORE_API UClass* Z_Construct_UClass_ASpaceInvadersButMoreGameMode_NoRegister();
UPackage* Z_Construct_UPackage__Script_SpaceInvadersButMore();
// ********** End Cross Module References **********************************************************

// ********** Begin Class ASpaceInvadersButMoreGameMode ********************************************
void ASpaceInvadersButMoreGameMode::StaticRegisterNativesASpaceInvadersButMoreGameMode()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_ASpaceInvadersButMoreGameMode;
UClass* ASpaceInvadersButMoreGameMode::GetPrivateStaticClass()
{
	using TClass = ASpaceInvadersButMoreGameMode;
	if (!Z_Registration_Info_UClass_ASpaceInvadersButMoreGameMode.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("SpaceInvadersButMoreGameMode"),
			Z_Registration_Info_UClass_ASpaceInvadersButMoreGameMode.InnerSingleton,
			StaticRegisterNativesASpaceInvadersButMoreGameMode,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_ASpaceInvadersButMoreGameMode.InnerSingleton;
}
UClass* Z_Construct_UClass_ASpaceInvadersButMoreGameMode_NoRegister()
{
	return ASpaceInvadersButMoreGameMode::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ASpaceInvadersButMoreGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *  Simple GameMode for a third person game\n */" },
#endif
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "SpaceInvadersButMoreGameMode.h" },
		{ "ModuleRelativePath", "SpaceInvadersButMoreGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Simple GameMode for a third person game" },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASpaceInvadersButMoreGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ASpaceInvadersButMoreGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_SpaceInvadersButMore,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASpaceInvadersButMoreGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ASpaceInvadersButMoreGameMode_Statics::ClassParams = {
	&ASpaceInvadersButMoreGameMode::StaticClass,
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
	0x008003ADu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASpaceInvadersButMoreGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_ASpaceInvadersButMoreGameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ASpaceInvadersButMoreGameMode()
{
	if (!Z_Registration_Info_UClass_ASpaceInvadersButMoreGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASpaceInvadersButMoreGameMode.OuterSingleton, Z_Construct_UClass_ASpaceInvadersButMoreGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ASpaceInvadersButMoreGameMode.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ASpaceInvadersButMoreGameMode);
ASpaceInvadersButMoreGameMode::~ASpaceInvadersButMoreGameMode() {}
// ********** End Class ASpaceInvadersButMoreGameMode **********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_caspa_source_repos_SpaceInvadersButMore_SpaceInvadersButMore_Source_SpaceInvadersButMore_SpaceInvadersButMoreGameMode_h__Script_SpaceInvadersButMore_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ASpaceInvadersButMoreGameMode, ASpaceInvadersButMoreGameMode::StaticClass, TEXT("ASpaceInvadersButMoreGameMode"), &Z_Registration_Info_UClass_ASpaceInvadersButMoreGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASpaceInvadersButMoreGameMode), 338054278U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_caspa_source_repos_SpaceInvadersButMore_SpaceInvadersButMore_Source_SpaceInvadersButMore_SpaceInvadersButMoreGameMode_h__Script_SpaceInvadersButMore_2416200654(TEXT("/Script/SpaceInvadersButMore"),
	Z_CompiledInDeferFile_FID_Users_caspa_source_repos_SpaceInvadersButMore_SpaceInvadersButMore_Source_SpaceInvadersButMore_SpaceInvadersButMoreGameMode_h__Script_SpaceInvadersButMore_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_caspa_source_repos_SpaceInvadersButMore_SpaceInvadersButMore_Source_SpaceInvadersButMore_SpaceInvadersButMoreGameMode_h__Script_SpaceInvadersButMore_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS

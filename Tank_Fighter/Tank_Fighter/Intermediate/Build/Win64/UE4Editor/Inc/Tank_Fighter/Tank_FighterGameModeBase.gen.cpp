// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Tank_Fighter/Tank_FighterGameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTank_FighterGameModeBase() {}
// Cross Module References
	TANK_FIGHTER_API UClass* Z_Construct_UClass_ATank_FighterGameModeBase_NoRegister();
	TANK_FIGHTER_API UClass* Z_Construct_UClass_ATank_FighterGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_Tank_Fighter();
// End Cross Module References
	void ATank_FighterGameModeBase::StaticRegisterNativesATank_FighterGameModeBase()
	{
	}
	UClass* Z_Construct_UClass_ATank_FighterGameModeBase_NoRegister()
	{
		return ATank_FighterGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_ATank_FighterGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATank_FighterGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Tank_Fighter,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATank_FighterGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "Tank_FighterGameModeBase.h" },
		{ "ModuleRelativePath", "Tank_FighterGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATank_FighterGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATank_FighterGameModeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ATank_FighterGameModeBase_Statics::ClassParams = {
		&ATank_FighterGameModeBase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009002A8u,
		METADATA_PARAMS(Z_Construct_UClass_ATank_FighterGameModeBase_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ATank_FighterGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATank_FighterGameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ATank_FighterGameModeBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ATank_FighterGameModeBase, 1400336442);
	template<> TANK_FIGHTER_API UClass* StaticClass<ATank_FighterGameModeBase>()
	{
		return ATank_FighterGameModeBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ATank_FighterGameModeBase(Z_Construct_UClass_ATank_FighterGameModeBase, &ATank_FighterGameModeBase::StaticClass, TEXT("/Script/Tank_Fighter"), TEXT("ATank_FighterGameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATank_FighterGameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

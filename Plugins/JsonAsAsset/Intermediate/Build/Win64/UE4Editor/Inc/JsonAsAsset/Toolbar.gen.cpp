// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "JsonAsAsset/Public/Modules/Toolbar/Toolbar.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeToolbar() {}
// Cross Module References
	JSONASASSET_API UClass* Z_Construct_UClass_UJsonAsAssetToolbar_NoRegister();
	JSONASASSET_API UClass* Z_Construct_UClass_UJsonAsAssetToolbar();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_JsonAsAsset();
// End Cross Module References
	void UJsonAsAssetToolbar::StaticRegisterNativesUJsonAsAssetToolbar()
	{
	}
	UClass* Z_Construct_UClass_UJsonAsAssetToolbar_NoRegister()
	{
		return UJsonAsAssetToolbar::StaticClass();
	}
	struct Z_Construct_UClass_UJsonAsAssetToolbar_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UJsonAsAssetToolbar_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_JsonAsAsset,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UJsonAsAssetToolbar_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Modules/Toolbar/Toolbar.h" },
		{ "ModuleRelativePath", "Public/Modules/Toolbar/Toolbar.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UJsonAsAssetToolbar_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UJsonAsAssetToolbar>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UJsonAsAssetToolbar_Statics::ClassParams = {
		&UJsonAsAssetToolbar::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UJsonAsAssetToolbar_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UJsonAsAssetToolbar_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UJsonAsAssetToolbar()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UJsonAsAssetToolbar_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UJsonAsAssetToolbar, 3051726165);
	template<> JSONASASSET_API UClass* StaticClass<UJsonAsAssetToolbar>()
	{
		return UJsonAsAssetToolbar::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UJsonAsAssetToolbar(Z_Construct_UClass_UJsonAsAssetToolbar, &UJsonAsAssetToolbar::StaticClass, TEXT("/Script/JsonAsAsset"), TEXT("UJsonAsAssetToolbar"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UJsonAsAssetToolbar);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

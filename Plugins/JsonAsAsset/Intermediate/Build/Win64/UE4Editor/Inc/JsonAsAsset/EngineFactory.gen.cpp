// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "JsonAsAsset/Public/Modules/EngineFactory.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEngineFactory() {}
// Cross Module References
	JSONASASSET_API UClass* Z_Construct_UClass_UJEngineImplementation_NoRegister();
	JSONASASSET_API UClass* Z_Construct_UClass_UJEngineImplementation();
	UNREALED_API UClass* Z_Construct_UClass_UFactory();
	UPackage* Z_Construct_UPackage__Script_JsonAsAsset();
// End Cross Module References
	void UJEngineImplementation::StaticRegisterNativesUJEngineImplementation()
	{
	}
	UClass* Z_Construct_UClass_UJEngineImplementation_NoRegister()
	{
		return UJEngineImplementation::StaticClass();
	}
	struct Z_Construct_UClass_UJEngineImplementation_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UJEngineImplementation_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_JsonAsAsset,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UJEngineImplementation_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/* Engine implementation to allow importing by dragging files into the Content Browser */" },
		{ "IncludePath", "Modules/EngineFactory.h" },
		{ "ModuleRelativePath", "Public/Modules/EngineFactory.h" },
		{ "ToolTip", "Engine implementation to allow importing by dragging files into the Content Browser" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UJEngineImplementation_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UJEngineImplementation>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UJEngineImplementation_Statics::ClassParams = {
		&UJEngineImplementation::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UJEngineImplementation_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UJEngineImplementation_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UJEngineImplementation()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UJEngineImplementation_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UJEngineImplementation, 1834556325);
	template<> JSONASASSET_API UClass* StaticClass<UJEngineImplementation>()
	{
		return UJEngineImplementation::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UJEngineImplementation(Z_Construct_UClass_UJEngineImplementation, &UJEngineImplementation::StaticClass, TEXT("/Script/JsonAsAsset"), TEXT("UJEngineImplementation"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UJEngineImplementation);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "JsonAsAsset/Public/Settings/JsonAsAssetSettings.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeJsonAsAssetSettings() {}
// Cross Module References
	JSONASASSET_API UScriptStruct* Z_Construct_UScriptStruct_FJVersioningSettings();
	UPackage* Z_Construct_UPackage__Script_JsonAsAsset();
	JSONASASSET_API UScriptStruct* Z_Construct_UScriptStruct_FJSettings();
	JSONASASSET_API UScriptStruct* Z_Construct_UScriptStruct_FJAnimationBlueprintSettings();
	JSONASASSET_API UScriptStruct* Z_Construct_UScriptStruct_FJTextureSettings();
	JSONASASSET_API UScriptStruct* Z_Construct_UScriptStruct_FJMaterialSettings();
	JSONASASSET_API UClass* Z_Construct_UClass_UJsonAsAssetSettings_NoRegister();
	JSONASASSET_API UClass* Z_Construct_UClass_UJsonAsAssetSettings();
	DEVELOPERSETTINGS_API UClass* Z_Construct_UClass_UDeveloperSettings();
	JSONASASSET_API UScriptStruct* Z_Construct_UScriptStruct_FJRedirector();
// End Cross Module References
class UScriptStruct* FJVersioningSettings::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern JSONASASSET_API uint32 Get_Z_Construct_UScriptStruct_FJVersioningSettings_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FJVersioningSettings, Z_Construct_UPackage__Script_JsonAsAsset(), TEXT("JVersioningSettings"), sizeof(FJVersioningSettings), Get_Z_Construct_UScriptStruct_FJVersioningSettings_Hash());
	}
	return Singleton;
}
template<> JSONASASSET_API UScriptStruct* StaticStruct<FJVersioningSettings>()
{
	return FJVersioningSettings::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FJVersioningSettings(FJVersioningSettings::StaticStruct, TEXT("/Script/JsonAsAsset"), TEXT("JVersioningSettings"), false, nullptr, nullptr);
static struct FScriptStruct_JsonAsAsset_StaticRegisterNativesFJVersioningSettings
{
	FScriptStruct_JsonAsAsset_StaticRegisterNativesFJVersioningSettings()
	{
		UScriptStruct::DeferCppStructOps<FJVersioningSettings>(FName(TEXT("JVersioningSettings")));
	}
} ScriptStruct_JsonAsAsset_StaticRegisterNativesFJVersioningSettings;
	struct Z_Construct_UScriptStruct_FJVersioningSettings_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Disable_MetaData[];
#endif
		static void NewProp_Disable_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Disable;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FJVersioningSettings_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Settings/JsonAsAssetSettings.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FJVersioningSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FJVersioningSettings>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FJVersioningSettings_Statics::NewProp_Disable_MetaData[] = {
		{ "Category", "VersioningSettings" },
		{ "Comment", "/* Disable checking for newer updates of JsonAsAsset. */" },
		{ "ModuleRelativePath", "Public/Settings/JsonAsAssetSettings.h" },
		{ "ToolTip", "Disable checking for newer updates of JsonAsAsset." },
	};
#endif
	void Z_Construct_UScriptStruct_FJVersioningSettings_Statics::NewProp_Disable_SetBit(void* Obj)
	{
		((FJVersioningSettings*)Obj)->Disable = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FJVersioningSettings_Statics::NewProp_Disable = { "Disable", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FJVersioningSettings), &Z_Construct_UScriptStruct_FJVersioningSettings_Statics::NewProp_Disable_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FJVersioningSettings_Statics::NewProp_Disable_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FJVersioningSettings_Statics::NewProp_Disable_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FJVersioningSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FJVersioningSettings_Statics::NewProp_Disable,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FJVersioningSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_JsonAsAsset,
		nullptr,
		&NewStructOps,
		"JVersioningSettings",
		sizeof(FJVersioningSettings),
		alignof(FJVersioningSettings),
		Z_Construct_UScriptStruct_FJVersioningSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FJVersioningSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FJVersioningSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FJVersioningSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FJVersioningSettings()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FJVersioningSettings_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_JsonAsAsset();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("JVersioningSettings"), sizeof(FJVersioningSettings), Get_Z_Construct_UScriptStruct_FJVersioningSettings_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FJVersioningSettings_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FJVersioningSettings_Hash() { return 764817096U; }
class UScriptStruct* FJSettings::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern JSONASASSET_API uint32 Get_Z_Construct_UScriptStruct_FJSettings_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FJSettings, Z_Construct_UPackage__Script_JsonAsAsset(), TEXT("JSettings"), sizeof(FJSettings), Get_Z_Construct_UScriptStruct_FJSettings_Hash());
	}
	return Singleton;
}
template<> JSONASASSET_API UScriptStruct* StaticStruct<FJSettings>()
{
	return FJSettings::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FJSettings(FJSettings::StaticStruct, TEXT("/Script/JsonAsAsset"), TEXT("JSettings"), false, nullptr, nullptr);
static struct FScriptStruct_JsonAsAsset_StaticRegisterNativesFJSettings
{
	FScriptStruct_JsonAsAsset_StaticRegisterNativesFJSettings()
	{
		UScriptStruct::DeferCppStructOps<FJSettings>(FName(TEXT("JSettings")));
	}
} ScriptStruct_JsonAsAsset_StaticRegisterNativesFJSettings;
	struct Z_Construct_UScriptStruct_FJSettings_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AnimationBlueprint_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AnimationBlueprint;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Texture_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Texture;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Material_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Material;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProjectName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ProjectName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SaveAssets_MetaData[];
#endif
		static void NewProp_SaveAssets_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_SaveAssets;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FJSettings_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Settings/JsonAsAssetSettings.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FJSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FJSettings>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FJSettings_Statics::NewProp_AnimationBlueprint_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/Settings/JsonAsAssetSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FJSettings_Statics::NewProp_AnimationBlueprint = { "AnimationBlueprint", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FJSettings, AnimationBlueprint), Z_Construct_UScriptStruct_FJAnimationBlueprintSettings, METADATA_PARAMS(Z_Construct_UScriptStruct_FJSettings_Statics::NewProp_AnimationBlueprint_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FJSettings_Statics::NewProp_AnimationBlueprint_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FJSettings_Statics::NewProp_Texture_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/Settings/JsonAsAssetSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FJSettings_Statics::NewProp_Texture = { "Texture", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FJSettings, Texture), Z_Construct_UScriptStruct_FJTextureSettings, METADATA_PARAMS(Z_Construct_UScriptStruct_FJSettings_Statics::NewProp_Texture_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FJSettings_Statics::NewProp_Texture_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FJSettings_Statics::NewProp_Material_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/Settings/JsonAsAssetSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FJSettings_Statics::NewProp_Material = { "Material", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FJSettings, Material), Z_Construct_UScriptStruct_FJMaterialSettings, METADATA_PARAMS(Z_Construct_UScriptStruct_FJSettings_Statics::NewProp_Material_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FJSettings_Statics::NewProp_Material_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FJSettings_Statics::NewProp_ProjectName_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/Settings/JsonAsAssetSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FJSettings_Statics::NewProp_ProjectName = { "ProjectName", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FJSettings, ProjectName), METADATA_PARAMS(Z_Construct_UScriptStruct_FJSettings_Statics::NewProp_ProjectName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FJSettings_Statics::NewProp_ProjectName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FJSettings_Statics::NewProp_SaveAssets_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/Settings/JsonAsAssetSettings.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FJSettings_Statics::NewProp_SaveAssets_SetBit(void* Obj)
	{
		((FJSettings*)Obj)->SaveAssets = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FJSettings_Statics::NewProp_SaveAssets = { "SaveAssets", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FJSettings), &Z_Construct_UScriptStruct_FJSettings_Statics::NewProp_SaveAssets_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FJSettings_Statics::NewProp_SaveAssets_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FJSettings_Statics::NewProp_SaveAssets_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FJSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FJSettings_Statics::NewProp_AnimationBlueprint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FJSettings_Statics::NewProp_Texture,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FJSettings_Statics::NewProp_Material,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FJSettings_Statics::NewProp_ProjectName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FJSettings_Statics::NewProp_SaveAssets,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FJSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_JsonAsAsset,
		nullptr,
		&NewStructOps,
		"JSettings",
		sizeof(FJSettings),
		alignof(FJSettings),
		Z_Construct_UScriptStruct_FJSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FJSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FJSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FJSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FJSettings()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FJSettings_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_JsonAsAsset();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("JSettings"), sizeof(FJSettings), Get_Z_Construct_UScriptStruct_FJSettings_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FJSettings_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FJSettings_Hash() { return 3557530690U; }
	void UJsonAsAssetSettings::StaticRegisterNativesUJsonAsAssetSettings()
	{
	}
	UClass* Z_Construct_UClass_UJsonAsAssetSettings_NoRegister()
	{
		return UJsonAsAssetSettings::StaticClass();
	}
	struct Z_Construct_UClass_UJsonAsAssetSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Versioning_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Versioning;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AssetSettings_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AssetSettings;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Redirectors_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Redirectors_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Redirectors;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EnableCloudServer_MetaData[];
#endif
		static void NewProp_EnableCloudServer_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_EnableCloudServer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EnableExperiments_MetaData[];
#endif
		static void NewProp_EnableExperiments_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_EnableExperiments;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UJsonAsAssetSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDeveloperSettings,
		(UObject* (*)())Z_Construct_UPackage__Script_JsonAsAsset,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UJsonAsAssetSettings_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/* Powerful Unreal Engine Plugin that imports assets from FModel */" },
		{ "IncludePath", "Settings/JsonAsAssetSettings.h" },
		{ "ModuleRelativePath", "Public/Settings/JsonAsAssetSettings.h" },
		{ "ToolTip", "Powerful Unreal Engine Plugin that imports assets from FModel" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UJsonAsAssetSettings_Statics::NewProp_Versioning_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/Settings/JsonAsAssetSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UJsonAsAssetSettings_Statics::NewProp_Versioning = { "Versioning", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UJsonAsAssetSettings, Versioning), Z_Construct_UScriptStruct_FJVersioningSettings, METADATA_PARAMS(Z_Construct_UClass_UJsonAsAssetSettings_Statics::NewProp_Versioning_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UJsonAsAssetSettings_Statics::NewProp_Versioning_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UJsonAsAssetSettings_Statics::NewProp_AssetSettings_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/Settings/JsonAsAssetSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UJsonAsAssetSettings_Statics::NewProp_AssetSettings = { "AssetSettings", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UJsonAsAssetSettings, AssetSettings), Z_Construct_UScriptStruct_FJSettings, METADATA_PARAMS(Z_Construct_UClass_UJsonAsAssetSettings_Statics::NewProp_AssetSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UJsonAsAssetSettings_Statics::NewProp_AssetSettings_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UJsonAsAssetSettings_Statics::NewProp_Redirectors_Inner = { "Redirectors", nullptr, (EPropertyFlags)0x0000000000004000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FJRedirector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UJsonAsAssetSettings_Statics::NewProp_Redirectors_MetaData[] = {
		{ "Category", "Redirectors" },
		{ "ModuleRelativePath", "Public/Settings/JsonAsAssetSettings.h" },
		{ "TitleProperty", "Name" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UJsonAsAssetSettings_Statics::NewProp_Redirectors = { "Redirectors", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UJsonAsAssetSettings, Redirectors), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UJsonAsAssetSettings_Statics::NewProp_Redirectors_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UJsonAsAssetSettings_Statics::NewProp_Redirectors_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UJsonAsAssetSettings_Statics::NewProp_EnableCloudServer_MetaData[] = {
		{ "Category", "Cloud" },
		{ "Comment", "/* Retrieves assets from an API and imports references directly into your project. */" },
		{ "DisplayName", "Enable Cloud" },
		{ "ModuleRelativePath", "Public/Settings/JsonAsAssetSettings.h" },
		{ "ToolTip", "Retrieves assets from an API and imports references directly into your project." },
	};
#endif
	void Z_Construct_UClass_UJsonAsAssetSettings_Statics::NewProp_EnableCloudServer_SetBit(void* Obj)
	{
		((UJsonAsAssetSettings*)Obj)->EnableCloudServer = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UJsonAsAssetSettings_Statics::NewProp_EnableCloudServer = { "EnableCloudServer", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UJsonAsAssetSettings), &Z_Construct_UClass_UJsonAsAssetSettings_Statics::NewProp_EnableCloudServer_SetBit, METADATA_PARAMS(Z_Construct_UClass_UJsonAsAssetSettings_Statics::NewProp_EnableCloudServer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UJsonAsAssetSettings_Statics::NewProp_EnableCloudServer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UJsonAsAssetSettings_Statics::NewProp_EnableExperiments_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/* Enables experimental/developing features of JsonAsAsset. Features may not work as intended. */" },
		{ "ModuleRelativePath", "Public/Settings/JsonAsAssetSettings.h" },
		{ "ToolTip", "Enables experimental/developing features of JsonAsAsset. Features may not work as intended." },
	};
#endif
	void Z_Construct_UClass_UJsonAsAssetSettings_Statics::NewProp_EnableExperiments_SetBit(void* Obj)
	{
		((UJsonAsAssetSettings*)Obj)->EnableExperiments = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UJsonAsAssetSettings_Statics::NewProp_EnableExperiments = { "EnableExperiments", nullptr, (EPropertyFlags)0x0010040000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UJsonAsAssetSettings), &Z_Construct_UClass_UJsonAsAssetSettings_Statics::NewProp_EnableExperiments_SetBit, METADATA_PARAMS(Z_Construct_UClass_UJsonAsAssetSettings_Statics::NewProp_EnableExperiments_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UJsonAsAssetSettings_Statics::NewProp_EnableExperiments_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UJsonAsAssetSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UJsonAsAssetSettings_Statics::NewProp_Versioning,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UJsonAsAssetSettings_Statics::NewProp_AssetSettings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UJsonAsAssetSettings_Statics::NewProp_Redirectors_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UJsonAsAssetSettings_Statics::NewProp_Redirectors,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UJsonAsAssetSettings_Statics::NewProp_EnableCloudServer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UJsonAsAssetSettings_Statics::NewProp_EnableExperiments,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UJsonAsAssetSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UJsonAsAssetSettings>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UJsonAsAssetSettings_Statics::ClassParams = {
		&UJsonAsAssetSettings::StaticClass,
		"EditorPerProjectUserSettings",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UJsonAsAssetSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UJsonAsAssetSettings_Statics::PropPointers),
		0,
		0x001000A6u,
		METADATA_PARAMS(Z_Construct_UClass_UJsonAsAssetSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UJsonAsAssetSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UJsonAsAssetSettings()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UJsonAsAssetSettings_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UJsonAsAssetSettings, 3037431905);
	template<> JSONASASSET_API UClass* StaticClass<UJsonAsAssetSettings>()
	{
		return UJsonAsAssetSettings::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UJsonAsAssetSettings(Z_Construct_UClass_UJsonAsAssetSettings, &UJsonAsAssetSettings::StaticClass, TEXT("/Script/JsonAsAsset"), TEXT("UJsonAsAssetSettings"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UJsonAsAssetSettings);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

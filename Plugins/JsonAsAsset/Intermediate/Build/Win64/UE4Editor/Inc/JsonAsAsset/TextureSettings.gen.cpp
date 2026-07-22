// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "JsonAsAsset/Public/Settings/Types/TextureSettings.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTextureSettings() {}
// Cross Module References
	JSONASASSET_API UScriptStruct* Z_Construct_UScriptStruct_FJTextureSettings();
	UPackage* Z_Construct_UPackage__Script_JsonAsAsset();
// End Cross Module References
class UScriptStruct* FJTextureSettings::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern JSONASASSET_API uint32 Get_Z_Construct_UScriptStruct_FJTextureSettings_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FJTextureSettings, Z_Construct_UPackage__Script_JsonAsAsset(), TEXT("JTextureSettings"), sizeof(FJTextureSettings), Get_Z_Construct_UScriptStruct_FJTextureSettings_Hash());
	}
	return Singleton;
}
template<> JSONASASSET_API UScriptStruct* StaticStruct<FJTextureSettings>()
{
	return FJTextureSettings::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FJTextureSettings(FJTextureSettings::StaticStruct, TEXT("/Script/JsonAsAsset"), TEXT("JTextureSettings"), false, nullptr, nullptr);
static struct FScriptStruct_JsonAsAsset_StaticRegisterNativesFJTextureSettings
{
	FScriptStruct_JsonAsAsset_StaticRegisterNativesFJTextureSettings()
	{
		UScriptStruct::DeferCppStructOps<FJTextureSettings>(FName(TEXT("JTextureSettings")));
	}
} ScriptStruct_JsonAsAsset_StaticRegisterNativesFJTextureSettings;
	struct Z_Construct_UScriptStruct_FJTextureSettings_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UpdateExisingTextures_MetaData[];
#endif
		static void NewProp_UpdateExisingTextures_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_UpdateExisingTextures;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FJTextureSettings_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/* Settings for textures */" },
		{ "ModuleRelativePath", "Public/Settings/Types/TextureSettings.h" },
		{ "ToolTip", "Settings for textures" },
	};
#endif
	void* Z_Construct_UScriptStruct_FJTextureSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FJTextureSettings>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FJTextureSettings_Statics::NewProp_UpdateExisingTextures_MetaData[] = {
		{ "Category", "TextureSettings" },
		{ "Comment", "/* Re-downloads textures *that already exist*. Significantly worser for import time.\n\x09 * Do not use this unless you are intentionally reimporting textures that were updated since last updated. */" },
		{ "ModuleRelativePath", "Public/Settings/Types/TextureSettings.h" },
		{ "ToolTip", "Re-downloads textures *that already exist*. Significantly worser for import time.\n       * Do not use this unless you are intentionally reimporting textures that were updated since last updated." },
	};
#endif
	void Z_Construct_UScriptStruct_FJTextureSettings_Statics::NewProp_UpdateExisingTextures_SetBit(void* Obj)
	{
		((FJTextureSettings*)Obj)->UpdateExisingTextures = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FJTextureSettings_Statics::NewProp_UpdateExisingTextures = { "UpdateExisingTextures", nullptr, (EPropertyFlags)0x0010040000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FJTextureSettings), &Z_Construct_UScriptStruct_FJTextureSettings_Statics::NewProp_UpdateExisingTextures_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FJTextureSettings_Statics::NewProp_UpdateExisingTextures_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FJTextureSettings_Statics::NewProp_UpdateExisingTextures_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FJTextureSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FJTextureSettings_Statics::NewProp_UpdateExisingTextures,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FJTextureSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_JsonAsAsset,
		nullptr,
		&NewStructOps,
		"JTextureSettings",
		sizeof(FJTextureSettings),
		alignof(FJTextureSettings),
		Z_Construct_UScriptStruct_FJTextureSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FJTextureSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FJTextureSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FJTextureSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FJTextureSettings()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FJTextureSettings_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_JsonAsAsset();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("JTextureSettings"), sizeof(FJTextureSettings), Get_Z_Construct_UScriptStruct_FJTextureSettings_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FJTextureSettings_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FJTextureSettings_Hash() { return 812437459U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

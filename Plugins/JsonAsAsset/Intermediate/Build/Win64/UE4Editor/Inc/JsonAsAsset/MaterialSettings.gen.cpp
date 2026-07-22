// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "JsonAsAsset/Public/Settings/Types/MaterialSettings.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialSettings() {}
// Cross Module References
	JSONASASSET_API UScriptStruct* Z_Construct_UScriptStruct_FJMaterialSettings();
	UPackage* Z_Construct_UPackage__Script_JsonAsAsset();
// End Cross Module References
class UScriptStruct* FJMaterialSettings::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern JSONASASSET_API uint32 Get_Z_Construct_UScriptStruct_FJMaterialSettings_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FJMaterialSettings, Z_Construct_UPackage__Script_JsonAsAsset(), TEXT("JMaterialSettings"), sizeof(FJMaterialSettings), Get_Z_Construct_UScriptStruct_FJMaterialSettings_Hash());
	}
	return Singleton;
}
template<> JSONASASSET_API UScriptStruct* StaticStruct<FJMaterialSettings>()
{
	return FJMaterialSettings::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FJMaterialSettings(FJMaterialSettings::StaticStruct, TEXT("/Script/JsonAsAsset"), TEXT("JMaterialSettings"), false, nullptr, nullptr);
static struct FScriptStruct_JsonAsAsset_StaticRegisterNativesFJMaterialSettings
{
	FScriptStruct_JsonAsAsset_StaticRegisterNativesFJMaterialSettings()
	{
		UScriptStruct::DeferCppStructOps<FJMaterialSettings>(FName(TEXT("JMaterialSettings")));
	}
} ScriptStruct_JsonAsAsset_StaticRegisterNativesFJMaterialSettings;
	struct Z_Construct_UScriptStruct_FJMaterialSettings_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DisconnectRoot_MetaData[];
#endif
		static void NewProp_DisconnectRoot_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_DisconnectRoot;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Stubs_MetaData[];
#endif
		static void NewProp_Stubs_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Stubs;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FJMaterialSettings_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/* Settings for materials */" },
		{ "ModuleRelativePath", "Public/Settings/Types/MaterialSettings.h" },
		{ "ToolTip", "Settings for materials" },
	};
#endif
	void* Z_Construct_UScriptStruct_FJMaterialSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FJMaterialSettings>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FJMaterialSettings_Statics::NewProp_DisconnectRoot_MetaData[] = {
		{ "Category", "MaterialSettings" },
		{ "Comment", "/**\n\x09 * Prevents a known error: \"Material expression called Compiler->TextureParameter() without implementing UMaterialExpression::GetReferencedTexture properly.\"\n\x09 *\n\x09 * To avoid this issue, this option skips connecting the inputs to the material's primary result node, potentially fixing the error.\n\x09 *\n\x09 * Usage:\n\x09 *  - If enabled, import the material, save your project, restart the editor, and then re-import the material.\n\x09 *  - Alternatively, manually connect the inputs to the main result node.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Settings/Types/MaterialSettings.h" },
		{ "ToolTip", "Prevents a known error: \"Material expression called Compiler->TextureParameter() without implementing UMaterialExpression::GetReferencedTexture properly.\"\n\nTo avoid this issue, this option skips connecting the inputs to the material's primary result node, potentially fixing the error.\n\nUsage:\n - If enabled, import the material, save your project, restart the editor, and then re-import the material.\n - Alternatively, manually connect the inputs to the main result node." },
	};
#endif
	void Z_Construct_UScriptStruct_FJMaterialSettings_Statics::NewProp_DisconnectRoot_SetBit(void* Obj)
	{
		((FJMaterialSettings*)Obj)->DisconnectRoot = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FJMaterialSettings_Statics::NewProp_DisconnectRoot = { "DisconnectRoot", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FJMaterialSettings), &Z_Construct_UScriptStruct_FJMaterialSettings_Statics::NewProp_DisconnectRoot_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FJMaterialSettings_Statics::NewProp_DisconnectRoot_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FJMaterialSettings_Statics::NewProp_DisconnectRoot_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FJMaterialSettings_Statics::NewProp_Stubs_MetaData[] = {
		{ "Category", "MaterialSettings" },
		{ "Comment", "/* Creates stub versions of materials that have parameters (for Modding) */" },
		{ "ModuleRelativePath", "Public/Settings/Types/MaterialSettings.h" },
		{ "ToolTip", "Creates stub versions of materials that have parameters (for Modding)" },
	};
#endif
	void Z_Construct_UScriptStruct_FJMaterialSettings_Statics::NewProp_Stubs_SetBit(void* Obj)
	{
		((FJMaterialSettings*)Obj)->Stubs = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FJMaterialSettings_Statics::NewProp_Stubs = { "Stubs", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FJMaterialSettings), &Z_Construct_UScriptStruct_FJMaterialSettings_Statics::NewProp_Stubs_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FJMaterialSettings_Statics::NewProp_Stubs_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FJMaterialSettings_Statics::NewProp_Stubs_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FJMaterialSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FJMaterialSettings_Statics::NewProp_DisconnectRoot,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FJMaterialSettings_Statics::NewProp_Stubs,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FJMaterialSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_JsonAsAsset,
		nullptr,
		&NewStructOps,
		"JMaterialSettings",
		sizeof(FJMaterialSettings),
		alignof(FJMaterialSettings),
		Z_Construct_UScriptStruct_FJMaterialSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FJMaterialSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FJMaterialSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FJMaterialSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FJMaterialSettings()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FJMaterialSettings_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_JsonAsAsset();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("JMaterialSettings"), sizeof(FJMaterialSettings), Get_Z_Construct_UScriptStruct_FJMaterialSettings_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FJMaterialSettings_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FJMaterialSettings_Hash() { return 395088806U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

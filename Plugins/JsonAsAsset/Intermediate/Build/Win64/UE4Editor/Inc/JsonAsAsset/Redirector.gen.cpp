// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "JsonAsAsset/Public/Settings/Redirector.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRedirector() {}
// Cross Module References
	JSONASASSET_API UScriptStruct* Z_Construct_UScriptStruct_FJRedirector();
	UPackage* Z_Construct_UPackage__Script_JsonAsAsset();
	JSONASASSET_API UScriptStruct* Z_Construct_UScriptStruct_FJRedirectorPoint();
// End Cross Module References
class UScriptStruct* FJRedirector::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern JSONASASSET_API uint32 Get_Z_Construct_UScriptStruct_FJRedirector_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FJRedirector, Z_Construct_UPackage__Script_JsonAsAsset(), TEXT("JRedirector"), sizeof(FJRedirector), Get_Z_Construct_UScriptStruct_FJRedirector_Hash());
	}
	return Singleton;
}
template<> JSONASASSET_API UScriptStruct* StaticStruct<FJRedirector>()
{
	return FJRedirector::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FJRedirector(FJRedirector::StaticStruct, TEXT("/Script/JsonAsAsset"), TEXT("JRedirector"), false, nullptr, nullptr);
static struct FScriptStruct_JsonAsAsset_StaticRegisterNativesFJRedirector
{
	FScriptStruct_JsonAsAsset_StaticRegisterNativesFJRedirector()
	{
		UScriptStruct::DeferCppStructOps<FJRedirector>(FName(TEXT("JRedirector")));
	}
} ScriptStruct_JsonAsAsset_StaticRegisterNativesFJRedirector;
	struct Z_Construct_UScriptStruct_FJRedirector_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Profiles_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Profiles_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Profiles;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Name;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Points_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Points_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Points;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Enable_MetaData[];
#endif
		static void NewProp_Enable_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Enable;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FJRedirector_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Settings/Redirector.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FJRedirector_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FJRedirector>();
	}
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FJRedirector_Statics::NewProp_Profiles_Inner = { "Profiles", nullptr, (EPropertyFlags)0x0000000000004000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FJRedirector_Statics::NewProp_Profiles_MetaData[] = {
		{ "Category", "Metadata" },
		{ "Comment", "/* Profiles allowed when using this redirector. (Empty = Allowed By Default) */" },
		{ "ModuleRelativePath", "Public/Settings/Redirector.h" },
		{ "ToolTip", "Profiles allowed when using this redirector. (Empty = Allowed By Default)" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FJRedirector_Statics::NewProp_Profiles = { "Profiles", nullptr, (EPropertyFlags)0x0040000000004001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FJRedirector, Profiles), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FJRedirector_Statics::NewProp_Profiles_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FJRedirector_Statics::NewProp_Profiles_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FJRedirector_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "Redirector" },
		{ "Comment", "/* The name of this redirector. */" },
		{ "ModuleRelativePath", "Public/Settings/Redirector.h" },
		{ "ToolTip", "The name of this redirector." },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FJRedirector_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0040000000004001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FJRedirector, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FJRedirector_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FJRedirector_Statics::NewProp_Name_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FJRedirector_Statics::NewProp_Points_Inner = { "Points", nullptr, (EPropertyFlags)0x0000000000004000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FJRedirectorPoint, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FJRedirector_Statics::NewProp_Points_MetaData[] = {
		{ "Category", "Redirector" },
		{ "Comment", "/* The points on this redirector. */" },
		{ "ModuleRelativePath", "Public/Settings/Redirector.h" },
		{ "ToolTip", "The points on this redirector." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FJRedirector_Statics::NewProp_Points = { "Points", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FJRedirector, Points), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FJRedirector_Statics::NewProp_Points_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FJRedirector_Statics::NewProp_Points_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FJRedirector_Statics::NewProp_Enable_MetaData[] = {
		{ "Category", "Redirector" },
		{ "Comment", "/* Enables this redirector. */" },
		{ "ModuleRelativePath", "Public/Settings/Redirector.h" },
		{ "ToolTip", "Enables this redirector." },
	};
#endif
	void Z_Construct_UScriptStruct_FJRedirector_Statics::NewProp_Enable_SetBit(void* Obj)
	{
		((FJRedirector*)Obj)->Enable = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FJRedirector_Statics::NewProp_Enable = { "Enable", nullptr, (EPropertyFlags)0x0040000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FJRedirector), &Z_Construct_UScriptStruct_FJRedirector_Statics::NewProp_Enable_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FJRedirector_Statics::NewProp_Enable_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FJRedirector_Statics::NewProp_Enable_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FJRedirector_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FJRedirector_Statics::NewProp_Profiles_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FJRedirector_Statics::NewProp_Profiles,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FJRedirector_Statics::NewProp_Name,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FJRedirector_Statics::NewProp_Points_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FJRedirector_Statics::NewProp_Points,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FJRedirector_Statics::NewProp_Enable,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FJRedirector_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_JsonAsAsset,
		nullptr,
		&NewStructOps,
		"JRedirector",
		sizeof(FJRedirector),
		alignof(FJRedirector),
		Z_Construct_UScriptStruct_FJRedirector_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FJRedirector_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FJRedirector_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FJRedirector_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FJRedirector()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FJRedirector_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_JsonAsAsset();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("JRedirector"), sizeof(FJRedirector), Get_Z_Construct_UScriptStruct_FJRedirector_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FJRedirector_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FJRedirector_Hash() { return 1139767777U; }
class UScriptStruct* FJRedirectorPoint::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern JSONASASSET_API uint32 Get_Z_Construct_UScriptStruct_FJRedirectorPoint_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FJRedirectorPoint, Z_Construct_UPackage__Script_JsonAsAsset(), TEXT("JRedirectorPoint"), sizeof(FJRedirectorPoint), Get_Z_Construct_UScriptStruct_FJRedirectorPoint_Hash());
	}
	return Singleton;
}
template<> JSONASASSET_API UScriptStruct* StaticStruct<FJRedirectorPoint>()
{
	return FJRedirectorPoint::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FJRedirectorPoint(FJRedirectorPoint::StaticStruct, TEXT("/Script/JsonAsAsset"), TEXT("JRedirectorPoint"), false, nullptr, nullptr);
static struct FScriptStruct_JsonAsAsset_StaticRegisterNativesFJRedirectorPoint
{
	FScriptStruct_JsonAsAsset_StaticRegisterNativesFJRedirectorPoint()
	{
		UScriptStruct::DeferCppStructOps<FJRedirectorPoint>(FName(TEXT("JRedirectorPoint")));
	}
} ScriptStruct_JsonAsAsset_StaticRegisterNativesFJRedirectorPoint;
	struct Z_Construct_UScriptStruct_FJRedirectorPoint_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_From_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_From;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_To_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_To;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FJRedirectorPoint_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/* A point in a redirector */" },
		{ "ModuleRelativePath", "Public/Settings/Redirector.h" },
		{ "ToolTip", "A point in a redirector" },
	};
#endif
	void* Z_Construct_UScriptStruct_FJRedirectorPoint_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FJRedirectorPoint>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FJRedirectorPoint_Statics::NewProp_From_MetaData[] = {
		{ "Category", "RedirectorPoint" },
		{ "Comment", "/* Original path. /Root/ */" },
		{ "ModuleRelativePath", "Public/Settings/Redirector.h" },
		{ "ToolTip", "Original path. /Root/" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FJRedirectorPoint_Statics::NewProp_From = { "From", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FJRedirectorPoint, From), METADATA_PARAMS(Z_Construct_UScriptStruct_FJRedirectorPoint_Statics::NewProp_From_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FJRedirectorPoint_Statics::NewProp_From_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FJRedirectorPoint_Statics::NewProp_To_MetaData[] = {
		{ "Category", "RedirectorPoint" },
		{ "Comment", "/* Redirected path. /Root/ */" },
		{ "ModuleRelativePath", "Public/Settings/Redirector.h" },
		{ "ToolTip", "Redirected path. /Root/" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FJRedirectorPoint_Statics::NewProp_To = { "To", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FJRedirectorPoint, To), METADATA_PARAMS(Z_Construct_UScriptStruct_FJRedirectorPoint_Statics::NewProp_To_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FJRedirectorPoint_Statics::NewProp_To_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FJRedirectorPoint_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FJRedirectorPoint_Statics::NewProp_From,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FJRedirectorPoint_Statics::NewProp_To,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FJRedirectorPoint_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_JsonAsAsset,
		nullptr,
		&NewStructOps,
		"JRedirectorPoint",
		sizeof(FJRedirectorPoint),
		alignof(FJRedirectorPoint),
		Z_Construct_UScriptStruct_FJRedirectorPoint_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FJRedirectorPoint_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FJRedirectorPoint_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FJRedirectorPoint_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FJRedirectorPoint()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FJRedirectorPoint_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_JsonAsAsset();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("JRedirectorPoint"), sizeof(FJRedirectorPoint), Get_Z_Construct_UScriptStruct_FJRedirectorPoint_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FJRedirectorPoint_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FJRedirectorPoint_Hash() { return 3552153774U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

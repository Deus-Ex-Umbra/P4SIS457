// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "P4SIS457/Canoa.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCanoa() {}
// Cross Module References
	P4SIS457_API UClass* Z_Construct_UClass_ACanoa_NoRegister();
	P4SIS457_API UClass* Z_Construct_UClass_ACanoa();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_P4SIS457();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterial_NoRegister();
// End Cross Module References
	void ACanoa::StaticRegisterNativesACanoa()
	{
	}
	UClass* Z_Construct_UClass_ACanoa_NoRegister()
	{
		return ACanoa::StaticClass();
	}
	struct Z_Construct_UClass_ACanoa_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CanoaMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CanoaMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CanoaMaterial_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CanoaMaterial;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACanoa_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_P4SIS457,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACanoa_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Canoa.h" },
		{ "ModuleRelativePath", "Canoa.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACanoa_Statics::NewProp_CanoaMesh_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Canoa.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACanoa_Statics::NewProp_CanoaMesh = { "CanoaMesh", nullptr, (EPropertyFlags)0x0010000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACanoa, CanoaMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACanoa_Statics::NewProp_CanoaMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACanoa_Statics::NewProp_CanoaMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACanoa_Statics::NewProp_CanoaMaterial_MetaData[] = {
		{ "ModuleRelativePath", "Canoa.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACanoa_Statics::NewProp_CanoaMaterial = { "CanoaMaterial", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACanoa, CanoaMaterial), Z_Construct_UClass_UMaterial_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACanoa_Statics::NewProp_CanoaMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACanoa_Statics::NewProp_CanoaMaterial_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACanoa_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACanoa_Statics::NewProp_CanoaMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACanoa_Statics::NewProp_CanoaMaterial,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACanoa_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACanoa>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ACanoa_Statics::ClassParams = {
		&ACanoa::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ACanoa_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ACanoa_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ACanoa_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ACanoa_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACanoa()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ACanoa_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ACanoa, 98489682);
	template<> P4SIS457_API UClass* StaticClass<ACanoa>()
	{
		return ACanoa::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ACanoa(Z_Construct_UClass_ACanoa, &ACanoa::StaticClass, TEXT("/Script/P4SIS457"), TEXT("ACanoa"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACanoa);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "P4SIS457/Bala.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBala() {}
// Cross Module References
	P4SIS457_API UClass* Z_Construct_UClass_ABala_NoRegister();
	P4SIS457_API UClass* Z_Construct_UClass_ABala();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_P4SIS457();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterial_NoRegister();
// End Cross Module References
	void ABala::StaticRegisterNativesABala()
	{
	}
	UClass* Z_Construct_UClass_ABala_NoRegister()
	{
		return ABala::StaticClass();
	}
	struct Z_Construct_UClass_ABala_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BalaMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BalaMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BalaMaterial_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BalaMaterial;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABala_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_P4SIS457,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABala_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Bala.h" },
		{ "ModuleRelativePath", "Bala.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABala_Statics::NewProp_BalaMesh_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Bala.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABala_Statics::NewProp_BalaMesh = { "BalaMesh", nullptr, (EPropertyFlags)0x0010000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABala, BalaMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABala_Statics::NewProp_BalaMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABala_Statics::NewProp_BalaMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABala_Statics::NewProp_BalaMaterial_MetaData[] = {
		{ "ModuleRelativePath", "Bala.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABala_Statics::NewProp_BalaMaterial = { "BalaMaterial", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABala, BalaMaterial), Z_Construct_UClass_UMaterial_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABala_Statics::NewProp_BalaMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABala_Statics::NewProp_BalaMaterial_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABala_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABala_Statics::NewProp_BalaMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABala_Statics::NewProp_BalaMaterial,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABala_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABala>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABala_Statics::ClassParams = {
		&ABala::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ABala_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ABala_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ABala_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABala_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABala()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ABala_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABala, 1700880292);
	template<> P4SIS457_API UClass* StaticClass<ABala>()
	{
		return ABala::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABala(Z_Construct_UClass_ABala, &ABala::StaticClass, TEXT("/Script/P4SIS457"), TEXT("ABala"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABala);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

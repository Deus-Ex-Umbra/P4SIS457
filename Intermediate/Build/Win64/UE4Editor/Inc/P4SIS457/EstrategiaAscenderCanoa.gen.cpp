// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "P4SIS457/EstrategiaAscenderCanoa.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEstrategiaAscenderCanoa() {}
// Cross Module References
	P4SIS457_API UClass* Z_Construct_UClass_AEstrategiaAscenderCanoa_NoRegister();
	P4SIS457_API UClass* Z_Construct_UClass_AEstrategiaAscenderCanoa();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_P4SIS457();
	P4SIS457_API UClass* Z_Construct_UClass_UEstrategiaCanoa_NoRegister();
// End Cross Module References
	void AEstrategiaAscenderCanoa::StaticRegisterNativesAEstrategiaAscenderCanoa()
	{
	}
	UClass* Z_Construct_UClass_AEstrategiaAscenderCanoa_NoRegister()
	{
		return AEstrategiaAscenderCanoa::StaticClass();
	}
	struct Z_Construct_UClass_AEstrategiaAscenderCanoa_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AEstrategiaAscenderCanoa_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_P4SIS457,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEstrategiaAscenderCanoa_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "EstrategiaAscenderCanoa.h" },
		{ "ModuleRelativePath", "EstrategiaAscenderCanoa.h" },
	};
#endif
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AEstrategiaAscenderCanoa_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UEstrategiaCanoa_NoRegister, (int32)VTABLE_OFFSET(AEstrategiaAscenderCanoa, IEstrategiaCanoa), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AEstrategiaAscenderCanoa_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEstrategiaAscenderCanoa>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AEstrategiaAscenderCanoa_Statics::ClassParams = {
		&AEstrategiaAscenderCanoa::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AEstrategiaAscenderCanoa_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AEstrategiaAscenderCanoa_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AEstrategiaAscenderCanoa()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AEstrategiaAscenderCanoa_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AEstrategiaAscenderCanoa, 131961812);
	template<> P4SIS457_API UClass* StaticClass<AEstrategiaAscenderCanoa>()
	{
		return AEstrategiaAscenderCanoa::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AEstrategiaAscenderCanoa(Z_Construct_UClass_AEstrategiaAscenderCanoa, &AEstrategiaAscenderCanoa::StaticClass, TEXT("/Script/P4SIS457"), TEXT("AEstrategiaAscenderCanoa"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AEstrategiaAscenderCanoa);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

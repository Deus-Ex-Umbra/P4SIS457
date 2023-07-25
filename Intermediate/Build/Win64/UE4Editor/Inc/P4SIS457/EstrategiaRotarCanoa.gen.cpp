// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "P4SIS457/EstrategiaRotarCanoa.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEstrategiaRotarCanoa() {}
// Cross Module References
	P4SIS457_API UClass* Z_Construct_UClass_AEstrategiaRotarCanoa_NoRegister();
	P4SIS457_API UClass* Z_Construct_UClass_AEstrategiaRotarCanoa();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_P4SIS457();
	P4SIS457_API UClass* Z_Construct_UClass_UEstrategiaCanoa_NoRegister();
// End Cross Module References
	void AEstrategiaRotarCanoa::StaticRegisterNativesAEstrategiaRotarCanoa()
	{
	}
	UClass* Z_Construct_UClass_AEstrategiaRotarCanoa_NoRegister()
	{
		return AEstrategiaRotarCanoa::StaticClass();
	}
	struct Z_Construct_UClass_AEstrategiaRotarCanoa_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AEstrategiaRotarCanoa_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_P4SIS457,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEstrategiaRotarCanoa_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "EstrategiaRotarCanoa.h" },
		{ "ModuleRelativePath", "EstrategiaRotarCanoa.h" },
	};
#endif
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AEstrategiaRotarCanoa_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UEstrategiaCanoa_NoRegister, (int32)VTABLE_OFFSET(AEstrategiaRotarCanoa, IEstrategiaCanoa), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AEstrategiaRotarCanoa_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEstrategiaRotarCanoa>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AEstrategiaRotarCanoa_Statics::ClassParams = {
		&AEstrategiaRotarCanoa::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AEstrategiaRotarCanoa_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AEstrategiaRotarCanoa_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AEstrategiaRotarCanoa()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AEstrategiaRotarCanoa_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AEstrategiaRotarCanoa, 2697064331);
	template<> P4SIS457_API UClass* StaticClass<AEstrategiaRotarCanoa>()
	{
		return AEstrategiaRotarCanoa::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AEstrategiaRotarCanoa(Z_Construct_UClass_AEstrategiaRotarCanoa, &AEstrategiaRotarCanoa::StaticClass, TEXT("/Script/P4SIS457"), TEXT("AEstrategiaRotarCanoa"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AEstrategiaRotarCanoa);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

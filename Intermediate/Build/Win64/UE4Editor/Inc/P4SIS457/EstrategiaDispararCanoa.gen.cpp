// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "P4SIS457/EstrategiaDispararCanoa.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEstrategiaDispararCanoa() {}
// Cross Module References
	P4SIS457_API UClass* Z_Construct_UClass_AEstrategiaDispararCanoa_NoRegister();
	P4SIS457_API UClass* Z_Construct_UClass_AEstrategiaDispararCanoa();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_P4SIS457();
	P4SIS457_API UClass* Z_Construct_UClass_ABala_NoRegister();
	P4SIS457_API UClass* Z_Construct_UClass_UEstrategiaCanoa_NoRegister();
// End Cross Module References
	void AEstrategiaDispararCanoa::StaticRegisterNativesAEstrategiaDispararCanoa()
	{
	}
	UClass* Z_Construct_UClass_AEstrategiaDispararCanoa_NoRegister()
	{
		return AEstrategiaDispararCanoa::StaticClass();
	}
	struct Z_Construct_UClass_AEstrategiaDispararCanoa_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Bala_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Bala;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AEstrategiaDispararCanoa_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_P4SIS457,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEstrategiaDispararCanoa_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "EstrategiaDispararCanoa.h" },
		{ "ModuleRelativePath", "EstrategiaDispararCanoa.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEstrategiaDispararCanoa_Statics::NewProp_Bala_MetaData[] = {
		{ "ModuleRelativePath", "EstrategiaDispararCanoa.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEstrategiaDispararCanoa_Statics::NewProp_Bala = { "Bala", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEstrategiaDispararCanoa, Bala), Z_Construct_UClass_ABala_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AEstrategiaDispararCanoa_Statics::NewProp_Bala_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEstrategiaDispararCanoa_Statics::NewProp_Bala_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AEstrategiaDispararCanoa_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEstrategiaDispararCanoa_Statics::NewProp_Bala,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AEstrategiaDispararCanoa_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UEstrategiaCanoa_NoRegister, (int32)VTABLE_OFFSET(AEstrategiaDispararCanoa, IEstrategiaCanoa), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AEstrategiaDispararCanoa_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEstrategiaDispararCanoa>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AEstrategiaDispararCanoa_Statics::ClassParams = {
		&AEstrategiaDispararCanoa::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AEstrategiaDispararCanoa_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AEstrategiaDispararCanoa_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AEstrategiaDispararCanoa_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AEstrategiaDispararCanoa_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AEstrategiaDispararCanoa()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AEstrategiaDispararCanoa_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AEstrategiaDispararCanoa, 2622760588);
	template<> P4SIS457_API UClass* StaticClass<AEstrategiaDispararCanoa>()
	{
		return AEstrategiaDispararCanoa::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AEstrategiaDispararCanoa(Z_Construct_UClass_AEstrategiaDispararCanoa, &AEstrategiaDispararCanoa::StaticClass, TEXT("/Script/P4SIS457"), TEXT("AEstrategiaDispararCanoa"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AEstrategiaDispararCanoa);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

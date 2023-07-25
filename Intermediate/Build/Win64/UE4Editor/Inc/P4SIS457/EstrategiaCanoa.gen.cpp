// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "P4SIS457/EstrategiaCanoa.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEstrategiaCanoa() {}
// Cross Module References
	P4SIS457_API UClass* Z_Construct_UClass_UEstrategiaCanoa_NoRegister();
	P4SIS457_API UClass* Z_Construct_UClass_UEstrategiaCanoa();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_P4SIS457();
// End Cross Module References
	void UEstrategiaCanoa::StaticRegisterNativesUEstrategiaCanoa()
	{
	}
	UClass* Z_Construct_UClass_UEstrategiaCanoa_NoRegister()
	{
		return UEstrategiaCanoa::StaticClass();
	}
	struct Z_Construct_UClass_UEstrategiaCanoa_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEstrategiaCanoa_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_P4SIS457,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEstrategiaCanoa_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "EstrategiaCanoa.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEstrategiaCanoa_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IEstrategiaCanoa>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UEstrategiaCanoa_Statics::ClassParams = {
		&UEstrategiaCanoa::StaticClass,
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
		0x000840A1u,
		METADATA_PARAMS(Z_Construct_UClass_UEstrategiaCanoa_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEstrategiaCanoa_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEstrategiaCanoa()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UEstrategiaCanoa_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UEstrategiaCanoa, 1288607497);
	template<> P4SIS457_API UClass* StaticClass<UEstrategiaCanoa>()
	{
		return UEstrategiaCanoa::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEstrategiaCanoa(Z_Construct_UClass_UEstrategiaCanoa, &UEstrategiaCanoa::StaticClass, TEXT("/Script/P4SIS457"), TEXT("UEstrategiaCanoa"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEstrategiaCanoa);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

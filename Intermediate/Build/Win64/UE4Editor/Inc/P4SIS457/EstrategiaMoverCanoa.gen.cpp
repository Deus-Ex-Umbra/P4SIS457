// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "P4SIS457/EstrategiaMoverCanoa.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEstrategiaMoverCanoa() {}
// Cross Module References
	P4SIS457_API UClass* Z_Construct_UClass_AEstrategiaMoverCanoa_NoRegister();
	P4SIS457_API UClass* Z_Construct_UClass_AEstrategiaMoverCanoa();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_P4SIS457();
	P4SIS457_API UClass* Z_Construct_UClass_UEstrategiaCanoa_NoRegister();
// End Cross Module References
	void AEstrategiaMoverCanoa::StaticRegisterNativesAEstrategiaMoverCanoa()
	{
	}
	UClass* Z_Construct_UClass_AEstrategiaMoverCanoa_NoRegister()
	{
		return AEstrategiaMoverCanoa::StaticClass();
	}
	struct Z_Construct_UClass_AEstrategiaMoverCanoa_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AEstrategiaMoverCanoa_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_P4SIS457,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEstrategiaMoverCanoa_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "EstrategiaMoverCanoa.h" },
		{ "ModuleRelativePath", "EstrategiaMoverCanoa.h" },
	};
#endif
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AEstrategiaMoverCanoa_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UEstrategiaCanoa_NoRegister, (int32)VTABLE_OFFSET(AEstrategiaMoverCanoa, IEstrategiaCanoa), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AEstrategiaMoverCanoa_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEstrategiaMoverCanoa>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AEstrategiaMoverCanoa_Statics::ClassParams = {
		&AEstrategiaMoverCanoa::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AEstrategiaMoverCanoa_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AEstrategiaMoverCanoa_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AEstrategiaMoverCanoa()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AEstrategiaMoverCanoa_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AEstrategiaMoverCanoa, 3274905674);
	template<> P4SIS457_API UClass* StaticClass<AEstrategiaMoverCanoa>()
	{
		return AEstrategiaMoverCanoa::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AEstrategiaMoverCanoa(Z_Construct_UClass_AEstrategiaMoverCanoa, &AEstrategiaMoverCanoa::StaticClass, TEXT("/Script/P4SIS457"), TEXT("AEstrategiaMoverCanoa"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AEstrategiaMoverCanoa);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

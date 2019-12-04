// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Dev_Challenge_2/Public/RoundController.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRoundController() {}
// Cross Module References
	DEV_CHALLENGE_2_API UClass* Z_Construct_UClass_ARoundController_NoRegister();
	DEV_CHALLENGE_2_API UClass* Z_Construct_UClass_ARoundController();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Dev_Challenge_2();
	DEV_CHALLENGE_2_API UFunction* Z_Construct_UFunction_ARoundController_EndRound();
// End Cross Module References
	void ARoundController::StaticRegisterNativesARoundController()
	{
		UClass* Class = ARoundController::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "EndRound", &ARoundController::execEndRound },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ARoundController_EndRound_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARoundController_EndRound_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/RoundController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ARoundController_EndRound_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARoundController, nullptr, "EndRound", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ARoundController_EndRound_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ARoundController_EndRound_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ARoundController_EndRound()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ARoundController_EndRound_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ARoundController_NoRegister()
	{
		return ARoundController::StaticClass();
	}
	struct Z_Construct_UClass_ARoundController_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RoundTimer_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_RoundTimer;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ARoundController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Dev_Challenge_2,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ARoundController_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ARoundController_EndRound, "EndRound" }, // 1911247690
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARoundController_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "RoundController.h" },
		{ "ModuleRelativePath", "Public/RoundController.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARoundController_Statics::NewProp_RoundTimer_MetaData[] = {
		{ "Category", "RoundController" },
		{ "ModuleRelativePath", "Public/RoundController.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ARoundController_Statics::NewProp_RoundTimer = { "RoundTimer", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARoundController, RoundTimer), METADATA_PARAMS(Z_Construct_UClass_ARoundController_Statics::NewProp_RoundTimer_MetaData, ARRAY_COUNT(Z_Construct_UClass_ARoundController_Statics::NewProp_RoundTimer_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ARoundController_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARoundController_Statics::NewProp_RoundTimer,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ARoundController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ARoundController>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ARoundController_Statics::ClassParams = {
		&ARoundController::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ARoundController_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_ARoundController_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_ARoundController_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ARoundController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ARoundController()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ARoundController_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ARoundController, 2561963021);
	template<> DEV_CHALLENGE_2_API UClass* StaticClass<ARoundController>()
	{
		return ARoundController::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ARoundController(Z_Construct_UClass_ARoundController, &ARoundController::StaticClass, TEXT("/Script/Dev_Challenge_2"), TEXT("ARoundController"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ARoundController);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

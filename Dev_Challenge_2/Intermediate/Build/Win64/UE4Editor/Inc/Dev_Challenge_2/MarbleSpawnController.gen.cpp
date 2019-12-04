// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Dev_Challenge_2/Public/MarbleSpawnController.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMarbleSpawnController() {}
// Cross Module References
	DEV_CHALLENGE_2_API UClass* Z_Construct_UClass_AMarbleSpawnController_NoRegister();
	DEV_CHALLENGE_2_API UClass* Z_Construct_UClass_AMarbleSpawnController();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Dev_Challenge_2();
	DEV_CHALLENGE_2_API UFunction* Z_Construct_UFunction_AMarbleSpawnController_GetNewMarble();
	DEV_CHALLENGE_2_API UFunction* Z_Construct_UFunction_AMarbleSpawnController_StartMarbleTimer();
	DEV_CHALLENGE_2_API UClass* Z_Construct_UClass_ARoundController_NoRegister();
	DEV_CHALLENGE_2_API UClass* Z_Construct_UClass_AMarbleForceController_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	DEV_CHALLENGE_2_API UClass* Z_Construct_UClass_AMarble_NoRegister();
// End Cross Module References
	void AMarbleSpawnController::StaticRegisterNativesAMarbleSpawnController()
	{
		UClass* Class = AMarbleSpawnController::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetNewMarble", &AMarbleSpawnController::execGetNewMarble },
			{ "StartMarbleTimer", &AMarbleSpawnController::execStartMarbleTimer },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AMarbleSpawnController_GetNewMarble_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMarbleSpawnController_GetNewMarble_Statics::Function_MetaDataParams[] = {
		{ "Category", "MarbleSpawn" },
		{ "ModuleRelativePath", "Public/MarbleSpawnController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMarbleSpawnController_GetNewMarble_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMarbleSpawnController, nullptr, "GetNewMarble", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMarbleSpawnController_GetNewMarble_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AMarbleSpawnController_GetNewMarble_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMarbleSpawnController_GetNewMarble()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMarbleSpawnController_GetNewMarble_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMarbleSpawnController_StartMarbleTimer_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMarbleSpawnController_StartMarbleTimer_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MarbleSpawnController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMarbleSpawnController_StartMarbleTimer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMarbleSpawnController, nullptr, "StartMarbleTimer", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMarbleSpawnController_StartMarbleTimer_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AMarbleSpawnController_StartMarbleTimer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMarbleSpawnController_StartMarbleTimer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMarbleSpawnController_StartMarbleTimer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AMarbleSpawnController_NoRegister()
	{
		return AMarbleSpawnController::StaticClass();
	}
	struct Z_Construct_UClass_AMarbleSpawnController_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_roundControl_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_roundControl;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_forceController_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_forceController;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpawnLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SpawnLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActorToSpawn_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ActorToSpawn;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMarbleSpawnController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Dev_Challenge_2,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AMarbleSpawnController_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AMarbleSpawnController_GetNewMarble, "GetNewMarble" }, // 2775926509
		{ &Z_Construct_UFunction_AMarbleSpawnController_StartMarbleTimer, "StartMarbleTimer" }, // 2345537507
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMarbleSpawnController_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MarbleSpawnController.h" },
		{ "ModuleRelativePath", "Public/MarbleSpawnController.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMarbleSpawnController_Statics::NewProp_roundControl_MetaData[] = {
		{ "Category", "MarbleSpawnController" },
		{ "ModuleRelativePath", "Public/MarbleSpawnController.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMarbleSpawnController_Statics::NewProp_roundControl = { "roundControl", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMarbleSpawnController, roundControl), Z_Construct_UClass_ARoundController_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMarbleSpawnController_Statics::NewProp_roundControl_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMarbleSpawnController_Statics::NewProp_roundControl_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMarbleSpawnController_Statics::NewProp_forceController_MetaData[] = {
		{ "Category", "MarbleSpawnController" },
		{ "ModuleRelativePath", "Public/MarbleSpawnController.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMarbleSpawnController_Statics::NewProp_forceController = { "forceController", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMarbleSpawnController, forceController), Z_Construct_UClass_AMarbleForceController_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMarbleSpawnController_Statics::NewProp_forceController_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMarbleSpawnController_Statics::NewProp_forceController_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMarbleSpawnController_Statics::NewProp_SpawnLocation_MetaData[] = {
		{ "Category", "MarbleSpawnController" },
		{ "ModuleRelativePath", "Public/MarbleSpawnController.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMarbleSpawnController_Statics::NewProp_SpawnLocation = { "SpawnLocation", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMarbleSpawnController, SpawnLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AMarbleSpawnController_Statics::NewProp_SpawnLocation_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMarbleSpawnController_Statics::NewProp_SpawnLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMarbleSpawnController_Statics::NewProp_ActorToSpawn_MetaData[] = {
		{ "Category", "SpawnObject" },
		{ "ModuleRelativePath", "Public/MarbleSpawnController.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AMarbleSpawnController_Statics::NewProp_ActorToSpawn = { "ActorToSpawn", nullptr, (EPropertyFlags)0x0014000000010001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMarbleSpawnController, ActorToSpawn), Z_Construct_UClass_AMarble_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AMarbleSpawnController_Statics::NewProp_ActorToSpawn_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMarbleSpawnController_Statics::NewProp_ActorToSpawn_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMarbleSpawnController_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMarbleSpawnController_Statics::NewProp_roundControl,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMarbleSpawnController_Statics::NewProp_forceController,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMarbleSpawnController_Statics::NewProp_SpawnLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMarbleSpawnController_Statics::NewProp_ActorToSpawn,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMarbleSpawnController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMarbleSpawnController>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMarbleSpawnController_Statics::ClassParams = {
		&AMarbleSpawnController::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AMarbleSpawnController_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_AMarbleSpawnController_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_AMarbleSpawnController_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AMarbleSpawnController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMarbleSpawnController()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMarbleSpawnController_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMarbleSpawnController, 1348095750);
	template<> DEV_CHALLENGE_2_API UClass* StaticClass<AMarbleSpawnController>()
	{
		return AMarbleSpawnController::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMarbleSpawnController(Z_Construct_UClass_AMarbleSpawnController, &AMarbleSpawnController::StaticClass, TEXT("/Script/Dev_Challenge_2"), TEXT("AMarbleSpawnController"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMarbleSpawnController);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

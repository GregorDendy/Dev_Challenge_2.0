// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Dev_Challenge_2/Public/MarbleForceController.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMarbleForceController() {}
// Cross Module References
	DEV_CHALLENGE_2_API UClass* Z_Construct_UClass_AMarbleForceController_NoRegister();
	DEV_CHALLENGE_2_API UClass* Z_Construct_UClass_AMarbleForceController();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Dev_Challenge_2();
	DEV_CHALLENGE_2_API UFunction* Z_Construct_UFunction_AMarbleForceController_CheckIfClickingMarble();
	DEV_CHALLENGE_2_API UFunction* Z_Construct_UFunction_AMarbleForceController_HitBall();
	DEV_CHALLENGE_2_API UFunction* Z_Construct_UFunction_AMarbleForceController_SetFireAngle();
	DEV_CHALLENGE_2_API UClass* Z_Construct_UClass_AMarble_NoRegister();
// End Cross Module References
	void AMarbleForceController::StaticRegisterNativesAMarbleForceController()
	{
		UClass* Class = AMarbleForceController::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CheckIfClickingMarble", &AMarbleForceController::execCheckIfClickingMarble },
			{ "HitBall", &AMarbleForceController::execHitBall },
			{ "SetFireAngle", &AMarbleForceController::execSetFireAngle },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AMarbleForceController_CheckIfClickingMarble_Statics
	{
		struct MarbleForceController_eventCheckIfClickingMarble_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AMarbleForceController_CheckIfClickingMarble_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MarbleForceController_eventCheckIfClickingMarble_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMarbleForceController_CheckIfClickingMarble_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MarbleForceController_eventCheckIfClickingMarble_Parms), &Z_Construct_UFunction_AMarbleForceController_CheckIfClickingMarble_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMarbleForceController_CheckIfClickingMarble_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMarbleForceController_CheckIfClickingMarble_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMarbleForceController_CheckIfClickingMarble_Statics::Function_MetaDataParams[] = {
		{ "Category", "Ball" },
		{ "ModuleRelativePath", "Public/MarbleForceController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMarbleForceController_CheckIfClickingMarble_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMarbleForceController, nullptr, "CheckIfClickingMarble", nullptr, nullptr, sizeof(MarbleForceController_eventCheckIfClickingMarble_Parms), Z_Construct_UFunction_AMarbleForceController_CheckIfClickingMarble_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AMarbleForceController_CheckIfClickingMarble_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMarbleForceController_CheckIfClickingMarble_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AMarbleForceController_CheckIfClickingMarble_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMarbleForceController_CheckIfClickingMarble()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMarbleForceController_CheckIfClickingMarble_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMarbleForceController_HitBall_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMarbleForceController_HitBall_Statics::Function_MetaDataParams[] = {
		{ "Category", "Ball" },
		{ "ModuleRelativePath", "Public/MarbleForceController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMarbleForceController_HitBall_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMarbleForceController, nullptr, "HitBall", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMarbleForceController_HitBall_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AMarbleForceController_HitBall_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMarbleForceController_HitBall()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMarbleForceController_HitBall_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMarbleForceController_SetFireAngle_Statics
	{
		struct MarbleForceController_eventSetFireAngle_Parms
		{
			float value;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AMarbleForceController_SetFireAngle_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MarbleForceController_eventSetFireAngle_Parms, value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMarbleForceController_SetFireAngle_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMarbleForceController_SetFireAngle_Statics::NewProp_value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMarbleForceController_SetFireAngle_Statics::Function_MetaDataParams[] = {
		{ "Category", "Ball" },
		{ "ModuleRelativePath", "Public/MarbleForceController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMarbleForceController_SetFireAngle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMarbleForceController, nullptr, "SetFireAngle", nullptr, nullptr, sizeof(MarbleForceController_eventSetFireAngle_Parms), Z_Construct_UFunction_AMarbleForceController_SetFireAngle_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AMarbleForceController_SetFireAngle_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMarbleForceController_SetFireAngle_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AMarbleForceController_SetFireAngle_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMarbleForceController_SetFireAngle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMarbleForceController_SetFireAngle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AMarbleForceController_NoRegister()
	{
		return AMarbleForceController::StaticClass();
	}
	struct Z_Construct_UClass_AMarbleForceController_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FirePower_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FirePower;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FireAngle_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_FireAngle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PowerMultiplier_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PowerMultiplier;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_marble_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_marble;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMarbleForceController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Dev_Challenge_2,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AMarbleForceController_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AMarbleForceController_CheckIfClickingMarble, "CheckIfClickingMarble" }, // 2359583499
		{ &Z_Construct_UFunction_AMarbleForceController_HitBall, "HitBall" }, // 2958383107
		{ &Z_Construct_UFunction_AMarbleForceController_SetFireAngle, "SetFireAngle" }, // 3000897537
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMarbleForceController_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MarbleForceController.h" },
		{ "ModuleRelativePath", "Public/MarbleForceController.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMarbleForceController_Statics::NewProp_FirePower_MetaData[] = {
		{ "Category", "MarbleForceController" },
		{ "ModuleRelativePath", "Public/MarbleForceController.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMarbleForceController_Statics::NewProp_FirePower = { "FirePower", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMarbleForceController, FirePower), METADATA_PARAMS(Z_Construct_UClass_AMarbleForceController_Statics::NewProp_FirePower_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMarbleForceController_Statics::NewProp_FirePower_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMarbleForceController_Statics::NewProp_FireAngle_MetaData[] = {
		{ "Category", "MarbleForceController" },
		{ "Comment", "// Category = Marble)\n" },
		{ "ModuleRelativePath", "Public/MarbleForceController.h" },
		{ "ToolTip", "Category = Marble)" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AMarbleForceController_Statics::NewProp_FireAngle = { "FireAngle", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMarbleForceController, FireAngle), METADATA_PARAMS(Z_Construct_UClass_AMarbleForceController_Statics::NewProp_FireAngle_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMarbleForceController_Statics::NewProp_FireAngle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMarbleForceController_Statics::NewProp_PowerMultiplier_MetaData[] = {
		{ "Category", "Marble" },
		{ "Comment", "//UPROPERTY(EditAnywhere, Category = Marble)\n//AMarbleSpawnController* SpawnController;\n" },
		{ "ModuleRelativePath", "Public/MarbleForceController.h" },
		{ "ToolTip", "UPROPERTY(EditAnywhere, Category = Marble)\nAMarbleSpawnController* SpawnController;" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMarbleForceController_Statics::NewProp_PowerMultiplier = { "PowerMultiplier", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMarbleForceController, PowerMultiplier), METADATA_PARAMS(Z_Construct_UClass_AMarbleForceController_Statics::NewProp_PowerMultiplier_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMarbleForceController_Statics::NewProp_PowerMultiplier_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMarbleForceController_Statics::NewProp_marble_MetaData[] = {
		{ "Category", "Marble" },
		{ "ModuleRelativePath", "Public/MarbleForceController.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMarbleForceController_Statics::NewProp_marble = { "marble", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMarbleForceController, marble), Z_Construct_UClass_AMarble_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMarbleForceController_Statics::NewProp_marble_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMarbleForceController_Statics::NewProp_marble_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMarbleForceController_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMarbleForceController_Statics::NewProp_FirePower,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMarbleForceController_Statics::NewProp_FireAngle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMarbleForceController_Statics::NewProp_PowerMultiplier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMarbleForceController_Statics::NewProp_marble,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMarbleForceController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMarbleForceController>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMarbleForceController_Statics::ClassParams = {
		&AMarbleForceController::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AMarbleForceController_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_AMarbleForceController_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_AMarbleForceController_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AMarbleForceController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMarbleForceController()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMarbleForceController_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMarbleForceController, 3426998477);
	template<> DEV_CHALLENGE_2_API UClass* StaticClass<AMarbleForceController>()
	{
		return AMarbleForceController::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMarbleForceController(Z_Construct_UClass_AMarbleForceController, &AMarbleForceController::StaticClass, TEXT("/Script/Dev_Challenge_2"), TEXT("AMarbleForceController"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMarbleForceController);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DEV_CHALLENGE_2_RoundController_generated_h
#error "RoundController.generated.h already included, missing '#pragma once' in RoundController.h"
#endif
#define DEV_CHALLENGE_2_RoundController_generated_h

#define Dev_Challenge_2_Source_Dev_Challenge_2_Public_RoundController_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execStartTimer) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->StartTimer(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetRemainingRoundTime) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetRemainingRoundTime(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execEndRound) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->EndRound(); \
		P_NATIVE_END; \
	}


#define Dev_Challenge_2_Source_Dev_Challenge_2_Public_RoundController_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execStartTimer) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->StartTimer(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetRemainingRoundTime) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetRemainingRoundTime(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execEndRound) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->EndRound(); \
		P_NATIVE_END; \
	}


#define Dev_Challenge_2_Source_Dev_Challenge_2_Public_RoundController_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesARoundController(); \
	friend struct Z_Construct_UClass_ARoundController_Statics; \
public: \
	DECLARE_CLASS(ARoundController, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Dev_Challenge_2"), NO_API) \
	DECLARE_SERIALIZER(ARoundController)


#define Dev_Challenge_2_Source_Dev_Challenge_2_Public_RoundController_h_12_INCLASS \
private: \
	static void StaticRegisterNativesARoundController(); \
	friend struct Z_Construct_UClass_ARoundController_Statics; \
public: \
	DECLARE_CLASS(ARoundController, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Dev_Challenge_2"), NO_API) \
	DECLARE_SERIALIZER(ARoundController)


#define Dev_Challenge_2_Source_Dev_Challenge_2_Public_RoundController_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ARoundController(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ARoundController) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ARoundController); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ARoundController); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ARoundController(ARoundController&&); \
	NO_API ARoundController(const ARoundController&); \
public:


#define Dev_Challenge_2_Source_Dev_Challenge_2_Public_RoundController_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ARoundController(ARoundController&&); \
	NO_API ARoundController(const ARoundController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ARoundController); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ARoundController); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ARoundController)


#define Dev_Challenge_2_Source_Dev_Challenge_2_Public_RoundController_h_12_PRIVATE_PROPERTY_OFFSET
#define Dev_Challenge_2_Source_Dev_Challenge_2_Public_RoundController_h_9_PROLOG
#define Dev_Challenge_2_Source_Dev_Challenge_2_Public_RoundController_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Dev_Challenge_2_Source_Dev_Challenge_2_Public_RoundController_h_12_PRIVATE_PROPERTY_OFFSET \
	Dev_Challenge_2_Source_Dev_Challenge_2_Public_RoundController_h_12_RPC_WRAPPERS \
	Dev_Challenge_2_Source_Dev_Challenge_2_Public_RoundController_h_12_INCLASS \
	Dev_Challenge_2_Source_Dev_Challenge_2_Public_RoundController_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Dev_Challenge_2_Source_Dev_Challenge_2_Public_RoundController_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Dev_Challenge_2_Source_Dev_Challenge_2_Public_RoundController_h_12_PRIVATE_PROPERTY_OFFSET \
	Dev_Challenge_2_Source_Dev_Challenge_2_Public_RoundController_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	Dev_Challenge_2_Source_Dev_Challenge_2_Public_RoundController_h_12_INCLASS_NO_PURE_DECLS \
	Dev_Challenge_2_Source_Dev_Challenge_2_Public_RoundController_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DEV_CHALLENGE_2_API UClass* StaticClass<class ARoundController>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Dev_Challenge_2_Source_Dev_Challenge_2_Public_RoundController_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

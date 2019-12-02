// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DEV_CHALLENGE_2_MarbleForceController_generated_h
#error "MarbleForceController.generated.h already included, missing '#pragma once' in MarbleForceController.h"
#endif
#define DEV_CHALLENGE_2_MarbleForceController_generated_h

#define Dev_Challenge_2_Source_Dev_Challenge_2_Public_MarbleForceController_h_13_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetPowerMultiplier) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetPowerMultiplier(Z_Param_value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCheckIfClickingMarble) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->CheckIfClickingMarble(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execHitBall) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->HitBall(); \
		P_NATIVE_END; \
	}


#define Dev_Challenge_2_Source_Dev_Challenge_2_Public_MarbleForceController_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetPowerMultiplier) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetPowerMultiplier(Z_Param_value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCheckIfClickingMarble) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->CheckIfClickingMarble(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execHitBall) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->HitBall(); \
		P_NATIVE_END; \
	}


#define Dev_Challenge_2_Source_Dev_Challenge_2_Public_MarbleForceController_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMarbleForceController(); \
	friend struct Z_Construct_UClass_AMarbleForceController_Statics; \
public: \
	DECLARE_CLASS(AMarbleForceController, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Dev_Challenge_2"), NO_API) \
	DECLARE_SERIALIZER(AMarbleForceController)


#define Dev_Challenge_2_Source_Dev_Challenge_2_Public_MarbleForceController_h_13_INCLASS \
private: \
	static void StaticRegisterNativesAMarbleForceController(); \
	friend struct Z_Construct_UClass_AMarbleForceController_Statics; \
public: \
	DECLARE_CLASS(AMarbleForceController, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Dev_Challenge_2"), NO_API) \
	DECLARE_SERIALIZER(AMarbleForceController)


#define Dev_Challenge_2_Source_Dev_Challenge_2_Public_MarbleForceController_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMarbleForceController(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMarbleForceController) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMarbleForceController); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMarbleForceController); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMarbleForceController(AMarbleForceController&&); \
	NO_API AMarbleForceController(const AMarbleForceController&); \
public:


#define Dev_Challenge_2_Source_Dev_Challenge_2_Public_MarbleForceController_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMarbleForceController(AMarbleForceController&&); \
	NO_API AMarbleForceController(const AMarbleForceController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMarbleForceController); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMarbleForceController); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMarbleForceController)


#define Dev_Challenge_2_Source_Dev_Challenge_2_Public_MarbleForceController_h_13_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__marble() { return STRUCT_OFFSET(AMarbleForceController, marble); } \
	FORCEINLINE static uint32 __PPO__PowerMultiplier() { return STRUCT_OFFSET(AMarbleForceController, PowerMultiplier); }


#define Dev_Challenge_2_Source_Dev_Challenge_2_Public_MarbleForceController_h_10_PROLOG
#define Dev_Challenge_2_Source_Dev_Challenge_2_Public_MarbleForceController_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Dev_Challenge_2_Source_Dev_Challenge_2_Public_MarbleForceController_h_13_PRIVATE_PROPERTY_OFFSET \
	Dev_Challenge_2_Source_Dev_Challenge_2_Public_MarbleForceController_h_13_RPC_WRAPPERS \
	Dev_Challenge_2_Source_Dev_Challenge_2_Public_MarbleForceController_h_13_INCLASS \
	Dev_Challenge_2_Source_Dev_Challenge_2_Public_MarbleForceController_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Dev_Challenge_2_Source_Dev_Challenge_2_Public_MarbleForceController_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Dev_Challenge_2_Source_Dev_Challenge_2_Public_MarbleForceController_h_13_PRIVATE_PROPERTY_OFFSET \
	Dev_Challenge_2_Source_Dev_Challenge_2_Public_MarbleForceController_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	Dev_Challenge_2_Source_Dev_Challenge_2_Public_MarbleForceController_h_13_INCLASS_NO_PURE_DECLS \
	Dev_Challenge_2_Source_Dev_Challenge_2_Public_MarbleForceController_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DEV_CHALLENGE_2_API UClass* StaticClass<class AMarbleForceController>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Dev_Challenge_2_Source_Dev_Challenge_2_Public_MarbleForceController_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

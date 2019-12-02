// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DEV_CHALLENGE_2_MarbleSpawnController_generated_h
#error "MarbleSpawnController.generated.h already included, missing '#pragma once' in MarbleSpawnController.h"
#endif
#define DEV_CHALLENGE_2_MarbleSpawnController_generated_h

#define Dev_Challenge_2_Source_Dev_Challenge_2_Public_MarbleSpawnController_h_13_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetNewMarble) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GetNewMarble(); \
		P_NATIVE_END; \
	}


#define Dev_Challenge_2_Source_Dev_Challenge_2_Public_MarbleSpawnController_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetNewMarble) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GetNewMarble(); \
		P_NATIVE_END; \
	}


#define Dev_Challenge_2_Source_Dev_Challenge_2_Public_MarbleSpawnController_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMarbleSpawnController(); \
	friend struct Z_Construct_UClass_AMarbleSpawnController_Statics; \
public: \
	DECLARE_CLASS(AMarbleSpawnController, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Dev_Challenge_2"), NO_API) \
	DECLARE_SERIALIZER(AMarbleSpawnController)


#define Dev_Challenge_2_Source_Dev_Challenge_2_Public_MarbleSpawnController_h_13_INCLASS \
private: \
	static void StaticRegisterNativesAMarbleSpawnController(); \
	friend struct Z_Construct_UClass_AMarbleSpawnController_Statics; \
public: \
	DECLARE_CLASS(AMarbleSpawnController, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Dev_Challenge_2"), NO_API) \
	DECLARE_SERIALIZER(AMarbleSpawnController)


#define Dev_Challenge_2_Source_Dev_Challenge_2_Public_MarbleSpawnController_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMarbleSpawnController(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMarbleSpawnController) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMarbleSpawnController); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMarbleSpawnController); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMarbleSpawnController(AMarbleSpawnController&&); \
	NO_API AMarbleSpawnController(const AMarbleSpawnController&); \
public:


#define Dev_Challenge_2_Source_Dev_Challenge_2_Public_MarbleSpawnController_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMarbleSpawnController(AMarbleSpawnController&&); \
	NO_API AMarbleSpawnController(const AMarbleSpawnController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMarbleSpawnController); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMarbleSpawnController); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMarbleSpawnController)


#define Dev_Challenge_2_Source_Dev_Challenge_2_Public_MarbleSpawnController_h_13_PRIVATE_PROPERTY_OFFSET
#define Dev_Challenge_2_Source_Dev_Challenge_2_Public_MarbleSpawnController_h_10_PROLOG
#define Dev_Challenge_2_Source_Dev_Challenge_2_Public_MarbleSpawnController_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Dev_Challenge_2_Source_Dev_Challenge_2_Public_MarbleSpawnController_h_13_PRIVATE_PROPERTY_OFFSET \
	Dev_Challenge_2_Source_Dev_Challenge_2_Public_MarbleSpawnController_h_13_RPC_WRAPPERS \
	Dev_Challenge_2_Source_Dev_Challenge_2_Public_MarbleSpawnController_h_13_INCLASS \
	Dev_Challenge_2_Source_Dev_Challenge_2_Public_MarbleSpawnController_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Dev_Challenge_2_Source_Dev_Challenge_2_Public_MarbleSpawnController_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Dev_Challenge_2_Source_Dev_Challenge_2_Public_MarbleSpawnController_h_13_PRIVATE_PROPERTY_OFFSET \
	Dev_Challenge_2_Source_Dev_Challenge_2_Public_MarbleSpawnController_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	Dev_Challenge_2_Source_Dev_Challenge_2_Public_MarbleSpawnController_h_13_INCLASS_NO_PURE_DECLS \
	Dev_Challenge_2_Source_Dev_Challenge_2_Public_MarbleSpawnController_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DEV_CHALLENGE_2_API UClass* StaticClass<class AMarbleSpawnController>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Dev_Challenge_2_Source_Dev_Challenge_2_Public_MarbleSpawnController_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

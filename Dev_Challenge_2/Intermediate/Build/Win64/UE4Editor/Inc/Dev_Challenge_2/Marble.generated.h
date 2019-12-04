// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
struct FVector;
struct FHitResult;
#ifdef DEV_CHALLENGE_2_Marble_generated_h
#error "Marble.generated.h already included, missing '#pragma once' in Marble.h"
#endif
#define DEV_CHALLENGE_2_Marble_generated_h

#define Dev_Challenge_2_Source_Dev_Challenge_2_Public_Marble_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnHit) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_SelfActor); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_STRUCT(FVector,Z_Param_NormalImpulse); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnHit(Z_Param_SelfActor,Z_Param_OtherActor,Z_Param_NormalImpulse,Z_Param_Out_Hit); \
		P_NATIVE_END; \
	}


#define Dev_Challenge_2_Source_Dev_Challenge_2_Public_Marble_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnHit) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_SelfActor); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_STRUCT(FVector,Z_Param_NormalImpulse); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnHit(Z_Param_SelfActor,Z_Param_OtherActor,Z_Param_NormalImpulse,Z_Param_Out_Hit); \
		P_NATIVE_END; \
	}


#define Dev_Challenge_2_Source_Dev_Challenge_2_Public_Marble_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMarble(); \
	friend struct Z_Construct_UClass_AMarble_Statics; \
public: \
	DECLARE_CLASS(AMarble, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Dev_Challenge_2"), NO_API) \
	DECLARE_SERIALIZER(AMarble)


#define Dev_Challenge_2_Source_Dev_Challenge_2_Public_Marble_h_14_INCLASS \
private: \
	static void StaticRegisterNativesAMarble(); \
	friend struct Z_Construct_UClass_AMarble_Statics; \
public: \
	DECLARE_CLASS(AMarble, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Dev_Challenge_2"), NO_API) \
	DECLARE_SERIALIZER(AMarble)


#define Dev_Challenge_2_Source_Dev_Challenge_2_Public_Marble_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMarble(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMarble) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMarble); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMarble); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMarble(AMarble&&); \
	NO_API AMarble(const AMarble&); \
public:


#define Dev_Challenge_2_Source_Dev_Challenge_2_Public_Marble_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMarble(AMarble&&); \
	NO_API AMarble(const AMarble&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMarble); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMarble); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMarble)


#define Dev_Challenge_2_Source_Dev_Challenge_2_Public_Marble_h_14_PRIVATE_PROPERTY_OFFSET
#define Dev_Challenge_2_Source_Dev_Challenge_2_Public_Marble_h_11_PROLOG
#define Dev_Challenge_2_Source_Dev_Challenge_2_Public_Marble_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Dev_Challenge_2_Source_Dev_Challenge_2_Public_Marble_h_14_PRIVATE_PROPERTY_OFFSET \
	Dev_Challenge_2_Source_Dev_Challenge_2_Public_Marble_h_14_RPC_WRAPPERS \
	Dev_Challenge_2_Source_Dev_Challenge_2_Public_Marble_h_14_INCLASS \
	Dev_Challenge_2_Source_Dev_Challenge_2_Public_Marble_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Dev_Challenge_2_Source_Dev_Challenge_2_Public_Marble_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Dev_Challenge_2_Source_Dev_Challenge_2_Public_Marble_h_14_PRIVATE_PROPERTY_OFFSET \
	Dev_Challenge_2_Source_Dev_Challenge_2_Public_Marble_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	Dev_Challenge_2_Source_Dev_Challenge_2_Public_Marble_h_14_INCLASS_NO_PURE_DECLS \
	Dev_Challenge_2_Source_Dev_Challenge_2_Public_Marble_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DEV_CHALLENGE_2_API UClass* StaticClass<class AMarble>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Dev_Challenge_2_Source_Dev_Challenge_2_Public_Marble_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

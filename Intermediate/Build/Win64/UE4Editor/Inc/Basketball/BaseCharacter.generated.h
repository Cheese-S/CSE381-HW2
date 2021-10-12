// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef BASKETBALL_BaseCharacter_generated_h
#error "BaseCharacter.generated.h already included, missing '#pragma once' in BaseCharacter.h"
#endif
#define BASKETBALL_BaseCharacter_generated_h

#define Basketball_Source_Basketball_BaseCharacter_h_14_SPARSE_DATA
#define Basketball_Source_Basketball_BaseCharacter_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execStopJump); \
	DECLARE_FUNCTION(execStartJump); \
	DECLARE_FUNCTION(execMoveRight); \
	DECLARE_FUNCTION(execMoveForward);


#define Basketball_Source_Basketball_BaseCharacter_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execStopJump); \
	DECLARE_FUNCTION(execStartJump); \
	DECLARE_FUNCTION(execMoveRight); \
	DECLARE_FUNCTION(execMoveForward);


#define Basketball_Source_Basketball_BaseCharacter_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABaseCharacter(); \
	friend struct Z_Construct_UClass_ABaseCharacter_Statics; \
public: \
	DECLARE_CLASS(ABaseCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Basketball"), NO_API) \
	DECLARE_SERIALIZER(ABaseCharacter)


#define Basketball_Source_Basketball_BaseCharacter_h_14_INCLASS \
private: \
	static void StaticRegisterNativesABaseCharacter(); \
	friend struct Z_Construct_UClass_ABaseCharacter_Statics; \
public: \
	DECLARE_CLASS(ABaseCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Basketball"), NO_API) \
	DECLARE_SERIALIZER(ABaseCharacter)


#define Basketball_Source_Basketball_BaseCharacter_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABaseCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABaseCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABaseCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABaseCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABaseCharacter(ABaseCharacter&&); \
	NO_API ABaseCharacter(const ABaseCharacter&); \
public:


#define Basketball_Source_Basketball_BaseCharacter_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABaseCharacter(ABaseCharacter&&); \
	NO_API ABaseCharacter(const ABaseCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABaseCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABaseCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABaseCharacter)


#define Basketball_Source_Basketball_BaseCharacter_h_14_PRIVATE_PROPERTY_OFFSET
#define Basketball_Source_Basketball_BaseCharacter_h_11_PROLOG
#define Basketball_Source_Basketball_BaseCharacter_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Basketball_Source_Basketball_BaseCharacter_h_14_PRIVATE_PROPERTY_OFFSET \
	Basketball_Source_Basketball_BaseCharacter_h_14_SPARSE_DATA \
	Basketball_Source_Basketball_BaseCharacter_h_14_RPC_WRAPPERS \
	Basketball_Source_Basketball_BaseCharacter_h_14_INCLASS \
	Basketball_Source_Basketball_BaseCharacter_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Basketball_Source_Basketball_BaseCharacter_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Basketball_Source_Basketball_BaseCharacter_h_14_PRIVATE_PROPERTY_OFFSET \
	Basketball_Source_Basketball_BaseCharacter_h_14_SPARSE_DATA \
	Basketball_Source_Basketball_BaseCharacter_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	Basketball_Source_Basketball_BaseCharacter_h_14_INCLASS_NO_PURE_DECLS \
	Basketball_Source_Basketball_BaseCharacter_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BASKETBALL_API UClass* StaticClass<class ABaseCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Basketball_Source_Basketball_BaseCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

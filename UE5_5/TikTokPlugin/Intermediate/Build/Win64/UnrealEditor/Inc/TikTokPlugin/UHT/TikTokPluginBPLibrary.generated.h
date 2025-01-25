// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "TikTokPluginBPLibrary.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UTikTokPluginEventHandler;
#ifdef TIKTOKPLUGIN_TikTokPluginBPLibrary_generated_h
#error "TikTokPluginBPLibrary.generated.h already included, missing '#pragma once' in TikTokPluginBPLibrary.h"
#endif
#define TIKTOKPLUGIN_TikTokPluginBPLibrary_generated_h

#define FID_Test5_5_Plugins_TikTokPlugin_Source_TikTokPlugin_Public_TikTokPluginBPLibrary_h_26_RPC_WRAPPERS \
	DECLARE_FUNCTION(execGetTikTokEventHandler); \
	DECLARE_FUNCTION(execCloseTikTokConnection); \
	DECLARE_FUNCTION(execConnectToTikTokLive);


#define FID_Test5_5_Plugins_TikTokPlugin_Source_TikTokPlugin_Public_TikTokPluginBPLibrary_h_26_INCLASS \
private: \
	static void StaticRegisterNativesUTikTokPluginBPLibrary(); \
	friend struct Z_Construct_UClass_UTikTokPluginBPLibrary_Statics; \
public: \
	DECLARE_CLASS(UTikTokPluginBPLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TikTokPlugin"), NO_API) \
	DECLARE_SERIALIZER(UTikTokPluginBPLibrary)


#define FID_Test5_5_Plugins_TikTokPlugin_Source_TikTokPlugin_Public_TikTokPluginBPLibrary_h_26_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTikTokPluginBPLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTikTokPluginBPLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTikTokPluginBPLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTikTokPluginBPLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UTikTokPluginBPLibrary(UTikTokPluginBPLibrary&&); \
	UTikTokPluginBPLibrary(const UTikTokPluginBPLibrary&); \
public: \
	NO_API virtual ~UTikTokPluginBPLibrary();


#define FID_Test5_5_Plugins_TikTokPlugin_Source_TikTokPlugin_Public_TikTokPluginBPLibrary_h_23_PROLOG
#define FID_Test5_5_Plugins_TikTokPlugin_Source_TikTokPlugin_Public_TikTokPluginBPLibrary_h_26_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Test5_5_Plugins_TikTokPlugin_Source_TikTokPlugin_Public_TikTokPluginBPLibrary_h_26_RPC_WRAPPERS \
	FID_Test5_5_Plugins_TikTokPlugin_Source_TikTokPlugin_Public_TikTokPluginBPLibrary_h_26_INCLASS \
	FID_Test5_5_Plugins_TikTokPlugin_Source_TikTokPlugin_Public_TikTokPluginBPLibrary_h_26_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TIKTOKPLUGIN_API UClass* StaticClass<class UTikTokPluginBPLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Test5_5_Plugins_TikTokPlugin_Source_TikTokPlugin_Public_TikTokPluginBPLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

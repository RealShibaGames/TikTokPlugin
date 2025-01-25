// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "TikTokPluginEventHandler.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TIKTOKPLUGIN_TikTokPluginEventHandler_generated_h
#error "TikTokPluginEventHandler.generated.h already included, missing '#pragma once' in TikTokPluginEventHandler.h"
#endif
#define TIKTOKPLUGIN_TikTokPluginEventHandler_generated_h

#define FID_JNI_TestWorld6_Plugins_TikTokPlugin_Source_TikTokPlugin_Public_TikTokPluginEventHandler_h_12_DELEGATE \
TIKTOKPLUGIN_API void FOnGiftEvent_DelegateWrapper(const FMulticastScriptDelegate& OnGiftEvent, const FString& Username, const FString& UserID, const FString& UserProfilePicURL, const FString& GiftType, int32 GiftValue);


#define FID_JNI_TestWorld6_Plugins_TikTokPlugin_Source_TikTokPlugin_Public_TikTokPluginEventHandler_h_13_DELEGATE \
TIKTOKPLUGIN_API void FOnCommentEvent_DelegateWrapper(const FMulticastScriptDelegate& OnCommentEvent, const FString& Username, const FString& UserID, const FString& UserProfilePicURL, const FString& CommentText);


#define FID_JNI_TestWorld6_Plugins_TikTokPlugin_Source_TikTokPlugin_Public_TikTokPluginEventHandler_h_14_DELEGATE \
TIKTOKPLUGIN_API void FOnLikeEvent_DelegateWrapper(const FMulticastScriptDelegate& OnLikeEvent, const FString& Username, const FString& UserID, const FString& UserProfilePicURL, int32 LikeCount);


#define FID_JNI_TestWorld6_Plugins_TikTokPlugin_Source_TikTokPlugin_Public_TikTokPluginEventHandler_h_15_DELEGATE \
TIKTOKPLUGIN_API void FOnFollowEvent_DelegateWrapper(const FMulticastScriptDelegate& OnFollowEvent, const FString& Username, const FString& UserID, const FString& UserProfilePicURL, bool AlreadyFollowed);


#define FID_JNI_TestWorld6_Plugins_TikTokPlugin_Source_TikTokPlugin_Public_TikTokPluginEventHandler_h_16_DELEGATE \
TIKTOKPLUGIN_API void FOnShareEvent_DelegateWrapper(const FMulticastScriptDelegate& OnShareEvent, const FString& Username, const FString& UserID, const FString& UserProfilePicURL, int32 Shares);


#define FID_JNI_TestWorld6_Plugins_TikTokPlugin_Source_TikTokPlugin_Public_TikTokPluginEventHandler_h_17_DELEGATE \
TIKTOKPLUGIN_API void FOnRoomInfoEvent_DelegateWrapper(const FMulticastScriptDelegate& OnRoomInfoEvent, const FString& RoomTitle, int32 ViewerCount);


#define FID_JNI_TestWorld6_Plugins_TikTokPlugin_Source_TikTokPlugin_Public_TikTokPluginEventHandler_h_22_SPARSE_DATA
#define FID_JNI_TestWorld6_Plugins_TikTokPlugin_Source_TikTokPlugin_Public_TikTokPluginEventHandler_h_22_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execTriggerRoomInfoEvent); \
	DECLARE_FUNCTION(execTriggerShareEvent); \
	DECLARE_FUNCTION(execTriggerFollowEvent); \
	DECLARE_FUNCTION(execTriggerLikeEvent); \
	DECLARE_FUNCTION(execTriggerCommentEvent); \
	DECLARE_FUNCTION(execTriggerGiftEvent);


#define FID_JNI_TestWorld6_Plugins_TikTokPlugin_Source_TikTokPlugin_Public_TikTokPluginEventHandler_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execTriggerRoomInfoEvent); \
	DECLARE_FUNCTION(execTriggerShareEvent); \
	DECLARE_FUNCTION(execTriggerFollowEvent); \
	DECLARE_FUNCTION(execTriggerLikeEvent); \
	DECLARE_FUNCTION(execTriggerCommentEvent); \
	DECLARE_FUNCTION(execTriggerGiftEvent);


#define FID_JNI_TestWorld6_Plugins_TikTokPlugin_Source_TikTokPlugin_Public_TikTokPluginEventHandler_h_22_ACCESSORS
#define FID_JNI_TestWorld6_Plugins_TikTokPlugin_Source_TikTokPlugin_Public_TikTokPluginEventHandler_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTikTokPluginEventHandler(); \
	friend struct Z_Construct_UClass_UTikTokPluginEventHandler_Statics; \
public: \
	DECLARE_CLASS(UTikTokPluginEventHandler, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TikTokPlugin"), NO_API) \
	DECLARE_SERIALIZER(UTikTokPluginEventHandler)


#define FID_JNI_TestWorld6_Plugins_TikTokPlugin_Source_TikTokPlugin_Public_TikTokPluginEventHandler_h_22_INCLASS \
private: \
	static void StaticRegisterNativesUTikTokPluginEventHandler(); \
	friend struct Z_Construct_UClass_UTikTokPluginEventHandler_Statics; \
public: \
	DECLARE_CLASS(UTikTokPluginEventHandler, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TikTokPlugin"), NO_API) \
	DECLARE_SERIALIZER(UTikTokPluginEventHandler)


#define FID_JNI_TestWorld6_Plugins_TikTokPlugin_Source_TikTokPlugin_Public_TikTokPluginEventHandler_h_22_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTikTokPluginEventHandler(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTikTokPluginEventHandler) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTikTokPluginEventHandler); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTikTokPluginEventHandler); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTikTokPluginEventHandler(UTikTokPluginEventHandler&&); \
	NO_API UTikTokPluginEventHandler(const UTikTokPluginEventHandler&); \
public: \
	NO_API virtual ~UTikTokPluginEventHandler();


#define FID_JNI_TestWorld6_Plugins_TikTokPlugin_Source_TikTokPlugin_Public_TikTokPluginEventHandler_h_22_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTikTokPluginEventHandler(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTikTokPluginEventHandler(UTikTokPluginEventHandler&&); \
	NO_API UTikTokPluginEventHandler(const UTikTokPluginEventHandler&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTikTokPluginEventHandler); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTikTokPluginEventHandler); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTikTokPluginEventHandler) \
	NO_API virtual ~UTikTokPluginEventHandler();


#define FID_JNI_TestWorld6_Plugins_TikTokPlugin_Source_TikTokPlugin_Public_TikTokPluginEventHandler_h_19_PROLOG
#define FID_JNI_TestWorld6_Plugins_TikTokPlugin_Source_TikTokPlugin_Public_TikTokPluginEventHandler_h_22_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_JNI_TestWorld6_Plugins_TikTokPlugin_Source_TikTokPlugin_Public_TikTokPluginEventHandler_h_22_SPARSE_DATA \
	FID_JNI_TestWorld6_Plugins_TikTokPlugin_Source_TikTokPlugin_Public_TikTokPluginEventHandler_h_22_RPC_WRAPPERS \
	FID_JNI_TestWorld6_Plugins_TikTokPlugin_Source_TikTokPlugin_Public_TikTokPluginEventHandler_h_22_ACCESSORS \
	FID_JNI_TestWorld6_Plugins_TikTokPlugin_Source_TikTokPlugin_Public_TikTokPluginEventHandler_h_22_INCLASS \
	FID_JNI_TestWorld6_Plugins_TikTokPlugin_Source_TikTokPlugin_Public_TikTokPluginEventHandler_h_22_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_JNI_TestWorld6_Plugins_TikTokPlugin_Source_TikTokPlugin_Public_TikTokPluginEventHandler_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_JNI_TestWorld6_Plugins_TikTokPlugin_Source_TikTokPlugin_Public_TikTokPluginEventHandler_h_22_SPARSE_DATA \
	FID_JNI_TestWorld6_Plugins_TikTokPlugin_Source_TikTokPlugin_Public_TikTokPluginEventHandler_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_JNI_TestWorld6_Plugins_TikTokPlugin_Source_TikTokPlugin_Public_TikTokPluginEventHandler_h_22_ACCESSORS \
	FID_JNI_TestWorld6_Plugins_TikTokPlugin_Source_TikTokPlugin_Public_TikTokPluginEventHandler_h_22_INCLASS_NO_PURE_DECLS \
	FID_JNI_TestWorld6_Plugins_TikTokPlugin_Source_TikTokPlugin_Public_TikTokPluginEventHandler_h_22_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TIKTOKPLUGIN_API UClass* StaticClass<class UTikTokPluginEventHandler>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_JNI_TestWorld6_Plugins_TikTokPlugin_Source_TikTokPlugin_Public_TikTokPluginEventHandler_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

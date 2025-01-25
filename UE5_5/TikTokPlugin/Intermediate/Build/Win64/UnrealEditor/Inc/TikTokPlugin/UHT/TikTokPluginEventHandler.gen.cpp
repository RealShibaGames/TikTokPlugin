// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TikTokPlugin/Public/TikTokPluginEventHandler.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTikTokPluginEventHandler() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
TIKTOKPLUGIN_API UClass* Z_Construct_UClass_UTikTokPluginEventHandler();
TIKTOKPLUGIN_API UClass* Z_Construct_UClass_UTikTokPluginEventHandler_NoRegister();
TIKTOKPLUGIN_API UFunction* Z_Construct_UDelegateFunction_TikTokPlugin_OnCommentEvent__DelegateSignature();
TIKTOKPLUGIN_API UFunction* Z_Construct_UDelegateFunction_TikTokPlugin_OnFollowEvent__DelegateSignature();
TIKTOKPLUGIN_API UFunction* Z_Construct_UDelegateFunction_TikTokPlugin_OnGiftEvent__DelegateSignature();
TIKTOKPLUGIN_API UFunction* Z_Construct_UDelegateFunction_TikTokPlugin_OnLikeEvent__DelegateSignature();
TIKTOKPLUGIN_API UFunction* Z_Construct_UDelegateFunction_TikTokPlugin_OnRoomInfoEvent__DelegateSignature();
TIKTOKPLUGIN_API UFunction* Z_Construct_UDelegateFunction_TikTokPlugin_OnShareEvent__DelegateSignature();
UPackage* Z_Construct_UPackage__Script_TikTokPlugin();
// End Cross Module References

// Begin Delegate FOnGiftEvent
struct Z_Construct_UDelegateFunction_TikTokPlugin_OnGiftEvent__DelegateSignature_Statics
{
	struct _Script_TikTokPlugin_eventOnGiftEvent_Parms
	{
		FString Username;
		FString UserID;
		FString UserProfilePicURL;
		FString GiftType;
		int32 GiftValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Event handler for TikTok Plugin events.\n */// Declare dynamic multicast delegates for each event, with expanded parameters to include all data members\n" },
#endif
		{ "ModuleRelativePath", "Public/TikTokPluginEventHandler.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Event handler for TikTok Plugin events.\n // Declare dynamic multicast delegates for each event, with expanded parameters to include all data members" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Username_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UserID_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UserProfilePicURL_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GiftType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Username;
	static const UECodeGen_Private::FStrPropertyParams NewProp_UserID;
	static const UECodeGen_Private::FStrPropertyParams NewProp_UserProfilePicURL;
	static const UECodeGen_Private::FStrPropertyParams NewProp_GiftType;
	static const UECodeGen_Private::FIntPropertyParams NewProp_GiftValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_TikTokPlugin_OnGiftEvent__DelegateSignature_Statics::NewProp_Username = { "Username", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_TikTokPlugin_eventOnGiftEvent_Parms, Username), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Username_MetaData), NewProp_Username_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_TikTokPlugin_OnGiftEvent__DelegateSignature_Statics::NewProp_UserID = { "UserID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_TikTokPlugin_eventOnGiftEvent_Parms, UserID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UserID_MetaData), NewProp_UserID_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_TikTokPlugin_OnGiftEvent__DelegateSignature_Statics::NewProp_UserProfilePicURL = { "UserProfilePicURL", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_TikTokPlugin_eventOnGiftEvent_Parms, UserProfilePicURL), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UserProfilePicURL_MetaData), NewProp_UserProfilePicURL_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_TikTokPlugin_OnGiftEvent__DelegateSignature_Statics::NewProp_GiftType = { "GiftType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_TikTokPlugin_eventOnGiftEvent_Parms, GiftType), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GiftType_MetaData), NewProp_GiftType_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_TikTokPlugin_OnGiftEvent__DelegateSignature_Statics::NewProp_GiftValue = { "GiftValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_TikTokPlugin_eventOnGiftEvent_Parms, GiftValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_TikTokPlugin_OnGiftEvent__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_TikTokPlugin_OnGiftEvent__DelegateSignature_Statics::NewProp_Username,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_TikTokPlugin_OnGiftEvent__DelegateSignature_Statics::NewProp_UserID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_TikTokPlugin_OnGiftEvent__DelegateSignature_Statics::NewProp_UserProfilePicURL,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_TikTokPlugin_OnGiftEvent__DelegateSignature_Statics::NewProp_GiftType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_TikTokPlugin_OnGiftEvent__DelegateSignature_Statics::NewProp_GiftValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_TikTokPlugin_OnGiftEvent__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_TikTokPlugin_OnGiftEvent__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_TikTokPlugin, nullptr, "OnGiftEvent__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_TikTokPlugin_OnGiftEvent__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_TikTokPlugin_OnGiftEvent__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_TikTokPlugin_OnGiftEvent__DelegateSignature_Statics::_Script_TikTokPlugin_eventOnGiftEvent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_TikTokPlugin_OnGiftEvent__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_TikTokPlugin_OnGiftEvent__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_TikTokPlugin_OnGiftEvent__DelegateSignature_Statics::_Script_TikTokPlugin_eventOnGiftEvent_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_TikTokPlugin_OnGiftEvent__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_TikTokPlugin_OnGiftEvent__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnGiftEvent_DelegateWrapper(const FMulticastScriptDelegate& OnGiftEvent, const FString& Username, const FString& UserID, const FString& UserProfilePicURL, const FString& GiftType, int32 GiftValue)
{
	struct _Script_TikTokPlugin_eventOnGiftEvent_Parms
	{
		FString Username;
		FString UserID;
		FString UserProfilePicURL;
		FString GiftType;
		int32 GiftValue;
	};
	_Script_TikTokPlugin_eventOnGiftEvent_Parms Parms;
	Parms.Username=Username;
	Parms.UserID=UserID;
	Parms.UserProfilePicURL=UserProfilePicURL;
	Parms.GiftType=GiftType;
	Parms.GiftValue=GiftValue;
	OnGiftEvent.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnGiftEvent

// Begin Delegate FOnCommentEvent
struct Z_Construct_UDelegateFunction_TikTokPlugin_OnCommentEvent__DelegateSignature_Statics
{
	struct _Script_TikTokPlugin_eventOnCommentEvent_Parms
	{
		FString Username;
		FString UserID;
		FString UserProfilePicURL;
		FString CommentText;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TikTokPluginEventHandler.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Username_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UserID_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UserProfilePicURL_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CommentText_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Username;
	static const UECodeGen_Private::FStrPropertyParams NewProp_UserID;
	static const UECodeGen_Private::FStrPropertyParams NewProp_UserProfilePicURL;
	static const UECodeGen_Private::FStrPropertyParams NewProp_CommentText;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_TikTokPlugin_OnCommentEvent__DelegateSignature_Statics::NewProp_Username = { "Username", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_TikTokPlugin_eventOnCommentEvent_Parms, Username), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Username_MetaData), NewProp_Username_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_TikTokPlugin_OnCommentEvent__DelegateSignature_Statics::NewProp_UserID = { "UserID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_TikTokPlugin_eventOnCommentEvent_Parms, UserID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UserID_MetaData), NewProp_UserID_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_TikTokPlugin_OnCommentEvent__DelegateSignature_Statics::NewProp_UserProfilePicURL = { "UserProfilePicURL", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_TikTokPlugin_eventOnCommentEvent_Parms, UserProfilePicURL), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UserProfilePicURL_MetaData), NewProp_UserProfilePicURL_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_TikTokPlugin_OnCommentEvent__DelegateSignature_Statics::NewProp_CommentText = { "CommentText", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_TikTokPlugin_eventOnCommentEvent_Parms, CommentText), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CommentText_MetaData), NewProp_CommentText_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_TikTokPlugin_OnCommentEvent__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_TikTokPlugin_OnCommentEvent__DelegateSignature_Statics::NewProp_Username,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_TikTokPlugin_OnCommentEvent__DelegateSignature_Statics::NewProp_UserID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_TikTokPlugin_OnCommentEvent__DelegateSignature_Statics::NewProp_UserProfilePicURL,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_TikTokPlugin_OnCommentEvent__DelegateSignature_Statics::NewProp_CommentText,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_TikTokPlugin_OnCommentEvent__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_TikTokPlugin_OnCommentEvent__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_TikTokPlugin, nullptr, "OnCommentEvent__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_TikTokPlugin_OnCommentEvent__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_TikTokPlugin_OnCommentEvent__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_TikTokPlugin_OnCommentEvent__DelegateSignature_Statics::_Script_TikTokPlugin_eventOnCommentEvent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_TikTokPlugin_OnCommentEvent__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_TikTokPlugin_OnCommentEvent__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_TikTokPlugin_OnCommentEvent__DelegateSignature_Statics::_Script_TikTokPlugin_eventOnCommentEvent_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_TikTokPlugin_OnCommentEvent__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_TikTokPlugin_OnCommentEvent__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnCommentEvent_DelegateWrapper(const FMulticastScriptDelegate& OnCommentEvent, const FString& Username, const FString& UserID, const FString& UserProfilePicURL, const FString& CommentText)
{
	struct _Script_TikTokPlugin_eventOnCommentEvent_Parms
	{
		FString Username;
		FString UserID;
		FString UserProfilePicURL;
		FString CommentText;
	};
	_Script_TikTokPlugin_eventOnCommentEvent_Parms Parms;
	Parms.Username=Username;
	Parms.UserID=UserID;
	Parms.UserProfilePicURL=UserProfilePicURL;
	Parms.CommentText=CommentText;
	OnCommentEvent.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnCommentEvent

// Begin Delegate FOnLikeEvent
struct Z_Construct_UDelegateFunction_TikTokPlugin_OnLikeEvent__DelegateSignature_Statics
{
	struct _Script_TikTokPlugin_eventOnLikeEvent_Parms
	{
		FString Username;
		FString UserID;
		FString UserProfilePicURL;
		int32 LikeCount;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TikTokPluginEventHandler.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Username_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UserID_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UserProfilePicURL_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Username;
	static const UECodeGen_Private::FStrPropertyParams NewProp_UserID;
	static const UECodeGen_Private::FStrPropertyParams NewProp_UserProfilePicURL;
	static const UECodeGen_Private::FIntPropertyParams NewProp_LikeCount;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_TikTokPlugin_OnLikeEvent__DelegateSignature_Statics::NewProp_Username = { "Username", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_TikTokPlugin_eventOnLikeEvent_Parms, Username), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Username_MetaData), NewProp_Username_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_TikTokPlugin_OnLikeEvent__DelegateSignature_Statics::NewProp_UserID = { "UserID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_TikTokPlugin_eventOnLikeEvent_Parms, UserID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UserID_MetaData), NewProp_UserID_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_TikTokPlugin_OnLikeEvent__DelegateSignature_Statics::NewProp_UserProfilePicURL = { "UserProfilePicURL", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_TikTokPlugin_eventOnLikeEvent_Parms, UserProfilePicURL), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UserProfilePicURL_MetaData), NewProp_UserProfilePicURL_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_TikTokPlugin_OnLikeEvent__DelegateSignature_Statics::NewProp_LikeCount = { "LikeCount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_TikTokPlugin_eventOnLikeEvent_Parms, LikeCount), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_TikTokPlugin_OnLikeEvent__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_TikTokPlugin_OnLikeEvent__DelegateSignature_Statics::NewProp_Username,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_TikTokPlugin_OnLikeEvent__DelegateSignature_Statics::NewProp_UserID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_TikTokPlugin_OnLikeEvent__DelegateSignature_Statics::NewProp_UserProfilePicURL,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_TikTokPlugin_OnLikeEvent__DelegateSignature_Statics::NewProp_LikeCount,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_TikTokPlugin_OnLikeEvent__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_TikTokPlugin_OnLikeEvent__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_TikTokPlugin, nullptr, "OnLikeEvent__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_TikTokPlugin_OnLikeEvent__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_TikTokPlugin_OnLikeEvent__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_TikTokPlugin_OnLikeEvent__DelegateSignature_Statics::_Script_TikTokPlugin_eventOnLikeEvent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_TikTokPlugin_OnLikeEvent__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_TikTokPlugin_OnLikeEvent__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_TikTokPlugin_OnLikeEvent__DelegateSignature_Statics::_Script_TikTokPlugin_eventOnLikeEvent_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_TikTokPlugin_OnLikeEvent__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_TikTokPlugin_OnLikeEvent__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnLikeEvent_DelegateWrapper(const FMulticastScriptDelegate& OnLikeEvent, const FString& Username, const FString& UserID, const FString& UserProfilePicURL, int32 LikeCount)
{
	struct _Script_TikTokPlugin_eventOnLikeEvent_Parms
	{
		FString Username;
		FString UserID;
		FString UserProfilePicURL;
		int32 LikeCount;
	};
	_Script_TikTokPlugin_eventOnLikeEvent_Parms Parms;
	Parms.Username=Username;
	Parms.UserID=UserID;
	Parms.UserProfilePicURL=UserProfilePicURL;
	Parms.LikeCount=LikeCount;
	OnLikeEvent.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnLikeEvent

// Begin Delegate FOnFollowEvent
struct Z_Construct_UDelegateFunction_TikTokPlugin_OnFollowEvent__DelegateSignature_Statics
{
	struct _Script_TikTokPlugin_eventOnFollowEvent_Parms
	{
		FString Username;
		FString UserID;
		FString UserProfilePicURL;
		bool AlreadyFollowed;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TikTokPluginEventHandler.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Username_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UserID_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UserProfilePicURL_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Username;
	static const UECodeGen_Private::FStrPropertyParams NewProp_UserID;
	static const UECodeGen_Private::FStrPropertyParams NewProp_UserProfilePicURL;
	static void NewProp_AlreadyFollowed_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_AlreadyFollowed;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_TikTokPlugin_OnFollowEvent__DelegateSignature_Statics::NewProp_Username = { "Username", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_TikTokPlugin_eventOnFollowEvent_Parms, Username), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Username_MetaData), NewProp_Username_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_TikTokPlugin_OnFollowEvent__DelegateSignature_Statics::NewProp_UserID = { "UserID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_TikTokPlugin_eventOnFollowEvent_Parms, UserID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UserID_MetaData), NewProp_UserID_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_TikTokPlugin_OnFollowEvent__DelegateSignature_Statics::NewProp_UserProfilePicURL = { "UserProfilePicURL", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_TikTokPlugin_eventOnFollowEvent_Parms, UserProfilePicURL), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UserProfilePicURL_MetaData), NewProp_UserProfilePicURL_MetaData) };
void Z_Construct_UDelegateFunction_TikTokPlugin_OnFollowEvent__DelegateSignature_Statics::NewProp_AlreadyFollowed_SetBit(void* Obj)
{
	((_Script_TikTokPlugin_eventOnFollowEvent_Parms*)Obj)->AlreadyFollowed = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_TikTokPlugin_OnFollowEvent__DelegateSignature_Statics::NewProp_AlreadyFollowed = { "AlreadyFollowed", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_TikTokPlugin_eventOnFollowEvent_Parms), &Z_Construct_UDelegateFunction_TikTokPlugin_OnFollowEvent__DelegateSignature_Statics::NewProp_AlreadyFollowed_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_TikTokPlugin_OnFollowEvent__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_TikTokPlugin_OnFollowEvent__DelegateSignature_Statics::NewProp_Username,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_TikTokPlugin_OnFollowEvent__DelegateSignature_Statics::NewProp_UserID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_TikTokPlugin_OnFollowEvent__DelegateSignature_Statics::NewProp_UserProfilePicURL,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_TikTokPlugin_OnFollowEvent__DelegateSignature_Statics::NewProp_AlreadyFollowed,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_TikTokPlugin_OnFollowEvent__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_TikTokPlugin_OnFollowEvent__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_TikTokPlugin, nullptr, "OnFollowEvent__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_TikTokPlugin_OnFollowEvent__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_TikTokPlugin_OnFollowEvent__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_TikTokPlugin_OnFollowEvent__DelegateSignature_Statics::_Script_TikTokPlugin_eventOnFollowEvent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_TikTokPlugin_OnFollowEvent__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_TikTokPlugin_OnFollowEvent__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_TikTokPlugin_OnFollowEvent__DelegateSignature_Statics::_Script_TikTokPlugin_eventOnFollowEvent_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_TikTokPlugin_OnFollowEvent__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_TikTokPlugin_OnFollowEvent__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnFollowEvent_DelegateWrapper(const FMulticastScriptDelegate& OnFollowEvent, const FString& Username, const FString& UserID, const FString& UserProfilePicURL, bool AlreadyFollowed)
{
	struct _Script_TikTokPlugin_eventOnFollowEvent_Parms
	{
		FString Username;
		FString UserID;
		FString UserProfilePicURL;
		bool AlreadyFollowed;
	};
	_Script_TikTokPlugin_eventOnFollowEvent_Parms Parms;
	Parms.Username=Username;
	Parms.UserID=UserID;
	Parms.UserProfilePicURL=UserProfilePicURL;
	Parms.AlreadyFollowed=AlreadyFollowed ? true : false;
	OnFollowEvent.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnFollowEvent

// Begin Delegate FOnShareEvent
struct Z_Construct_UDelegateFunction_TikTokPlugin_OnShareEvent__DelegateSignature_Statics
{
	struct _Script_TikTokPlugin_eventOnShareEvent_Parms
	{
		FString Username;
		FString UserID;
		FString UserProfilePicURL;
		int32 Shares;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TikTokPluginEventHandler.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Username_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UserID_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UserProfilePicURL_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Username;
	static const UECodeGen_Private::FStrPropertyParams NewProp_UserID;
	static const UECodeGen_Private::FStrPropertyParams NewProp_UserProfilePicURL;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Shares;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_TikTokPlugin_OnShareEvent__DelegateSignature_Statics::NewProp_Username = { "Username", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_TikTokPlugin_eventOnShareEvent_Parms, Username), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Username_MetaData), NewProp_Username_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_TikTokPlugin_OnShareEvent__DelegateSignature_Statics::NewProp_UserID = { "UserID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_TikTokPlugin_eventOnShareEvent_Parms, UserID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UserID_MetaData), NewProp_UserID_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_TikTokPlugin_OnShareEvent__DelegateSignature_Statics::NewProp_UserProfilePicURL = { "UserProfilePicURL", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_TikTokPlugin_eventOnShareEvent_Parms, UserProfilePicURL), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UserProfilePicURL_MetaData), NewProp_UserProfilePicURL_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_TikTokPlugin_OnShareEvent__DelegateSignature_Statics::NewProp_Shares = { "Shares", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_TikTokPlugin_eventOnShareEvent_Parms, Shares), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_TikTokPlugin_OnShareEvent__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_TikTokPlugin_OnShareEvent__DelegateSignature_Statics::NewProp_Username,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_TikTokPlugin_OnShareEvent__DelegateSignature_Statics::NewProp_UserID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_TikTokPlugin_OnShareEvent__DelegateSignature_Statics::NewProp_UserProfilePicURL,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_TikTokPlugin_OnShareEvent__DelegateSignature_Statics::NewProp_Shares,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_TikTokPlugin_OnShareEvent__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_TikTokPlugin_OnShareEvent__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_TikTokPlugin, nullptr, "OnShareEvent__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_TikTokPlugin_OnShareEvent__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_TikTokPlugin_OnShareEvent__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_TikTokPlugin_OnShareEvent__DelegateSignature_Statics::_Script_TikTokPlugin_eventOnShareEvent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_TikTokPlugin_OnShareEvent__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_TikTokPlugin_OnShareEvent__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_TikTokPlugin_OnShareEvent__DelegateSignature_Statics::_Script_TikTokPlugin_eventOnShareEvent_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_TikTokPlugin_OnShareEvent__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_TikTokPlugin_OnShareEvent__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnShareEvent_DelegateWrapper(const FMulticastScriptDelegate& OnShareEvent, const FString& Username, const FString& UserID, const FString& UserProfilePicURL, int32 Shares)
{
	struct _Script_TikTokPlugin_eventOnShareEvent_Parms
	{
		FString Username;
		FString UserID;
		FString UserProfilePicURL;
		int32 Shares;
	};
	_Script_TikTokPlugin_eventOnShareEvent_Parms Parms;
	Parms.Username=Username;
	Parms.UserID=UserID;
	Parms.UserProfilePicURL=UserProfilePicURL;
	Parms.Shares=Shares;
	OnShareEvent.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnShareEvent

// Begin Delegate FOnRoomInfoEvent
struct Z_Construct_UDelegateFunction_TikTokPlugin_OnRoomInfoEvent__DelegateSignature_Statics
{
	struct _Script_TikTokPlugin_eventOnRoomInfoEvent_Parms
	{
		FString RoomTitle;
		int32 ViewerCount;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TikTokPluginEventHandler.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RoomTitle_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_RoomTitle;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ViewerCount;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_TikTokPlugin_OnRoomInfoEvent__DelegateSignature_Statics::NewProp_RoomTitle = { "RoomTitle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_TikTokPlugin_eventOnRoomInfoEvent_Parms, RoomTitle), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RoomTitle_MetaData), NewProp_RoomTitle_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_TikTokPlugin_OnRoomInfoEvent__DelegateSignature_Statics::NewProp_ViewerCount = { "ViewerCount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_TikTokPlugin_eventOnRoomInfoEvent_Parms, ViewerCount), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_TikTokPlugin_OnRoomInfoEvent__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_TikTokPlugin_OnRoomInfoEvent__DelegateSignature_Statics::NewProp_RoomTitle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_TikTokPlugin_OnRoomInfoEvent__DelegateSignature_Statics::NewProp_ViewerCount,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_TikTokPlugin_OnRoomInfoEvent__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_TikTokPlugin_OnRoomInfoEvent__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_TikTokPlugin, nullptr, "OnRoomInfoEvent__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_TikTokPlugin_OnRoomInfoEvent__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_TikTokPlugin_OnRoomInfoEvent__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_TikTokPlugin_OnRoomInfoEvent__DelegateSignature_Statics::_Script_TikTokPlugin_eventOnRoomInfoEvent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_TikTokPlugin_OnRoomInfoEvent__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_TikTokPlugin_OnRoomInfoEvent__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_TikTokPlugin_OnRoomInfoEvent__DelegateSignature_Statics::_Script_TikTokPlugin_eventOnRoomInfoEvent_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_TikTokPlugin_OnRoomInfoEvent__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_TikTokPlugin_OnRoomInfoEvent__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnRoomInfoEvent_DelegateWrapper(const FMulticastScriptDelegate& OnRoomInfoEvent, const FString& RoomTitle, int32 ViewerCount)
{
	struct _Script_TikTokPlugin_eventOnRoomInfoEvent_Parms
	{
		FString RoomTitle;
		int32 ViewerCount;
	};
	_Script_TikTokPlugin_eventOnRoomInfoEvent_Parms Parms;
	Parms.RoomTitle=RoomTitle;
	Parms.ViewerCount=ViewerCount;
	OnRoomInfoEvent.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnRoomInfoEvent

// Begin Class UTikTokPluginEventHandler Function TriggerCommentEvent
struct Z_Construct_UFunction_UTikTokPluginEventHandler_TriggerCommentEvent_Statics
{
	struct TikTokPluginEventHandler_eventTriggerCommentEvent_Parms
	{
		FString Username;
		FString UserID;
		FString UserProfilePicURL;
		FString CommentText;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "TikTokPlugin|Events" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * Trigger the OnCommentEvent.\n     * @param Username The username of the sender.\n     * @param UserID The unique ID of the sender.\n     * @param UserProfilePicURL The profile picture URL of the sender.\n     * @param CommentText The content of the comment.\n     */" },
#endif
		{ "ModuleRelativePath", "Public/TikTokPluginEventHandler.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Trigger the OnCommentEvent.\n@param Username The username of the sender.\n@param UserID The unique ID of the sender.\n@param UserProfilePicURL The profile picture URL of the sender.\n@param CommentText The content of the comment." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Username_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UserID_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UserProfilePicURL_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CommentText_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Username;
	static const UECodeGen_Private::FStrPropertyParams NewProp_UserID;
	static const UECodeGen_Private::FStrPropertyParams NewProp_UserProfilePicURL;
	static const UECodeGen_Private::FStrPropertyParams NewProp_CommentText;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UTikTokPluginEventHandler_TriggerCommentEvent_Statics::NewProp_Username = { "Username", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TikTokPluginEventHandler_eventTriggerCommentEvent_Parms, Username), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Username_MetaData), NewProp_Username_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UTikTokPluginEventHandler_TriggerCommentEvent_Statics::NewProp_UserID = { "UserID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TikTokPluginEventHandler_eventTriggerCommentEvent_Parms, UserID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UserID_MetaData), NewProp_UserID_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UTikTokPluginEventHandler_TriggerCommentEvent_Statics::NewProp_UserProfilePicURL = { "UserProfilePicURL", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TikTokPluginEventHandler_eventTriggerCommentEvent_Parms, UserProfilePicURL), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UserProfilePicURL_MetaData), NewProp_UserProfilePicURL_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UTikTokPluginEventHandler_TriggerCommentEvent_Statics::NewProp_CommentText = { "CommentText", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TikTokPluginEventHandler_eventTriggerCommentEvent_Parms, CommentText), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CommentText_MetaData), NewProp_CommentText_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTikTokPluginEventHandler_TriggerCommentEvent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTikTokPluginEventHandler_TriggerCommentEvent_Statics::NewProp_Username,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTikTokPluginEventHandler_TriggerCommentEvent_Statics::NewProp_UserID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTikTokPluginEventHandler_TriggerCommentEvent_Statics::NewProp_UserProfilePicURL,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTikTokPluginEventHandler_TriggerCommentEvent_Statics::NewProp_CommentText,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTikTokPluginEventHandler_TriggerCommentEvent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTikTokPluginEventHandler_TriggerCommentEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTikTokPluginEventHandler, nullptr, "TriggerCommentEvent", nullptr, nullptr, Z_Construct_UFunction_UTikTokPluginEventHandler_TriggerCommentEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTikTokPluginEventHandler_TriggerCommentEvent_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTikTokPluginEventHandler_TriggerCommentEvent_Statics::TikTokPluginEventHandler_eventTriggerCommentEvent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTikTokPluginEventHandler_TriggerCommentEvent_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTikTokPluginEventHandler_TriggerCommentEvent_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UTikTokPluginEventHandler_TriggerCommentEvent_Statics::TikTokPluginEventHandler_eventTriggerCommentEvent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTikTokPluginEventHandler_TriggerCommentEvent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTikTokPluginEventHandler_TriggerCommentEvent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTikTokPluginEventHandler::execTriggerCommentEvent)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Username);
	P_GET_PROPERTY(FStrProperty,Z_Param_UserID);
	P_GET_PROPERTY(FStrProperty,Z_Param_UserProfilePicURL);
	P_GET_PROPERTY(FStrProperty,Z_Param_CommentText);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->TriggerCommentEvent(Z_Param_Username,Z_Param_UserID,Z_Param_UserProfilePicURL,Z_Param_CommentText);
	P_NATIVE_END;
}
// End Class UTikTokPluginEventHandler Function TriggerCommentEvent

// Begin Class UTikTokPluginEventHandler Function TriggerFollowEvent
struct Z_Construct_UFunction_UTikTokPluginEventHandler_TriggerFollowEvent_Statics
{
	struct TikTokPluginEventHandler_eventTriggerFollowEvent_Parms
	{
		FString Username;
		FString UserID;
		FString UserProfilePicURL;
		bool AlreadyFollowed;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "TikTokPlugin|Events" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * Trigger the OnFollowEvent.\n     * @param Username The username of the follower.\n     * @param UserID The unique ID of the follower.\n     * @param UserProfilePicURL The profile picture URL of the follower.\n     * @param AlreadyFollowed Whether the user was already following.\n     */" },
#endif
		{ "ModuleRelativePath", "Public/TikTokPluginEventHandler.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Trigger the OnFollowEvent.\n@param Username The username of the follower.\n@param UserID The unique ID of the follower.\n@param UserProfilePicURL The profile picture URL of the follower.\n@param AlreadyFollowed Whether the user was already following." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Username_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UserID_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UserProfilePicURL_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Username;
	static const UECodeGen_Private::FStrPropertyParams NewProp_UserID;
	static const UECodeGen_Private::FStrPropertyParams NewProp_UserProfilePicURL;
	static void NewProp_AlreadyFollowed_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_AlreadyFollowed;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UTikTokPluginEventHandler_TriggerFollowEvent_Statics::NewProp_Username = { "Username", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TikTokPluginEventHandler_eventTriggerFollowEvent_Parms, Username), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Username_MetaData), NewProp_Username_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UTikTokPluginEventHandler_TriggerFollowEvent_Statics::NewProp_UserID = { "UserID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TikTokPluginEventHandler_eventTriggerFollowEvent_Parms, UserID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UserID_MetaData), NewProp_UserID_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UTikTokPluginEventHandler_TriggerFollowEvent_Statics::NewProp_UserProfilePicURL = { "UserProfilePicURL", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TikTokPluginEventHandler_eventTriggerFollowEvent_Parms, UserProfilePicURL), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UserProfilePicURL_MetaData), NewProp_UserProfilePicURL_MetaData) };
void Z_Construct_UFunction_UTikTokPluginEventHandler_TriggerFollowEvent_Statics::NewProp_AlreadyFollowed_SetBit(void* Obj)
{
	((TikTokPluginEventHandler_eventTriggerFollowEvent_Parms*)Obj)->AlreadyFollowed = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTikTokPluginEventHandler_TriggerFollowEvent_Statics::NewProp_AlreadyFollowed = { "AlreadyFollowed", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(TikTokPluginEventHandler_eventTriggerFollowEvent_Parms), &Z_Construct_UFunction_UTikTokPluginEventHandler_TriggerFollowEvent_Statics::NewProp_AlreadyFollowed_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTikTokPluginEventHandler_TriggerFollowEvent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTikTokPluginEventHandler_TriggerFollowEvent_Statics::NewProp_Username,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTikTokPluginEventHandler_TriggerFollowEvent_Statics::NewProp_UserID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTikTokPluginEventHandler_TriggerFollowEvent_Statics::NewProp_UserProfilePicURL,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTikTokPluginEventHandler_TriggerFollowEvent_Statics::NewProp_AlreadyFollowed,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTikTokPluginEventHandler_TriggerFollowEvent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTikTokPluginEventHandler_TriggerFollowEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTikTokPluginEventHandler, nullptr, "TriggerFollowEvent", nullptr, nullptr, Z_Construct_UFunction_UTikTokPluginEventHandler_TriggerFollowEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTikTokPluginEventHandler_TriggerFollowEvent_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTikTokPluginEventHandler_TriggerFollowEvent_Statics::TikTokPluginEventHandler_eventTriggerFollowEvent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTikTokPluginEventHandler_TriggerFollowEvent_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTikTokPluginEventHandler_TriggerFollowEvent_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UTikTokPluginEventHandler_TriggerFollowEvent_Statics::TikTokPluginEventHandler_eventTriggerFollowEvent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTikTokPluginEventHandler_TriggerFollowEvent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTikTokPluginEventHandler_TriggerFollowEvent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTikTokPluginEventHandler::execTriggerFollowEvent)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Username);
	P_GET_PROPERTY(FStrProperty,Z_Param_UserID);
	P_GET_PROPERTY(FStrProperty,Z_Param_UserProfilePicURL);
	P_GET_UBOOL(Z_Param_AlreadyFollowed);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->TriggerFollowEvent(Z_Param_Username,Z_Param_UserID,Z_Param_UserProfilePicURL,Z_Param_AlreadyFollowed);
	P_NATIVE_END;
}
// End Class UTikTokPluginEventHandler Function TriggerFollowEvent

// Begin Class UTikTokPluginEventHandler Function TriggerGiftEvent
struct Z_Construct_UFunction_UTikTokPluginEventHandler_TriggerGiftEvent_Statics
{
	struct TikTokPluginEventHandler_eventTriggerGiftEvent_Parms
	{
		FString Username;
		FString UserID;
		FString UserProfilePicURL;
		FString GiftType;
		int32 GiftValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "TikTokPlugin|Events" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * Trigger the OnGiftEvent.\n     * @param Username The username of the sender.\n     * @param UserID The unique ID of the sender.\n     * @param UserProfilePicURL The profile picture URL of the sender.\n     * @param GiftType The type of gift sent.\n     * @param GiftValue The value of the gift.\n     */" },
#endif
		{ "ModuleRelativePath", "Public/TikTokPluginEventHandler.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Trigger the OnGiftEvent.\n@param Username The username of the sender.\n@param UserID The unique ID of the sender.\n@param UserProfilePicURL The profile picture URL of the sender.\n@param GiftType The type of gift sent.\n@param GiftValue The value of the gift." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Username_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UserID_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UserProfilePicURL_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GiftType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Username;
	static const UECodeGen_Private::FStrPropertyParams NewProp_UserID;
	static const UECodeGen_Private::FStrPropertyParams NewProp_UserProfilePicURL;
	static const UECodeGen_Private::FStrPropertyParams NewProp_GiftType;
	static const UECodeGen_Private::FIntPropertyParams NewProp_GiftValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UTikTokPluginEventHandler_TriggerGiftEvent_Statics::NewProp_Username = { "Username", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TikTokPluginEventHandler_eventTriggerGiftEvent_Parms, Username), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Username_MetaData), NewProp_Username_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UTikTokPluginEventHandler_TriggerGiftEvent_Statics::NewProp_UserID = { "UserID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TikTokPluginEventHandler_eventTriggerGiftEvent_Parms, UserID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UserID_MetaData), NewProp_UserID_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UTikTokPluginEventHandler_TriggerGiftEvent_Statics::NewProp_UserProfilePicURL = { "UserProfilePicURL", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TikTokPluginEventHandler_eventTriggerGiftEvent_Parms, UserProfilePicURL), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UserProfilePicURL_MetaData), NewProp_UserProfilePicURL_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UTikTokPluginEventHandler_TriggerGiftEvent_Statics::NewProp_GiftType = { "GiftType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TikTokPluginEventHandler_eventTriggerGiftEvent_Parms, GiftType), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GiftType_MetaData), NewProp_GiftType_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UTikTokPluginEventHandler_TriggerGiftEvent_Statics::NewProp_GiftValue = { "GiftValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TikTokPluginEventHandler_eventTriggerGiftEvent_Parms, GiftValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTikTokPluginEventHandler_TriggerGiftEvent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTikTokPluginEventHandler_TriggerGiftEvent_Statics::NewProp_Username,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTikTokPluginEventHandler_TriggerGiftEvent_Statics::NewProp_UserID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTikTokPluginEventHandler_TriggerGiftEvent_Statics::NewProp_UserProfilePicURL,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTikTokPluginEventHandler_TriggerGiftEvent_Statics::NewProp_GiftType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTikTokPluginEventHandler_TriggerGiftEvent_Statics::NewProp_GiftValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTikTokPluginEventHandler_TriggerGiftEvent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTikTokPluginEventHandler_TriggerGiftEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTikTokPluginEventHandler, nullptr, "TriggerGiftEvent", nullptr, nullptr, Z_Construct_UFunction_UTikTokPluginEventHandler_TriggerGiftEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTikTokPluginEventHandler_TriggerGiftEvent_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTikTokPluginEventHandler_TriggerGiftEvent_Statics::TikTokPluginEventHandler_eventTriggerGiftEvent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTikTokPluginEventHandler_TriggerGiftEvent_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTikTokPluginEventHandler_TriggerGiftEvent_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UTikTokPluginEventHandler_TriggerGiftEvent_Statics::TikTokPluginEventHandler_eventTriggerGiftEvent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTikTokPluginEventHandler_TriggerGiftEvent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTikTokPluginEventHandler_TriggerGiftEvent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTikTokPluginEventHandler::execTriggerGiftEvent)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Username);
	P_GET_PROPERTY(FStrProperty,Z_Param_UserID);
	P_GET_PROPERTY(FStrProperty,Z_Param_UserProfilePicURL);
	P_GET_PROPERTY(FStrProperty,Z_Param_GiftType);
	P_GET_PROPERTY(FIntProperty,Z_Param_GiftValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->TriggerGiftEvent(Z_Param_Username,Z_Param_UserID,Z_Param_UserProfilePicURL,Z_Param_GiftType,Z_Param_GiftValue);
	P_NATIVE_END;
}
// End Class UTikTokPluginEventHandler Function TriggerGiftEvent

// Begin Class UTikTokPluginEventHandler Function TriggerLikeEvent
struct Z_Construct_UFunction_UTikTokPluginEventHandler_TriggerLikeEvent_Statics
{
	struct TikTokPluginEventHandler_eventTriggerLikeEvent_Parms
	{
		FString Username;
		FString UserID;
		FString UserProfilePicURL;
		int32 LikeCount;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "TikTokPlugin|Events" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * Trigger the OnLikeEvent.\n     * @param Username The username of the liker.\n     * @param UserID The unique ID of the liker.\n     * @param UserProfilePicURL The profile picture URL of the liker.\n     * @param LikeCount The number of likes sent.\n     */" },
#endif
		{ "ModuleRelativePath", "Public/TikTokPluginEventHandler.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Trigger the OnLikeEvent.\n@param Username The username of the liker.\n@param UserID The unique ID of the liker.\n@param UserProfilePicURL The profile picture URL of the liker.\n@param LikeCount The number of likes sent." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Username_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UserID_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UserProfilePicURL_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Username;
	static const UECodeGen_Private::FStrPropertyParams NewProp_UserID;
	static const UECodeGen_Private::FStrPropertyParams NewProp_UserProfilePicURL;
	static const UECodeGen_Private::FIntPropertyParams NewProp_LikeCount;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UTikTokPluginEventHandler_TriggerLikeEvent_Statics::NewProp_Username = { "Username", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TikTokPluginEventHandler_eventTriggerLikeEvent_Parms, Username), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Username_MetaData), NewProp_Username_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UTikTokPluginEventHandler_TriggerLikeEvent_Statics::NewProp_UserID = { "UserID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TikTokPluginEventHandler_eventTriggerLikeEvent_Parms, UserID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UserID_MetaData), NewProp_UserID_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UTikTokPluginEventHandler_TriggerLikeEvent_Statics::NewProp_UserProfilePicURL = { "UserProfilePicURL", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TikTokPluginEventHandler_eventTriggerLikeEvent_Parms, UserProfilePicURL), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UserProfilePicURL_MetaData), NewProp_UserProfilePicURL_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UTikTokPluginEventHandler_TriggerLikeEvent_Statics::NewProp_LikeCount = { "LikeCount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TikTokPluginEventHandler_eventTriggerLikeEvent_Parms, LikeCount), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTikTokPluginEventHandler_TriggerLikeEvent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTikTokPluginEventHandler_TriggerLikeEvent_Statics::NewProp_Username,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTikTokPluginEventHandler_TriggerLikeEvent_Statics::NewProp_UserID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTikTokPluginEventHandler_TriggerLikeEvent_Statics::NewProp_UserProfilePicURL,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTikTokPluginEventHandler_TriggerLikeEvent_Statics::NewProp_LikeCount,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTikTokPluginEventHandler_TriggerLikeEvent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTikTokPluginEventHandler_TriggerLikeEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTikTokPluginEventHandler, nullptr, "TriggerLikeEvent", nullptr, nullptr, Z_Construct_UFunction_UTikTokPluginEventHandler_TriggerLikeEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTikTokPluginEventHandler_TriggerLikeEvent_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTikTokPluginEventHandler_TriggerLikeEvent_Statics::TikTokPluginEventHandler_eventTriggerLikeEvent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTikTokPluginEventHandler_TriggerLikeEvent_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTikTokPluginEventHandler_TriggerLikeEvent_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UTikTokPluginEventHandler_TriggerLikeEvent_Statics::TikTokPluginEventHandler_eventTriggerLikeEvent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTikTokPluginEventHandler_TriggerLikeEvent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTikTokPluginEventHandler_TriggerLikeEvent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTikTokPluginEventHandler::execTriggerLikeEvent)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Username);
	P_GET_PROPERTY(FStrProperty,Z_Param_UserID);
	P_GET_PROPERTY(FStrProperty,Z_Param_UserProfilePicURL);
	P_GET_PROPERTY(FIntProperty,Z_Param_LikeCount);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->TriggerLikeEvent(Z_Param_Username,Z_Param_UserID,Z_Param_UserProfilePicURL,Z_Param_LikeCount);
	P_NATIVE_END;
}
// End Class UTikTokPluginEventHandler Function TriggerLikeEvent

// Begin Class UTikTokPluginEventHandler Function TriggerRoomInfoEvent
struct Z_Construct_UFunction_UTikTokPluginEventHandler_TriggerRoomInfoEvent_Statics
{
	struct TikTokPluginEventHandler_eventTriggerRoomInfoEvent_Parms
	{
		FString RoomTitle;
		int32 ViewerCount;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "TikTokPlugin|Events" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * Trigger the OnRoomInfoEvent.\n     * @param RoomTitle The title of the room.\n     * @param ViewerCount The current viewer count.\n     */" },
#endif
		{ "ModuleRelativePath", "Public/TikTokPluginEventHandler.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Trigger the OnRoomInfoEvent.\n@param RoomTitle The title of the room.\n@param ViewerCount The current viewer count." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RoomTitle_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_RoomTitle;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ViewerCount;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UTikTokPluginEventHandler_TriggerRoomInfoEvent_Statics::NewProp_RoomTitle = { "RoomTitle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TikTokPluginEventHandler_eventTriggerRoomInfoEvent_Parms, RoomTitle), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RoomTitle_MetaData), NewProp_RoomTitle_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UTikTokPluginEventHandler_TriggerRoomInfoEvent_Statics::NewProp_ViewerCount = { "ViewerCount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TikTokPluginEventHandler_eventTriggerRoomInfoEvent_Parms, ViewerCount), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTikTokPluginEventHandler_TriggerRoomInfoEvent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTikTokPluginEventHandler_TriggerRoomInfoEvent_Statics::NewProp_RoomTitle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTikTokPluginEventHandler_TriggerRoomInfoEvent_Statics::NewProp_ViewerCount,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTikTokPluginEventHandler_TriggerRoomInfoEvent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTikTokPluginEventHandler_TriggerRoomInfoEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTikTokPluginEventHandler, nullptr, "TriggerRoomInfoEvent", nullptr, nullptr, Z_Construct_UFunction_UTikTokPluginEventHandler_TriggerRoomInfoEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTikTokPluginEventHandler_TriggerRoomInfoEvent_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTikTokPluginEventHandler_TriggerRoomInfoEvent_Statics::TikTokPluginEventHandler_eventTriggerRoomInfoEvent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTikTokPluginEventHandler_TriggerRoomInfoEvent_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTikTokPluginEventHandler_TriggerRoomInfoEvent_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UTikTokPluginEventHandler_TriggerRoomInfoEvent_Statics::TikTokPluginEventHandler_eventTriggerRoomInfoEvent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTikTokPluginEventHandler_TriggerRoomInfoEvent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTikTokPluginEventHandler_TriggerRoomInfoEvent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTikTokPluginEventHandler::execTriggerRoomInfoEvent)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_RoomTitle);
	P_GET_PROPERTY(FIntProperty,Z_Param_ViewerCount);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->TriggerRoomInfoEvent(Z_Param_RoomTitle,Z_Param_ViewerCount);
	P_NATIVE_END;
}
// End Class UTikTokPluginEventHandler Function TriggerRoomInfoEvent

// Begin Class UTikTokPluginEventHandler Function TriggerShareEvent
struct Z_Construct_UFunction_UTikTokPluginEventHandler_TriggerShareEvent_Statics
{
	struct TikTokPluginEventHandler_eventTriggerShareEvent_Parms
	{
		FString Username;
		FString UserID;
		FString UserProfilePicURL;
		int32 Shares;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "TikTokPlugin|Events" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * Trigger the OnShareEvent.\n     * @param Username The username of the sharer.\n     * @param UserID The unique ID of the sharer.\n     * @param UserProfilePicURL The profile picture URL of the sharer.\n     * @param Shares The total number of shares.\n     */" },
#endif
		{ "ModuleRelativePath", "Public/TikTokPluginEventHandler.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Trigger the OnShareEvent.\n@param Username The username of the sharer.\n@param UserID The unique ID of the sharer.\n@param UserProfilePicURL The profile picture URL of the sharer.\n@param Shares The total number of shares." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Username_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UserID_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UserProfilePicURL_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Username;
	static const UECodeGen_Private::FStrPropertyParams NewProp_UserID;
	static const UECodeGen_Private::FStrPropertyParams NewProp_UserProfilePicURL;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Shares;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UTikTokPluginEventHandler_TriggerShareEvent_Statics::NewProp_Username = { "Username", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TikTokPluginEventHandler_eventTriggerShareEvent_Parms, Username), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Username_MetaData), NewProp_Username_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UTikTokPluginEventHandler_TriggerShareEvent_Statics::NewProp_UserID = { "UserID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TikTokPluginEventHandler_eventTriggerShareEvent_Parms, UserID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UserID_MetaData), NewProp_UserID_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UTikTokPluginEventHandler_TriggerShareEvent_Statics::NewProp_UserProfilePicURL = { "UserProfilePicURL", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TikTokPluginEventHandler_eventTriggerShareEvent_Parms, UserProfilePicURL), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UserProfilePicURL_MetaData), NewProp_UserProfilePicURL_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UTikTokPluginEventHandler_TriggerShareEvent_Statics::NewProp_Shares = { "Shares", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TikTokPluginEventHandler_eventTriggerShareEvent_Parms, Shares), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTikTokPluginEventHandler_TriggerShareEvent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTikTokPluginEventHandler_TriggerShareEvent_Statics::NewProp_Username,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTikTokPluginEventHandler_TriggerShareEvent_Statics::NewProp_UserID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTikTokPluginEventHandler_TriggerShareEvent_Statics::NewProp_UserProfilePicURL,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTikTokPluginEventHandler_TriggerShareEvent_Statics::NewProp_Shares,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTikTokPluginEventHandler_TriggerShareEvent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTikTokPluginEventHandler_TriggerShareEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTikTokPluginEventHandler, nullptr, "TriggerShareEvent", nullptr, nullptr, Z_Construct_UFunction_UTikTokPluginEventHandler_TriggerShareEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTikTokPluginEventHandler_TriggerShareEvent_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTikTokPluginEventHandler_TriggerShareEvent_Statics::TikTokPluginEventHandler_eventTriggerShareEvent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTikTokPluginEventHandler_TriggerShareEvent_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTikTokPluginEventHandler_TriggerShareEvent_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UTikTokPluginEventHandler_TriggerShareEvent_Statics::TikTokPluginEventHandler_eventTriggerShareEvent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTikTokPluginEventHandler_TriggerShareEvent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTikTokPluginEventHandler_TriggerShareEvent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTikTokPluginEventHandler::execTriggerShareEvent)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Username);
	P_GET_PROPERTY(FStrProperty,Z_Param_UserID);
	P_GET_PROPERTY(FStrProperty,Z_Param_UserProfilePicURL);
	P_GET_PROPERTY(FIntProperty,Z_Param_Shares);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->TriggerShareEvent(Z_Param_Username,Z_Param_UserID,Z_Param_UserProfilePicURL,Z_Param_Shares);
	P_NATIVE_END;
}
// End Class UTikTokPluginEventHandler Function TriggerShareEvent

// Begin Class UTikTokPluginEventHandler
void UTikTokPluginEventHandler::StaticRegisterNativesUTikTokPluginEventHandler()
{
	UClass* Class = UTikTokPluginEventHandler::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "TriggerCommentEvent", &UTikTokPluginEventHandler::execTriggerCommentEvent },
		{ "TriggerFollowEvent", &UTikTokPluginEventHandler::execTriggerFollowEvent },
		{ "TriggerGiftEvent", &UTikTokPluginEventHandler::execTriggerGiftEvent },
		{ "TriggerLikeEvent", &UTikTokPluginEventHandler::execTriggerLikeEvent },
		{ "TriggerRoomInfoEvent", &UTikTokPluginEventHandler::execTriggerRoomInfoEvent },
		{ "TriggerShareEvent", &UTikTokPluginEventHandler::execTriggerShareEvent },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTikTokPluginEventHandler);
UClass* Z_Construct_UClass_UTikTokPluginEventHandler_NoRegister()
{
	return UTikTokPluginEventHandler::StaticClass();
}
struct Z_Construct_UClass_UTikTokPluginEventHandler_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "TikTokPluginEventHandler.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/TikTokPluginEventHandler.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnGiftEvent_MetaData[] = {
		{ "Category", "TikTokPlugin|Events" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Event for when a \"Gift\" is received\n" },
#endif
		{ "ModuleRelativePath", "Public/TikTokPluginEventHandler.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Event for when a \"Gift\" is received" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnCommentEvent_MetaData[] = {
		{ "Category", "TikTokPlugin|Events" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Event for when a \"Comment\" is received\n" },
#endif
		{ "ModuleRelativePath", "Public/TikTokPluginEventHandler.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Event for when a \"Comment\" is received" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnLikeEvent_MetaData[] = {
		{ "Category", "TikTokPlugin|Events" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Event for when a \"Like\" is received\n" },
#endif
		{ "ModuleRelativePath", "Public/TikTokPluginEventHandler.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Event for when a \"Like\" is received" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnFollowEvent_MetaData[] = {
		{ "Category", "TikTokPlugin|Events" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Event for when a \"Follow\" is received\n" },
#endif
		{ "ModuleRelativePath", "Public/TikTokPluginEventHandler.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Event for when a \"Follow\" is received" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnShareEvent_MetaData[] = {
		{ "Category", "TikTokPlugin|Events" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Event for when a \"Share\" is received\n" },
#endif
		{ "ModuleRelativePath", "Public/TikTokPluginEventHandler.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Event for when a \"Share\" is received" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnRoomInfoEvent_MetaData[] = {
		{ "Category", "TikTokPlugin|Events" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Event for when \"Room Info\" is updated\n" },
#endif
		{ "ModuleRelativePath", "Public/TikTokPluginEventHandler.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Event for when \"Room Info\" is updated" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnGiftEvent;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnCommentEvent;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnLikeEvent;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnFollowEvent;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnShareEvent;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnRoomInfoEvent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UTikTokPluginEventHandler_TriggerCommentEvent, "TriggerCommentEvent" }, // 3474625423
		{ &Z_Construct_UFunction_UTikTokPluginEventHandler_TriggerFollowEvent, "TriggerFollowEvent" }, // 2625428995
		{ &Z_Construct_UFunction_UTikTokPluginEventHandler_TriggerGiftEvent, "TriggerGiftEvent" }, // 2642880466
		{ &Z_Construct_UFunction_UTikTokPluginEventHandler_TriggerLikeEvent, "TriggerLikeEvent" }, // 412721410
		{ &Z_Construct_UFunction_UTikTokPluginEventHandler_TriggerRoomInfoEvent, "TriggerRoomInfoEvent" }, // 2709492904
		{ &Z_Construct_UFunction_UTikTokPluginEventHandler_TriggerShareEvent, "TriggerShareEvent" }, // 3870862779
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTikTokPluginEventHandler>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UTikTokPluginEventHandler_Statics::NewProp_OnGiftEvent = { "OnGiftEvent", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTikTokPluginEventHandler, OnGiftEvent), Z_Construct_UDelegateFunction_TikTokPlugin_OnGiftEvent__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnGiftEvent_MetaData), NewProp_OnGiftEvent_MetaData) }; // 2286479424
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UTikTokPluginEventHandler_Statics::NewProp_OnCommentEvent = { "OnCommentEvent", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTikTokPluginEventHandler, OnCommentEvent), Z_Construct_UDelegateFunction_TikTokPlugin_OnCommentEvent__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnCommentEvent_MetaData), NewProp_OnCommentEvent_MetaData) }; // 2456540676
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UTikTokPluginEventHandler_Statics::NewProp_OnLikeEvent = { "OnLikeEvent", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTikTokPluginEventHandler, OnLikeEvent), Z_Construct_UDelegateFunction_TikTokPlugin_OnLikeEvent__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnLikeEvent_MetaData), NewProp_OnLikeEvent_MetaData) }; // 3491586837
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UTikTokPluginEventHandler_Statics::NewProp_OnFollowEvent = { "OnFollowEvent", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTikTokPluginEventHandler, OnFollowEvent), Z_Construct_UDelegateFunction_TikTokPlugin_OnFollowEvent__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnFollowEvent_MetaData), NewProp_OnFollowEvent_MetaData) }; // 587001246
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UTikTokPluginEventHandler_Statics::NewProp_OnShareEvent = { "OnShareEvent", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTikTokPluginEventHandler, OnShareEvent), Z_Construct_UDelegateFunction_TikTokPlugin_OnShareEvent__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnShareEvent_MetaData), NewProp_OnShareEvent_MetaData) }; // 4286603750
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UTikTokPluginEventHandler_Statics::NewProp_OnRoomInfoEvent = { "OnRoomInfoEvent", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTikTokPluginEventHandler, OnRoomInfoEvent), Z_Construct_UDelegateFunction_TikTokPlugin_OnRoomInfoEvent__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnRoomInfoEvent_MetaData), NewProp_OnRoomInfoEvent_MetaData) }; // 138519396
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTikTokPluginEventHandler_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTikTokPluginEventHandler_Statics::NewProp_OnGiftEvent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTikTokPluginEventHandler_Statics::NewProp_OnCommentEvent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTikTokPluginEventHandler_Statics::NewProp_OnLikeEvent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTikTokPluginEventHandler_Statics::NewProp_OnFollowEvent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTikTokPluginEventHandler_Statics::NewProp_OnShareEvent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTikTokPluginEventHandler_Statics::NewProp_OnRoomInfoEvent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTikTokPluginEventHandler_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UTikTokPluginEventHandler_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_TikTokPlugin,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTikTokPluginEventHandler_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UTikTokPluginEventHandler_Statics::ClassParams = {
	&UTikTokPluginEventHandler::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UTikTokPluginEventHandler_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UTikTokPluginEventHandler_Statics::PropPointers),
	0,
	0x008000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTikTokPluginEventHandler_Statics::Class_MetaDataParams), Z_Construct_UClass_UTikTokPluginEventHandler_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UTikTokPluginEventHandler()
{
	if (!Z_Registration_Info_UClass_UTikTokPluginEventHandler.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTikTokPluginEventHandler.OuterSingleton, Z_Construct_UClass_UTikTokPluginEventHandler_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UTikTokPluginEventHandler.OuterSingleton;
}
template<> TIKTOKPLUGIN_API UClass* StaticClass<UTikTokPluginEventHandler>()
{
	return UTikTokPluginEventHandler::StaticClass();
}
UTikTokPluginEventHandler::UTikTokPluginEventHandler(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UTikTokPluginEventHandler);
UTikTokPluginEventHandler::~UTikTokPluginEventHandler() {}
// End Class UTikTokPluginEventHandler

// Begin Registration
struct Z_CompiledInDeferFile_FID_Test5_5_Plugins_TikTokPlugin_Source_TikTokPlugin_Public_TikTokPluginEventHandler_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UTikTokPluginEventHandler, UTikTokPluginEventHandler::StaticClass, TEXT("UTikTokPluginEventHandler"), &Z_Registration_Info_UClass_UTikTokPluginEventHandler, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTikTokPluginEventHandler), 2686453467U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Test5_5_Plugins_TikTokPlugin_Source_TikTokPlugin_Public_TikTokPluginEventHandler_h_1526085189(TEXT("/Script/TikTokPlugin"),
	Z_CompiledInDeferFile_FID_Test5_5_Plugins_TikTokPlugin_Source_TikTokPlugin_Public_TikTokPluginEventHandler_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Test5_5_Plugins_TikTokPlugin_Source_TikTokPlugin_Public_TikTokPluginEventHandler_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

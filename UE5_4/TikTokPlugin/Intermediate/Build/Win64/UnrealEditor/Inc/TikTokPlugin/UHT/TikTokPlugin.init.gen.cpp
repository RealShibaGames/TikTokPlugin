// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTikTokPlugin_init() {}
	TIKTOKPLUGIN_API UFunction* Z_Construct_UDelegateFunction_TikTokPlugin_OnCommentEvent__DelegateSignature();
	TIKTOKPLUGIN_API UFunction* Z_Construct_UDelegateFunction_TikTokPlugin_OnFollowEvent__DelegateSignature();
	TIKTOKPLUGIN_API UFunction* Z_Construct_UDelegateFunction_TikTokPlugin_OnGiftEvent__DelegateSignature();
	TIKTOKPLUGIN_API UFunction* Z_Construct_UDelegateFunction_TikTokPlugin_OnLikeEvent__DelegateSignature();
	TIKTOKPLUGIN_API UFunction* Z_Construct_UDelegateFunction_TikTokPlugin_OnRoomInfoEvent__DelegateSignature();
	TIKTOKPLUGIN_API UFunction* Z_Construct_UDelegateFunction_TikTokPlugin_OnShareEvent__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_TikTokPlugin;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_TikTokPlugin()
	{
		if (!Z_Registration_Info_UPackage__Script_TikTokPlugin.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_TikTokPlugin_OnCommentEvent__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_TikTokPlugin_OnFollowEvent__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_TikTokPlugin_OnGiftEvent__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_TikTokPlugin_OnLikeEvent__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_TikTokPlugin_OnRoomInfoEvent__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_TikTokPlugin_OnShareEvent__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/TikTokPlugin",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0xCA499059,
				0x35841D5F,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_TikTokPlugin.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_TikTokPlugin.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_TikTokPlugin(Z_Construct_UPackage__Script_TikTokPlugin, TEXT("/Script/TikTokPlugin"), Z_Registration_Info_UPackage__Script_TikTokPlugin, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xCA499059, 0x35841D5F));
PRAGMA_ENABLE_DEPRECATION_WARNINGS

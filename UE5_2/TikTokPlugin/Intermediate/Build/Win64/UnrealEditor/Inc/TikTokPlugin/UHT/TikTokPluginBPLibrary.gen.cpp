// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TikTokPlugin/Public/TikTokPluginBPLibrary.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTikTokPluginBPLibrary() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	TIKTOKPLUGIN_API UClass* Z_Construct_UClass_UTikTokPluginBPLibrary();
	TIKTOKPLUGIN_API UClass* Z_Construct_UClass_UTikTokPluginBPLibrary_NoRegister();
	TIKTOKPLUGIN_API UClass* Z_Construct_UClass_UTikTokPluginEventHandler_NoRegister();
	UPackage* Z_Construct_UPackage__Script_TikTokPlugin();
// End Cross Module References
	DEFINE_FUNCTION(UTikTokPluginBPLibrary::execGetTikTokEventHandler)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UTikTokPluginEventHandler**)Z_Param__Result=UTikTokPluginBPLibrary::GetTikTokEventHandler();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTikTokPluginBPLibrary::execCloseTikTokConnection)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UTikTokPluginBPLibrary::CloseTikTokConnection();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTikTokPluginBPLibrary::execConnectToTikTokLive)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_TikTokHandle);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UTikTokPluginBPLibrary::ConnectToTikTokLive(Z_Param_TikTokHandle);
		P_NATIVE_END;
	}
	void UTikTokPluginBPLibrary::StaticRegisterNativesUTikTokPluginBPLibrary()
	{
		UClass* Class = UTikTokPluginBPLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CloseTikTokConnection", &UTikTokPluginBPLibrary::execCloseTikTokConnection },
			{ "ConnectToTikTokLive", &UTikTokPluginBPLibrary::execConnectToTikTokLive },
			{ "GetTikTokEventHandler", &UTikTokPluginBPLibrary::execGetTikTokEventHandler },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UTikTokPluginBPLibrary_CloseTikTokConnection_Statics
	{
		struct TikTokPluginBPLibrary_eventCloseTikTokConnection_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UTikTokPluginBPLibrary_CloseTikTokConnection_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((TikTokPluginBPLibrary_eventCloseTikTokConnection_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTikTokPluginBPLibrary_CloseTikTokConnection_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(TikTokPluginBPLibrary_eventCloseTikTokConnection_Parms), &Z_Construct_UFunction_UTikTokPluginBPLibrary_CloseTikTokConnection_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTikTokPluginBPLibrary_CloseTikTokConnection_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTikTokPluginBPLibrary_CloseTikTokConnection_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTikTokPluginBPLibrary_CloseTikTokConnection_Statics::Function_MetaDataParams[] = {
		{ "Category", "TikTokPlugin" },
		{ "Comment", "/**\n    * Close the TikTok connection and terminate the Java process.\n    * @return - True if the process was terminated successfully, otherwise false.\n    */" },
		{ "DisplayName", "Close TikTok Connection" },
		{ "Keywords", "TikTokPlugin disconnect livestream" },
		{ "ModuleRelativePath", "Public/TikTokPluginBPLibrary.h" },
		{ "ToolTip", "Close the TikTok connection and terminate the Java process.\n@return - True if the process was terminated successfully, otherwise false." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTikTokPluginBPLibrary_CloseTikTokConnection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTikTokPluginBPLibrary, nullptr, "CloseTikTokConnection", nullptr, nullptr, sizeof(Z_Construct_UFunction_UTikTokPluginBPLibrary_CloseTikTokConnection_Statics::TikTokPluginBPLibrary_eventCloseTikTokConnection_Parms), Z_Construct_UFunction_UTikTokPluginBPLibrary_CloseTikTokConnection_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTikTokPluginBPLibrary_CloseTikTokConnection_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTikTokPluginBPLibrary_CloseTikTokConnection_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTikTokPluginBPLibrary_CloseTikTokConnection_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTikTokPluginBPLibrary_CloseTikTokConnection()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTikTokPluginBPLibrary_CloseTikTokConnection_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTikTokPluginBPLibrary_ConnectToTikTokLive_Statics
	{
		struct TikTokPluginBPLibrary_eventConnectToTikTokLive_Parms
		{
			FString TikTokHandle;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TikTokHandle_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_TikTokHandle;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTikTokPluginBPLibrary_ConnectToTikTokLive_Statics::NewProp_TikTokHandle_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UTikTokPluginBPLibrary_ConnectToTikTokLive_Statics::NewProp_TikTokHandle = { "TikTokHandle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TikTokPluginBPLibrary_eventConnectToTikTokLive_Parms, TikTokHandle), METADATA_PARAMS(Z_Construct_UFunction_UTikTokPluginBPLibrary_ConnectToTikTokLive_Statics::NewProp_TikTokHandle_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTikTokPluginBPLibrary_ConnectToTikTokLive_Statics::NewProp_TikTokHandle_MetaData)) };
	void Z_Construct_UFunction_UTikTokPluginBPLibrary_ConnectToTikTokLive_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((TikTokPluginBPLibrary_eventConnectToTikTokLive_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTikTokPluginBPLibrary_ConnectToTikTokLive_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(TikTokPluginBPLibrary_eventConnectToTikTokLive_Parms), &Z_Construct_UFunction_UTikTokPluginBPLibrary_ConnectToTikTokLive_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTikTokPluginBPLibrary_ConnectToTikTokLive_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTikTokPluginBPLibrary_ConnectToTikTokLive_Statics::NewProp_TikTokHandle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTikTokPluginBPLibrary_ConnectToTikTokLive_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTikTokPluginBPLibrary_ConnectToTikTokLive_Statics::Function_MetaDataParams[] = {
		{ "Category", "TikTokPlugin" },
		{ "Comment", "/**\n    * Connect to a TikTok livestream using the provided TikTok handle.\n    * Launches the Java application with the TikTok handle as an argument.\n    * @param TikTokHandle - The TikTok username/handle to connect to.\n    * @return - True if the connection process was initiated successfully, otherwise false.\n    */" },
		{ "DisplayName", "Connect to TikTok Live" },
		{ "Keywords", "TikTokPlugin connect livestream" },
		{ "ModuleRelativePath", "Public/TikTokPluginBPLibrary.h" },
		{ "ToolTip", "Connect to a TikTok livestream using the provided TikTok handle.\nLaunches the Java application with the TikTok handle as an argument.\n@param TikTokHandle - The TikTok username/handle to connect to.\n@return - True if the connection process was initiated successfully, otherwise false." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTikTokPluginBPLibrary_ConnectToTikTokLive_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTikTokPluginBPLibrary, nullptr, "ConnectToTikTokLive", nullptr, nullptr, sizeof(Z_Construct_UFunction_UTikTokPluginBPLibrary_ConnectToTikTokLive_Statics::TikTokPluginBPLibrary_eventConnectToTikTokLive_Parms), Z_Construct_UFunction_UTikTokPluginBPLibrary_ConnectToTikTokLive_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTikTokPluginBPLibrary_ConnectToTikTokLive_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTikTokPluginBPLibrary_ConnectToTikTokLive_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTikTokPluginBPLibrary_ConnectToTikTokLive_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTikTokPluginBPLibrary_ConnectToTikTokLive()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTikTokPluginBPLibrary_ConnectToTikTokLive_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTikTokPluginBPLibrary_GetTikTokEventHandler_Statics
	{
		struct TikTokPluginBPLibrary_eventGetTikTokEventHandler_Parms
		{
			UTikTokPluginEventHandler* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTikTokPluginBPLibrary_GetTikTokEventHandler_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TikTokPluginBPLibrary_eventGetTikTokEventHandler_Parms, ReturnValue), Z_Construct_UClass_UTikTokPluginEventHandler_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTikTokPluginBPLibrary_GetTikTokEventHandler_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTikTokPluginBPLibrary_GetTikTokEventHandler_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTikTokPluginBPLibrary_GetTikTokEventHandler_Statics::Function_MetaDataParams[] = {
		{ "Category", "TikTokPlugin|Events" },
		{ "Comment", "/**\n    * Get the TikTok Event Handler instance.\n    * @return The TikTok event handler object.\n    */" },
		{ "DisplayName", "Get TikTok Event Handler" },
		{ "Keywords", "TikTokPlugin event handler" },
		{ "ModuleRelativePath", "Public/TikTokPluginBPLibrary.h" },
		{ "ToolTip", "Get the TikTok Event Handler instance.\n@return The TikTok event handler object." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTikTokPluginBPLibrary_GetTikTokEventHandler_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTikTokPluginBPLibrary, nullptr, "GetTikTokEventHandler", nullptr, nullptr, sizeof(Z_Construct_UFunction_UTikTokPluginBPLibrary_GetTikTokEventHandler_Statics::TikTokPluginBPLibrary_eventGetTikTokEventHandler_Parms), Z_Construct_UFunction_UTikTokPluginBPLibrary_GetTikTokEventHandler_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTikTokPluginBPLibrary_GetTikTokEventHandler_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTikTokPluginBPLibrary_GetTikTokEventHandler_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTikTokPluginBPLibrary_GetTikTokEventHandler_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTikTokPluginBPLibrary_GetTikTokEventHandler()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTikTokPluginBPLibrary_GetTikTokEventHandler_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTikTokPluginBPLibrary);
	UClass* Z_Construct_UClass_UTikTokPluginBPLibrary_NoRegister()
	{
		return UTikTokPluginBPLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UTikTokPluginBPLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTikTokPluginBPLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_TikTokPlugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UTikTokPluginBPLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UTikTokPluginBPLibrary_CloseTikTokConnection, "CloseTikTokConnection" }, // 415047932
		{ &Z_Construct_UFunction_UTikTokPluginBPLibrary_ConnectToTikTokLive, "ConnectToTikTokLive" }, // 1572019931
		{ &Z_Construct_UFunction_UTikTokPluginBPLibrary_GetTikTokEventHandler, "GetTikTokEventHandler" }, // 2032380250
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTikTokPluginBPLibrary_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/*\n*\x09""Function library class.\n*\x09""Each function in it is expected to be static and represents blueprint node that can be called in any blueprint.\n*\n*\x09When declaring function you can define metadata for the node. Key function specifiers will be BlueprintPure and BlueprintCallable.\n*\x09""BlueprintPure - means the function does not affect the owning object in any way and thus creates a node without Exec pins.\n*\x09""BlueprintCallable - makes a function which can be executed in Blueprints - Thus it has Exec pins.\n*\x09""DisplayName - full name of the node, shown when you mouse over the node and in the blueprint drop down menu.\n*\x09\x09\x09\x09Its lets you name the node using characters not allowed in C++ function names.\n*\x09""CompactNodeTitle - the word(s) that appear on the node.\n*\x09Keywords -\x09the list of keywords that helps you to find node when you search for it using Blueprint drop-down menu.\n*\x09\x09\x09\x09Good example is \"Print String\" node which you can find also by using keyword \"log\".\n*\x09""Category -\x09the category your node will be under in the Blueprint drop-down menu.\n*/" },
		{ "IncludePath", "TikTokPluginBPLibrary.h" },
		{ "ModuleRelativePath", "Public/TikTokPluginBPLibrary.h" },
		{ "ToolTip", "*      Function library class.\n*      Each function in it is expected to be static and represents blueprint node that can be called in any blueprint.\n*\n*      When declaring function you can define metadata for the node. Key function specifiers will be BlueprintPure and BlueprintCallable.\n*      BlueprintPure - means the function does not affect the owning object in any way and thus creates a node without Exec pins.\n*      BlueprintCallable - makes a function which can be executed in Blueprints - Thus it has Exec pins.\n*      DisplayName - full name of the node, shown when you mouse over the node and in the blueprint drop down menu.\n*                              Its lets you name the node using characters not allowed in C++ function names.\n*      CompactNodeTitle - the word(s) that appear on the node.\n*      Keywords -      the list of keywords that helps you to find node when you search for it using Blueprint drop-down menu.\n*                              Good example is \"Print String\" node which you can find also by using keyword \"log\".\n*      Category -      the category your node will be under in the Blueprint drop-down menu." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTikTokPluginBPLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTikTokPluginBPLibrary>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UTikTokPluginBPLibrary_Statics::ClassParams = {
		&UTikTokPluginBPLibrary::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UTikTokPluginBPLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTikTokPluginBPLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTikTokPluginBPLibrary()
	{
		if (!Z_Registration_Info_UClass_UTikTokPluginBPLibrary.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTikTokPluginBPLibrary.OuterSingleton, Z_Construct_UClass_UTikTokPluginBPLibrary_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UTikTokPluginBPLibrary.OuterSingleton;
	}
	template<> TIKTOKPLUGIN_API UClass* StaticClass<UTikTokPluginBPLibrary>()
	{
		return UTikTokPluginBPLibrary::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTikTokPluginBPLibrary);
	UTikTokPluginBPLibrary::~UTikTokPluginBPLibrary() {}
	struct Z_CompiledInDeferFile_FID_JNI_TestWorld6_Plugins_TikTokPlugin_Source_TikTokPlugin_Public_TikTokPluginBPLibrary_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_JNI_TestWorld6_Plugins_TikTokPlugin_Source_TikTokPlugin_Public_TikTokPluginBPLibrary_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UTikTokPluginBPLibrary, UTikTokPluginBPLibrary::StaticClass, TEXT("UTikTokPluginBPLibrary"), &Z_Registration_Info_UClass_UTikTokPluginBPLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTikTokPluginBPLibrary), 1205833101U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_JNI_TestWorld6_Plugins_TikTokPlugin_Source_TikTokPlugin_Public_TikTokPluginBPLibrary_h_3086680013(TEXT("/Script/TikTokPlugin"),
		Z_CompiledInDeferFile_FID_JNI_TestWorld6_Plugins_TikTokPlugin_Source_TikTokPlugin_Public_TikTokPluginBPLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_JNI_TestWorld6_Plugins_TikTokPlugin_Source_TikTokPlugin_Public_TikTokPluginBPLibrary_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

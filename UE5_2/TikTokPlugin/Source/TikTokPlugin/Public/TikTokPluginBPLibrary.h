// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "Kismet/BlueprintFunctionLibrary.h"
#include "TikTokPluginEventHandler.h"
#include "TikTokPluginBPLibrary.generated.h"

/*
*	Function library class.
*	Each function in it is expected to be static and represents blueprint node that can be called in any blueprint.
*
*	When declaring function you can define metadata for the node. Key function specifiers will be BlueprintPure and BlueprintCallable.
*	BlueprintPure - means the function does not affect the owning object in any way and thus creates a node without Exec pins.
*	BlueprintCallable - makes a function which can be executed in Blueprints - Thus it has Exec pins.
*	DisplayName - full name of the node, shown when you mouse over the node and in the blueprint drop down menu.
*				Its lets you name the node using characters not allowed in C++ function names.
*	CompactNodeTitle - the word(s) that appear on the node.
*	Keywords -	the list of keywords that helps you to find node when you search for it using Blueprint drop-down menu.
*				Good example is "Print String" node which you can find also by using keyword "log".
*	Category -	the category your node will be under in the Blueprint drop-down menu.
*/
UCLASS()
class UTikTokPluginBPLibrary : public UBlueprintFunctionLibrary
{
    GENERATED_UCLASS_BODY()

public:

    /**
    * Connect to a TikTok livestream using the provided TikTok handle.
    * Launches the Java application with the TikTok handle as an argument.
    * @param TikTokHandle - The TikTok username/handle to connect to.
    * @return - True if the connection process was initiated successfully, otherwise false.
    */
    UFUNCTION(BlueprintCallable, meta = (DisplayName = "Connect to TikTok Live", Keywords = "TikTokPlugin connect livestream"), Category = "TikTokPlugin")
    static bool ConnectToTikTokLive(const FString& TikTokHandle);

    /**
    * Close the TikTok connection and terminate the Java process.
    * @return - True if the process was terminated successfully, otherwise false.
    */
    UFUNCTION(BlueprintCallable, meta = (DisplayName = "Close TikTok Connection", Keywords = "TikTokPlugin disconnect livestream"), Category = "TikTokPlugin")
    static bool CloseTikTokConnection();

    /**
    * Get the TikTok Event Handler instance.
    * @return The TikTok event handler object.
    */
    UFUNCTION(BlueprintCallable, meta = (DisplayName = "Get TikTok Event Handler", Keywords = "TikTokPlugin event handler"), Category = "TikTokPlugin|Events")
    static UTikTokPluginEventHandler* GetTikTokEventHandler();

private:
    // Handle for the Java process
    static FProcHandle JavaProcessHandle;

    // Static instance of the TikTok event handler
    static UTikTokPluginEventHandler* TikTokEventHandler;
};

// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "Modules/ModuleManager.h"
#include "IWebSocket.h"
#include "HAL/PlatformProcess.h"
#include "TikTokPluginEventHandler.h"

class FTikTokPluginModule : public IModuleInterface
{
public:

    /** IModuleInterface implementation */
    virtual void StartupModule() override;
    virtual void ShutdownModule() override;

private:
    // Handles for external processes
    FProcHandle NodeProcessHandle;
    FProcHandle JavaProcessHandle;

    // WebSocket instance
    TSharedPtr<IWebSocket> WebSocket;

    // Pointer to TikTok event handler
    static UTikTokPluginEventHandler* TikTokEventHandler;

    // Initialize the TikTok event handler
    static UTikTokPluginEventHandler* GetTikTokEventHandler();
};

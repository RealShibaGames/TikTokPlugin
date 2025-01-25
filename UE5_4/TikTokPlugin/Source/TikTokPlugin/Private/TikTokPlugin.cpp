// Copyright Epic Games, Inc. All Rights Reserved.

#include "TikTokPlugin.h"
#include "Modules/ModuleManager.h"
#include "HAL/PlatformProcess.h"
#include "Logging/LogMacros.h"
#include "Misc/Paths.h"
#include "IWebSocket.h"
#include "WebSocketsModule.h"
#include "JsonObjectConverter.h"
#include "TikTokPluginEventHandler.h"
#include "TikTokPluginBPLibrary.h"

DEFINE_LOG_CATEGORY_STATIC(LogTikTokPlugin, Log, All);

#define LOCTEXT_NAMESPACE "FTikTokPluginModule"

// Initialize the static event handler pointer
UTikTokPluginEventHandler* FTikTokPluginModule::TikTokEventHandler = nullptr;

// Handle for the Node.js WebSocket server process
FProcHandle NodeProcessHandle;

void FTikTokPluginModule::StartupModule()
{
    UE_LOG(LogTikTokPlugin, Log, TEXT("TikTokPlugin: Module started successfully!"));

    // Retrieve or create the TikTok event handler
    TikTokEventHandler = UTikTokPluginBPLibrary::GetTikTokEventHandler();
    if (!TikTokEventHandler)
    {
        UE_LOG(LogTikTokPlugin, Error, TEXT("TikTokEventHandler failed to initialize."));
        return;
    }

    // Define the path for the WebSocketServer executable
    FString PluginBaseDir = FPaths::Combine(FPaths::ProjectPluginsDir(), TEXT("TikTokPlugin"));
    FString WebSocketServerExecutable = FPaths::Combine(PluginBaseDir, TEXT("Binaries/LocalWebSocketServer/WebSocketServer.exe"));

    // Verify that the WebSocketServer executable exists
    if (!FPaths::FileExists(WebSocketServerExecutable))
    {
        UE_LOG(LogTikTokPlugin, Error, TEXT("WebSocket server executable not found at: %s"), *WebSocketServerExecutable);
        return;
    }

    // Launch the WebSocket server executable
    NodeProcessHandle = FPlatformProcess::CreateProc(*WebSocketServerExecutable, nullptr, true, false, false, nullptr, 0, nullptr, nullptr);

    if (NodeProcessHandle.IsValid())
    {
        UE_LOG(LogTikTokPlugin, Log, TEXT("WebSocket server started successfully."));
    }
    else
    {
        UE_LOG(LogTikTokPlugin, Error, TEXT("Failed to start WebSocket server."));
        return;
    }

    // Define the WebSocket server URL
    FString WebSocketURL = TEXT("ws://localhost:12345");
    WebSocket = FWebSocketsModule::Get().CreateWebSocket(WebSocketURL);

    // Define the WebSocket message handler
    WebSocket->OnMessage().AddLambda([this](const FString& Message) {
        // Log the raw WebSocket message for debugging purposes
        UE_LOG(LogTikTokPlugin, Log, TEXT("Received WebSocket message: %s"), *Message);

        // Ensure the event handler is valid
        if (!TikTokEventHandler)
        {
            UE_LOG(LogTikTokPlugin, Warning, TEXT("TikTokEventHandler is invalid or null."));
            return;
        }

        // Parse the JSON message
        TSharedPtr<FJsonObject> JsonObject;
        TSharedRef<TJsonReader<>> Reader = TJsonReaderFactory<>::Create(Message);

        if (FJsonSerializer::Deserialize(Reader, JsonObject) && JsonObject.IsValid())
        {
            // Extract the "Event" field from the JSON
            FString EventType = JsonObject->GetStringField("Event");

            // Log the event type for debugging
            UE_LOG(LogTikTokPlugin, Log, TEXT("Parsed Event Type: %s"), *EventType);

            // Process different event types
            if (EventType == "Gift")
            {
                FString Username = JsonObject->GetStringField("Username");
                FString UserID = JsonObject->GetStringField("UserID");
                FString UserProfilePicURL = JsonObject->GetStringField("UserProfilePicURL");
                FString GiftType = JsonObject->GetStringField("GiftType");
                int32 GiftValue = JsonObject->GetIntegerField("GiftValue");

                UE_LOG(LogTikTokPlugin, Log, TEXT("Gift Event - Username: %s, UserID: %s, UserProfilePicURL: %s, GiftType: %s, GiftValue: %d"),
                    *Username, *UserID, *UserProfilePicURL, *GiftType, GiftValue);

                TikTokEventHandler->OnGiftEvent.Broadcast(Username, UserID, UserProfilePicURL, GiftType, GiftValue);
            }
            else if (EventType == "Comment")
            {
                FString Username = JsonObject->GetStringField("Username");
                FString UserID = JsonObject->GetStringField("UserID");
                FString UserProfilePicURL = JsonObject->GetStringField("UserProfilePicURL");
                FString CommentText = JsonObject->GetStringField("CommentText");

                UE_LOG(LogTikTokPlugin, Log, TEXT("Comment Event - Username: %s, UserID: %s, UserProfilePicURL: %s, CommentText: %s"),
                    *Username, *UserID, *UserProfilePicURL, *CommentText);

                TikTokEventHandler->OnCommentEvent.Broadcast(Username, UserID, UserProfilePicURL, CommentText);
            }
            else if (EventType == "Like")
            {
                FString Username = JsonObject->GetStringField("Username");
                FString UserID = JsonObject->GetStringField("UserID");
                FString UserProfilePicURL = JsonObject->GetStringField("UserProfilePicURL");
                int32 LikeCount = JsonObject->GetIntegerField("LikeCount");

                UE_LOG(LogTikTokPlugin, Log, TEXT("Like Event - Username: %s, UserID: %s, UserProfilePicURL: %s, LikeCount: %d"),
                    *Username, *UserID, *UserProfilePicURL, LikeCount);

                TikTokEventHandler->OnLikeEvent.Broadcast(Username, UserID, UserProfilePicURL, LikeCount);
            }
            else if (EventType == "Follow")
            {
                FString Username = JsonObject->GetStringField("Username");
                FString UserID = JsonObject->GetStringField("UserID");
                FString UserProfilePicURL = JsonObject->GetStringField("UserProfilePicURL");
                bool AlreadyFollowed = JsonObject->GetBoolField("AlreadyFollowed");

                UE_LOG(LogTikTokPlugin, Log, TEXT("Follow Event - Username: %s, UserID: %s, UserProfilePicURL: %s, AlreadyFollowed: %s"),
                    *Username, *UserID, *UserProfilePicURL, AlreadyFollowed ? TEXT("True") : TEXT("False"));

                TikTokEventHandler->OnFollowEvent.Broadcast(Username, UserID, UserProfilePicURL, AlreadyFollowed);
            }
            else if (EventType == "Share")
            {
                FString Username = JsonObject->GetStringField("Username");
                FString UserID = JsonObject->GetStringField("UserID");
                FString UserProfilePicURL = JsonObject->GetStringField("UserProfilePicURL");
                int32 Shares = JsonObject->GetIntegerField("Shares");

                UE_LOG(LogTikTokPlugin, Log, TEXT("Share Event - Username: %s, UserID: %s, UserProfilePicURL: %s, Shares: %d"),
                    *Username, *UserID, *UserProfilePicURL, Shares);

                TikTokEventHandler->OnShareEvent.Broadcast(Username, UserID, UserProfilePicURL, Shares);
            }
            else if (EventType == "RoomInfo")
            {
                FString RoomTitle = JsonObject->GetStringField("RoomTitle");
                int32 ViewerCount = JsonObject->GetIntegerField("ViewerCount");

                UE_LOG(LogTikTokPlugin, Log, TEXT("RoomInfo Event - RoomTitle: %s, ViewerCount: %d"),
                    *RoomTitle, ViewerCount);

                TikTokEventHandler->OnRoomInfoEvent.Broadcast(RoomTitle, ViewerCount);
            }
            else
            {
                UE_LOG(LogTikTokPlugin, Warning, TEXT("Unhandled Event Type: %s"), *EventType);
            }
        }
        else
        {
            UE_LOG(LogTikTokPlugin, Error, TEXT("Failed to parse WebSocket message as JSON."));
        }
        });

    // Connect to the WebSocket server
    WebSocket->OnConnected().AddLambda([]() {
        UE_LOG(LogTikTokPlugin, Log, TEXT("WebSocket connected successfully."));
        });

    WebSocket->OnConnectionError().AddLambda([](const FString& Error) {
        UE_LOG(LogTikTokPlugin, Error, TEXT("WebSocket connection error: %s"), *Error);
        });

    WebSocket->OnClosed().AddLambda([](int32 StatusCode, const FString& Reason, bool bWasClean) {
        UE_LOG(LogTikTokPlugin, Log, TEXT("WebSocket connection closed. Reason: %s"), *Reason);
        });

    WebSocket->Connect();
}

void FTikTokPluginModule::ShutdownModule()
{
    UE_LOG(LogTikTokPlugin, Log, TEXT("TikTokPlugin: Module shutdown."));

    // Close the WebSocket connection if active
    if (WebSocket.IsValid())
    {
        WebSocket->Close();
        WebSocket.Reset();
    }

    // Terminate the Node.js WebSocket server if it is running
    if (NodeProcessHandle.IsValid())
    {
        FPlatformProcess::TerminateProc(NodeProcessHandle);
        FPlatformProcess::CloseProc(NodeProcessHandle);
        NodeProcessHandle.Reset();
        UE_LOG(LogTikTokPlugin, Log, TEXT("Node.js WebSocket server terminated."));
    }

    // Clean up the event handler
    if (TikTokEventHandler)
    {
        TikTokEventHandler->RemoveFromRoot();
        TikTokEventHandler = nullptr;
    }
}

#undef LOCTEXT_NAMESPACE
IMPLEMENT_MODULE(FTikTokPluginModule, TikTokPlugin)

#include "TikTokPluginBPLibrary.h"
#include "TikTokPlugin.h"
#include "HAL/PlatformProcess.h"
#include "Misc/Paths.h"
#include "Logging/LogMacros.h"

DEFINE_LOG_CATEGORY_STATIC(LogTikTokPluginBPLibrary, Log, All);

FProcHandle UTikTokPluginBPLibrary::JavaProcessHandle;
UTikTokPluginEventHandler* UTikTokPluginBPLibrary::TikTokEventHandler = nullptr;

UTikTokPluginBPLibrary::UTikTokPluginBPLibrary(const FObjectInitializer& ObjectInitializer)
    : Super(ObjectInitializer)
{
}

bool UTikTokPluginBPLibrary::ConnectToTikTokLive(const FString& TikTokHandle)
{
    if (TikTokHandle.IsEmpty())
    {
        UE_LOG(LogTikTokPluginBPLibrary, Error, TEXT("TikTok handle is empty. Cannot connect to livestream."));
        return false;
    }

    if (JavaProcessHandle.IsValid())
    {
        UE_LOG(LogTikTokPluginBPLibrary, Warning, TEXT("A Java process is already running. Please close the connection before starting a new one."));
        return false;
    }

    FString PluginBaseDir = FPaths::Combine(FPaths::ProjectPluginsDir(), TEXT("TikTokPlugin"));
    FString JavaExecutable = FPaths::Combine(PluginBaseDir, TEXT("Binaries/JavaRuntime/Windows/bin/java.exe"));
    FString JarFilePath = FPaths::Combine(PluginBaseDir, TEXT("Binaries/Win64/tiktok_to_unreal-1.0-SNAPSHOT-shaded.jar"));

    if (!FPaths::FileExists(JavaExecutable) || !FPaths::FileExists(JarFilePath))
    {
        UE_LOG(LogTikTokPluginBPLibrary, Error, TEXT("Required files for Java process are missing."));
        return false;
    }

    FString JavaArgs = FString::Printf(TEXT("-jar \"%s\" \"%s\""), *JarFilePath, *TikTokHandle);
    JavaProcessHandle = FPlatformProcess::CreateProc(*JavaExecutable, *JavaArgs, true, false, false, nullptr, 0, nullptr, nullptr);

    if (JavaProcessHandle.IsValid())
    {
        UE_LOG(LogTikTokPluginBPLibrary, Log, TEXT("Java process started successfully."));
        return true;
    }

    UE_LOG(LogTikTokPluginBPLibrary, Error, TEXT("Failed to start Java process."));
    return false;
}

bool UTikTokPluginBPLibrary::CloseTikTokConnection()
{
    if (JavaProcessHandle.IsValid())
    {
        FPlatformProcess::TerminateProc(JavaProcessHandle);
        FPlatformProcess::CloseProc(JavaProcessHandle);
        JavaProcessHandle.Reset();

        UE_LOG(LogTikTokPluginBPLibrary, Log, TEXT("Java process terminated successfully."));
        return true;
    }

    UE_LOG(LogTikTokPluginBPLibrary, Warning, TEXT("No Java process is currently running."));
    return false;
}

UTikTokPluginEventHandler* UTikTokPluginBPLibrary::GetTikTokEventHandler()
{
    if (!TikTokEventHandler)
    {
        TikTokEventHandler = NewObject<UTikTokPluginEventHandler>();
        if (!TikTokEventHandler)
        {
            UE_LOG(LogTikTokPluginBPLibrary, Error, TEXT("Failed to create TikTokEventHandler."));
            return nullptr;
        }
        TikTokEventHandler->AddToRoot(); // Prevent garbage collection
    }

    return TikTokEventHandler;
}

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "TikTokPluginEventHandler.generated.h"

/**
 * Event handler for TikTok Plugin events.
 */

 // Declare dynamic multicast delegates for each event, with expanded parameters to include all data members
DECLARE_DYNAMIC_MULTICAST_DELEGATE_FiveParams(FOnGiftEvent, const FString&, Username, const FString&, UserID, const FString&, UserProfilePicURL, const FString&, GiftType, int32, GiftValue);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_FourParams(FOnCommentEvent, const FString&, Username, const FString&, UserID, const FString&, UserProfilePicURL, const FString&, CommentText);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_FourParams(FOnLikeEvent, const FString&, Username, const FString&, UserID, const FString&, UserProfilePicURL, int32, LikeCount);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_FourParams(FOnFollowEvent, const FString&, Username, const FString&, UserID, const FString&, UserProfilePicURL, bool, AlreadyFollowed);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_FourParams(FOnShareEvent, const FString&, Username, const FString&, UserID, const FString&, UserProfilePicURL, int32, Shares);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnRoomInfoEvent, const FString&, RoomTitle, int32, ViewerCount);

UCLASS(Blueprintable)
class UTikTokPluginEventHandler : public UObject
{
    GENERATED_BODY()

public:
    // Event for when a "Gift" is received
    UPROPERTY(BlueprintAssignable, Category = "TikTokPlugin|Events")
    FOnGiftEvent OnGiftEvent;

    // Event for when a "Comment" is received
    UPROPERTY(BlueprintAssignable, Category = "TikTokPlugin|Events")
    FOnCommentEvent OnCommentEvent;

    // Event for when a "Like" is received
    UPROPERTY(BlueprintAssignable, Category = "TikTokPlugin|Events")
    FOnLikeEvent OnLikeEvent;

    // Event for when a "Follow" is received
    UPROPERTY(BlueprintAssignable, Category = "TikTokPlugin|Events")
    FOnFollowEvent OnFollowEvent;

    // Event for when a "Share" is received
    UPROPERTY(BlueprintAssignable, Category = "TikTokPlugin|Events")
    FOnShareEvent OnShareEvent;

    // Event for when "Room Info" is updated
    UPROPERTY(BlueprintAssignable, Category = "TikTokPlugin|Events")
    FOnRoomInfoEvent OnRoomInfoEvent;

    // Functions to trigger the events (to be called from C++ logic)

    /**
     * Trigger the OnGiftEvent.
     * @param Username The username of the sender.
     * @param UserID The unique ID of the sender.
     * @param UserProfilePicURL The profile picture URL of the sender.
     * @param GiftType The type of gift sent.
     * @param GiftValue The value of the gift.
     */
    UFUNCTION(BlueprintCallable, Category = "TikTokPlugin|Events")
    void TriggerGiftEvent(const FString& Username, const FString& UserID, const FString& UserProfilePicURL, const FString& GiftType, int32 GiftValue)
    {
        OnGiftEvent.Broadcast(Username, UserID, UserProfilePicURL, GiftType, GiftValue);
    }

    /**
     * Trigger the OnCommentEvent.
     * @param Username The username of the sender.
     * @param UserID The unique ID of the sender.
     * @param UserProfilePicURL The profile picture URL of the sender.
     * @param CommentText The content of the comment.
     */
    UFUNCTION(BlueprintCallable, Category = "TikTokPlugin|Events")
    void TriggerCommentEvent(const FString& Username, const FString& UserID, const FString& UserProfilePicURL, const FString& CommentText)
    {
        OnCommentEvent.Broadcast(Username, UserID, UserProfilePicURL, CommentText);
    }

    /**
     * Trigger the OnLikeEvent.
     * @param Username The username of the liker.
     * @param UserID The unique ID of the liker.
     * @param UserProfilePicURL The profile picture URL of the liker.
     * @param LikeCount The number of likes sent.
     */
    UFUNCTION(BlueprintCallable, Category = "TikTokPlugin|Events")
    void TriggerLikeEvent(const FString& Username, const FString& UserID, const FString& UserProfilePicURL, int32 LikeCount)
    {
        OnLikeEvent.Broadcast(Username, UserID, UserProfilePicURL, LikeCount);
    }

    /**
     * Trigger the OnFollowEvent.
     * @param Username The username of the follower.
     * @param UserID The unique ID of the follower.
     * @param UserProfilePicURL The profile picture URL of the follower.
     * @param AlreadyFollowed Whether the user was already following.
     */
    UFUNCTION(BlueprintCallable, Category = "TikTokPlugin|Events")
    void TriggerFollowEvent(const FString& Username, const FString& UserID, const FString& UserProfilePicURL, bool AlreadyFollowed)
    {
        OnFollowEvent.Broadcast(Username, UserID, UserProfilePicURL, AlreadyFollowed);
    }

    /**
     * Trigger the OnShareEvent.
     * @param Username The username of the sharer.
     * @param UserID The unique ID of the sharer.
     * @param UserProfilePicURL The profile picture URL of the sharer.
     * @param Shares The total number of shares.
     */
    UFUNCTION(BlueprintCallable, Category = "TikTokPlugin|Events")
    void TriggerShareEvent(const FString& Username, const FString& UserID, const FString& UserProfilePicURL, int32 Shares)
    {
        OnShareEvent.Broadcast(Username, UserID, UserProfilePicURL, Shares);
    }

    /**
     * Trigger the OnRoomInfoEvent.
     * @param RoomTitle The title of the room.
     * @param ViewerCount The current viewer count.
     */
    UFUNCTION(BlueprintCallable, Category = "TikTokPlugin|Events")
    void TriggerRoomInfoEvent(const FString& RoomTitle, int32 ViewerCount)
    {
        OnRoomInfoEvent.Broadcast(RoomTitle, ViewerCount);
    }
};

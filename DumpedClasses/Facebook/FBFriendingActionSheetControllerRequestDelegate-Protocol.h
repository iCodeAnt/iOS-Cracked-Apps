//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class FBFriendingActionSheetController, FBMemPerson;

@protocol FBFriendingActionSheetControllerRequestDelegate <NSObject>
- (void)friendingActionSheetController:(FBFriendingActionSheetController *)arg1 unfollow:(FBMemPerson *)arg2;
- (void)friendingActionSheetController:(FBFriendingActionSheetController *)arg1 follow:(FBMemPerson *)arg2;
- (void)friendingActionSheetController:(FBFriendingActionSheetController *)arg1 unfriend:(FBMemPerson *)arg2;
- (void)friendingActionSheetController:(FBFriendingActionSheetController *)arg1 rejectFriendRequest:(FBMemPerson *)arg2;
- (void)friendingActionSheetController:(FBFriendingActionSheetController *)arg1 acceptFriendRequest:(FBMemPerson *)arg2;
- (void)friendingActionSheetController:(FBFriendingActionSheetController *)arg1 cancelFriendRequest:(FBMemPerson *)arg2;
- (void)friendingActionSheetController:(FBFriendingActionSheetController *)arg1 sendFriendRequest:(FBMemPerson *)arg2;
@end

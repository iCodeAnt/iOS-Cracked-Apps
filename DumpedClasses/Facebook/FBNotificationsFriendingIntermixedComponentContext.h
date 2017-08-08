//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class FBFriendingToolbox, FBNotificationsComponentToolbox;
@protocol FBIntermixedTabEntityCardsCallbackProviding, FBNotificationsComponentSeparatorStyleProviding;

@interface FBNotificationsFriendingIntermixedComponentContext : NSObject
{
    FBNotificationsComponentToolbox *_notificationsToolbox;
    FBFriendingToolbox *_friendingToolbox;
    id <FBNotificationsComponentSeparatorStyleProviding> _notificationsSeparatorStyleProvider;
    id <FBIntermixedTabEntityCardsCallbackProviding> _pymkEntityCardsCallbackProvider;
}

+ (id)contextWithNotificationsToolbox:(id)arg1 friendingToolbox:(id)arg2 notificationsSeparatorStyleProvider:(id)arg3 pymkEntityCardsCallbackProvider:(id)arg4;
@property(readonly, nonatomic) __weak id <FBIntermixedTabEntityCardsCallbackProviding> pymkEntityCardsCallbackProvider; // @synthesize pymkEntityCardsCallbackProvider=_pymkEntityCardsCallbackProvider;
@property(readonly, nonatomic) id <FBNotificationsComponentSeparatorStyleProviding> notificationsSeparatorStyleProvider; // @synthesize notificationsSeparatorStyleProvider=_notificationsSeparatorStyleProvider;
@property(readonly, nonatomic) FBFriendingToolbox *friendingToolbox; // @synthesize friendingToolbox=_friendingToolbox;
@property(readonly, nonatomic) FBNotificationsComponentToolbox *notificationsToolbox; // @synthesize notificationsToolbox=_notificationsToolbox;
- (void).cxx_destruct;
- (id)initWithNotificationsToolbox:(id)arg1 friendingToolbox:(id)arg2 notificationsSeparatorStyleProvider:(id)arg3 pymkEntityCardsCallbackProvider:(id)arg4;

@end

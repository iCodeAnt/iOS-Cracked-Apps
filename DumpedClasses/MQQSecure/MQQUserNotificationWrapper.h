//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MQQLocalNotificationWrapper.h"

@interface MQQUserNotificationWrapper : MQQLocalNotificationWrapper
{
}

+ (void)cancelAllPendingUserNotifications;
+ (void)cancelPendingUserNotificationWithIDs:(id)arg1;
+ (void)cancelPendingUserNotificationWithID:(long long)arg1;
+ (void)cancelAllDeliveredUserNotifications;
+ (void)getPendingUserNotificationWithID:(long long)arg1 completionHandler:(CDUnknownBlockType)arg2;
+ (void)cancelDeliveredUserNotificationWithIDs:(id)arg1;
+ (void)cancelDeliveredUserNotificationWithID:(long long)arg1;
+ (void)getDeliveredUserNotificationWithID:(long long)arg1 completionHandler:(CDUnknownBlockType)arg2;
+ (void)addUsertNotificationWithTrigger:(id)arg1 alertTitle:(id)arg2 alertSubTitle:(id)arg3 alertBody:(id)arg4 alertAction:(id)arg5 category:(id)arg6 attachmentURLs:(id)arg7 userInfo:(id)arg8 notificationID:(long long)arg9 completionHandler:(CDUnknownBlockType)arg10;
+ (void)addUsertNotificationWithDateComponents:(id)arg1 repeats:(_Bool)arg2 alertTitle:(id)arg3 alertSubTitle:(id)arg4 alertBody:(id)arg5 alertAction:(id)arg6 category:(id)arg7 attachmentURLs:(id)arg8 userInfo:(id)arg9 notificationID:(long long)arg10 completionHandler:(CDUnknownBlockType)arg11;
+ (void)addUsertNotificationWithTimeInterval:(double)arg1 repeats:(_Bool)arg2 alertTitle:(id)arg3 alertSubTitle:(id)arg4 alertBody:(id)arg5 alertAction:(id)arg6 category:(id)arg7 attachmentURLs:(id)arg8 userInfo:(id)arg9 notificationID:(long long)arg10 completionHandler:(CDUnknownBlockType)arg11;
+ (void)addUsertNotificationWithTimeInterval:(double)arg1 alertTitle:(id)arg2 alertSubTitle:(id)arg3 alertBody:(id)arg4 attachmentURLs:(id)arg5 notificationID:(long long)arg6;
+ (void)addUserNotificationWithMQQUserNotif:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
+ (void)addUserNotificationWithMQQUserNotif:(id)arg1;
+ (_Bool)isSupported;

@end

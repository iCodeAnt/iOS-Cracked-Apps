//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface GeTuiSdk : NSObject
{
}

+ (void)resetBadge;
+ (void)setBadge:(unsigned long long)arg1;
+ (void)clearAllNotificationForNotificationBar;
+ (int)status;
+ (void)setCrashCatchEnable:(_Bool)arg1;
+ (id)clientId;
+ (id)version;
+ (void)lbsLocationEnable:(_Bool)arg1 andUserVerify:(_Bool)arg2;
+ (void)resume;
+ (void)runBackgroundEnable:(_Bool)arg1;
+ (_Bool)sendFeedbackMessage:(long long)arg1 andTaskId:(id)arg2 andMsgId:(id)arg3;
+ (id)sendMessage:(id)arg1 error:(id *)arg2;
+ (void)handleAPNsNotification:(id)arg1 actionId:(id)arg2;
+ (void)handleQuietRemoteNotification:(id)arg1;
+ (void)handleRemoteNotification:(id)arg1;
+ (_Bool)setTags:(id)arg1;
+ (void)unbindAlias:(id)arg1 andSequenceNum:(id)arg2;
+ (void)bindAlias:(id)arg1 andSequenceNum:(id)arg2;
+ (void)setPushModeForOff:(_Bool)arg1;
+ (_Bool)registerDeviceToken:(id)arg1;
+ (void)setChannelId:(id)arg1;
+ (void)destroy;
+ (void)startSdkWithAppId:(id)arg1 appKey:(id)arg2 appSecret:(id)arg3 delegate:(id)arg4;

@end


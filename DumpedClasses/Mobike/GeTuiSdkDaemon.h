//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface GeTuiSdkDaemon : NSObject
{
    _Bool isStartupSdkForApp_;
    _Bool _plistUninstallNotSave;
    int sdkStatus_;
    id delegate_;
    NSString *_plistChannelId;
    NSString *_pbPlistLogRank;
    NSString *_plistLogRank;
}

+ (void)checkValidForAppId:(id)arg1;
+ (void)logfulUploadFirstStartLog;
+ (void)startupLogful;
+ (id)sharedInstance;
@property(readonly, nonatomic) _Bool plistUninstallNotSave; // @synthesize plistUninstallNotSave=_plistUninstallNotSave;
@property(readonly, nonatomic) NSString *plistLogRank; // @synthesize plistLogRank=_plistLogRank;
@property(readonly, nonatomic) NSString *pbPlistLogRank; // @synthesize pbPlistLogRank=_pbPlistLogRank;
@property(nonatomic) int sdkStatus_; // @synthesize sdkStatus_;
@property(nonatomic) _Bool isStartupSdkForApp_; // @synthesize isStartupSdkForApp_;
@property(nonatomic) __weak id delegate_; // @synthesize delegate_;
- (void).cxx_destruct;
- (_Bool)isTimeForCheckValid;
- (void)checkAndSaveIDFA;
- (void)synchronousSdkAccountAndCheckValid;
- (void)migrateSandBoxFile;
- (void)destroyGtSdk;
- (void)startSdk;
- (void)sdkDidOperateAliasNotificationOnMain:(id)arg1;
- (void)sdkDidSetPushModeNotificationOnMain:(id)arg1;
- (void)sdkDidOccurErrorNotificationOnMain:(id)arg1;
- (void)sdkDidSendMessageNotificationOnMain:(id)arg1;
- (void)sdkDidReceivePayloadNotificationOnMain:(id)arg1;
- (void)sdkDidChangeStatusNotificationOnMain:(id)arg1;
- (void)sdkDidRegisterClientNotificationOnMain:(id)arg1;
- (void)sdkDidOperateAliasNotification:(id)arg1;
- (void)sdkDidSetPushModeNotification:(id)arg1;
- (void)sdkDidOccurErrorNotification:(id)arg1;
- (void)sdkDidSendMessageNotification:(id)arg1;
- (void)sdkDidReceivePayloadNotification:(id)arg1;
- (void)sdkDidRegisterClientNotification:(id)arg1;
- (void)deleteAllNotification;
- (void)addAllNotification;
- (void)enterBackground;
- (void)destroySdkOnMain;
- (void)startSdkOnMain;
- (void)resume;
- (_Bool)sendFeedbackMessage:(long long)arg1 andTaskId:(id)arg2 andMsgId:(id)arg3;
- (id)sendMessage:(id)arg1 error:(id *)arg2;
- (void)unbindAlias:(id)arg1 seqNum:(id)arg2;
- (void)bindAlias:(id)arg1 seqNum:(id)arg2;
- (void)setPushModeForOff:(_Bool)arg1;
- (int)currentSdkStatus;
@property(readonly, nonatomic) NSString *plistChannelId; // @synthesize plistChannelId=_plistChannelId;
- (void)gtp_appWillTerminate;
- (void)gtp_appDidBecomeActive;
- (void)gtp_appWillEnterForeground;
- (void)gtp_appDidEnterBackground;
- (void)gtp_appWillResignActive;
- (_Bool)isGexinSdkRunning;
- (void)dealloc;
- (void)getCustomDebugConfig;
- (void)gtp_tryGetSHWSuccessNotification:(id)arg1;
- (void)tryDetectHw;
- (id)init;

@end


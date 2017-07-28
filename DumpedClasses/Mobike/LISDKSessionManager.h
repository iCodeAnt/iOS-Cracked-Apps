//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "UIAlertViewDelegate.h"

@class LISDKSession, NSString;

@interface LISDKSessionManager : NSObject <UIAlertViewDelegate>
{
    LISDKSession *_session;
    NSString *_appId;
    NSString *_schemeSuffix;
    CDUnknownBlockType _successBlock;
    CDUnknownBlockType _errorBlock;
    id <LISDKSessionStore> _sessionStore;
}

+ (_Bool)shouldHandleUrl:(id)arg1;
+ (_Bool)application:(id)arg1 openURL:(id)arg2 sourceApplication:(id)arg3 annotation:(id)arg4;
+ (_Bool)hasValidSession;
+ (void)clearSession;
+ (void)createSessionWithAccessToken:(id)arg1;
+ (void)createSessionWithAuth:(id)arg1 state:(id)arg2 showGoToAppStoreDialog:(_Bool)arg3 successBlock:(CDUnknownBlockType)arg4 errorBlock:(CDUnknownBlockType)arg5;
+ (id)sharedInstance;
@property(readonly, nonatomic) id <LISDKSessionStore> sessionStore; // @synthesize sessionStore=_sessionStore;
@property(copy, nonatomic) CDUnknownBlockType errorBlock; // @synthesize errorBlock=_errorBlock;
@property(copy, nonatomic) CDUnknownBlockType successBlock; // @synthesize successBlock=_successBlock;
@property(retain, nonatomic) NSString *schemeSuffix; // @synthesize schemeSuffix=_schemeSuffix;
@property(retain, nonatomic) NSString *appId; // @synthesize appId=_appId;
@property(retain, nonatomic) LISDKSession *session; // @synthesize session=_session;
- (void).cxx_destruct;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (_Bool)correctLinkedInAppVersionInstalled:(_Bool)arg1;
- (_Bool)linkedInAppInstalled:(_Bool)arg1;
- (_Bool)handleAuthErrorResponse:(id)arg1;
- (_Bool)handleAuthSuccessResponse:(id)arg1;
- (id)createAuthURL:(id)arg1 state:(id)arg2;
- (id)scopeFromPermissions:(id)arg1;
- (void)goToAppStoreAndSendError:(id)arg1;
- (_Bool)shouldHandleUrl:(id)arg1;
- (_Bool)application:(id)arg1 openURL:(id)arg2 sourceApplication:(id)arg3 annotation:(id)arg4;
- (void)cleanCompletionBlocks;
- (void)clearSession;
- (void)createSessionWithAccessToken:(id)arg1;
- (void)createSessionWithAuth:(id)arg1 state:(id)arg2 showGoToAppStoreDialog:(_Bool)arg3 successBlock:(CDUnknownBlockType)arg4 errorBlock:(CDUnknownBlockType)arg5;
- (id)initPrivateFromAppId:(id)arg1 schemeSuffix:(id)arg2 sessionStore:(id)arg3;
- (id)initPrivate;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


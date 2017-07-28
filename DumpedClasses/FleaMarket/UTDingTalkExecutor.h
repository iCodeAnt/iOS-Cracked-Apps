//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UTShareExecutor.h"

#import "DTOpenAPIDelegate.h"

@class NSString;

@interface UTDingTalkExecutor : UTShareExecutor <DTOpenAPIDelegate>
{
}

- (void)onResp:(id)arg1;
- (void)shareMediaMessage;
- (void)shareImageMessage;
- (void)shareTextMessage;
- (void)shareWithContent:(id)arg1 onStarted:(CDUnknownBlockType)arg2 onFinished:(CDUnknownBlockType)arg3;
- (_Bool)handleOpenURL:(id)arg1;
- (_Bool)canShare;
- (void)registerApp:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

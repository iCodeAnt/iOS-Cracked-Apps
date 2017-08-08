//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class MQQGameLoginConfirmInfo, MQQGameLoginFlowInfo, MQQGameLoginPushInfo, MQQGameLoginSdk, NSError;

@protocol MQQGameLoginSdkDelegate <NSObject>

@optional
- (void)gameLoginSdk:(MQQGameLoginSdk *)arg1 didSendConfirmFailedWithError:(NSError *)arg2;
- (void)gameLoginSdk:(MQQGameLoginSdk *)arg1 didSendConfirmSuccess:(MQQGameLoginConfirmInfo *)arg2;
- (void)gameLoginSdk:(MQQGameLoginSdk *)arg1 didGetPushInfoFailedWithError:(NSError *)arg2;
- (void)gameLoginSdk:(MQQGameLoginSdk *)arg1 didGetPushInfoSuccess:(MQQGameLoginPushInfo *)arg2;
- (void)gameLoginSdk:(MQQGameLoginSdk *)arg1 didSendLoginInfoFailedWithError:(NSError *)arg2;
- (void)gameLoginSdkDidSendLoginInfoSuccess:(MQQGameLoginSdk *)arg1;
- (void)gameLoginSdk:(MQQGameLoginSdk *)arg1 didGetFlowInfoFailedWithError:(NSError *)arg2;
- (void)gameLoginSdk:(MQQGameLoginSdk *)arg1 didGetFlowInfoSuccess:(MQQGameLoginFlowInfo *)arg2;
@end

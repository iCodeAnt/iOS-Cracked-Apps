//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "UMSocialPlatformProvider.h"

@class NSString, UIViewController, UMSocialHandlerConfig;

@interface UMSocialHandler : NSObject <UMSocialPlatformProvider>
{
    UIViewController *_currentViewController;
    long long _socialPlatformType;
    NSString *_appID;
    NSString *_appSecret;
    NSString *_redirectURL;
    CDUnknownBlockType _shareCompletionBlock;
    CDUnknownBlockType _authCompletionBlock;
    CDUnknownBlockType _userinfoCompletionBlock;
    UMSocialHandlerConfig *_handlerConfig;
}

+ (id)defaultManager;
+ (id)socialPlatformTypes;
+ (void)load;
@property(retain, nonatomic) UMSocialHandlerConfig *handlerConfig; // @synthesize handlerConfig=_handlerConfig;
@property(copy, nonatomic) CDUnknownBlockType userinfoCompletionBlock; // @synthesize userinfoCompletionBlock=_userinfoCompletionBlock;
@property(copy, nonatomic) CDUnknownBlockType authCompletionBlock; // @synthesize authCompletionBlock=_authCompletionBlock;
@property(copy, nonatomic) CDUnknownBlockType shareCompletionBlock; // @synthesize shareCompletionBlock=_shareCompletionBlock;
@property(copy, nonatomic) NSString *redirectURL; // @synthesize redirectURL=_redirectURL;
@property(copy, nonatomic) NSString *appSecret; // @synthesize appSecret=_appSecret;
@property(copy, nonatomic) NSString *appID; // @synthesize appID=_appID;
- (void).cxx_destruct;
- (void)saveuid:(id)arg1 openid:(id)arg2 accesstoken:(id)arg3 refreshtoken:(id)arg4 expiration:(id)arg5;
- (id)searchForURLSchemeWithPrefix:(id)arg1 urlObjectArray:(id)arg2;
- (_Bool)searchForURLSchemeWithPrefix:(id)arg1;
@property(nonatomic) long long socialPlatformType; // @synthesize socialPlatformType=_socialPlatformType;
- (_Bool)umSocial_isSupport;
- (_Bool)umSocial_isInstall;
- (id)umSocial_PlatformSDKVersion;
- (unsigned long long)umSocial_SupportedFeatures;
- (_Bool)checkUrlSchema;
- (_Bool)umSocial_handleOpenURL:(id)arg1;
- (void)setAppId:(id)arg1 appSecret:(id)arg2 url:(id)arg3;
- (void)umSocial_setAppKey:(id)arg1 withAppSecret:(id)arg2 withRedirectURL:(id)arg3;
@property(nonatomic) __weak UIViewController *currentViewController; // @synthesize currentViewController=_currentViewController;
- (void)dealloc;
- (id)init;
- (id)compressImageData:(id)arg1 withImageLimit:(unsigned long long)arg2;
- (id)truncationText:(id)arg1 withTextLimit:(unsigned long long)arg2;
- (_Bool)checkData:(id)arg1 withDataLimit:(unsigned long long)arg2;
- (_Bool)checkText:(id)arg1 withTextLimit:(unsigned long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


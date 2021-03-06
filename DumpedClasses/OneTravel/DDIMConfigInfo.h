//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class DDIMNetEnvConfig, NSString;

@interface DDIMConfigInfo : NSObject
{
    _Bool _isLogin;
    long long _userId;
    NSString *_userToken;
    NSString *_deviceId;
    long long _netStatus;
    DDIMNetEnvConfig *_envConfig;
}

+ (id)apiDDIMServicerUrl;
+ (id)sharedInstance;
@property(retain, nonatomic) DDIMNetEnvConfig *envConfig; // @synthesize envConfig=_envConfig;
@property(nonatomic) long long netStatus; // @synthesize netStatus=_netStatus;
@property(nonatomic) _Bool isLogin; // @synthesize isLogin=_isLogin;
@property(retain, nonatomic) NSString *deviceId; // @synthesize deviceId=_deviceId;
@property(retain, nonatomic) NSString *userToken; // @synthesize userToken=_userToken;
@property(nonatomic) long long userId; // @synthesize userId=_userId;
- (void).cxx_destruct;
- (void)userDidLogout;
- (void)userDidLogin;
- (id)init;

@end


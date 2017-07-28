//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface GTXSystemConfig : NSObject
{
    NSString *_baseUrl;
    NSString *_aliasName;
    NSString *_appId;
    NSString *_appSecret;
}

+ (id)apiUrl:(id)arg1;
+ (id)appSecret;
+ (id)appId;
+ (id)alias;
+ (id)baseUrl;
+ (void)saveAppSecret:(id)arg1;
+ (void)saveAppId:(id)arg1;
+ (void)saveAlias:(id)arg1;
+ (void)saveBaseUrl:(id)arg1;
+ (id)config;
@property(retain, nonatomic) NSString *appSecret; // @synthesize appSecret=_appSecret;
@property(retain, nonatomic) NSString *appId; // @synthesize appId=_appId;
@property(retain, nonatomic) NSString *aliasName; // @synthesize aliasName=_aliasName;
@property(retain, nonatomic) NSString *baseUrl; // @synthesize baseUrl=_baseUrl;
- (void).cxx_destruct;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSMutableDictionary, NSString;

@interface RequestParam : NSObject
{
    _Bool _isGet;
    NSString *requestUrl;
    long long retryTimes;
    long long retryInterval;
    NSString *callbackPrefix;
    long long reqPriority;
    NSMutableDictionary *_params;
    NSDictionary *_additionParams;
}

+ (id)paramWithURL:(id)arg1 andParams:(id)arg2 additionParams:(id)arg3 withPrefix:(id)arg4;
+ (id)paramWithURL:(id)arg1 andParams:(id)arg2 withPrefix:(id)arg3;
+ (id)paramWithURL:(id)arg1 andParams:(id)arg2;
@property(nonatomic) _Bool isGet; // @synthesize isGet=_isGet;
@property(copy, nonatomic) NSDictionary *additionParams; // @synthesize additionParams=_additionParams;
@property(retain, nonatomic) NSMutableDictionary *params; // @synthesize params=_params;
@property(nonatomic) long long reqPriority; // @synthesize reqPriority;
@property(copy, nonatomic) NSString *callbackPrefix; // @synthesize callbackPrefix;
@property(nonatomic) long long retryInterval; // @synthesize retryInterval;
@property(nonatomic) long long retryTimes; // @synthesize retryTimes;
@property(copy, nonatomic) NSString *requestUrl; // @synthesize requestUrl;
- (void).cxx_destruct;

@end


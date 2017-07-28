//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSString;

@interface MBKRequestBuilder : NSObject
{
    NSString *_requestUrl;
    NSDictionary *_params;
    NSString *_callbackPrefix;
    NSDictionary *_additionParams;
    long long _retryTimes;
    long long _retryInterval;
    long long _reqPriority;
}

+ (id)fancyMBKRequestBuilder:(id)arg1 andParams:(id)arg2;
+ (id)REQUEST_BASEWeb_URL;
+ (id)REQUEST_BASE_URL;
+ (id)debugBaseUrlConvertWith:(id)arg1;
+ (id)baseUrlConvertWith:(id)arg1;
+ (id)mobikeRequestWithURL:(id)arg1 andParams:(id)arg2;
@property(nonatomic) long long reqPriority; // @synthesize reqPriority=_reqPriority;
@property(nonatomic) long long retryInterval; // @synthesize retryInterval=_retryInterval;
@property(nonatomic) long long retryTimes; // @synthesize retryTimes=_retryTimes;
@property(copy, nonatomic) NSDictionary *additionParams; // @synthesize additionParams=_additionParams;
@property(copy, nonatomic) NSString *callbackPrefix; // @synthesize callbackPrefix=_callbackPrefix;
@property(copy, nonatomic) NSDictionary *params; // @synthesize params=_params;
@property(copy, nonatomic) NSString *requestUrl; // @synthesize requestUrl=_requestUrl;
- (void).cxx_destruct;

@end


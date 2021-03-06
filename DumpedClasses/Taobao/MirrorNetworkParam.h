//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSString;

@interface MirrorNetworkParam : NSObject
{
    _Bool _needLogin;
    _Bool _needWua;
    _Bool _needHttpPost;
    NSString *_apiVersion;
    NSDictionary *_businessParam;
    NSDictionary *_extraParam;
    NSString *_openAppkey;
    NSString *_accessToken;
}

@property(retain, nonatomic) NSString *accessToken; // @synthesize accessToken=_accessToken;
@property(retain, nonatomic) NSString *openAppkey; // @synthesize openAppkey=_openAppkey;
@property(nonatomic) _Bool needHttpPost; // @synthesize needHttpPost=_needHttpPost;
@property(nonatomic) _Bool needWua; // @synthesize needWua=_needWua;
@property(retain, nonatomic) NSDictionary *extraParam; // @synthesize extraParam=_extraParam;
@property(retain, nonatomic) NSDictionary *businessParam; // @synthesize businessParam=_businessParam;
@property(nonatomic) _Bool needLogin; // @synthesize needLogin=_needLogin;
@property(retain, nonatomic) NSString *apiVersion; // @synthesize apiVersion=_apiVersion;
- (void).cxx_destruct;
- (void)useAccessToken:(id)arg1;
- (void)useOpenAppKey:(id)arg1;

@end


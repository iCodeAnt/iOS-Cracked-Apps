//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, NSString;

@interface TBMRequest : NSObject
{
    _Bool _isNeedLogin;
    NSString *_apiName;
    NSString *_apiVersion;
    NSMutableArray *_pName;
    NSMutableArray *_pValue;
}

@property(nonatomic) _Bool isNeedLogin; // @synthesize isNeedLogin=_isNeedLogin;
@property(retain, nonatomic) NSMutableArray *pValue; // @synthesize pValue=_pValue;
@property(retain, nonatomic) NSMutableArray *pName; // @synthesize pName=_pName;
@property(copy, nonatomic) NSString *apiVersion; // @synthesize apiVersion=_apiVersion;
@property(copy, nonatomic) NSString *apiName; // @synthesize apiName=_apiName;
- (void).cxx_destruct;
- (void)setParam:(id)arg1 value:(id)arg2;
- (id)init;

@end


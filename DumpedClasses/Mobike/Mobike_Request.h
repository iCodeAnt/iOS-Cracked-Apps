//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray;

@interface Mobike_Request : NSObject
{
    NSMutableArray *delegateArray;
    NSMutableArray *allReqQueue;
}

+ (id)baseUrlConvertWith:(id)arg1;
+ (id)debugBaseUrlConvertWith:(id)arg1;
+ (id)REQUEST_BASEWeb_URL;
+ (id)REQUEST_BASE_URL;
+ (id)httpClientWith:(id)arg1;
- (void).cxx_destruct;
- (id)paramsOrderWith:(id)arg1 dic2:(id)arg2;
- (void)PostRequestInternal:(id)arg1;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (void)onRequestFailureWithError:(id)arg1 withParam:(id)arg2;
- (void)onRequestSuccWithResponse:(id)arg1 withParam:(id)arg2;
- (_Bool)netWorkCanUsed;
- (void)PostRequestDelay:(id)arg1;
- (void)PostRequest:(id)arg1;
- (id)init;

@end


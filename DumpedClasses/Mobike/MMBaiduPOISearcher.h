//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMPOISearcher.h"

#import "BMKPoiSearchDelegate.h"

@class MMPOISearchTupleTupleManager, NSString;

@interface MMBaiduPOISearcher : MMPOISearcher <BMKPoiSearchDelegate>
{
    MMPOISearchTupleTupleManager *_processingRequests;
}

@property(retain, nonatomic) MMPOISearchTupleTupleManager *processingRequests; // @synthesize processingRequests=_processingRequests;
- (void).cxx_destruct;
- (id)init;
- (void)onGetPoiResult:(id)arg1 result:(id)arg2 errorCode:(int)arg3;
- (void)poiSearchWithBoundaryRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)poiSearchWithCityRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)notifySearcher:(id)arg1 result:(id)arg2 error:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


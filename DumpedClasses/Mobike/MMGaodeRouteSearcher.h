//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMRouteSearcher.h"

#import "AMapSearchDelegate.h"

@class AMapSearchAPI, MMWalkingRouteSearchTupleManager, NSString;

@interface MMGaodeRouteSearcher : MMRouteSearcher <AMapSearchDelegate>
{
    AMapSearchAPI *_searcher;
    MMWalkingRouteSearchTupleManager *_processingRequests;
}

@property(retain, nonatomic) MMWalkingRouteSearchTupleManager *processingRequests; // @synthesize processingRequests=_processingRequests;
@property(retain, nonatomic) AMapSearchAPI *searcher; // @synthesize searcher=_searcher;
- (void).cxx_destruct;
- (void)notifyWalkingSearchWithOption:(id)arg1 result:(id)arg2 error:(id)arg3;
- (void)onRouteSearchDone:(id)arg1 response:(id)arg2;
- (void)AMapSearchRequest:(id)arg1 didFailWithError:(id)arg2;
- (void)walkingSearchWithRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MMPoiSearchResult, MMSuggestionResult, MMWalkingRouteRequest, NSArray, NSError;

@protocol SearchApiDelegate <NSObject>

@optional
- (void)didSearchWalkingNavi:(MMWalkingRouteRequest *)arg1 Response:(NSArray *)arg2 err:(NSError *)arg3;
- (void)didSearchTipsWithResponse:(MMSuggestionResult *)arg1 err:(NSError *)arg2;
- (void)didSearchPOIWithResponse:(MMPoiSearchResult *)arg1 err:(NSError *)arg2;
@end


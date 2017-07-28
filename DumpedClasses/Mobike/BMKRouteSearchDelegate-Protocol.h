//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class BMKDrivingRouteResult, BMKIndoorRouteResult, BMKMassTransitRouteResult, BMKRidingRouteResult, BMKRouteSearch, BMKTransitRouteResult, BMKWalkingRouteResult;

@protocol BMKRouteSearchDelegate <NSObject>

@optional
- (void)onGetIndoorRouteResult:(BMKRouteSearch *)arg1 result:(BMKIndoorRouteResult *)arg2 errorCode:(int)arg3;
- (void)onGetRidingRouteResult:(BMKRouteSearch *)arg1 result:(BMKRidingRouteResult *)arg2 errorCode:(int)arg3;
- (void)onGetWalkingRouteResult:(BMKRouteSearch *)arg1 result:(BMKWalkingRouteResult *)arg2 errorCode:(int)arg3;
- (void)onGetDrivingRouteResult:(BMKRouteSearch *)arg1 result:(BMKDrivingRouteResult *)arg2 errorCode:(int)arg3;
- (void)onGetMassTransitRouteResult:(BMKRouteSearch *)arg1 result:(BMKMassTransitRouteResult *)arg2 errorCode:(int)arg3;
- (void)onGetTransitRouteResult:(BMKRouteSearch *)arg1 result:(BMKTransitRouteResult *)arg2 errorCode:(int)arg3;
@end


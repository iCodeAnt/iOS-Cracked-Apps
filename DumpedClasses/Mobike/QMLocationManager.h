//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "TencentLBSLiteLocationManagerDelegate.h"

@class CLHeading, CLLocation, NSMutableArray, NSRecursiveLock, NSString, TencentLBSLiteLocationManager;

@interface QMLocationManager : NSObject <TencentLBSLiteLocationManagerDelegate>
{
    _Bool _locationAvailable;
    _Bool _headingAvailable;
    _Bool _autoPauseLocationUpdate;
    _Bool _needFilterFirstLocation;
    unsigned long long _locatingState;
    unsigned long long _locationType;
    CLLocation *_curlocation;
    NSRecursiveLock *_lock;
    NSMutableArray *_delegates;
    TencentLBSLiteLocationManager *_locationManager;
    CLLocation *_candidateLocation;
    CLHeading *_curHeading;
}

+ (id)defaultManager;
@property(retain, nonatomic) CLHeading *curHeading; // @synthesize curHeading=_curHeading;
@property(retain, nonatomic) CLLocation *candidateLocation; // @synthesize candidateLocation=_candidateLocation;
@property(nonatomic) _Bool needFilterFirstLocation; // @synthesize needFilterFirstLocation=_needFilterFirstLocation;
@property(retain, nonatomic) TencentLBSLiteLocationManager *locationManager; // @synthesize locationManager=_locationManager;
@property(retain, nonatomic) NSMutableArray *delegates; // @synthesize delegates=_delegates;
@property(retain, nonatomic) NSRecursiveLock *lock; // @synthesize lock=_lock;
@property(retain, nonatomic) CLLocation *curlocation; // @synthesize curlocation=_curlocation;
@property(nonatomic, setter=setAutoPauseLocationUpdate:) _Bool autoPauseLocationUpdate; // @synthesize autoPauseLocationUpdate=_autoPauseLocationUpdate;
@property(nonatomic) unsigned long long locationType; // @synthesize locationType=_locationType;
@property(nonatomic) unsigned long long locatingState; // @synthesize locatingState=_locatingState;
- (void).cxx_destruct;
- (double)am_headingFilter;
- (double)am_allowsBackgroundLocationUpdates;
- (double)am_distanceFilter;
- (double)am_desiredAccuracy;
- (void)am_stopUpdatingLocationIfNeeded;
- (void)am_reStartUpdatingLocationIfNeeded;
- (void)qm_forEachDelegate:(CDUnknownBlockType)arg1;
- (void)qm_setLocationAvailable:(_Bool)arg1;
- (void)qm_updateLocationAndStopFiltering;
- (void)qm_updateHeading:(id)arg1;
- (void)qm_updateLocation:(id)arg1;
- (void)qm_updateGPSLocation:(id)arg1;
- (void)qm_updateCurLocation:(id)arg1;
- (_Bool)tencentLBSLiteLocationManagerShouldDisplayHeadingCalibration:(id)arg1;
- (void)tencentLBSLiteLocationManager:(id)arg1 didChangeAuthorizationStatus:(int)arg2;
- (void)tencentLBSLiteLocationManager:(id)arg1 didUpdateHeading:(id)arg2;
- (void)tencentLBSLiteLocationManager:(id)arg1 didFailWithError:(id)arg2;
- (void)tencentLBSLiteLocationManager:(id)arg1 didUpdateLocation:(id)arg2;
@property(nonatomic) long long coordinateType;
- (_Bool)isLocating;
- (_Bool)locationAvailable;
- (_Bool)headingAvailable;
- (void)stopUpdatingHeading;
- (void)startUpdatingHeading;
- (void)stopUpdatingLocation;
- (void)startUpdatingLocation;
- (void)removeDelegate:(id)arg1;
- (void)updateDelegate:(id)arg1 allowsBackgroundLocationUpdates:(_Bool)arg2;
- (void)updateDelegate:(id)arg1 headingFilter:(double)arg2;
- (void)updateDelegate:(id)arg1 distanceFilter:(double)arg2;
- (void)updateDelegate:(id)arg1 desiredAccuracy:(double)arg2;
- (void)addDelegate:(id)arg1 desiredAccuracy:(double)arg2 distanceFilter:(double)arg3 headingFilter:(double)arg4 allowsBackgroundLocationUpdates:(_Bool)arg5;
- (void)addDelegate:(id)arg1 allowsBackgroundLocationUpdates:(_Bool)arg2;
- (void)addDelegate:(id)arg1 headingFilter:(double)arg2;
- (void)addDelegate:(id)arg1 distanceFilter:(double)arg2;
- (void)addDelegate:(id)arg1 desiredAccuracy:(double)arg2;
- (void)addDelegate:(id)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


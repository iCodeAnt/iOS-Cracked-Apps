//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "MQQCallBlockerCenterDelegate-Protocol.h"

@class NSArray, NSDate, NSError, NSString;

@interface MQQCallBlockerAutoUpdater : NSObject <MQQCallBlockerCenterDelegate>
{
    _Bool _isUpdating;
    unsigned long long _backgroundTaskIdentifier;
    long long _updateTiming;
    NSArray *_updatingManagers;
    NSError *_tempError;
    CDUnknownBlockType _completionHandler;
    NSDate *_lastAutoUpdateTime;
}

+ (id)sharedAutoUpdater;
@property(retain, nonatomic) NSDate *lastAutoUpdateTime; // @synthesize lastAutoUpdateTime=_lastAutoUpdateTime;
@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property(retain, nonatomic) NSError *tempError; // @synthesize tempError=_tempError;
@property(copy, nonatomic) NSArray *updatingManagers; // @synthesize updatingManagers=_updatingManagers;
@property(nonatomic) long long updateTiming; // @synthesize updateTiming=_updateTiming;
@property(nonatomic) unsigned long long backgroundTaskIdentifier; // @synthesize backgroundTaskIdentifier=_backgroundTaskIdentifier;
@property(readonly, nonatomic) _Bool isUpdating; // @synthesize isUpdating=_isUpdating;
- (void)extendBackgroundTask;
- (void)endBackgroundTask;
- (void)beginBackgroundTaskIfNeeded;
- (void)updateTempError:(id)arg1;
- (void)didFinishWithUpdatedStatus:(_Bool)arg1 error:(id)arg2;
- (void)willStartAtTiming:(long long)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)callBlockerCenter:(id)arg1 didReloadDataWithError:(id)arg2;
- (void)reloadData;
- (_Bool)hasToReload;
- (void)callBlockerCenterDidCancelUpdatingIdentification:(id)arg1;
- (void)callBlockerCenter:(id)arg1 didUpdateIdentificationWithError:(id)arg2;
- (void)callBlockerCenter:(id)arg1 manager:(id)arg2 didUpdateIdentificationWithError:(id)arg3;
- (void)callBlockerCenter:(id)arg1 manager:(id)arg2 isUpdatingIdentificationWithProgress:(double)arg3;
- (void)updateIdentification;
- (void)callBlockerCenterDidCancelCheckingIdentification:(id)arg1;
- (void)callBlockerCenter:(id)arg1 didCheckIdentificationWithError:(id)arg2;
- (void)checkIdentification;
- (void)autoUpdateAtTiming:(long long)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (id)managersShouldAutoUpdateWhileFetching;
- (_Bool)shouldAutoUpdateAtTiming:(long long)arg1;
- (_Bool)canAutoUpdate:(id *)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

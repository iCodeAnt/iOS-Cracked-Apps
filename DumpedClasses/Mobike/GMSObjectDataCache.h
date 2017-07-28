//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "GMSObjectDataCache.h"

@class GMSCacheStorageDescriptor, NSManagedObjectContext, NSMutableDictionary, NSMutableOrderedSet, NSObject<OS_dispatch_group>, NSObject<OS_dispatch_queue>, NSString;

@interface GMSObjectDataCache : NSObject <GMSObjectDataCache>
{
    NSObject<OS_dispatch_queue> *_workQueue;
    NSObject<OS_dispatch_queue> *_callbackQueue;
    NSObject<OS_dispatch_group> *_dispatchGroup;
    NSMutableDictionary *_dictionary;
    NSMutableOrderedSet *_lruSet;
    int _deleteObjectDataCachePendings;
    id <GMSDateProvider> _dateProvider;
    _Bool _tuning;
    int _objectType;
    GMSCacheStorageDescriptor *_cacheStorageDescriptor;
    NSManagedObjectContext *_managedObjectContext;
    NSString *_cacheName;
    unsigned long long _maxCount;
    unsigned long long _hitCounter;
    unsigned long long _missCounter;
    unsigned long long _ejectCounter;
}

+ (void)deleteObjectDataCaches;
@property(nonatomic, getter=isTuning) _Bool tuning; // @synthesize tuning=_tuning;
@property(readonly, nonatomic) unsigned long long ejectCounter; // @synthesize ejectCounter=_ejectCounter;
@property(readonly, nonatomic) unsigned long long missCounter; // @synthesize missCounter=_missCounter;
@property(readonly, nonatomic) unsigned long long hitCounter; // @synthesize hitCounter=_hitCounter;
@property(nonatomic) unsigned long long maxCount; // @synthesize maxCount=_maxCount;
@property(readonly, copy, nonatomic) NSString *cacheName; // @synthesize cacheName=_cacheName;
@property(readonly, nonatomic) int objectType; // @synthesize objectType=_objectType;
@property(readonly, nonatomic) NSManagedObjectContext *managedObjectContext; // @synthesize managedObjectContext=_managedObjectContext;
@property(readonly, nonatomic) GMSCacheStorageDescriptor *cacheStorageDescriptor; // @synthesize cacheStorageDescriptor=_cacheStorageDescriptor;
- (void).cxx_destruct;
- (void)setDateProvider:(id)arg1;
- (id)workQueue;
- (float)hitRatio;
- (id)lruSet;
- (unsigned long long)count;
- (id)dictionary;
- (void)didReceiveMemoryWarning:(id)arg1;
- (void)resetCounters;
- (void)cacheShouldDelete:(id)arg1;
- (_Bool)waitForQueueWithTimeout:(double)arg1;
- (id)fetchedObjectsWithPredicate:(id)arg1 sortDescriptor:(id)arg2;
- (void)deleteObjectDataCacheWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)deleteObjectDataWithNames:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)findObjectDataPassingTest:(CDUnknownBlockType)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)deleteObjectDataWithName:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)storeObjectNamesAndData:(id)arg1 version:(int)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)storeObjectDataWithName:(id)arg1 version:(int)arg2 data:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)loadObjectDataWithName:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)pruneCache;
- (void)setMostRecentObject:(id)arg1;
- (void)startWithCompletionHandler:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *callbackQueue;
- (void)dealloc;
- (id)initWithCacheStorageDescriptor:(id)arg1 objectType:(int)arg2 callbackQueue:(id)arg3 cacheName:(id)arg4;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


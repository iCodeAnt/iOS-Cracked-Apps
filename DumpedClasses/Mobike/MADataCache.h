//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "MADataCache.h"

@class MAMemoryCache, NSArray, NSMutableArray, NSObject<OS_dispatch_queue>, NSString;

@interface MADataCache : NSObject <MADataCache>
{
    NSMutableArray *_dataCaches;
    MAMemoryCache *_memoryCache;
    MAMemoryCache *_trafficCache;
    double _expiryPeriod;
    NSObject<OS_dispatch_queue> *_dataCacheQueue;
}

+ (id)tileKey:(struct MATile)arg1 cacheKey:(id)arg2;
+ (id)tileHash:(struct MATile)arg1;
@property(readonly, nonatomic) NSArray *dataCaches; // @synthesize dataCaches=_dataCaches;
- (void).cxx_destruct;
- (void)removeAllCachedImagesForCacheKey:(id)arg1;
- (void)removeAllCachedImages;
- (void)didReceiveMemoryWarning;
- (void)addImage:(id)arg1 forTile:(struct MATile)arg2 withCacheKey:(id)arg3;
- (id)cachedImage:(struct MATile)arg1 withCacheKey:(id)arg2;
- (id)tileCaches;
- (void)insertCache:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)addCache:(id)arg1;
- (id)init;
- (id)initWithExpiryPeriod:(double)arg1;
- (void)initDiskCache;
- (void)initMemoryCache;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


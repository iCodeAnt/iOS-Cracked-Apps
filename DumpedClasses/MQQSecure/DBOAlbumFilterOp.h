//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class MQQDBWrapper;

@interface DBOAlbumFilterOp : NSObject
{
    MQQDBWrapper *_dbWrapper;
}

- (id)dbValueFromObjValue:(id)arg1;
- (id)dbObjectToCacheItem:(id)arg1;
- (_Bool)deleteCacheItemsWithSortType:(long long)arg1;
- (_Bool)deleteCacheItemsWithCacheType:(long long)arg1;
- (_Bool)deleteCacheItemsWithAssetIdentifiers:(id)arg1 cacheType:(long long)arg2;
- (id)countsForEachCacheItemType;
- (id)allCacheItemsWithSortType:(long long)arg1;
- (id)allCacheItemsWithType:(long long)arg1;
- (id)allCacheItemsWithSortByAssetNumber;
- (_Bool)insertOrUpdateCacheItems:(id)arg1;
- (void)dealloc;
- (id)initWithFilePath:(id)arg1;

@end


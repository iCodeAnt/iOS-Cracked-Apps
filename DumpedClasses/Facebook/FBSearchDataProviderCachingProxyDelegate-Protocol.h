//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class FBSearchDataProviderCachingProxy, NSArray, NSDictionary, NSError;

@protocol FBSearchDataProviderCachingProxyDelegate <NSObject>
- (void)cachingProxy:(FBSearchDataProviderCachingProxy *)arg1 shouldNotifyTabConfigsLoaded:(NSArray *)arg2;
- (void)cachingProxy:(FBSearchDataProviderCachingProxy *)arg1 shouldUpdateEdges:(NSDictionary *)arg2;
- (void)cachingProxy:(FBSearchDataProviderCachingProxy *)arg1 shouldAddEdges:(NSArray *)arg2 atIndexPaths:(NSArray *)arg3;
- (void)cachingProxy:(FBSearchDataProviderCachingProxy *)arg1 shouldUpdateFromState:(long long)arg2 toState:(long long)arg3 error:(NSError *)arg4;
@end

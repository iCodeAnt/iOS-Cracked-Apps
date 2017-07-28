//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSObject<OS_dispatch_queue>, SDWebImageManager;

@interface SDWebImagePrefetcher : NSObject
{
    SDWebImageManager *_manager;
    unsigned long long _options;
    NSObject<OS_dispatch_queue> *_prefetcherQueue;
    id <SDWebImagePrefetcherDelegate> _delegate;
    NSArray *_prefetchURLs;
    unsigned long long _requestedCount;
    unsigned long long _skippedCount;
    unsigned long long _finishedCount;
    double _startedTime;
    CDUnknownBlockType _completionBlock;
    CDUnknownBlockType _progressBlock;
}

+ (id)sharedImagePrefetcher;
@property(copy, nonatomic) CDUnknownBlockType progressBlock; // @synthesize progressBlock=_progressBlock;
@property(copy, nonatomic) CDUnknownBlockType completionBlock; // @synthesize completionBlock=_completionBlock;
@property(nonatomic) double startedTime; // @synthesize startedTime=_startedTime;
@property(nonatomic) unsigned long long finishedCount; // @synthesize finishedCount=_finishedCount;
@property(nonatomic) unsigned long long skippedCount; // @synthesize skippedCount=_skippedCount;
@property(nonatomic) unsigned long long requestedCount; // @synthesize requestedCount=_requestedCount;
@property(retain, nonatomic) NSArray *prefetchURLs; // @synthesize prefetchURLs=_prefetchURLs;
@property(nonatomic) __weak id <SDWebImagePrefetcherDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) NSObject<OS_dispatch_queue> *prefetcherQueue; // @synthesize prefetcherQueue=_prefetcherQueue;
@property(nonatomic) unsigned long long options; // @synthesize options=_options;
@property(retain, nonatomic) SDWebImageManager *manager; // @synthesize manager=_manager;
- (void).cxx_destruct;
- (void)cancelPrefetching;
- (void)prefetchURLs:(id)arg1 progress:(CDUnknownBlockType)arg2 completed:(CDUnknownBlockType)arg3;
- (void)prefetchURLs:(id)arg1;
- (void)reportStatus;
- (void)startPrefetchingAtIndex:(unsigned long long)arg1;
@property(nonatomic) unsigned long long maxConcurrentDownloads;
- (id)initWithImageManager:(id)arg1;
- (id)init;

@end


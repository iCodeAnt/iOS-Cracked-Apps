//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDate, NSString, NSTimer, NSURLSessionDataTask, STPAPIClient, STPSource;

@interface STPSourcePoller : NSObject
{
    _Bool _pollingPaused;
    _Bool _pollingStopped;
    STPAPIClient *_apiClient;
    NSString *_sourceID;
    NSString *_clientSecret;
    CDUnknownBlockType _completion;
    STPSource *_latestSource;
    double _pollInterval;
    double _timeout;
    NSURLSessionDataTask *_dataTask;
    NSTimer *_timer;
    NSDate *_startTime;
    long long _retryCount;
    long long _requestCount;
}

@property(nonatomic) _Bool pollingStopped; // @synthesize pollingStopped=_pollingStopped;
@property(nonatomic) _Bool pollingPaused; // @synthesize pollingPaused=_pollingPaused;
@property(nonatomic) long long requestCount; // @synthesize requestCount=_requestCount;
@property(nonatomic) long long retryCount; // @synthesize retryCount=_retryCount;
@property(retain, nonatomic) NSDate *startTime; // @synthesize startTime=_startTime;
@property(retain, nonatomic) NSTimer *timer; // @synthesize timer=_timer;
@property(retain, nonatomic) NSURLSessionDataTask *dataTask; // @synthesize dataTask=_dataTask;
@property(nonatomic) double timeout; // @synthesize timeout=_timeout;
@property(nonatomic) double pollInterval; // @synthesize pollInterval=_pollInterval;
@property(retain, nonatomic) STPSource *latestSource; // @synthesize latestSource=_latestSource;
@property(copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
@property(retain, nonatomic) NSString *clientSecret; // @synthesize clientSecret=_clientSecret;
@property(retain, nonatomic) NSString *sourceID; // @synthesize sourceID=_sourceID;
@property(nonatomic) __weak STPAPIClient *apiClient; // @synthesize apiClient=_apiClient;
- (void).cxx_destruct;
- (void)stopPolling;
- (void)cleanupAndFireCompletionWithSource:(id)arg1 error:(id)arg2;
- (void)pausePolling;
- (void)restartPolling;
- (_Bool)shouldContinuePollingSource:(id)arg1;
- (void)continueWithSource:(id)arg1 response:(id)arg2 error:(id)arg3;
- (void)poll;
- (void)pollAfter:(double)arg1 lastError:(id)arg2;
- (void)dealloc;
- (id)initWithAPIClient:(id)arg1 clientSecret:(id)arg2 sourceID:(id)arg3 timeout:(double)arg4 completion:(CDUnknownBlockType)arg5;

@end


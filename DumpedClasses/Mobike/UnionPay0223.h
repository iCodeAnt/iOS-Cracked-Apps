//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface UnionPay0223 : NSObject
{
}

+ (void)requestFailed:(id)arg1;
+ (void)requestSuccess:(id)arg1;
+ (void)requestEnded:(id)arg1;
+ (void)setLogEnabled:(_Bool)arg1;
+ (void)trackPageEnd:(id)arg1;
+ (void)trackPageBegin:(id)arg1 withPageType:(int)arg2;
+ (void)trackPageBegin:(id)arg1;
+ (void)removeGlobalKV:(id)arg1;
+ (id)addKVO:(id)arg1;
+ (void)setGlobalKV:(id)arg1 value:(id)arg2;
+ (void)trackEvent:(id)arg1 label:(id)arg2 parameters:(id)arg3;
+ (void)trackEvent:(id)arg1 label:(id)arg2;
+ (void)trackEvent:(id)arg1;
+ (void)setLatitude:(double)arg1 longitude:(double)arg2;
+ (void)setSignalReportEnabled:(_Bool)arg1;
+ (void)setExceptionReportEnabled:(_Bool)arg1;
+ (void)doCheckSession;
+ (void)initWithWatch:(id)arg1;
+ (void)sessionStarted:(id)arg1 withChannelId:(id)arg2;
+ (void)setVersionWithCode:(id)arg1 name:(id)arg2;
+ (id)getDeviceID;
+ (void)setChannelId:(id)arg1;
+ (void)enterForeground:(id)arg1;
+ (void)enterBackground:(id)arg1;
+ (void)startTimer;
+ (void)continueRequest;
+ (void)terminateRequestAndLauch;
+ (void)addInitRequest:(id)arg1;
+ (void)initRequestAndLaunch;
+ (void)fullFillInitProfile:(id)arg1;
+ (void)addLaunchRequest:(id)arg1 WithSession:(id)arg2;
+ (void)addLaunchRequest:(id)arg1;
+ (void)packAppExceptions:(id)arg1 reservedDic:(id)arg2 currentItemCount:(int *)arg3;
+ (void)packActivities:(id)arg1 reservedDic:(id)arg2 currentItemCount:(int *)arg3;
+ (void)packAppEvents:(id)arg1 reservedDic:(id)arg2 currentItemCount:(int *)arg3;
+ (void)addProfile:(id)arg1;
+ (void)sendData:(id)arg1 body:(id)arg2 userInfo:(id)arg3;
+ (id)compatibleDataDictionary;
+ (void)startPageTracking;
+ (void)endPageTracking;
+ (void)saveStatistics;
+ (void)saveMemoryDataAndPages;
+ (void)exceptionOccur:(id)arg1 withHashCode:(id)arg2;
+ (struct dispatch_queue_s *)getNetworkQueue;
+ (struct dispatch_queue_s *)getInterfaceQueue;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class GTXLruCache, GTXMutableDictionary, NSOperationQueue, NSRecursiveLock;

@interface GTXAppenderManager : NSObject
{
    GTXMutableDictionary *_appenderDictionary;
    NSOperationQueue *_operationQueue;
    GTXLruCache *_logEventCache;
    NSRecursiveLock *_lock;
}

+ (void)safeCloseAppender:(id)arg1;
+ (id)appender:(id)arg1;
+ (void)readCache;
+ (void)append:(id)arg1;
+ (void)interrupt;
+ (id)manager;
@property(retain, nonatomic) NSRecursiveLock *lock; // @synthesize lock=_lock;
@property(retain, nonatomic) GTXLruCache *logEventCache; // @synthesize logEventCache=_logEventCache;
@property(retain, nonatomic) NSOperationQueue *operationQueue; // @synthesize operationQueue=_operationQueue;
@property(retain, nonatomic) GTXMutableDictionary *appenderDictionary; // @synthesize appenderDictionary=_appenderDictionary;
- (void).cxx_destruct;
- (id)generateFilename:(id)arg1 fragment:(int)arg2;
- (id)appenderKey:(id)arg1;
- (id)createAppender:(id)arg1 meta:(id)arg2 fragment:(int)arg3;
- (id)newAppender:(id)arg1;
- (id)getOperationQueue;
- (id)init;

@end


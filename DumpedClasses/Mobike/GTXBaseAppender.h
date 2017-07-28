//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GTXAppender.h"

@class GTXFileManager, NSRecursiveLock, NSString;

@interface GTXBaseAppender : GTXAppender
{
    _Bool _immediateFlush;
    _Bool _started;
    _Bool _isWriting;
    int _fragment;
    NSString *_filePath;
    GTXFileManager *_fileManager;
    NSRecursiveLock *_lock;
    unsigned long long _capacity;
}

@property(nonatomic) _Bool isWriting; // @synthesize isWriting=_isWriting;
@property(nonatomic) int fragment; // @synthesize fragment=_fragment;
@property(nonatomic) unsigned long long capacity; // @synthesize capacity=_capacity;
@property(nonatomic) _Bool started; // @synthesize started=_started;
@property(retain, nonatomic) NSRecursiveLock *lock; // @synthesize lock=_lock;
@property(retain, nonatomic) GTXFileManager *fileManager; // @synthesize fileManager=_fileManager;
@property(nonatomic) _Bool immediateFlush; // @synthesize immediateFlush=_immediateFlush;
@property(retain, nonatomic) NSString *filePath; // @synthesize filePath=_filePath;
- (void).cxx_destruct;
- (_Bool)isStarted;
- (void)stop;
- (_Bool)writeable;
- (_Bool)writing;
- (void)append:(id)arg1;
- (id)initWithLoggerName:(id)arg1 filePath:(id)arg2 layout:(id)arg3 capacity:(unsigned long long)arg4 fragment:(int)arg5 ignoreError:(_Bool)arg6 immediateFlush:(_Bool)arg7;

@end


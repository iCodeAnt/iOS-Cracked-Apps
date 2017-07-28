//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSThread;

@interface GXManagedThread : NSObject
{
    NSThread *gtThread_;
    SEL selector_;
    id target_;
    struct __CFRunLoop *runLoopRef_;
    struct __CFRunLoopSource *source_;
    _Bool started_;
}

+ (id)detachManagedTheadSelector:(SEL)arg1 toTarget:(id)arg2 withObject:(id)arg3;
@property(readonly, nonatomic) NSThread *gtThread; // @synthesize gtThread=gtThread_;
- (void).cxx_destruct;
- (void)stop;
- (void)doStop;
- (void)start;
- (void)dealloc;
- (id)initWithSelector:(SEL)arg1 toTarget:(id)arg2 withObject:(id)arg3;
- (void)threadRuntime:(id)arg1;

@end


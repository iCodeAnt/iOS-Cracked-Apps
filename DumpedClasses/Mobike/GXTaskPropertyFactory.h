//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary;

@interface GXTaskPropertyFactory : NSObject
{
    NSMutableDictionary *taskProperties_;
}

+ (void)destroy;
+ (id)sharedInstance;
- (void).cxx_destruct;
- (id)createProperty:(int)arg1 withMaxExistingCount:(int)arg2 andMaxRunningCount:(int)arg3;
- (id)getProperty:(int)arg1;
- (void)dealloc;
- (id)init;

@end


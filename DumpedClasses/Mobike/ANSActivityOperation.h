//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSOperation.h"

@class ANSActivity;

@interface ANSActivityOperation : NSOperation
{
    ANSActivity *_activity;
}

+ (id)operationByStartingActivityName:(id)arg1 options:(unsigned long long)arg2;
@property(readonly, nonatomic) ANSActivity *activity; // @synthesize activity=_activity;
- (void).cxx_destruct;
- (void)main;
- (void)startActivityWithName:(id)arg1 options:(unsigned long long)arg2;

@end


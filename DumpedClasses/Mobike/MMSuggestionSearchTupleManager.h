//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray;

@interface MMSuggestionSearchTupleManager : NSObject
{
    NSMutableArray *_tuples;
}

@property(retain, nonatomic) NSMutableArray *tuples; // @synthesize tuples=_tuples;
- (void).cxx_destruct;
- (id)removeTupleForKey:(id)arg1;
- (void)addTupleWithKey:(id)arg1 request:(id)arg2 completeion:(CDUnknownBlockType)arg3;
- (id)init;

@end


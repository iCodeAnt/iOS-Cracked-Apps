//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray;

@interface MMSuggestionResult : NSObject
{
    NSArray *_poiList;
}

+ (id)fromGaode:(id)arg1;
+ (id)fromTencent:(id)arg1;
+ (id)fromBaidu:(id)arg1;
@property(retain, nonatomic) NSArray *poiList; // @synthesize poiList=_poiList;
- (void).cxx_destruct;
- (id)description;

@end


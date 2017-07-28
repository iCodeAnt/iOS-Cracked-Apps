//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray;

@interface STPAspectsContainer : NSObject
{
    NSArray *_beforeAspects;
    NSArray *_insteadAspects;
    NSArray *_afterAspects;
}

@property(copy) NSArray *afterAspects; // @synthesize afterAspects=_afterAspects;
@property(copy) NSArray *insteadAspects; // @synthesize insteadAspects=_insteadAspects;
@property(copy) NSArray *beforeAspects; // @synthesize beforeAspects=_beforeAspects;
- (void).cxx_destruct;
- (id)description;
- (_Bool)removeAspect:(id)arg1;
- (void)addAspect:(id)arg1 withOptions:(unsigned long long)arg2;
- (_Bool)hasAspects;

@end


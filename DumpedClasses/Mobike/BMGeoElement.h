//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface BMGeoElement : NSObject
{
    NSString *uid;
    int index;
    NSString *text;
    struct BMPoint pt;
}

@property(nonatomic) struct BMPoint pt; // @synthesize pt;
@property(retain, nonatomic) NSString *text; // @synthesize text;
@property(nonatomic) int index; // @synthesize index;
@property(retain, nonatomic) NSString *uid; // @synthesize uid;
- (void).cxx_destruct;
- (void)dealloc;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSDate.h"

@class NSNumber, NSString;

@interface NSDate (MobikeExtension)
+ (_Bool)isTimeBetween:(double)arg1 later:(double)arg2;
+ (long long)getCurrentDay;
+ (long long)currTimeStamp;
+ (unsigned long long)currentTimeStamp;
+ (unsigned long long)timeStamp;
+ (id)stringFromDate:(id)arg1 format:(id)arg2;
- (_Bool)isdaysBeforeDate:(id)arg1;
- (id)stringWithDateFormat:(id)arg1;
@property(readonly, nonatomic) NSNumber *number; // @dynamic number;
@property(readonly, nonatomic) NSString *string; // @dynamic string;
@end


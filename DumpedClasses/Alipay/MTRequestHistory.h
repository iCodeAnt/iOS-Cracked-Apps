//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MTModel.h"

@class NSNumber, NSString;

@interface MTRequestHistory : MTModel
{
    NSString *_flag;
    NSString *_bundle;
    NSNumber *_time;
    NSNumber *_duration;
    NSNumber *_size;
}

@property(retain, nonatomic) NSNumber *size; // @synthesize size=_size;
@property(retain, nonatomic) NSNumber *duration; // @synthesize duration=_duration;
@property(retain, nonatomic) NSNumber *time; // @synthesize time=_time;
@property(retain, nonatomic) NSString *bundle; // @synthesize bundle=_bundle;
@property(retain, nonatomic) NSString *flag; // @synthesize flag=_flag;
- (void).cxx_destruct;
- (id)init;

@end

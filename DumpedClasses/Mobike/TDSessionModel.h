//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TDBaseModel.h"

@class NSString;

@interface TDSessionModel : TDBaseModel
{
    int _duration;
    NSString *_ID;
    long long _startTime;
    long long _activeTime;
    long long _endTime;
}

+ (id)sessionModelFromDictionary:(id)arg1;
@property(nonatomic) long long endTime; // @synthesize endTime=_endTime;
@property(nonatomic) int duration; // @synthesize duration=_duration;
@property(nonatomic) long long activeTime; // @synthesize activeTime=_activeTime;
@property(nonatomic) long long startTime; // @synthesize startTime=_startTime;
@property(copy, nonatomic) NSString *ID; // @synthesize ID=_ID;
- (void).cxx_destruct;
- (id)archiveToDictionary;

@end


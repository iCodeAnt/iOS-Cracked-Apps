//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MOPUserBehaviorTraceData, NSString;

@interface MOPTaskDetailRequest : NSObject
{
    MOPUserBehaviorTraceData *_traceData;
    NSString *_system;
    NSString *_city;
    NSString *_securityId;
    NSString *_isDaoWeiAuthorized;
    NSString *_taskId;
}

@property(retain, nonatomic) NSString *taskId; // @synthesize taskId=_taskId;
@property(retain, nonatomic) NSString *isDaoWeiAuthorized; // @synthesize isDaoWeiAuthorized=_isDaoWeiAuthorized;
@property(retain, nonatomic) NSString *securityId; // @synthesize securityId=_securityId;
@property(retain, nonatomic) NSString *city; // @synthesize city=_city;
@property(retain, nonatomic) NSString *system; // @synthesize system=_system;
@property(retain, nonatomic) MOPUserBehaviorTraceData *traceData; // @synthesize traceData=_traceData;
- (void).cxx_destruct;

@end


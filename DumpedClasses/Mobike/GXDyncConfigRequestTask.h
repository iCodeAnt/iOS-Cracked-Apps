//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GXTaskItem.h"

@class NSData, NSString;

@interface GXDyncConfigRequestTask : GXTaskItem
{
    NSData *_reportData;
    NSString *_checkCode;
}

+ (void)emptyServerDctInfo;
+ (id)readServerDctInfo;
+ (_Bool)saveServerDctInfo:(id)arg1;
+ (void)scheduleWithReportData:(id)arg1 andCheckCode:(id)arg2;
+ (_Bool)isTimeForUpload;
+ (id)buildPostBodyWithClientId:(id)arg1 andAppId:(id)arg2;
@property(retain, nonatomic) NSString *checkCode; // @synthesize checkCode=_checkCode;
@property(retain, nonatomic) NSData *reportData; // @synthesize reportData=_reportData;
- (void).cxx_destruct;
- (void)saveValueToUDKey:(id)arg1 andValue:(id)arg2;
- (void)onTimerForQueue:(id)arg1;
- (_Bool)handleResultData:(id)arg1;
- (void)dealloc;
- (id)initWithReportData:(id)arg1 andCheckCode:(id)arg2;

@end


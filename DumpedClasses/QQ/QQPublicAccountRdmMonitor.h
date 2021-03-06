//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary;

@interface QQPublicAccountRdmMonitor : NSObject
{
    NSMutableDictionary *_seqDic;
    NSMutableDictionary *_infoDic;
}

+ (id)instance;
@property(retain) NSMutableDictionary *infoDic; // @synthesize infoDic=_infoDic;
@property(retain) NSMutableDictionary *seqDic; // @synthesize seqDic=_seqDic;
- (void)doReport:(id)arg1 size:(int)arg2 isSucceed:(_Bool)arg3 info:(id)arg4 errCode:(int)arg5;
- (void)endLongMsgEvent:(id)arg1 size:(int)arg2 isSucceed:(_Bool)arg3 info:(id)arg4 errCode:(int)arg5;
- (void)stopLongMsgEvent:(id)arg1;
- (void)startLongMsgEvent:(id)arg1 msgid:(id)arg2 size:(int)arg3 info:(id)arg4;
- (void)dealloc;
- (id)init;

@end


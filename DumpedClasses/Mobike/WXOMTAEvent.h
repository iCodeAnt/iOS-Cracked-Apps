//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "WXOMTAEventProtocol.h"

@class NSString;

@interface WXOMTAEvent : NSObject <WXOMTAEventProtocol>
{
    _Bool _isRealTime;
    unsigned int _sid;
    unsigned int _ts;
    int _eventIndex;
    NSString *_timeStr;
    NSString *_appkey;
}

@property _Bool isRealTime; // @synthesize isRealTime=_isRealTime;
@property(copy, nonatomic) NSString *appkey; // @synthesize appkey=_appkey;
@property(copy, nonatomic) NSString *timeStr; // @synthesize timeStr=_timeStr;
@property int eventIndex; // @synthesize eventIndex=_eventIndex;
@property unsigned int ts; // @synthesize ts=_ts;
@property unsigned int sid; // @synthesize sid=_sid;
- (void).cxx_destruct;
- (id)toJsonString;
- (int)generateIDX;
- (int)getRandomNumber:(int)arg1 to:(int)arg2;
- (void)encode:(id)arg1;
- (int)getType;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


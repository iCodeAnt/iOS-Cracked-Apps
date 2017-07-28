//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSString;

@interface GTXLogger : NSObject
{
    NSString *_loggerName;
    NSArray *_logLevels;
}

@property(retain, nonatomic) NSArray *logLevels; // @synthesize logLevels=_logLevels;
@property(retain, nonatomic) NSString *loggerName; // @synthesize loggerName=_loggerName;
- (void).cxx_destruct;
- (void)setMsgLayout:(id)arg1;
- (void)fatal:(id)arg1 msg:(id)arg2 capture:(_Bool)arg3;
- (void)fatal:(id)arg1 msg:(id)arg2;
- (void)exception:(id)arg1 msg:(id)arg2 capture:(_Bool)arg3;
- (void)exception:(id)arg1 msg:(id)arg2;
- (void)error:(id)arg1 msg:(id)arg2 capture:(_Bool)arg3;
- (void)error:(id)arg1 msg:(id)arg2;
- (void)warn:(id)arg1 msg:(id)arg2 capture:(_Bool)arg3;
- (void)warn:(id)arg1 msg:(id)arg2;
- (void)info:(id)arg1 msg:(id)arg2 capture:(_Bool)arg3;
- (void)info:(id)arg1 msg:(id)arg2;
- (void)debug:(id)arg1 msg:(id)arg2 capture:(_Bool)arg3;
- (void)debug:(id)arg1 msg:(id)arg2;
- (void)verbose:(id)arg1 msg:(id)arg2 capture:(_Bool)arg3;
- (void)verbose:(id)arg1 msg:(id)arg2;
- (void)recordLogLevel:(id)arg1;
- (_Bool)isEnabled:(int)arg1;
- (id)getMsgLayout;
- (id)getName;
- (id)initWithName:(id)arg1;

@end


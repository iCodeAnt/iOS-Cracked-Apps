//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CAAnimation;

@interface TuSDKTSCControllerTrans : NSObject
{
    CAAnimation *_inTran;
    CAAnimation *_outTran;
}

+ (id)initWithTnTran:(id)arg1 outTran:(id)arg2;
@property(retain, nonatomic) CAAnimation *outTran; // @synthesize outTran=_outTran;
@property(retain, nonatomic) CAAnimation *inTran; // @synthesize inTran=_inTran;
- (void).cxx_destruct;

@end


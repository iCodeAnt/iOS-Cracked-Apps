//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JceObjectV2.h"

@class NSString;

@interface QLJCEMarketAttentItem : JceObjectV2
{
    BOOL jcev2_p_1_r_attentState;
    NSString *jcev2_p_0_r_attentKey;
}

+ (id)jceType;
+ (void)initialize;
@property(nonatomic, getter=jce_attentState, setter=setJce_attentState:) BOOL jcev2_p_1_r_attentState; // @synthesize jcev2_p_1_r_attentState;
@property(retain, nonatomic, getter=jce_attentKey, setter=setJce_attentKey:) NSString *jcev2_p_0_r_attentKey; // @synthesize jcev2_p_0_r_attentKey;
- (void).cxx_destruct;
- (id)init;

@end

//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JceObjectV2.h"

@class NSString, QLJCELiveGiftItem;

@interface QLJCEGiftNode : JceObjectV2
{
    int jcev2_p_1_r_num;
    int jcev2_p_3_o_givetime;
    NSString *jcev2_p_0_r_id;
    QLJCELiveGiftItem *jcev2_p_2_o_info;
}

+ (id)jceType;
+ (void)initialize;
@property(nonatomic, getter=jce_givetime, setter=setJce_givetime:) int jcev2_p_3_o_givetime; // @synthesize jcev2_p_3_o_givetime;
@property(retain, nonatomic, getter=jce_info, setter=setJce_info:) QLJCELiveGiftItem *jcev2_p_2_o_info; // @synthesize jcev2_p_2_o_info;
@property(nonatomic, getter=jce_num, setter=setJce_num:) int jcev2_p_1_r_num; // @synthesize jcev2_p_1_r_num;
@property(retain, nonatomic, getter=jce_id, setter=setJce_id:) NSString *jcev2_p_0_r_id; // @synthesize jcev2_p_0_r_id;
- (void).cxx_destruct;
- (id)init;

@end

//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JceObjectV2.h"

@class NSString, QLJCEActPopItemData;

@interface QLJCEActPopResponse : JceObjectV2
{
    _Bool jcev2_p_1_r_bShow;
    int jcev2_p_0_r_errCode;
    QLJCEActPopItemData *jcev2_p_2_o_oPopData;
    long long jcev2_p_3_o_lShowTime;
    NSString *jcev2_p_4_o_sEffectUrl;
    NSString *jcev2_p_5_o_sSuccessTxt;
    NSString *jcev2_p_6_o_sFailTxt;
}

+ (id)jceType;
+ (void)initialize;
@property(retain, nonatomic, getter=jce_sFailTxt, setter=setJce_sFailTxt:) NSString *jcev2_p_6_o_sFailTxt; // @synthesize jcev2_p_6_o_sFailTxt;
@property(retain, nonatomic, getter=jce_sSuccessTxt, setter=setJce_sSuccessTxt:) NSString *jcev2_p_5_o_sSuccessTxt; // @synthesize jcev2_p_5_o_sSuccessTxt;
@property(retain, nonatomic, getter=jce_sEffectUrl, setter=setJce_sEffectUrl:) NSString *jcev2_p_4_o_sEffectUrl; // @synthesize jcev2_p_4_o_sEffectUrl;
@property(nonatomic, getter=jce_lShowTime, setter=setJce_lShowTime:) long long jcev2_p_3_o_lShowTime; // @synthesize jcev2_p_3_o_lShowTime;
@property(retain, nonatomic, getter=jce_oPopData, setter=setJce_oPopData:) QLJCEActPopItemData *jcev2_p_2_o_oPopData; // @synthesize jcev2_p_2_o_oPopData;
@property(nonatomic, getter=jce_bShow, setter=setJce_bShow:) _Bool jcev2_p_1_r_bShow; // @synthesize jcev2_p_1_r_bShow;
@property(nonatomic, getter=jce_errCode, setter=setJce_errCode:) int jcev2_p_0_r_errCode; // @synthesize jcev2_p_0_r_errCode;
- (void).cxx_destruct;
- (id)init;

@end

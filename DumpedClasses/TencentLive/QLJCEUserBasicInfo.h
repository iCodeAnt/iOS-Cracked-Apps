//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JceObjectV2.h"

@class NSString;

@interface QLJCEUserBasicInfo : JceObjectV2
{
    _Bool jcev2_p_6_o_bHas100;
    NSString *jcev2_p_0_r_strUserId;
    NSString *jcev2_p_1_o_strSex;
    NSString *jcev2_p_2_o_strNick;
    NSString *jcev2_p_3_o_strHeadUrl;
    NSString *jcev2_p_4_o_strCity;
    NSString *jcev2_p_5_o_strCountry;
}

+ (id)jceType;
+ (void)initialize;
@property(nonatomic, getter=jce_bHas100, setter=setJce_bHas100:) _Bool jcev2_p_6_o_bHas100; // @synthesize jcev2_p_6_o_bHas100;
@property(retain, nonatomic, getter=jce_strCountry, setter=setJce_strCountry:) NSString *jcev2_p_5_o_strCountry; // @synthesize jcev2_p_5_o_strCountry;
@property(retain, nonatomic, getter=jce_strCity, setter=setJce_strCity:) NSString *jcev2_p_4_o_strCity; // @synthesize jcev2_p_4_o_strCity;
@property(retain, nonatomic, getter=jce_strHeadUrl, setter=setJce_strHeadUrl:) NSString *jcev2_p_3_o_strHeadUrl; // @synthesize jcev2_p_3_o_strHeadUrl;
@property(retain, nonatomic, getter=jce_strNick, setter=setJce_strNick:) NSString *jcev2_p_2_o_strNick; // @synthesize jcev2_p_2_o_strNick;
@property(retain, nonatomic, getter=jce_strSex, setter=setJce_strSex:) NSString *jcev2_p_1_o_strSex; // @synthesize jcev2_p_1_o_strSex;
@property(retain, nonatomic, getter=jce_strUserId, setter=setJce_strUserId:) NSString *jcev2_p_0_r_strUserId; // @synthesize jcev2_p_0_r_strUserId;
- (void).cxx_destruct;
- (id)init;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JceObjectV2.h"

@class NSArray, NSString, QLJCEVideoFilter;

@interface QLJCESearchResponse : JceObjectV2
{
    _Bool jcev2_p_5_o_isHaveNextPage;
    int jcev2_p_0_r_errCode;
    NSArray *jcev2_p_1_o_uiData__b0x9i_VOQLJCETempletLine;
    QLJCEVideoFilter *jcev2_p_2_o_filter;
    NSString *jcev2_p_3_o_pageContext;
    NSString *jcev2_p_4_o_searchSession;
    NSString *jcev2_p_6_o_reportParams;
    NSString *jcev2_p_7_o_matchResult;
    NSArray *jcev2_p_8_o_subUIData__b0x9i_VOQLJCETempletLine;
}

+ (id)jceType;
+ (void)initialize;
@property(retain, nonatomic, getter=jce_subUIData, setter=setJce_subUIData:) NSArray *jcev2_p_8_o_subUIData__b0x9i_VOQLJCETempletLine; // @synthesize jcev2_p_8_o_subUIData__b0x9i_VOQLJCETempletLine;
@property(retain, nonatomic, getter=jce_matchResult, setter=setJce_matchResult:) NSString *jcev2_p_7_o_matchResult; // @synthesize jcev2_p_7_o_matchResult;
@property(retain, nonatomic, getter=jce_reportParams, setter=setJce_reportParams:) NSString *jcev2_p_6_o_reportParams; // @synthesize jcev2_p_6_o_reportParams;
@property(nonatomic, getter=jce_isHaveNextPage, setter=setJce_isHaveNextPage:) _Bool jcev2_p_5_o_isHaveNextPage; // @synthesize jcev2_p_5_o_isHaveNextPage;
@property(retain, nonatomic, getter=jce_searchSession, setter=setJce_searchSession:) NSString *jcev2_p_4_o_searchSession; // @synthesize jcev2_p_4_o_searchSession;
@property(retain, nonatomic, getter=jce_pageContext, setter=setJce_pageContext:) NSString *jcev2_p_3_o_pageContext; // @synthesize jcev2_p_3_o_pageContext;
@property(retain, nonatomic, getter=jce_filter, setter=setJce_filter:) QLJCEVideoFilter *jcev2_p_2_o_filter; // @synthesize jcev2_p_2_o_filter;
@property(retain, nonatomic, getter=jce_uiData, setter=setJce_uiData:) NSArray *jcev2_p_1_o_uiData__b0x9i_VOQLJCETempletLine; // @synthesize jcev2_p_1_o_uiData__b0x9i_VOQLJCETempletLine;
@property(nonatomic, getter=jce_errCode, setter=setJce_errCode:) int jcev2_p_0_r_errCode; // @synthesize jcev2_p_0_r_errCode;
- (void).cxx_destruct;
- (id)init;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JceObjectV2.h"

@class NSString, QQWalletDateRange;

@interface QQWalletMarket : JceObjectV2
{
}

+ (id)jceType;
- (_Bool)ifShowMarketIcon:(id)arg1;
- (_Bool)isInValidDate;

// Remaining properties
@property(nonatomic, getter=jce_type, setter=setJce_type:) int jcev2_p_0_o_type; // @dynamic jcev2_p_0_o_type;
@property(retain, nonatomic, getter=jce_url, setter=setJce_url:) NSString *jcev2_p_1_o_url; // @dynamic jcev2_p_1_o_url;
@property(retain, nonatomic, getter=jce_range, setter=setJce_range:) QQWalletDateRange *jcev2_p_2_o_range; // @dynamic jcev2_p_2_o_range;

@end

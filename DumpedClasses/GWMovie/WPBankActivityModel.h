//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug  6 2017 20:42:30).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GWObject.h"

@class NSString;

@interface WPBankActivityModel : GWObject
{
    NSString *_title;
    NSString *_desc;
    long long _bankActId;
    NSString *_isEnable;
    double _discount;
    NSString *_discountType;
    NSString *_validCardBin;
    NSString *_logo;
    NSString *_sType;
    NSString *_sText;
    NSString *_payMethod;
}

+ (id)mj_replacedKeyFromPropertyName;
@property(copy, nonatomic) NSString *payMethod; // @synthesize payMethod=_payMethod;
@property(copy, nonatomic) NSString *sText; // @synthesize sText=_sText;
@property(copy, nonatomic) NSString *sType; // @synthesize sType=_sType;
@property(copy, nonatomic) NSString *logo; // @synthesize logo=_logo;
@property(copy, nonatomic) NSString *validCardBin; // @synthesize validCardBin=_validCardBin;
@property(copy, nonatomic) NSString *discountType; // @synthesize discountType=_discountType;
@property(nonatomic) double discount; // @synthesize discount=_discount;
@property(copy, nonatomic) NSString *isEnable; // @synthesize isEnable=_isEnable;
@property(nonatomic) long long bankActId; // @synthesize bankActId=_bankActId;
@property(copy, nonatomic) NSString *desc; // @synthesize desc=_desc;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (_Bool)isValidWithPayChannelArray:(id)arg1;
- (double)readableDiscount;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSString;

@interface STPPaymentConfiguration : NSObject <NSCopying>
{
    _Bool _ineligibleForSmsAutofill;
    _Bool _smsAutofillDisabled;
    NSString *_publishableKey;
    unsigned long long _additionalPaymentMethods;
    unsigned long long _requiredBillingAddressFields;
    unsigned long long _requiredShippingAddressFields;
    unsigned long long _shippingType;
    NSString *_companyName;
    NSString *_appleMerchantIdentifier;
}

+ (id)sharedConfiguration;
+ (void)initialize;
@property(nonatomic) _Bool smsAutofillDisabled; // @synthesize smsAutofillDisabled=_smsAutofillDisabled;
@property(copy, nonatomic) NSString *appleMerchantIdentifier; // @synthesize appleMerchantIdentifier=_appleMerchantIdentifier;
@property(copy, nonatomic) NSString *companyName; // @synthesize companyName=_companyName;
@property(nonatomic) unsigned long long shippingType; // @synthesize shippingType=_shippingType;
@property(nonatomic) unsigned long long requiredShippingAddressFields; // @synthesize requiredShippingAddressFields=_requiredShippingAddressFields;
@property(nonatomic) unsigned long long requiredBillingAddressFields; // @synthesize requiredBillingAddressFields=_requiredBillingAddressFields;
@property(nonatomic) unsigned long long additionalPaymentMethods; // @synthesize additionalPaymentMethods=_additionalPaymentMethods;
@property(copy, nonatomic) NSString *publishableKey; // @synthesize publishableKey=_publishableKey;
@property(nonatomic) _Bool ineligibleForSmsAutofill; // @synthesize ineligibleForSmsAutofill=_ineligibleForSmsAutofill;
- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool applePayEnabled;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end


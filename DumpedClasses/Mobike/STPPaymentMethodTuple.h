//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray;

@interface STPPaymentMethodTuple : NSObject
{
    id <STPPaymentMethod> _selectedPaymentMethod;
    NSArray *_paymentMethods;
}

+ (id)tupleWithCardTuple:(id)arg1 applePayEnabled:(_Bool)arg2;
+ (id)tupleWithPaymentMethods:(id)arg1 selectedPaymentMethod:(id)arg2;
@property(retain, nonatomic) NSArray *paymentMethods; // @synthesize paymentMethods=_paymentMethods;
@property(retain, nonatomic) id <STPPaymentMethod> selectedPaymentMethod; // @synthesize selectedPaymentMethod=_selectedPaymentMethod;
- (void).cxx_destruct;

@end


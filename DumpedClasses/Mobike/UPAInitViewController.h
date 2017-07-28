//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UPABaseViewController.h"

#import "PKPaymentAuthorizationViewControllerDelegate.h"

@class NSMutableArray, NSString, UPPayResult;

@interface UPAInitViewController : UPABaseViewController <PKPaymentAuthorizationViewControllerDelegate>
{
    _Bool _isPostingPayLoad;
    CDUnknownBlockType _apCompletion;
    UPPayResult *_mPayResult;
    NSMutableArray *_paymentSummaryItems;
    long long _currentPKPaymentSatus;
}

@property _Bool isPostingPayLoad; // @synthesize isPostingPayLoad=_isPostingPayLoad;
@property long long currentPKPaymentSatus; // @synthesize currentPKPaymentSatus=_currentPKPaymentSatus;
@property(retain, nonatomic) NSMutableArray *paymentSummaryItems; // @synthesize paymentSummaryItems=_paymentSummaryItems;
@property(retain, nonatomic) UPPayResult *mPayResult; // @synthesize mPayResult=_mPayResult;
@property(copy, nonatomic) CDUnknownBlockType apCompletion; // @synthesize apCompletion=_apCompletion;
- (void).cxx_destruct;
- (void)payFailedWithError:(id)arg1 type:(long long)arg2 response:(id)arg3;
- (void)paySuccess;
- (void)postCommonCmd:(id)arg1 pkPayment:(id)arg2;
- (void)exitPlugin;
- (void)paymentAuthorizationViewControllerDidFinish:(id)arg1;
- (void)paymentAuthorizationViewController:(id)arg1 didAuthorizePayment:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)paymentAuthorizationViewController:(id)arg1 didSelectPaymentMethod:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)comunicateToUPMPDidFailWithErrorType:(long long)arg1 error:(id)arg2 response:(id)arg3;
- (void)startAPPay;
- (void)initFailedWithError:(id)arg1;
- (void)postInitMessage;
- (void)resetStatusBar;
- (void)viewDidUnload;
- (void)viewDidLoad;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


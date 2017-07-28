//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "STPCoreScrollViewController.h"

#import "STPSMSCodeTextFieldDelegate.h"

@class NSString, NSTimer, STPCheckoutAPIClient, STPCheckoutAPIVerification, STPPaymentActivityIndicatorView, STPSMSCodeTextField, UIButton, UILabel;

@interface STPSMSCodeViewController : STPCoreScrollViewController <STPSMSCodeTextFieldDelegate>
{
    _Bool _loading;
    id <STPSMSCodeViewControllerDelegate> _delegate;
    STPCheckoutAPIClient *_checkoutAPIClient;
    STPCheckoutAPIVerification *_verification;
    NSString *_redactedPhone;
    NSTimer *_hideSMSSentLabelTimer;
    UILabel *_topLabel;
    STPSMSCodeTextField *_codeField;
    UILabel *_bottomLabel;
    UIButton *_cancelButton;
    UILabel *_errorLabel;
    UILabel *_smsSentLabel;
    UIButton *_pasteFromClipboardButton;
    STPPaymentActivityIndicatorView *_activityIndicator;
}

@property(nonatomic) _Bool loading; // @synthesize loading=_loading;
@property(nonatomic) __weak STPPaymentActivityIndicatorView *activityIndicator; // @synthesize activityIndicator=_activityIndicator;
@property(nonatomic) __weak UIButton *pasteFromClipboardButton; // @synthesize pasteFromClipboardButton=_pasteFromClipboardButton;
@property(nonatomic) __weak UILabel *smsSentLabel; // @synthesize smsSentLabel=_smsSentLabel;
@property(nonatomic) __weak UILabel *errorLabel; // @synthesize errorLabel=_errorLabel;
@property(nonatomic) __weak UIButton *cancelButton; // @synthesize cancelButton=_cancelButton;
@property(nonatomic) __weak UILabel *bottomLabel; // @synthesize bottomLabel=_bottomLabel;
@property(nonatomic) __weak STPSMSCodeTextField *codeField; // @synthesize codeField=_codeField;
@property(nonatomic) __weak UILabel *topLabel; // @synthesize topLabel=_topLabel;
@property(retain, nonatomic) NSTimer *hideSMSSentLabelTimer; // @synthesize hideSMSSentLabelTimer=_hideSMSSentLabelTimer;
@property(retain, nonatomic) NSString *redactedPhone; // @synthesize redactedPhone=_redactedPhone;
@property(retain, nonatomic) STPCheckoutAPIVerification *verification; // @synthesize verification=_verification;
@property(retain, nonatomic) STPCheckoutAPIClient *checkoutAPIClient; // @synthesize checkoutAPIClient=_checkoutAPIClient;
@property(nonatomic) __weak id <STPSMSCodeViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)pasteCodeFromClipboard;
- (void)setPasteFromClipboardButtonVisible:(_Bool)arg1;
- (void)cancel;
- (void)handleBackOrCancelTapped:(id)arg1;
- (void)codeTextField:(id)arg1 didEnterCode:(id)arg2;
- (void)hideSMSSentLabel;
- (void)viewDidAppear:(_Bool)arg1;
- (double)contentMaxY;
- (void)viewDidLayoutSubviews;
- (void)updateAppearance;
- (void)applicationDidBecomeActive;
- (void)createAndSetupViews;
- (void)dealloc;
- (id)initWithCheckoutAPIClient:(id)arg1 verification:(id)arg2 redactedPhone:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


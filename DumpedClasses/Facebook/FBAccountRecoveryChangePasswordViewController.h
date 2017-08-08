//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "FBAccountAccessTextEntryViewDelegate-Protocol.h"

@class FBAccountAccessTextEntryView, FBAccountRecoveryChangePasswordController, FBAccountRecoveryFlowData, NSString;
@protocol FBAccountRecoveryChangePasswordFlowControlling;

@interface FBAccountRecoveryChangePasswordViewController : UIViewController <FBAccountAccessTextEntryViewDelegate>
{
    FBAccountRecoveryFlowData *_flowData;
    FBAccountRecoveryChangePasswordController *_changePasswordController;
    id <FBAccountRecoveryChangePasswordFlowControlling> _changePasswordFlowControlling;
    FBAccountAccessTextEntryView *_textEntryView;
}

- (void).cxx_destruct;
- (void)textEntryViewDidTapSecondaryButton:(id)arg1;
- (void)textEntryView:(id)arg1 didTapContinueWithText:(id)arg2;
- (void)_handleChangePasswordCompletionWithUserID:(id)arg1 password:(id)arg2 error:(id)arg3;
- (void)viewDidAppear:(_Bool)arg1;
- (void)loadView;
- (id)initWithFlowData:(id)arg1 changePasswordController:(id)arg2 changePasswordFlowControlling:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

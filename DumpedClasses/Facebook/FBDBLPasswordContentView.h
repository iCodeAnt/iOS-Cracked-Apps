//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIActivityIndicatorView, UIButton, UILabel, UITextField;

@interface FBDBLPasswordContentView : UIView
{
    UIView *_inputContainer;
    UILabel *_instructionsLabel;
    UIActivityIndicatorView *_activityIndicator;
    UITextField *_passwordInput;
    UIButton *_loginButton;
}

@property(readonly, nonatomic) UIButton *loginButton; // @synthesize loginButton=_loginButton;
@property(readonly, nonatomic) UITextField *passwordInput; // @synthesize passwordInput=_passwordInput;
- (void).cxx_destruct;
- (id)_makeInstructionsLabel:(id)arg1 withConfiguration:(id)arg2;
- (id)_makeLoginButtonWithConfiguration:(id)arg1;
- (id)_makePasswordInputWithConfiguration:(id)arg1;
- (id)_makeInputContainerWithConfiguration:(id)arg1;
- (void)stopActivityIndicator;
- (void)startActivityIndicator;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)initWithInstructions:(id)arg1 configuration:(id)arg2;

@end

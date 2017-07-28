//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITextField.h"

#import "UITextFieldDelegate.h"

@class IQPopUp, NSMutableArray, NSString, TextFieldValidatorSupport, UIColor, UIView;

@interface TextFieldValidator : UITextField <UITextFieldDelegate>
{
    NSString *strLengthValidationMsg;
    TextFieldValidatorSupport *supportObj;
    NSString *strMsg;
    NSMutableArray *arrRegx;
    IQPopUp *popUp;
    UIColor *popUpColor;
    _Bool validateOnCharacterChanged;
    _Bool isMandatory;
    _Bool validateOnResign;
    UIView *presentInView;
}

@property(nonatomic) _Bool validateOnResign; // @synthesize validateOnResign;
@property(nonatomic) _Bool isMandatory; // @synthesize isMandatory;
@property(retain, nonatomic) UIColor *popUpColor; // @synthesize popUpColor;
@property(nonatomic) _Bool validateOnCharacterChanged; // @synthesize validateOnCharacterChanged;
@property(retain, nonatomic) UIView *presentInView; // @synthesize presentInView;
- (void).cxx_destruct;
- (void)showErrorWithMsg:(id)arg1;
- (void)showErrorIconForMsg:(id)arg1;
- (_Bool)validateString:(id)arg1 withRegex:(id)arg2;
- (void)tapOnError;
- (void)didHideKeyboard;
- (void)dismissPopup;
- (_Bool)validate;
- (void)addConfirmValidationTo:(id)arg1 withMsg:(id)arg2;
- (void)updateLengthValidationMsg:(id)arg1;
- (void)addRegx:(id)arg1 withMsg:(id)arg2;
- (void)setDelegate:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


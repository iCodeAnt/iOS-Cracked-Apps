//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSString, UILabel;

@interface GestureUserTipView : UIView
{
    NSString *_accountInfo;
    NSString *_errorInfo;
    UILabel *_accountLabel;
    UILabel *_errorLabel;
}

@property(retain, nonatomic) UILabel *errorLabel; // @synthesize errorLabel=_errorLabel;
@property(retain, nonatomic) UILabel *accountLabel; // @synthesize accountLabel=_accountLabel;
@property(copy, nonatomic) NSString *errorInfo; // @synthesize errorInfo=_errorInfo;
@property(copy, nonatomic) NSString *accountInfo; // @synthesize accountInfo=_accountInfo;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect)arg1;

@end


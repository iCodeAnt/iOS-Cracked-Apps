//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSString, STPTheme, UIButton, UILabel;

@interface STPSectionHeaderView : UIView
{
    _Bool _buttonHidden;
    STPTheme *_theme;
    NSString *_title;
    UIButton *_button;
    UILabel *_label;
    struct UIEdgeInsets _buttonInsets;
}

@property(nonatomic) struct UIEdgeInsets buttonInsets; // @synthesize buttonInsets=_buttonInsets;
@property(nonatomic) __weak UILabel *label; // @synthesize label=_label;
@property(nonatomic) _Bool buttonHidden; // @synthesize buttonHidden=_buttonHidden;
@property(nonatomic) __weak UIButton *button; // @synthesize button=_button;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) STPTheme *theme; // @synthesize theme=_theme;
- (void).cxx_destruct;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (double)heightForButtonText:(id)arg1 width:(double)arg2;
- (double)heightThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)updateAppearance;
- (id)initWithFrame:(struct CGRect)arg1;

@end


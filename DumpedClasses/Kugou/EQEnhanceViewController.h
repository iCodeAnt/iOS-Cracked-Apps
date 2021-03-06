//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

@class EQEnhanceButton, EQEnhanceScaleMarkView, KGSlider, KGThemeLabel, UIImageView;

@interface EQEnhanceViewController : UIViewController
{
    EQEnhanceButton *_bt1;
    EQEnhanceButton *_bt2;
    UIImageView *_bg1;
    UIImageView *_bg2;
    UIImageView *_Enhance_minus02;
    UIImageView *_Enhance_add02;
    UIImageView *_Enhance_minus01;
    UIImageView *_Enhance_add01;
    KGThemeLabel *_Btn02_title;
    KGThemeLabel *_Btn01_title;
    KGThemeLabel *_L_title;
    KGThemeLabel *_R_title;
    EQEnhanceScaleMarkView *_Enhance_Scale_view;
    KGSlider *_Slider;
    KGThemeLabel *_BalanceTitle;
    UIImageView *_enhance_drum02;
    UIImageView *_enhance_drum01;
    double _bass;
    double _surround;
    double _balance;
}

@property(nonatomic) double balance; // @synthesize balance=_balance;
@property(nonatomic) double surround; // @synthesize surround=_surround;
@property(nonatomic) double bass; // @synthesize bass=_bass;
@property(nonatomic) __weak UIImageView *enhance_drum01; // @synthesize enhance_drum01=_enhance_drum01;
@property(nonatomic) __weak UIImageView *enhance_drum02; // @synthesize enhance_drum02=_enhance_drum02;
@property(nonatomic) __weak KGThemeLabel *BalanceTitle; // @synthesize BalanceTitle=_BalanceTitle;
@property(nonatomic) __weak KGSlider *Slider; // @synthesize Slider=_Slider;
@property(nonatomic) __weak EQEnhanceScaleMarkView *Enhance_Scale_view; // @synthesize Enhance_Scale_view=_Enhance_Scale_view;
@property(nonatomic) __weak KGThemeLabel *R_title; // @synthesize R_title=_R_title;
@property(nonatomic) __weak KGThemeLabel *L_title; // @synthesize L_title=_L_title;
@property(nonatomic) __weak KGThemeLabel *Btn01_title; // @synthesize Btn01_title=_Btn01_title;
@property(nonatomic) __weak KGThemeLabel *Btn02_title; // @synthesize Btn02_title=_Btn02_title;
@property(nonatomic) __weak UIImageView *Enhance_add01; // @synthesize Enhance_add01=_Enhance_add01;
@property(nonatomic) __weak UIImageView *Enhance_minus01; // @synthesize Enhance_minus01=_Enhance_minus01;
@property(nonatomic) __weak UIImageView *Enhance_add02; // @synthesize Enhance_add02=_Enhance_add02;
@property(nonatomic) __weak UIImageView *Enhance_minus02; // @synthesize Enhance_minus02=_Enhance_minus02;
@property(nonatomic) __weak UIImageView *bg2; // @synthesize bg2=_bg2;
@property(nonatomic) __weak UIImageView *bg1; // @synthesize bg1=_bg1;
- (void).cxx_destruct;
- (void)balanceEndEvent:(id)arg1;
- (void)balanceEvent:(id)arg1;
- (void)bassEvent:(id)arg1;
- (void)surroundEvent:(id)arg1;
- (void)resetValues:(id)arg1;
- (void)didReceiveMemoryWarning;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillLayoutSubviews;
- (void)viewDidLoad;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

@end


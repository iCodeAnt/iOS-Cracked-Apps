//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBSNSFollowTableViewCell.h"

@class UIButton, UILabel, UIView;

@interface TBSNSFollowBaseTableViewCell : TBSNSFollowTableViewCell
{
    _Bool _showFlagLabel;
    _Bool _showImageBackgroundView;
    _Bool _showIndicateBtn;
    UILabel *_alertView;
    UIView *_imageBackgroundView;
    UILabel *_flagLabel;
    UIButton *_indicateButton;
}

@property(nonatomic) _Bool showIndicateBtn; // @synthesize showIndicateBtn=_showIndicateBtn;
@property(nonatomic) _Bool showImageBackgroundView; // @synthesize showImageBackgroundView=_showImageBackgroundView;
@property(nonatomic) _Bool showFlagLabel; // @synthesize showFlagLabel=_showFlagLabel;
@property(retain, nonatomic) UIButton *indicateButton; // @synthesize indicateButton=_indicateButton;
@property(retain, nonatomic) UILabel *flagLabel; // @synthesize flagLabel=_flagLabel;
@property(retain, nonatomic) UIView *imageBackgroundView; // @synthesize imageBackgroundView=_imageBackgroundView;
@property(retain, nonatomic) UILabel *alertView; // @synthesize alertView=_alertView;
- (void).cxx_destruct;
- (void)movePanViewToFrame:(struct CGRect)arg1;
- (void)showRightUtilityButtonsAction:(id)arg1;
- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end


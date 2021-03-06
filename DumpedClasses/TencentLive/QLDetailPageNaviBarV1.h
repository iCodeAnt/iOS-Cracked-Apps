//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "QLLiveTitleUpdateDelegate.h"
#import "QlChangeSmallScreenDelegate.h"

@class NSString, QLMovieIAPViewGiftButton, QLWorldCupAttentionButton, UIButton, UILabel;

@interface QLDetailPageNaviBarV1 : UIView <QlChangeSmallScreenDelegate, QLLiveTitleUpdateDelegate>
{
    UIButton *_btnBack;
    QLMovieIAPViewGiftButton *_btnBecomeVIP;
    UIButton *_btnUnfolder;
    UILabel *_lblTitle;
    UIView *_visibleBackgroundView;
    UIButton *_btnHeadPlay;
    QLWorldCupAttentionButton *_btnAttend;
    unsigned long long _naviBarType;
    _Bool _isInHotspotMovieView;
    _Bool _forceHoldEvent;
    _Bool _dlnaBtnHidden;
    _Bool _showedUniComButton;
    id <QLDetailPageNaviBarV1Delegate> _delegate;
}

@property(nonatomic) _Bool showedUniComButton; // @synthesize showedUniComButton=_showedUniComButton;
@property(nonatomic) _Bool dlnaBtnHidden; // @synthesize dlnaBtnHidden=_dlnaBtnHidden;
@property(nonatomic) _Bool forceHoldEvent; // @synthesize forceHoldEvent=_forceHoldEvent;
@property(nonatomic) _Bool isInHotspotMovieView; // @synthesize isInHotspotMovieView=_isInHotspotMovieView;
@property(readonly) unsigned long long naviBarType; // @synthesize naviBarType=_naviBarType;
@property(readonly) QLWorldCupAttentionButton *btnAttend; // @synthesize btnAttend=_btnAttend;
@property(readonly) UIView *visibleBackgroundView; // @synthesize visibleBackgroundView=_visibleBackgroundView;
@property(readonly) UILabel *lblTitle; // @synthesize lblTitle=_lblTitle;
@property(readonly) UIButton *btnUnfolder; // @synthesize btnUnfolder=_btnUnfolder;
@property(readonly) UIButton *btnBack; // @synthesize btnBack=_btnBack;
@property __weak id <QLDetailPageNaviBarV1Delegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)setTitleHiddenWithAnimations:(_Bool)arg1;
- (void)resetViewFromMiniPlayer;
- (void)updateTitle:(id)arg1;
- (void)setPackupMode:(_Bool)arg1;
- (void)playBtnClicked:(id)arg1;
- (void)resetBtnPositionNeedOffset:(_Bool)arg1;
- (void)resetLblTitleLableFrame;
- (void)layoutSubviews;
- (_Bool)hasHeadPlayBtn;
- (void)setPlayBtnText:(id)arg1;
- (void)setTopViewHidden:(_Bool)arg1 hasTitle:(_Bool)arg2 withBtnText:(id)arg3;
- (void)setTopViewHidden:(_Bool)arg1 hasTitle:(_Bool)arg2;
- (void)clickVIPBtn:(id)arg1;
- (void)unfolderDown:(id)arg1;
- (void)shareClicked:(id)arg1;
- (void)backClicked:(id)arg1;
- (_Bool)topBtnsHiddenWhileLoaded;
- (void)headerTitleTapped:(id)arg1;
- (void)setIsAttended:(_Bool)arg1;
- (void)attendClicked:(id)arg1;
- (void)dlnaRenderClicked:(id)arg1;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)hideDLNAButton:(id)arg1;
- (void)setDetailPageNaviBarV1Type:(unsigned long long)arg1;
- (void)setBecomeVipButtonColor:(id)arg1;
- (void)setBecomeVipButtonTitle:(id)arg1;
- (void)configButtonWithQLJCEActionBarInfo:(id)arg1;
- (void)setButtonType:(long long)arg1;
- (_Bool)hiddenWithVipBtn;
- (double)widthOfBtnBecomeVIP;
- (id)btnOfBecomeVIP;
- (void)setBecomeVipButtonHidden:(_Bool)arg1;
- (void)setWhiteBgStyle;
- (void)showUnicomButton:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


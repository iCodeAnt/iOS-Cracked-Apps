//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "CAAnimationDelegate.h"

@class NSString, UIButton, UIImageView;

@interface RefreshView : UIView <CAAnimationDelegate>
{
    _Bool _isLoading;
    UIButton *refreshBtn;
    UIImageView *circleImage;
    id <MainRefreshDelegate> _delegate;
    id _target;
}

@property(retain, nonatomic) id target; // @synthesize target=_target;
@property(retain, nonatomic) id <MainRefreshDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool isLoading; // @synthesize isLoading=_isLoading;
@property(retain, nonatomic) UIImageView *circleImage; // @synthesize circleImage;
@property(retain, nonatomic) UIButton *refreshBtn; // @synthesize refreshBtn;
- (void).cxx_destruct;
- (void)showPoiUpdate:(id)arg1;
- (void)hidePoiUpdate:(id)arg1;
- (void)cancellDelay;
- (void)hideLoading;
- (void)showLoading;
- (void)stopLoadingDelay;
- (void)stopLoading;
- (void)startLoading;
- (void)refreshBtnAction:(id)arg1;
- (void)setupView;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


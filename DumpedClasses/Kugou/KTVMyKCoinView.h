//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "KFScrollPageManagerDelegate.h"
#import "KTVFreeGetKViewDelagate.h"
#import "KTVKCoinUserInfoViewDelagate.h"
#import "KTVRechargeViewDelagate.h"
#import "TabViewDelegate.h"
#import "UIScrollViewDelegate.h"

@class KFScrollPageManager, KTVFreeGetKView, KTVKCoinUserInfoView, KTVRechargeView, NSString, TabView;

@interface KTVMyKCoinView : UIView <TabViewDelegate, KTVRechargeViewDelagate, KTVFreeGetKViewDelagate, KFScrollPageManagerDelegate, UIScrollViewDelegate, KTVKCoinUserInfoViewDelagate>
{
    UIView *viewbg;
    TabView *segment;
    double scrollOffset_y;
    _Bool istapHideKeyboard;
    KTVKCoinUserInfoView *topUserInfo;
    id <KTVMyKCoinViewDelagate> _delegate;
    KFScrollPageManager *_scrollContent;
    KTVRechargeView *_breakTopUpView;
    KTVFreeGetKView *_getKCoinView;
}

@property(retain, nonatomic) KTVFreeGetKView *getKCoinView; // @synthesize getKCoinView=_getKCoinView;
@property(retain, nonatomic) KTVRechargeView *breakTopUpView; // @synthesize breakTopUpView=_breakTopUpView;
@property(retain, nonatomic) KFScrollPageManager *scrollContent; // @synthesize scrollContent=_scrollContent;
@property(nonatomic) __weak id <KTVMyKCoinViewDelagate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)actionTupUp:(_Bool)arg1;
- (void)refreshData;
- (void)topUpNow;
- (void)scrollPageManager:(id)arg1 willShowViewAtIndex:(long long)arg2;
- (void)setFreeTopUpType;
- (void)btnClicked:(long long)arg1;
- (void)actionInviteSong;
- (void)actionSing;
- (void)actionLogin;
- (void)appStorePayBack;
- (void)setAllInfo:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)scrollView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NMArtist, NMDanmakusItem, NMLiveView, UIView;

@protocol NMLiveViewDelegate <NSObject>
- (void)liveViewTapped:(NMLiveView *)arg1;
- (void)liveVIewNeedToLogin:(NMLiveView *)arg1;
- (void)liveVIew:(NMLiveView *)arg1 sendDanmakusItem:(NMDanmakusItem *)arg2;
- (void)liveViewVoteButtonTouched:(NMLiveView *)arg1;
- (void)liveView:(UIView *)arg1 changedFaciton:(NMArtist *)arg2;
- (void)liveViewShareButtonTouched:(NMLiveView *)arg1;
- (void)liveViewVerticalSelectScreenButtonTouched:(NMLiveView *)arg1;
- (void)liveViewBackButtonTouched:(NMLiveView *)arg1;
- (void)liveViewExitFullScreenModeButtonTouched:(NMLiveView *)arg1;
- (void)liveViewSwitchToFullScreenModeButtonTouched:(NMLiveView *)arg1;
@end

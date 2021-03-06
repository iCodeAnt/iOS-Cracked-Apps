//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSError, NSURL, TADCornerView;

@protocol TADCornerViewDelegate <NSObject>
- (void)cornerView:(TADCornerView *)arg1 didFailToReceiveAdWithError:(NSError *)arg2;
- (void)cornerViewDidLoadAd:(TADCornerView *)arg1;

@optional
- (void)cornerLandingViewDidDismiss;
- (void)cornerLandingViewWillDismiss;
- (void)cornerLandingViewDidPresent;
- (void)cornerLandingViewWillPresent;
- (_Bool)cornerView:(TADCornerView *)arg1 shouldOpenURL:(NSURL *)arg2;
- (void)cornerViewCloseButtonPressed:(TADCornerView *)arg1;
@end


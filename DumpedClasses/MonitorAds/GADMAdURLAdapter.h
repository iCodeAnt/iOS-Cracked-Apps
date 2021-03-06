//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GADBannerViewDelegate-Protocol.h"
#import "GADInterstitialAdClickDelegate-Protocol.h"
#import "GADInterstitialDelegate-Protocol.h"
#import "GADMAdNetworkAdapter-Protocol.h"
#import "GADSDKCoreControllerDelegate-Protocol.h"

@class GADBannerView, GADInterstitial, NSString;
@protocol GADMAdNetworkConnector;

@interface GADMAdURLAdapter : NSObject <GADSDKCoreControllerDelegate, GADBannerViewDelegate, GADInterstitialDelegate, GADInterstitialAdClickDelegate, GADMAdNetworkAdapter>
{
    BOOL _shouldRespondToSDKCore;
    GADBannerView *_banner;
    GADInterstitial *_interstitial;
    id <GADMAdNetworkConnector> _connector;
    NSString *_requestID;
}

+ (Class)networkExtrasClass;
+ (id)adapterVersion;
@property(nonatomic) BOOL shouldRespondToSDKCore; // @synthesize shouldRespondToSDKCore=_shouldRespondToSDKCore;
@property(copy, nonatomic) NSString *requestID; // @synthesize requestID=_requestID;
@property(nonatomic) __weak id <GADMAdNetworkConnector> connector; // @synthesize connector=_connector;
@property(retain, nonatomic) GADInterstitial *interstitial; // @synthesize interstitial=_interstitial;
@property(retain, nonatomic) GADBannerView *banner; // @synthesize banner=_banner;
- (void).cxx_destruct;
- (void)reportInterstitialLoadFailureWithCode:(int)arg1 errorMessage:(id)arg2;
- (void)reportBannerLoadFailureWithCode:(int)arg1 errorMessage:(id)arg2;
- (void)reportAdLoadFailureWithCode:(int)arg1 errorMessage:(id)arg2;
- (void)interstitialDidReceiveAdClick:(id)arg1;
- (void)interstitialWillLeaveApplication:(id)arg1;
- (void)interstitialDidDismissScreen:(id)arg1;
- (void)interstitialWillDismissScreen:(id)arg1;
- (void)interstitialWillPresentScreen:(id)arg1;
- (void)interstitial:(id)arg1 didFailToReceiveAdWithError:(id)arg2;
- (void)interstitialDidReceiveAd:(id)arg1;
- (void)adViewWillLeaveApplication:(id)arg1;
- (void)adViewDidDismissScreen:(id)arg1;
- (void)adViewWillDismissScreen:(id)arg1;
- (void)adViewWillPresentScreen:(id)arg1;
- (void)adView:(id)arg1 didFailToReceiveAdWithError:(id)arg2;
- (void)adViewDidReceiveAd:(id)arg1;
- (void)failedJavaScriptFile;
- (void)invalidJavaScriptRequest;
- (void)loadAd:(id)arg1 headers:(id)arg2;
- (void)loadAdURLWithParameters:(id)arg1;
- (int)requestedAdType;
- (id)requestParameters;
@property(readonly, nonatomic) int CSIIdentifier;
- (void)loadRequest;
- (void)changeAdSizeTo:(struct GADAdSize)arg1;
- (void)presentInterstitialFromRootViewController:(id)arg1;
- (BOOL)isBannerAnimationOK:(int)arg1;
- (void)stopBeingDelegate;
- (void)getNativeAdWithAdTypes:(id)arg1 options:(id)arg2;
- (void)getInterstitial;
- (void)getBannerWithSize:(struct GADAdSize)arg1;
- (id)initWithGADMAdNetworkConnector:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end


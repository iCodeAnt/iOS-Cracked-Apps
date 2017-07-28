//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "Mobike_ViewController.h"

#import "UIWebViewDelegate.h"

@class Mobike_WebPlaceholderView, NSString, NSURL, UIWebView;

@interface Mobike_WebViewController : Mobike_ViewController <UIWebViewDelegate>
{
    _Bool _needNativeClose;
    _Bool _canBeShared;
    NSURL *_targetURL;
    UIWebView *_myWebView;
    CDUnknownBlockType _jsMenuBlock;
    Mobike_WebPlaceholderView *_placeHolderView;
}

@property(retain, nonatomic) Mobike_WebPlaceholderView *placeHolderView; // @synthesize placeHolderView=_placeHolderView;
@property(copy, nonatomic) CDUnknownBlockType jsMenuBlock; // @synthesize jsMenuBlock=_jsMenuBlock;
@property(nonatomic) _Bool canBeShared; // @synthesize canBeShared=_canBeShared;
@property(nonatomic) _Bool needNativeClose; // @synthesize needNativeClose=_needNativeClose;
@property(retain, nonatomic) UIWebView *myWebView; // @synthesize myWebView=_myWebView;
@property(retain, nonatomic) NSURL *targetURL; // @synthesize targetURL=_targetURL;
- (void).cxx_destruct;
- (void)clearCache;
- (void)webView:(id)arg1 didFailLoadWithError:(id)arg2;
- (void)webViewDidFinishLoad:(id)arg1;
- (_Bool)shouldStartLoadWithRequest:(id)arg1 navigationType:(long long)arg2;
- (_Bool)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(long long)arg3;
- (void)loadTargetURLWithLowPriority;
- (void)loadTargetURL;
- (void)viewDidLoad;
- (id)init;
- (id)jsbridgeToReturnUserInfo;
- (id)jsbridgeToreturnUserLocation;
- (id)parseQueryString:(id)arg1;
- (id)jsbridgeCallBackFuncName:(id)arg1;
- (void)jsbridgeToFetchUserEnv:(id)arg1;
- (void)jsbridgeToShare:(id)arg1;
- (void)jsbridgeToAddMenu:(id)arg1;
- (void)jsbridgeToLogout;
- (void)jsbridgeToLogin;
- (void)responseToJsBridge:(id)arg1 withParam:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


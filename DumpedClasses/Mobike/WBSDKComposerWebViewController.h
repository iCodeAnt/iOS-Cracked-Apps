//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WBSDKBasicWebViewController.h"

#import "WBHttpRequestDelegate.h"

@class NSString;

@interface WBSDKComposerWebViewController : WBSDKBasicWebViewController <WBHttpRequestDelegate>
{
}

- (_Bool)wbsdk_webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(long long)arg3;
- (id)compressImage:(id)arg1;
- (void)request:(id)arg1 didFinishLoadingWithResult:(id)arg2;
- (void)request:(id)arg1 didFailWithError:(id)arg2;
- (void)shardDidFinishWithResponseInfo:(id)arg1;
- (void)postImageToServer;
- (id)defaultParaDictsForRequest;
- (void)startWebViewRequest;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


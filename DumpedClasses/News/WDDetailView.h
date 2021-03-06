//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SSThemedView.h"

#import "FriendDataManagerDelegate.h"
#import "TTDetailWebViewRequestProcessorDelegate.h"
#import "TTDetailWebviewDelegate.h"
#import "UIScrollViewDelegate.h"

@class FriendDataManager, NSString, TTDetailWebviewContainer, WDDetailModel, WDDetailMonitor, WDDetailTracker, WDDetailViewModel, WDDetailWebViewFooter;

@interface WDDetailView : SSThemedView <TTDetailWebviewDelegate, TTDetailWebViewRequestProcessorDelegate, UIScrollViewDelegate, FriendDataManagerDelegate>
{
    _Bool _didDisAppear;
    _Bool _isWebViewLoading;
    _Bool _webViewHasError;
    _Bool _webviewHasInsertedInformationJS;
    _Bool _webViewHasInsertedContextJS;
    NSString *_latestWebViewRequestURLString;
    _Bool _domReady;
    WDDetailViewModel *_detailViewModel;
    TTDetailWebviewContainer *_detailWebView;
    double _titleViewAnimationTriggerPosY;
    id <WDDetailViewDelegate> _delegate;
    WDDetailModel *_detailModel;
    FriendDataManager *_friendManager;
    WDDetailTracker *_tracker;
    WDDetailMonitor *_monitor;
    WDDetailWebViewFooter *_detailWebViewDivFooter;
    NSString *_followCallbackID;
}

@property(copy, nonatomic) NSString *followCallbackID; // @synthesize followCallbackID=_followCallbackID;
@property(retain, nonatomic) WDDetailWebViewFooter *detailWebViewDivFooter; // @synthesize detailWebViewDivFooter=_detailWebViewDivFooter;
@property(retain, nonatomic) WDDetailMonitor *monitor; // @synthesize monitor=_monitor;
@property(retain, nonatomic) WDDetailTracker *tracker; // @synthesize tracker=_tracker;
@property(retain, nonatomic) FriendDataManager *friendManager; // @synthesize friendManager=_friendManager;
@property(retain, nonatomic) WDDetailModel *detailModel; // @synthesize detailModel=_detailModel;
@property(nonatomic) __weak id <WDDetailViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) double titleViewAnimationTriggerPosY; // @synthesize titleViewAnimationTriggerPosY=_titleViewAnimationTriggerPosY;
@property(nonatomic) _Bool domReady; // @synthesize domReady=_domReady;
@property(retain, nonatomic) TTDetailWebviewContainer *detailWebView; // @synthesize detailWebView=_detailWebView;
@property(retain, nonatomic) WDDetailViewModel *detailViewModel; // @synthesize detailViewModel=_detailViewModel;
- (void).cxx_destruct;
- (void)processRequestShowSearchViewWithQuery:(id)arg1 fromType:(int)arg2 index:(unsigned long long)arg3;
- (void)processRequestOpenAppStoreByActionURL:(id)arg1 itunesID:(id)arg2;
- (void)processRequestShowPGCProfileWithParams:(id)arg1;
- (void)processRequestShowUserProfileForUserID:(id)arg1;
- (void)processRequestShowTipMsg:(id)arg1 icon:(id)arg2;
- (void)processRequestShowImgInPhotoScrollViewAtIndex:(unsigned long long)arg1 withFrameValue:(id)arg2;
- (void)processRequestOpenWebViewUseURL:(id)arg1 supportRotate:(_Bool)arg2;
- (void)processRequestUpdateArticleImageMode:(id)arg1;
- (void)processRequestReceiveDomReady;
- (void)webContainer:(id)arg1 pgcId:(id)arg2 Subscribe:(_Bool)arg3;
- (void)webView:(id)arg1 didFailLoadWithError:(id)arg2;
- (void)webViewDidFinishLoad:(id)arg1;
- (void)webViewDidStartLoad:(id)arg1;
- (void)webView:(id)arg1 scrollViewDidScroll:(id)arg2;
- (_Bool)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(long long)arg3;
- (void)webViewContainerInFooterHalfShowStatusWithScrollOffset:(double)arg1;
- (void)webViewContainerWillShowFirstCommentCellByScrolling;
- (_Bool)supportFooterInsertionOptimization;
- (void)webViewDidChangeContentSize;
- (_Bool)webViewContentIsNativeType;
- (void)friendDataManager:(id)arg1 finishActionType:(int)arg2 error:(id)arg3 result:(id)arg4;
- (void)pn_didEnterBackground;
- (void)pn_fontChanged;
- (void)p_sendDetailTimeIntervalMonitorForService:(id)arg1;
- (void)p_updateTitleViewAnimationTriggerPos;
- (void)p_addNotiCenterObservers;
- (void)p_insertJSContext:(id)arg1;
- (id)p_detailWebView:(id)arg1 stringByEvaluatingJavaScriptFromString:(id)arg2;
- (void)p_refreshDetailTheme;
- (id)settedFontShortString;
- (void)p_webViewUpdateFontSize;
- (_Bool)p_checkArticleReliable;
- (void)p_registerArticleWebViewImageCallback;
- (void)p_registerCommentDiggCallback;
- (void)p_registerOpenCommentCallback;
- (void)p_registerReportCallback;
- (void)p_registerOpposeCallback;
- (void)p_registerDislikeCallback;
- (void)p_registerFollowCallBack;
- (void)p_registerArticleWebViewJSCallback;
- (void)p_registerArticleDetailCloseCallback;
- (void)p_registerWebViewUserAgent;
- (void)p_startLoadNativeTypeArticle;
- (void)p_startLoadArticleContent;
- (void)p_startLoadForArticleDeleted;
- (void)p_deleteArticleIfNeeded;
- (void)addKVO;
- (void)p_buildDetailWebView;
- (void)p_detailCommonInit;
- (void)p_initViewModel;
- (void)p_initMonitor;
- (void)p_initTracker;
- (void)tt_serverRequestTimeMonitorWithName:(id)arg1 error:(id)arg2;
- (void)tt_initializeServerRequestMonitorWithName:(id)arg1;
- (id)scrollView;
- (void)tt_setNatantWithFooterView:(id)arg1 includingFooterScrollView:(id)arg2;
- (void)tt_deleteArticleByInfoFetchedIfNeeded;
- (void)tt_loadInformationContent;
- (void)tt_startLoadWebViewContent;
- (void)themeChanged:(id)arg1;
- (void)didDisappear;
- (void)didAppear;
- (void)willAppear;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 detailModel:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


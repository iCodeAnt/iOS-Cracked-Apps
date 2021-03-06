//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SSViewControllerBase.h"

#import "TTDetailViewControllerDataSource.h"
#import "TTDetailViewControllerDelegate.h"
#import "UIViewControllerErrorHandler.h"

@class NSString, SSViewControllerBase<TTDetailViewController>, SSWebViewBackButtonView, TTDetailContainerViewModel, UIView;

@interface TTDetailContainerViewController : SSViewControllerBase <TTDetailViewControllerDelegate, TTDetailViewControllerDataSource, UIViewControllerErrorHandler>
{
    _Bool _hasDidAppeared;
    _Bool _hasWillAppeared;
    TTDetailContainerViewModel *_viewModel;
    SSViewControllerBase<TTDetailViewController> *_detailViewController;
    UIView *_shotScreenView;
    SSWebViewBackButtonView *_backButtonView;
}

@property(retain, nonatomic) SSWebViewBackButtonView *backButtonView; // @synthesize backButtonView=_backButtonView;
@property(nonatomic) _Bool hasWillAppeared; // @synthesize hasWillAppeared=_hasWillAppeared;
@property(nonatomic) _Bool hasDidAppeared; // @synthesize hasDidAppeared=_hasDidAppeared;
@property(retain, nonatomic) UIView *shotScreenView; // @synthesize shotScreenView=_shotScreenView;
@property(retain, nonatomic) SSViewControllerBase<TTDetailViewController> *detailViewController; // @synthesize detailViewController=_detailViewController;
@property(retain, nonatomic) TTDetailContainerViewModel *viewModel; // @synthesize viewModel=_viewModel;
- (void).cxx_destruct;
- (void)pushAnimationCompletion;
- (void)specialSetupBeforeDetailVC;
- (struct CGRect)animationToFrame;
- (id)animationToView;
- (void)refreshArticleDetailViewControllerViewFrameIfNeeded;
- (void)statusbarFrameDidChangeNotification;
- (unsigned long long)supportedInterfaceOrientations;
- (_Bool)shouldAutorotate;
- (void)detailContainerViewController:(id)arg1 leftBarButtonClicked:(id)arg2;
- (void)detailContainerViewController:(id)arg1 rightBarButtonClicked:(id)arg2;
- (double)stayPageTimeInterValForDetailView:(id)arg1;
- (void)goBack:(id)arg1;
- (void)applicationDidChangeStatusBarOrientation:(id)arg1;
- (void)applicationWillEnterForeground:(id)arg1;
- (void)applicationDidEnterBackground:(id)arg1;
- (void)endStayPageTrackerIfNeed;
- (void)startStayPageTrackerIfNeeded;
- (_Bool)canRotateNewsDetailForImageSubject;
- (_Bool)isNewsDetailForImageSubject;
- (void)rightButtonsPressed:(id)arg1;
- (void)backViewItemPressed:(id)arg1;
- (void)themeChanged:(id)arg1;
- (void)refreshNavBarWithForcedShownEscapeButton:(_Bool)arg1;
- (void)refreshLeftBarButtonItemsWithCloseButtonShown:(_Bool)arg1;
- (void)addDetailVC;
- (void)constructDetailViewController:(id *)arg1;
- (_Bool)shouldAutorotateToInterfaceOrientation:(long long)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)dealloc;
- (void)didReceiveMemoryWarning;
- (void)refreshData;
- (_Bool)tt_hasValidateData;
- (void)firstLoacContent;
- (void)viewDidLoad;
- (id)initWithArticle:(id)arg1 source:(int)arg2 condition:(id)arg3;
- (id)initWithBaseCondition:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


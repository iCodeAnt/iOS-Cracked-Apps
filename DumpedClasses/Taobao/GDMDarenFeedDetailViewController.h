//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBBaseWebViewController.h"

#import "UIActionSheetDelegate.h"
#import "UIGestureRecognizerDelegate.h"
#import "UIWebViewDelegate.h"

@class GDMDetailButtomBannerView, NSDictionary, NSNumberFormatter, NSString, TBIconFontButton, TBSCPraiseOperation, UIButton;

@interface GDMDarenFeedDetailViewController : TBBaseWebViewController <UIWebViewDelegate, UIActionSheetDelegate, UIGestureRecognizerDelegate>
{
    unsigned long long _feedType;
    _Bool _isDeleted;
    double _lastPraiseTime;
    UIButton *_shareButton;
    long long _commentCnt;
    TBIconFontButton *_commentButton;
    TBIconFontButton *_praiseButton;
    NSString *_shareCoverImagePath;
    NSString *_shareTitle;
    int _targetType;
    int _subType;
    NSString *_sourceId;
    NSString *_spm;
    NSString *_scm;
    _Bool _isPraised;
    long long _praiseCnt;
    NSString *_acountNick;
    NSString *_accountId;
    unsigned long long _shopId;
    unsigned long long _accountType;
    unsigned long long _feedId;
    TBSCPraiseOperation *_praiseOperater;
    NSString *_isvStr;
    NSDictionary *_urlParams;
    NSNumberFormatter *_formatter;
    GDMDetailButtomBannerView *_buttomBannerView;
}

+ (float)iphoneScale;
@property(retain, nonatomic) GDMDetailButtomBannerView *buttomBannerView; // @synthesize buttomBannerView=_buttomBannerView;
@property(retain, nonatomic) NSNumberFormatter *formatter; // @synthesize formatter=_formatter;
@property(retain, nonatomic) NSDictionary *urlParams; // @synthesize urlParams=_urlParams;
@property(retain, nonatomic) NSString *isvStr; // @synthesize isvStr=_isvStr;
@property(retain, nonatomic) TBSCPraiseOperation *praiseOperater; // @synthesize praiseOperater=_praiseOperater;
@property(nonatomic) unsigned long long feedId; // @synthesize feedId=_feedId;
@property(nonatomic) unsigned long long accountType; // @synthesize accountType=_accountType;
@property(nonatomic) unsigned long long shopId; // @synthesize shopId=_shopId;
@property(retain, nonatomic) NSString *accountId; // @synthesize accountId=_accountId;
@property(retain, nonatomic) NSString *acountNick; // @synthesize acountNick=_acountNick;
@property(nonatomic) long long praiseCnt; // @synthesize praiseCnt=_praiseCnt;
@property(nonatomic) _Bool isPraised; // @synthesize isPraised=_isPraised;
- (void).cxx_destruct;
- (void)updatePageNameByType;
- (void)backItemClicked:(id)arg1;
- (id)dataForUserTrack;
- (id)userTrackArgsForNextPage;
- (void)updatePageUTParam;
- (void)showAlert:(id)arg1;
- (void)updateFeedPraisedCntBtn;
- (void)updateCommentCntBtn;
- (void)onNewCommentSucceed:(id)arg1;
- (void)showPraiseAnimation;
- (void)praiseBtnClicked:(id)arg1;
- (id)imageUrlForFeed;
- (void)shareBtnClicked:(id)arg1;
- (void)goToComment;
- (void)commentBtnClicked:(id)arg1;
- (void)buttomBannerViewAction:(id)arg1 atIndex:(int)arg2;
- (void)updateFeedPraisedCntBtn:(_Bool)arg1;
- (void)setupTBToolbarItems;
- (void)viewDidUnload;
- (void)dealloc;
- (void)viewDidLoad;
- (void)loadFeedDetail;
- (void)loadPraisedState;
- (void)clearReturnScheme;
- (id)pageTitle;
- (id)getPageLoadUrl;
- (id)initWithNavigatorURL:(id)arg1 query:(id)arg2;
- (id)initWithFeedId:(unsigned long long)arg1 accountId:(unsigned long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

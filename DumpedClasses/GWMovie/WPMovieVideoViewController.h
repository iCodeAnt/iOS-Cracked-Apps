//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug  6 2017 20:42:30).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GWBaseViewController.h"

#import "GWPilotAnimationViewDelegate-Protocol.h"
#import "TVKMediaPlaybackDelegate-Protocol.h"

@class GWImagePolicyView, GWPilotAnimationView, GWPreviewVideo, Movie, NSMutableArray, NSString, TVKMediaPlayer, UIButton, UIImageView, UILabel, UITableView, UIView;

@interface WPMovieVideoViewController : GWBaseViewController <TVKMediaPlaybackDelegate, GWPilotAnimationViewDelegate>
{
    _Bool _isPlayed;
    UIView *_headerView;
    UIView *_movieView;
    UILabel *_movieNameLabel;
    GWImagePolicyView *_movieTypeImageView;
    UILabel *_likeLabel;
    UIButton *_likeButton;
    UIButton *_presaleButton;
    UILabel *_movieDateLabel;
    UITableView *_tableView;
    GWPreviewVideo *_traileModel;
    Movie *_currentMovie;
    NSMutableArray *_videoArray;
    TVKMediaPlayer *_mediaPlayer;
    UIButton *_shareButton;
    UIImageView *_logoSmallImageView;
    UIImageView *_logoLargeImageView;
    UIView *_shareWindowView;
    GWPilotAnimationView *_navBarView;
}

@property(retain, nonatomic) GWPilotAnimationView *navBarView; // @synthesize navBarView=_navBarView;
@property(retain, nonatomic) UIView *shareWindowView; // @synthesize shareWindowView=_shareWindowView;
@property(retain, nonatomic) UIImageView *logoLargeImageView; // @synthesize logoLargeImageView=_logoLargeImageView;
@property(retain, nonatomic) UIImageView *logoSmallImageView; // @synthesize logoSmallImageView=_logoSmallImageView;
@property(retain, nonatomic) UIButton *shareButton; // @synthesize shareButton=_shareButton;
@property(nonatomic) _Bool isPlayed; // @synthesize isPlayed=_isPlayed;
@property(retain, nonatomic) TVKMediaPlayer *mediaPlayer; // @synthesize mediaPlayer=_mediaPlayer;
@property(retain, nonatomic) NSMutableArray *videoArray; // @synthesize videoArray=_videoArray;
@property(retain, nonatomic) Movie *currentMovie; // @synthesize currentMovie=_currentMovie;
@property(retain, nonatomic) GWPreviewVideo *traileModel; // @synthesize traileModel=_traileModel;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) UILabel *movieDateLabel; // @synthesize movieDateLabel=_movieDateLabel;
@property(retain, nonatomic) UIButton *presaleButton; // @synthesize presaleButton=_presaleButton;
@property(retain, nonatomic) UIButton *likeButton; // @synthesize likeButton=_likeButton;
@property(retain, nonatomic) UILabel *likeLabel; // @synthesize likeLabel=_likeLabel;
@property(retain, nonatomic) GWImagePolicyView *movieTypeImageView; // @synthesize movieTypeImageView=_movieTypeImageView;
@property(retain, nonatomic) UILabel *movieNameLabel; // @synthesize movieNameLabel=_movieNameLabel;
@property(retain, nonatomic) UIView *movieView; // @synthesize movieView=_movieView;
@property(retain, nonatomic) UIView *headerView; // @synthesize headerView=_headerView;
- (void).cxx_destruct;
- (void)onShareBtnClicked;
- (void)onBackBtnClicked;
- (void)setViewsHidden:(_Bool)arg1;
- (void)update;
- (void)dismissSemiModalView:(id)arg1;
- (void)handleShare:(unsigned long long)arg1;
- (void)gotoPresellViewController;
- (void)pushToCinemaMovieList;
- (void)onClickBuy:(id)arg1;
- (void)mediaPlayer:(id)arg1 progressUpdated:(double)arg2 playableDuration:(double)arg3 duration:(double)arg4;
- (void)mediaPlayer:(id)arg1 eventOccur:(int)arg2 userInfo:(id)arg3;
- (void)mediaPlayer:(id)arg1 screenChanged:(_Bool)arg2;
- (void)mediaPlayer:(id)arg1 stateChanged:(int)arg2 withError:(id)arg3;
- (id)mediaPlayer:(id)arg1 willPlayUrl:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)fetchMovieVideoData;
- (void)playVideoWithTrailerModel:(id)arg1;
- (void)setUpTencentVideoMessage;
- (void)setUpMovieMessage;
- (void)setGWStatusBarDefaultIfNeed;
- (void)setUpViews;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillLayoutSubviews;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)getVideoData;
- (id)initWithGWMovieModel:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

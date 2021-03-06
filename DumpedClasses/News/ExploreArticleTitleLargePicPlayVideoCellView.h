//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ExploreArticleTitleLargePicCellView.h"

#import "ExploreMovieViewCellProtocol.h"
#import "TTSharedViewTransitionFrom.h"

@class ExploreActionButton, ExploreArticleMovieViewDelegate, ExploreMovieView, NSString, SSThemedButton, SSThemedImageView, SSThemedLabel, TTVideoEmbededAdButton;

@interface ExploreArticleTitleLargePicPlayVideoCellView : ExploreArticleTitleLargePicCellView <ExploreMovieViewCellProtocol, TTSharedViewTransitionFrom>
{
    SSThemedImageView *_timeInfoBgView;
    SSThemedButton *_playButton;
    ExploreArticleMovieViewDelegate *_movieViewDelegate;
    SSThemedImageView *_videoIconView;
    SSThemedLabel *_videoDurationLabel;
    ExploreMovieView *_movieView;
    TTVideoEmbededAdButton *_adButton;
    SSThemedLabel *_adSubtitleLabel;
    ExploreActionButton *_adActionButton;
}

@property(retain, nonatomic) ExploreActionButton *adActionButton; // @synthesize adActionButton=_adActionButton;
@property(retain, nonatomic) SSThemedLabel *adSubtitleLabel; // @synthesize adSubtitleLabel=_adSubtitleLabel;
@property(retain, nonatomic) TTVideoEmbededAdButton *adButton; // @synthesize adButton=_adButton;
@property(retain, nonatomic) ExploreMovieView *movieView; // @synthesize movieView=_movieView;
@property(retain, nonatomic) SSThemedLabel *videoDurationLabel; // @synthesize videoDurationLabel=_videoDurationLabel;
@property(retain, nonatomic) SSThemedImageView *videoIconView; // @synthesize videoIconView=_videoIconView;
@property(retain, nonatomic) ExploreArticleMovieViewDelegate *movieViewDelegate; // @synthesize movieViewDelegate=_movieViewDelegate;
@property(retain, nonatomic) SSThemedButton *playButton; // @synthesize playButton=_playButton;
@property(retain, nonatomic) SSThemedImageView *timeInfoBgView; // @synthesize timeInfoBgView=_timeInfoBgView;
- (void).cxx_destruct;
- (id)animationFromImage;
- (id)animationFromView;
- (unsigned long long)cellSubStyle;
- (unsigned long long)cellStyle;
- (struct CGRect)movieViewFrameRect;
- (struct CGRect)logoViewFrame;
- (void)attachMovieView:(id)arg1;
- (id)detachMovieView;
- (_Bool)hasMovieView;
- (_Bool)isMovieFullScreen;
- (_Bool)isPlayingMovie;
- (void)stopMovieViewPlayWithoutRemoveMovieView:(id)arg1;
- (void)stopMovieViewPlay:(id)arg1;
- (void)movieViewPlayFinished:(id)arg1;
- (double)rightCornerLabelFontSize;
- (void)cellInListWillDisappear:(long long)arg1;
- (void)didEndDisplaying;
- (void)invalideMovieView;
- (void)removeMovieViewNotification;
- (void)registerMovieViewNotification;
- (void)listenCall:(id)arg1;
- (void)_adActionButtonFired:(id)arg1;
- (void)playButtonClicked;
- (void)refreshUI;
- (void)themeChanged:(id)arg1;
- (void)bringAdButtonBackToCell;
- (void)bringAdButtonToMovie;
- (void)refreshWithData:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug  6 2017 20:42:30).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GWMovieWalaBaseView.h"

#import "GWMovieWalaDetailReplyViewDelegate-Protocol.h"
#import "TTTAttributedLabelDelegate-Protocol.h"

@class GWMovieWalaCustomButton, GWMovieWalaDetailReplyView, GWWalaReplyAddOrCancleFlowerProvider, NSString, UIButton, UIView;
@protocol GWAtNickNameDelegate;

@interface GWMovieWalaViewForReplay : GWMovieWalaBaseView <TTTAttributedLabelDelegate, GWMovieWalaDetailReplyViewDelegate>
{
    UIView *_seperatorLineView;
    id <GWAtNickNameDelegate> _nickNameDelegate;
    GWMovieWalaCustomButton *_favorButton;
    GWMovieWalaCustomButton *_remarkButton;
    GWWalaReplyAddOrCancleFlowerProvider *_replyAddOrCancleFlowerProvider;
    GWMovieWalaDetailReplyView *_walaDetailReplyView;
    UIButton *_extendView;
}

@property(retain, nonatomic) UIButton *extendView; // @synthesize extendView=_extendView;
@property(retain, nonatomic) GWMovieWalaDetailReplyView *walaDetailReplyView; // @synthesize walaDetailReplyView=_walaDetailReplyView;
@property(retain, nonatomic) GWWalaReplyAddOrCancleFlowerProvider *replyAddOrCancleFlowerProvider; // @synthesize replyAddOrCancleFlowerProvider=_replyAddOrCancleFlowerProvider;
@property(retain, nonatomic) GWMovieWalaCustomButton *remarkButton; // @synthesize remarkButton=_remarkButton;
@property(retain, nonatomic) GWMovieWalaCustomButton *favorButton; // @synthesize favorButton=_favorButton;
@property(nonatomic) __weak id <GWAtNickNameDelegate> nickNameDelegate; // @synthesize nickNameDelegate=_nickNameDelegate;
@property(retain, nonatomic) UIView *seperatorLineView; // @synthesize seperatorLineView=_seperatorLineView;
- (void).cxx_destruct;
- (double)gwWalaLabelWidth;
- (double)walaBackViewPadding;
- (void)replyView:(id)arg1 replyViewClick:(id)arg2;
- (void)replyView:(id)arg1 atMemberClick:(id)arg2;
- (void)attributedLabel:(id)arg1 didSelectLinkWithURL:(id)arg2;
- (double)viewHeightWithComment:(id)arg1;
- (double)updateWalaLayout;
- (void)updateReplyState;
- (void)favorButtonClick:(id)arg1;
- (void)extendClick;
- (void)setReportDelegate:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

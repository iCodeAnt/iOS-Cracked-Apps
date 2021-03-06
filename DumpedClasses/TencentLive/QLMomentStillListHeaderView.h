//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "QLActionMenuDelegate.h"

@class NSString, QLMovieItem, UIButton;

@interface QLMomentStillListHeaderView : UIView <QLActionMenuDelegate>
{
    _Bool _shouldHideEnterPlayer;
    _Bool _isShowingActionMenu;
    long long _headType;
    QLMovieItem *_movieItem;
    id _delegate;
    id <QLMomentStillListHeaderViewDelegate> _fromCtl;
    UIButton *_icon;
}

@property(nonatomic) _Bool isShowingActionMenu; // @synthesize isShowingActionMenu=_isShowingActionMenu;
@property(retain, nonatomic) UIButton *icon; // @synthesize icon=_icon;
@property(nonatomic) id <QLMomentStillListHeaderViewDelegate> fromCtl; // @synthesize fromCtl=_fromCtl;
@property(nonatomic) id delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool shouldHideEnterPlayer; // @synthesize shouldHideEnterPlayer=_shouldHideEnterPlayer;
@property(retain, nonatomic) QLMovieItem *movieItem; // @synthesize movieItem=_movieItem;
@property(nonatomic) long long headType; // @synthesize headType=_headType;
- (void).cxx_destruct;
- (void)actionMenu:(id)arg1 dismissFromSuperView:(id)arg2;
- (void)actionMenu:(id)arg1 didSelectAtIndex:(long long)arg2;
- (void)didTapIconView;
- (void)layoutSubviews;
- (void)awakeFromNib;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "QXLocalPlayBaseViewController.h"

#import "QXLocalPlayerBottomViewDelegate-Protocol.h"

@class NSString, UIImage, UIImageView;

@interface QXShortPlayViewController : QXLocalPlayBaseViewController <QXLocalPlayerBottomViewDelegate>
{
    UIImage *_screenImage;
    UIImageView *_likeImage;
}

@property(retain, nonatomic) UIImageView *likeImage; // @synthesize likeImage=_likeImage;
@property(retain, nonatomic) UIImage *screenImage; // @synthesize screenImage=_screenImage;
- (void).cxx_destruct;
- (id)imageFromView:(id)arg1;
- (void)likeAnimate;
- (void)localPlayerBottomView:(id)arg1 didClickLikeBtn:(_Bool)arg2;
- (void)likeAction:(_Bool)arg1;
- (void)closeBtnAction;
- (void)handleDoubleTap:(id)arg1;
- (void)requestLikeStatus;
- (void)setupGesture;
- (void)initSubView;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


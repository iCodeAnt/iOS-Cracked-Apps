//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "Mobike_WebViewController.h"

@class UIButton, UIImageView, UIView;

@interface RedGiftBoxViewController : Mobike_WebViewController
{
    UIView *_titleView;
    UIView *_giftBoxContainerView;
    UIImageView *_giftBoxCoverView;
    UIImageView *_giftBoxBodyView;
    UIImageView *_giftBoxInnerView;
    UIImageView *_giftBoxConfettiView;
    UIImageView *_giftBoxBodyAvatarView;
    UIButton *_openBoxBtn;
}

@property(retain, nonatomic) UIButton *openBoxBtn; // @synthesize openBoxBtn=_openBoxBtn;
@property(retain, nonatomic) UIImageView *giftBoxBodyAvatarView; // @synthesize giftBoxBodyAvatarView=_giftBoxBodyAvatarView;
@property(retain, nonatomic) UIImageView *giftBoxConfettiView; // @synthesize giftBoxConfettiView=_giftBoxConfettiView;
@property(retain, nonatomic) UIImageView *giftBoxInnerView; // @synthesize giftBoxInnerView=_giftBoxInnerView;
@property(retain, nonatomic) UIImageView *giftBoxBodyView; // @synthesize giftBoxBodyView=_giftBoxBodyView;
@property(retain, nonatomic) UIImageView *giftBoxCoverView; // @synthesize giftBoxCoverView=_giftBoxCoverView;
@property(retain, nonatomic) UIView *giftBoxContainerView; // @synthesize giftBoxContainerView=_giftBoxContainerView;
@property(retain, nonatomic) UIView *titleView; // @synthesize titleView=_titleView;
- (void).cxx_destruct;
- (void)popMyWebview;
- (void)webViewGrowUp;
- (void)webViewGrowup;
- (void)showWebViewSmall;
- (void)onTapOpenBtn:(id)arg1;
- (void)showTitleAnim;
- (void)showGiftBox;
- (void)viewDidLoad;
- (id)init;

@end


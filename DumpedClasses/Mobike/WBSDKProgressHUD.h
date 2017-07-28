//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSString, UIButton, UIImage, WBSDKProgressHUDView;

@interface WBSDKProgressHUD : UIView
{
    _Bool _centerOnScreen;
    _Bool _viewHidden;
    _Bool isHidden;
    _Bool _needsActivityIndicator;
    int _coverOption;
    UIButton *touchButton;
    WBSDKProgressHUDView *_HUDView;
    UIView *_targetView;
    CDUnknownBlockType didHideBlock;
    CDUnknownBlockType _coverHitTest;
    struct CGPoint _viewOffset;
    struct CGRect _coverFrame;
}

+ (double)standardHideDelay;
+ (_Bool)hideHUDForView:(id)arg1 animated:(_Bool)arg2;
+ (id)showTipWithText:(id)arg1 duration:(double)arg2;
+ (id)showErrorWithText:(id)arg1 duration:(double)arg2;
+ (id)showSuccessWithText:(id)arg1 duration:(double)arg2;
+ (id)showHUDAddedTo:(id)arg1 animated:(_Bool)arg2;
+ (struct CGSize)defaultSize;
+ (Class)viewClass;
@property(copy, nonatomic) CDUnknownBlockType coverHitTest; // @synthesize coverHitTest=_coverHitTest;
@property(nonatomic) _Bool needsActivityIndicator; // @synthesize needsActivityIndicator=_needsActivityIndicator;
@property(copy, nonatomic) CDUnknownBlockType didHideBlock; // @synthesize didHideBlock;
@property(readonly, nonatomic, getter=viewHidden) _Bool isHidden; // @synthesize isHidden;
@property(nonatomic) _Bool viewHidden; // @synthesize viewHidden=_viewHidden;
@property(retain, nonatomic) UIView *targetView; // @synthesize targetView=_targetView;
@property(nonatomic) struct CGPoint viewOffset; // @synthesize viewOffset=_viewOffset;
@property(nonatomic) int coverOption; // @synthesize coverOption=_coverOption;
@property(nonatomic) struct CGRect coverFrame; // @synthesize coverFrame=_coverFrame;
@property(nonatomic) _Bool centerOnScreen; // @synthesize centerOnScreen=_centerOnScreen;
@property(retain, nonatomic) WBSDKProgressHUDView *HUDView; // @synthesize HUDView=_HUDView;
@property(retain, nonatomic) UIButton *touchButton; // @synthesize touchButton;
- (void).cxx_destruct;
- (void)setTransformForCurrentOrientation:(_Bool)arg1;
- (void)deviceOrientationDidChange:(id)arg1;
- (void)unregisterFromNotifications;
- (void)registerForNotifications;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (_Bool)accessibilityViewIsModal;
- (id)accessibilityLabel;
- (_Bool)isAccessibilityElement;
@property(nonatomic) double fontSize;
@property(retain, nonatomic) UIImage *image;
@property(retain, nonatomic) NSString *text;
@property(nonatomic) double viewHeight;
@property(nonatomic) double viewWidth;
@property(nonatomic) _Bool useLargeProgressIndicator;
- (id)view;
- (void)hide:(_Bool)arg1 afterDelay:(double)arg2;
- (void)hide:(_Bool)arg1;
- (void)hudDidHide;
- (void)show:(_Bool)arg1;
- (void)layoutSubviews;
- (_Bool)blockPanNavigationGesture:(id)arg1 withTouch:(id)arg2;
- (_Bool)wbsdk_isUIUserInterfaceIdiomPad;
- (id)initWithView:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

@end


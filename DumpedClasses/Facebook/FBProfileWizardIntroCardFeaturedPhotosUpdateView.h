//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "FBProfileWizardView.h"

@class NSMutableArray, UIButton, UIView;
@protocol FBProfileWizardIntroCardFeaturedPhotosUpdateViewDelegate;

@interface FBProfileWizardIntroCardFeaturedPhotosUpdateView : FBProfileWizardView
{
    NSMutableArray *_photoPlaceHolderViews;
    UIButton *_addFeaturedPhotosButton;
    UIView *_topLineView;
    NSMutableArray *_photoAddImageViews;
    _Bool _appearanceHasAnimated;
    id <FBProfileWizardIntroCardFeaturedPhotosUpdateViewDelegate> _delegate;
}

@property(nonatomic) __weak id <FBProfileWizardIntroCardFeaturedPhotosUpdateViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_didTapAddFeaturedPhotosButton;
- (void)_animatingTitleAndSubtitleViewDisappearance;
- (void)animatingDisppearance;
- (void)_animatingContentViewAppearance;
- (void)animatingAppearance;
- (void)layoutSubviews;
- (id)initWithWizardModel:(id)arg1 currentStepIndex:(unsigned long long)arg2;

@end

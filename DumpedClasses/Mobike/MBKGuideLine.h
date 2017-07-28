//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "UIScrollViewDelegate.h"

@class NSString, UIButton, UIPageControl, UIScrollView;

@interface MBKGuideLine : UIView <UIScrollViewDelegate>
{
    id <MBKGuideLineDelegate> _delegate;
    UIScrollView *_scrollView;
    UIPageControl *_pageControl;
    UIView *_holeView;
    UIView *_circleView;
    UIButton *_doneButton;
}

@property(retain) UIButton *doneButton; // @synthesize doneButton=_doneButton;
@property(retain) UIView *circleView; // @synthesize circleView=_circleView;
@property(retain) UIView *holeView; // @synthesize holeView=_holeView;
@property(retain, nonatomic) UIPageControl *pageControl; // @synthesize pageControl=_pageControl;
@property(retain, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(retain) id <MBKGuideLineDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)dealloc;
- (void)createViewFour;
- (void)createViewThree;
- (void)createViewTwo;
- (void)createViewOne;
- (void)scrollViewDidScroll:(id)arg1;
- (void)onFinishedIntroButtonPressed:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


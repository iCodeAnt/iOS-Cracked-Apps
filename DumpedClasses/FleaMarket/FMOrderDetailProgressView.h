//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class FMImageView, FMOrderDetailViewModel, UILabel;

@interface FMOrderDetailProgressView : UIView
{
    FMImageView *_blurImageView;
    UIView *_normalProgressContainer;
    UIView *_refundProgressContainer;
    UIView *_statusArrayContainer;
    UIView *_maskView;
    UILabel *_refundProgressHint;
    FMOrderDetailViewModel *_viewModel;
}

@property(retain, nonatomic) FMOrderDetailViewModel *viewModel; // @synthesize viewModel=_viewModel;
- (void).cxx_destruct;
- (void)refillTextArray;
- (void)refillProgressView;
- (void)initProgressViewContent;
- (void)initProgressView;
- (id)initWithFrame:(struct CGRect)arg1;

@end

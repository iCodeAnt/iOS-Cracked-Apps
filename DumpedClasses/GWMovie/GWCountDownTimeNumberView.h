//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug  6 2017 20:42:30).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UILabel;

@interface GWCountDownTimeNumberView : UIView
{
    UILabel *_numLabel;
    UIView *_numLabelView;
    UILabel *_textLabel;
}

@property(retain, nonatomic) UILabel *textLabel; // @synthesize textLabel=_textLabel;
@property(retain, nonatomic) UIView *numLabelView; // @synthesize numLabelView=_numLabelView;
@property(retain, nonatomic) UILabel *numLabel; // @synthesize numLabel=_numLabel;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)createSubviews;
- (void)updateSubviewsFrameOfMargin:(double)arg1;
- (void)setNumLabelOfNum:(double)arg1 andText:(id)arg2;
- (void)updateNum:(double)arg1;
- (id)floatToNSString:(long long)arg1;

@end

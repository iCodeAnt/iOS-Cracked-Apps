//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSArray, NSTimer, UIColor, UILabel;

@interface YLProgressBar : UIView
{
    _Bool _hideGloss;
    _Bool _progressStretch;
    _Bool _uniformTintColor;
    _Bool _stripesAnimated;
    _Bool _hideStripes;
    _Bool _hideTrack;
    double _progress;
    unsigned long long _behavior;
    NSArray *_progressTintColors;
    UIColor *_progressTintColor;
    UIColor *_trackTintColor;
    double _progressBarInset;
    unsigned long long _type;
    double _cornerRadius;
    UILabel *_indicatorTextLabel;
    unsigned long long _indicatorTextDisplayMode;
    long long _stripesDirection;
    double _stripesAnimationVelocity;
    unsigned long long _stripesOrientation;
    long long _stripesWidth;
    UIColor *_stripesColor;
    long long _stripesDelta;
    double _stripesOffset;
    double _internalCornerRadius;
    NSTimer *_stripesTimer;
    NSArray *_colors;
    NSTimer *_progressTargetTimer;
    double _progressTargetValue;
    struct CGRect innerRect;
}

@property(nonatomic) double progressTargetValue; // @synthesize progressTargetValue=_progressTargetValue;
@property(retain, nonatomic) NSTimer *progressTargetTimer; // @synthesize progressTargetTimer=_progressTargetTimer;
@property(retain, nonatomic) NSArray *colors; // @synthesize colors=_colors;
@property(retain, nonatomic) NSTimer *stripesTimer; // @synthesize stripesTimer=_stripesTimer;
@property(nonatomic) double internalCornerRadius; // @synthesize internalCornerRadius=_internalCornerRadius;
@property(nonatomic) double stripesOffset; // @synthesize stripesOffset=_stripesOffset;
@property(nonatomic) _Bool hideTrack; // @synthesize hideTrack=_hideTrack;
@property(nonatomic) _Bool hideStripes; // @synthesize hideStripes=_hideStripes;
@property(nonatomic) long long stripesDelta; // @synthesize stripesDelta=_stripesDelta;
@property(retain, nonatomic) UIColor *stripesColor; // @synthesize stripesColor=_stripesColor;
@property(nonatomic) long long stripesWidth; // @synthesize stripesWidth=_stripesWidth;
@property(nonatomic) unsigned long long stripesOrientation; // @synthesize stripesOrientation=_stripesOrientation;
@property(nonatomic) double stripesAnimationVelocity; // @synthesize stripesAnimationVelocity=_stripesAnimationVelocity;
@property(nonatomic) long long stripesDirection; // @synthesize stripesDirection=_stripesDirection;
@property(nonatomic, getter=isStripesAnimated) _Bool stripesAnimated; // @synthesize stripesAnimated=_stripesAnimated;
@property(nonatomic) unsigned long long indicatorTextDisplayMode; // @synthesize indicatorTextDisplayMode=_indicatorTextDisplayMode;
@property(retain, nonatomic) UILabel *indicatorTextLabel; // @synthesize indicatorTextLabel=_indicatorTextLabel;
@property(nonatomic) double cornerRadius; // @synthesize cornerRadius=_cornerRadius;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
@property(nonatomic) double progressBarInset; // @synthesize progressBarInset=_progressBarInset;
@property(retain, nonatomic) UIColor *trackTintColor; // @synthesize trackTintColor=_trackTintColor;
@property(retain, nonatomic) UIColor *progressTintColor; // @synthesize progressTintColor=_progressTintColor;
@property(retain, nonatomic) NSArray *progressTintColors; // @synthesize progressTintColors=_progressTintColors;
@property(nonatomic) _Bool uniformTintColor; // @synthesize uniformTintColor=_uniformTintColor;
@property(nonatomic) _Bool progressStretch; // @synthesize progressStretch=_progressStretch;
@property(nonatomic) _Bool hideGloss; // @synthesize hideGloss=_hideGloss;
@property(nonatomic) unsigned long long behavior; // @synthesize behavior=_behavior;
@property(nonatomic) struct CGRect innerRect; // @synthesize innerRect;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)drawText:(struct CGContext *)arg1 withRect:(struct CGRect)arg2;
- (void)drawStripes:(struct CGContext *)arg1 withRect:(struct CGRect)arg2;
- (void)drawGloss:(struct CGContext *)arg1 withRect:(struct CGRect)arg2;
- (void)drawProgressBar:(struct CGContext *)arg1 withInnerRect:(struct CGRect)arg2 outterRect:(struct CGRect)arg3;
- (void)drawTrack:(struct CGContext *)arg1 withRect:(struct CGRect)arg2;
- (id)stripeWithOrigin:(struct CGPoint)arg1 bounds:(struct CGRect)arg2 orientation:(unsigned long long)arg3;
- (void)initializeProgressBar;
- (void)updateProgressWithTimer:(id)arg1;
- (void)setProgress:(double)arg1 animated:(_Bool)arg2;
@property double progress; // @synthesize progress=_progress;
- (void)drawRect:(struct CGRect)arg1;
- (void)layoutSubviews;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

@end


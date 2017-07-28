//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class UIView;

@interface QMElasticAnimation : NSObject
{
    UIView *view_;
    struct CGPoint anchorPoint_;
    struct CGRect backupFrame_;
    SEL selector_;
}

@property(retain, nonatomic) UIView *view; // @synthesize view=view_;
- (void).cxx_destruct;
- (void)animationDidStop3ChangeUnder:(id)arg1 finished:(id)arg2 context:(void *)arg3;
- (void)animationDidStop2ChangeUnder:(id)arg1 finished:(id)arg2 context:(void *)arg3;
- (void)animationDidStop1ChangeUnder:(id)arg1 finished:(id)arg2 context:(void *)arg3;
- (void)startAnimationChangeUnder:(id)arg1 anchorPoint:(struct CGPoint)arg2 selector:(SEL)arg3;
- (void)animationDidStop3:(id)arg1 finished:(id)arg2 context:(void *)arg3;
- (void)animationDidStop2:(id)arg1 finished:(id)arg2 context:(void *)arg3;
- (void)animationDidStop1:(id)arg1 finished:(id)arg2 context:(void *)arg3;
- (void)startAnimation:(id)arg1 anchorPoint:(struct CGPoint)arg2 selector:(SEL)arg3;
- (void)updateFrame:(double)arg1;

@end


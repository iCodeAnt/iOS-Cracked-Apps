//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug  6 2017 20:42:30).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@interface UIView (GWAnimation)
- (void)stopShake;
- (void)startShakeWithDurationPerHalf:(double)arg1 shakeAngle:(double)arg2;
- (void)viewScaleAnimation:(double)arg1 withTime:(double)arg2 completion:(CDUnknownBlockType)arg3;
- (void)viewBreathAnimationForMax:(double)arg1 forMin:(double)arg2 withTime:(double)arg3;
- (void)stopAllAnimation;
- (void)viewBreathAnimationForMax:(double)arg1 forMin:(double)arg2 withTime:(double)arg3 withType:(unsigned long long)arg4;
- (void)animationWithPath:(id)arg1 completion:(CDUnknownBlockType)arg2;
@end

//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "O2OPopEyeBaseCardCell.h"

@interface O2OPopEyeBigCardCell : O2OPopEyeBaseCardCell
{
    struct CGSize _size;
}

@property(nonatomic) struct CGSize size; // @synthesize size=_size;
- (void)playBarrageView:(id)arg1;
- (void)prepareRollCardAnimation:(id)arg1 toView:(id)arg2;
- (void)stopInfoCardAnimation;
- (void)stopImageCardAnimation;
- (void)startInfoCardAnimationWithCompletion:(CDUnknownBlockType)arg1;
- (void)startImageCardAnimationWithCompletion:(CDUnknownBlockType)arg1;
- (void)stopTransitionShow;
- (void)startTransitionShow;
- (id)initWithFrame:(struct CGRect)arg1;

@end


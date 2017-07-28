//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "CAAnimationDelegate.h"

@class NSString, UIImageView;

@interface MBKNaviBarRefreshView : UIView <CAAnimationDelegate>
{
    UIImageView *_circleImage;
}

@property(retain, nonatomic) UIImageView *circleImage; // @synthesize circleImage=_circleImage;
- (void).cxx_destruct;
- (void)stopLoading;
- (void)startLoading;
- (void)setupViewWithImage:(id)arg1 offset:(struct CGPoint)arg2;
- (id)initWithFrame:(struct CGRect)arg1 image:(id)arg2 offset:(struct CGPoint)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


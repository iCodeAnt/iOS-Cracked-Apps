//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MQQScreenSaverAnimationView.h"

@class UIImageView;

@interface MQQScreenSaverRabbitView : MQQScreenSaverAnimationView
{
    UIImageView *_rabbitView;
    long long _rabbitSpeed;
    double _imageSizeScale;
}

@property(nonatomic) double imageSizeScale; // @synthesize imageSizeScale=_imageSizeScale;
- (void)exitScreenSaver;
- (void)enterScreenSaver;
- (void)stopAnimation;
- (void)startAnimation;
- (void)setBatteryLevel:(long long)arg1;
- (void)updateRabbitViewWithSpeed:(long long)arg1;
- (id)initWithFrame:(struct CGRect)arg1 imageSizeScale:(double)arg2;

@end


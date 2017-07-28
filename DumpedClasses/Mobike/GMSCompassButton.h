//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIButton.h"

#import "GMCSClientVisualElement.h"

@class GMSCompassNeedle, NSString;

@interface GMSCompassButton : UIButton <GMCSClientVisualElement>
{
    GMSCompassNeedle *_GMSCompassNeedle;
    double _bearingInRadians;
}

+ (id)image:(id)arg1 tintedUsingColor:(id)arg2;
+ (id)compassButtonWithCompassImage:(id)arg1 needleImage:(id)arg2;
@property(nonatomic) double bearingInRadians; // @synthesize bearingInRadians=_bearingInRadians;
- (void).cxx_destruct;
@property(readonly, nonatomic) int veType;
- (unsigned long long)accessibilityTraits;
- (void)setSelected:(_Bool)arg1;
- (void)cancelTrackingWithEvent:(id)arg1;
- (void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (_Bool)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


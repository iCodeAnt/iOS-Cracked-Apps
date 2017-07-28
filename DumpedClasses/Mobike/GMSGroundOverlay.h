//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GMSOverlay.h"

@class GMSCoordinateBounds, GMSIconDrawStyle, UIImage;

@interface GMSGroundOverlay : GMSOverlay
{
    float _opacity;
    UIImage *_icon;
    double _bearing;
    GMSCoordinateBounds *_bounds;
    CDStruct_2c43369c _position;
    struct CGPoint _anchor;
}

+ (id)groundOverlayWithPosition:(CDStruct_c3b9c2ee)arg1 icon:(id)arg2 zoomLevel:(double)arg3;
+ (id)groundOverlayWithBounds:(id)arg1 icon:(id)arg2;
@property(retain, nonatomic) GMSCoordinateBounds *bounds; // @synthesize bounds=_bounds;
@property(nonatomic) double bearing; // @synthesize bearing=_bearing;
@property(nonatomic) float opacity; // @synthesize opacity=_opacity;
@property(retain, nonatomic) UIImage *icon; // @synthesize icon=_icon;
@property(nonatomic) struct CGPoint anchor; // @synthesize anchor=_anchor;
@property(nonatomic) CDStruct_c3b9c2ee position; // @synthesize position=_position;
- (void).cxx_destruct;
- (struct CGRect)accessibilityFrame;
- (void)setAccessibilityTraits:(unsigned long long)arg1;
- (unsigned long long)accessibilityTraits;
@property(readonly, nonatomic) GMSIconDrawStyle *style;
- (int)type;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end


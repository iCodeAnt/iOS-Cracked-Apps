//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "APMRecorderFocusLayer.h"

@class CAShapeLayer, NSMutableArray;

@interface LiveBroadcasterFocusLayer : APMRecorderFocusLayer
{
    _Bool _needShowExposureLine;
    CAShapeLayer *_circleLayer;
    NSMutableArray *_lineLayerArray;
    unsigned long long _iconPosition;
    double _exposureIconOffset;
}

@property(nonatomic) _Bool needShowExposureLine; // @synthesize needShowExposureLine=_needShowExposureLine;
@property(nonatomic) double exposureIconOffset; // @synthesize exposureIconOffset=_exposureIconOffset;
@property(nonatomic) unsigned long long iconPosition; // @synthesize iconPosition=_iconPosition;
@property(retain, nonatomic) NSMutableArray *lineLayerArray; // @synthesize lineLayerArray=_lineLayerArray;
@property(retain, nonatomic) CAShapeLayer *circleLayer; // @synthesize circleLayer=_circleLayer;
- (void).cxx_destruct;
@property(readonly, nonatomic, getter=getDownAdjustMax) double downAdjustMax;
@property(readonly, nonatomic, getter=getUpAdjustMax) double upAdjustMax;
- (void)drawInContext:(struct CGContext *)arg1;
- (id)initWithLayer:(id)arg1;

@end


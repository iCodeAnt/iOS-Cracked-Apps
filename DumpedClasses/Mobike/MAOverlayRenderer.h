//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class UIImage;

@interface MAOverlayRenderer : NSObject
{
    _Bool _needsUpdate;
    struct CGPoint _glWindow[4];
    struct MAMapPoint _mapPointWindow[4];
    _Bool _showsBoundingMapRect;
    unsigned int _strokeTextureID;
    id <MAOverlay> _overlay;
    struct CGPoint *_glPoints;
    unsigned long long _glPointCount;
    id <MAOverlayRenderDelegate> _rendererDelegate;
    double _alpha;
    UIImage *_textureImage;
}

@property(nonatomic) _Bool showsBoundingMapRect; // @synthesize showsBoundingMapRect=_showsBoundingMapRect;
@property(retain, nonatomic) UIImage *textureImage; // @synthesize textureImage=_textureImage;
@property(nonatomic) double alpha; // @synthesize alpha=_alpha;
@property(nonatomic) id <MAOverlayRenderDelegate> rendererDelegate; // @synthesize rendererDelegate=_rendererDelegate;
@property(nonatomic) unsigned long long glPointCount; // @synthesize glPointCount=_glPointCount;
@property(nonatomic) struct CGPoint *glPoints; // @synthesize glPoints=_glPoints;
@property(retain, nonatomic) id <MAOverlay> overlay; // @synthesize overlay=_overlay;
- (void).cxx_destruct;
- (void)MAOverlayRendererDeallocOperation;
- (void)dealloc;
- (id)initWithOverlay:(id)arg1;
- (void)onUpdateNotification:(id)arg1;
- (void)setNeedsUpdate;
- (_Bool)hitTestWithPoint:(struct MAMapPoint)arg1;
- (void)glRender;
- (void)renderBoundingMapRect;
- (void)renderIconWithTextureID:(unsigned int)arg1 points:(struct CGPoint *)arg2 modulateColor:(id)arg3;
- (void)renderIconWithTextureID:(unsigned int)arg1 points:(struct CGPoint *)arg2;
- (void)renderRegionWithPoints:(struct CGPoint *)arg1 pointCount:(unsigned long long)arg2 fillColor:(id)arg3 strokeLineWidth:(double)arg4 usingTriangleFan:(_Bool)arg5;
- (void)renderStrokedRegionWithPoints:(struct CGPoint *)arg1 pointCount:(unsigned long long)arg2 fillColor:(id)arg3 strokeColor:(id)arg4 strokeLineWidth:(double)arg5 strokeLineJoinType:(int)arg6 strokeLineDash:(_Bool)arg7 usingTriangleFan:(_Bool)arg8;
- (void)renderTextureStrokedRegionWithPoints:(struct CGPoint *)arg1 pointCount:(unsigned long long)arg2 fillColor:(id)arg3 strokeTineWidth:(double)arg4 strokeTextureID:(unsigned int)arg5 usingTriangleFan:(_Bool)arg6;
- (void)renderRegionWithPoints:(struct CGPoint *)arg1 pointCount:(unsigned long long)arg2 fillColor:(id)arg3 usingTriangleFan:(_Bool)arg4;
- (void)deleteTexture:(unsigned int)arg1;
- (unsigned int)loadTexture:(id)arg1;
- (unsigned int)loadStrokeTextureImage:(id)arg1;
@property(readonly, nonatomic) unsigned int strokeTextureID; // @synthesize strokeTextureID=_strokeTextureID;
- (void)renderTexturedLinesWithPoints:(struct CGPoint *)arg1 pointCount:(unsigned long long)arg2 lineWidth:(double)arg3 textureIDs:(id)arg4 drawStyleIndexes:(id)arg5 looped:(_Bool)arg6;
- (void)renderTexturedLinesWithPoints:(struct CGPoint *)arg1 pointCount:(unsigned long long)arg2 lineWidth:(double)arg3 textureID:(unsigned int)arg4 looped:(_Bool)arg5;
- (void)renderLinesWithPoints:(struct CGPoint *)arg1 pointCount:(unsigned long long)arg2 strokeColors:(id)arg3 drawStyleIndexes:(id)arg4 isGradient:(_Bool)arg5 lineWidth:(double)arg6 looped:(_Bool)arg7 LineJoinType:(int)arg8 LineCapType:(int)arg9 lineDash:(_Bool)arg10;
- (void)renderLinesWithPoints:(struct CGPoint *)arg1 pointCount:(unsigned long long)arg2 strokeColor:(id)arg3 lineWidth:(double)arg4 looped:(_Bool)arg5 LineJoinType:(int)arg6 LineCapType:(int)arg7 lineDash:(_Bool)arg8;
- (void)renderLinesWithPoints:(struct CGPoint *)arg1 pointCount:(unsigned long long)arg2 strokeColor:(id)arg3 lineWidth:(double)arg4 looped:(_Bool)arg5;
- (double)glWidthForWindowWidth:(double)arg1;
- (void)referenceDidChange;
- (struct CGPoint *)glPointsForMapPoints:(struct MAMapPoint *)arg1 count:(unsigned long long)arg2;
- (struct CGPoint)glPointForMapPoint:(struct MAMapPoint)arg1;
- (struct MAMapRect)mapRectForRect:(struct CGRect)arg1;
- (struct CGRect)rectForMapRect:(struct MAMapRect)arg1;
- (struct MAMapPoint)mapPointForPoint:(struct CGPoint)arg1;
- (struct CGPoint)pointForMapPoint:(struct MAMapPoint)arg1;
- (void)updateMapPointWindow;
- (void)updateGlWindow;
- (double)getMapZoomLevel;
- (struct MAMapPoint)getOffsetPoint;
- (float *)getProjectionMatrix;
- (float *)getViewMatrix;
@property(readonly, nonatomic) double contentScale;

@end


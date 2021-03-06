//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MATileOverlay.h"

@class MAHeatMapGradient, MAQuadTree, NSArray;

@interface MAHeatMapTileOverlay : MATileOverlay
{
    MAQuadTree *_quadTree;
    float *_maxIntensitiesArray;
    _Bool _allowRetinaAdapting;
    NSArray *_data;
    long long _radius;
    double _opacity;
    MAHeatMapGradient *_gradient;
}

@property(nonatomic) _Bool allowRetinaAdapting; // @synthesize allowRetinaAdapting=_allowRetinaAdapting;
@property(retain, nonatomic) MAHeatMapGradient *gradient; // @synthesize gradient=_gradient;
@property(nonatomic) double opacity; // @synthesize opacity=_opacity;
@property(nonatomic) long long radius; // @synthesize radius=_radius;
@property(retain, nonatomic) NSArray *data; // @synthesize data=_data;
- (void).cxx_destruct;
- (void)deallocOperation;
- (void)dealloc;
- (float *)getMaxIntensitiesWithRadius:(long long)arg1 datas:(id)arg2 mapRect:(struct MAMapRect)arg3;
- (float)getMaxValueWithPoints:(id)arg1 maMapRect:(struct MAMapRect)arg2 radius:(long long)arg3 screenDim:(int)arg4;
- (struct CGPoint)pointInTileWithMapPoint:(struct MAMapPoint)arg1 withInMapRect:(struct MAMapRect)arg2 atZoomLevel:(long long)arg3;
- (struct MAMapRect)mapRectWithTilePath:(struct MATileOverlayPath)arg1;
- (id)heatMapnodesInMapRect:(struct MAMapRect)arg1;
- (void)buildQuadTree;
- (struct MAMapRect)boundingMapRectForHeatMapData;
- (void)loadTileAtPath:(struct MATileOverlayPath)arg1 result:(CDUnknownBlockType)arg2;
- (id)init;

@end


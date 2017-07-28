//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "MAOverlayRenderDelegate.h"

@class NSArray, NSMutableOrderedSet, NSString;

@interface MAOverlayContainerView : UIView <MAOverlayRenderDelegate>
{
    NSMutableOrderedSet *_overlays[2];
    NSMutableOrderedSet *_drawables[2];
    NSMutableOrderedSet *_internalOverlays;
    NSMutableOrderedSet *_internalDrawables;
    id <MAOverlayContainerViewDelegate> _delegate;
}

@property(nonatomic) id <MAOverlayContainerViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)initInnerData;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)drawInternalOverlays;
- (void)clearInternalOverlays;
- (void)removeInternalOverlay:(id)arg1;
- (void)addInternalOverlay:(id)arg1;
@property(readonly, nonatomic) NSArray *internalOverlays;
- (id)drawableForOverlay:(id)arg1;
- (void)referenceDidChange;
- (void)drawOverlaysInLevel:(long long)arg1;
- (struct MAMapRect)visibleMapRect;
- (_Bool)existsOverlay:(id)arg1;
- (_Bool)checkLevel:(long long *)arg1 andIndex:(unsigned long long *)arg2 ForOverlay:(id)arg3;
- (id)overlayForIndex:(unsigned long long)arg1 inLevel:(long long)arg2;
- (void)insertOverlay:(id)arg1 withDrawable:(id)arg2 atIndex:(long long)arg3 level:(long long)arg4;
- (void)removeOverlay:(id)arg1 withDrawable:(id)arg2 level:(long long)arg3;
- (id)hitTestWithPoint:(struct MAMapPoint)arg1;
- (void)removeAllOverlays;
- (void)exchangeOverlayAtIndex:(unsigned long long)arg1 withOverlayAtIndex:(unsigned long long)arg2 level:(long long)arg3;
- (void)exchangeOverlay:(id)arg1 withOverlay:(id)arg2;
- (void)removeOverlays:(id)arg1;
- (void)removeOverlay:(id)arg1;
- (void)insertOverlay:(id)arg1 belowOverlay:(id)arg2;
- (void)insertOverlay:(id)arg1 aboveOverlay:(id)arg2;
- (void)insertOverlay:(id)arg1 atIndex:(unsigned long long)arg2 level:(long long)arg3;
- (void)insertOverlay:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)addOverlays:(id)arg1 level:(long long)arg2;
- (void)addOverlay:(id)arg1 level:(long long)arg2;
- (void)addOverlays:(id)arg1;
- (void)addOverlay:(id)arg1;
- (double)getMapZoomLevel;
- (double)metersPerPixelAtMapZoomLevel:(double)arg1;
@property(readonly, nonatomic) NSArray *overlays;
- (id)overlaysInLevel:(long long)arg1;
- (double)rendererContentScale;
- (float *)getProjectionMatrix;
- (float *)getViewMatrix;
- (struct MAMapPoint)getCurrentOffsetPoint;
- (id)getCurrentTiles;
- (struct CGPoint)overlayRenderGetCurrentRotateDegreeAndCameraDegree;
- (struct CGPoint)overlayRenderGetPhysicalResolutionForPoint:(struct CGPoint)arg1;
- (double)overlayRenderMapPointLenForWinLen:(double)arg1;
- (struct CGPoint)overlayRenderGlPointForMapPoint:(struct MAMapPoint)arg1;
- (double)overlayRenderMapLenForPixelLen:(int)arg1;
- (struct MAMapRect)overlayRenderMapViewVisibleMapRect;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


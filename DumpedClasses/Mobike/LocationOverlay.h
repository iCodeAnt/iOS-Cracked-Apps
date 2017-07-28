//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QMOverlay.h"

@class NSString, QMUserLocationView, UIColor, UIImage;

@interface LocationOverlay : QMOverlay
{
    QMUserLocationView *userLocationView_;
    _Bool showHeading_;
    _Bool _isUsedForLocationShare;
    _Bool _disableUserLocationView;
    _Bool _bAddObserver;
    UIColor *_circleColor;
    NSString *_locationImageName;
    NSString *_locationFailureImageName;
}

@property(nonatomic) _Bool bAddObserver; // @synthesize bAddObserver=_bAddObserver;
@property(retain, nonatomic) NSString *locationFailureImageName; // @synthesize locationFailureImageName=_locationFailureImageName;
@property(retain, nonatomic) NSString *locationImageName; // @synthesize locationImageName=_locationImageName;
@property(nonatomic) _Bool disableUserLocationView; // @synthesize disableUserLocationView=_disableUserLocationView;
@property(nonatomic, getter=isShowHeading) _Bool showHeading; // @synthesize showHeading=showHeading_;
@property(retain, nonatomic) QMUserLocationView *userLocationView; // @synthesize userLocationView=userLocationView_;
- (void).cxx_destruct;
@property(retain, nonatomic) UIColor *circleColor; // @synthesize circleColor=_circleColor;
@property(retain, nonatomic) UIImage *locationFailureImage;
@property(retain, nonatomic) UIImage *locationImage;
- (void)handleUserLocationDidChange:(id)arg1;
- (void)doLoad;
- (void)reload;
- (int)type;
- (id)updateLocationViewImage;
- (id)viewForAnnotation:(id)arg1 reusingView:(id)arg2;
- (void)removeObservers;
- (void)addObservers;
- (void)dealloc;
- (void)setup;
- (id)initWithMapView:(id)arg1;
- (id)init;

@end


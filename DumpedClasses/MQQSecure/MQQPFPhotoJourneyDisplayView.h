//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MQQPFPhotoJourneyBaseView.h"

@class CLGeocoder, MQQAttributedLabel, MQQPFPhotoJourney, NSMutableArray, UILabel, UIView;

@interface MQQPFPhotoJourneyDisplayView : MQQPFPhotoJourneyBaseView
{
    UIView *_backgroundView;
    UILabel *_titleLabel;
    MQQAttributedLabel *_detailTextLabel;
    UIView *_imageContainView;
    UIView *_imageView;
    UILabel *_dateLabel;
    MQQPFPhotoJourney *_photoJourney;
    long long _updateID;
    _Bool _clearAfterShow;
    double _updateInterval;
    CLGeocoder *_geocoder;
    NSMutableArray *_downBackgroundViewList;
    NSMutableArray *_upBackgroundViewList;
    NSMutableArray *_fadeBackgroundViewList;
}

@property(retain, nonatomic) NSMutableArray *fadeBackgroundViewList; // @synthesize fadeBackgroundViewList=_fadeBackgroundViewList;
@property(retain, nonatomic) NSMutableArray *upBackgroundViewList; // @synthesize upBackgroundViewList=_upBackgroundViewList;
@property(retain, nonatomic) NSMutableArray *downBackgroundViewList; // @synthesize downBackgroundViewList=_downBackgroundViewList;
@property(retain, nonatomic) CLGeocoder *geocoder; // @synthesize geocoder=_geocoder;
@property(retain, nonatomic) MQQPFPhotoJourney *photoJourney; // @synthesize photoJourney=_photoJourney;
@property(nonatomic) _Bool clearAfterShow; // @synthesize clearAfterShow=_clearAfterShow;
@property(nonatomic) double updateInterval; // @synthesize updateInterval=_updateInterval;
- (void)loadSpringFestivalBackgroundContentView;
- (void)loadChristmasBackgroundContentView;
- (void)loadChristmasEveBackgroundContentView;
- (void)loadValentineDayBackgroundContentView;
- (void)loadNewYearDayBackgroundContentView;
- (void)updateBackgroundViewWithPhotoJourneyDisplay:(id)arg1;
- (void)removeAllBackgroundView;
- (void)updateCityNameWithPhotoJourneyDisplay:(id)arg1;
- (void)removeDisplayImageViews;
- (void)loadDisplayImageViews;
- (void)updatePhotoJourneyDisplay:(id)arg1;
- (void)refreshPhotoJourney:(id)arg1;
- (void)didDismissPhotoJourneyView;
- (void)didShowPhotoJourneyView;
- (void)willShowPhotoJourneyView;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 isDefaultStyle:(_Bool)arg2;

@end

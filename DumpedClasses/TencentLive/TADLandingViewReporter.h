//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class TADMediaItem, TADMediaLog, TADReportSingleMediaItem;

@interface TADLandingViewReporter : NSObject
{
    TADMediaItem *_mediaItem;
    TADReportSingleMediaItem *_mediaItemStat;
    TADMediaLog *_mediaLog;
    double _timeOfLandingViewLastOpened;
    double _durationOfLandingViewPresented;
    double _timeOfLandingViewStartLoad;
    double _durationOfLandingViewLoading;
}

@property(nonatomic) double durationOfLandingViewLoading; // @synthesize durationOfLandingViewLoading=_durationOfLandingViewLoading;
@property(nonatomic) double timeOfLandingViewStartLoad; // @synthesize timeOfLandingViewStartLoad=_timeOfLandingViewStartLoad;
@property(nonatomic) double durationOfLandingViewPresented; // @synthesize durationOfLandingViewPresented=_durationOfLandingViewPresented;
@property(nonatomic) double timeOfLandingViewLastOpened; // @synthesize timeOfLandingViewLastOpened=_timeOfLandingViewLastOpened;
@property(retain, nonatomic) TADMediaLog *mediaLog; // @synthesize mediaLog=_mediaLog;
@property(retain, nonatomic) TADReportSingleMediaItem *mediaItemStat; // @synthesize mediaItemStat=_mediaItemStat;
@property(retain, nonatomic) TADMediaItem *mediaItem; // @synthesize mediaItem=_mediaItem;
- (void).cxx_destruct;
- (void)onLandingViewFinishLoadingUrl;
- (void)onLandingViewStartLoadingUrl;
- (void)onLandingViewDidFinishLoad;
- (void)onLandingViewDidStartLoad;
- (void)onLandingViewRefreshUrl;
- (void)onLandingViewDidDismiss;
- (void)onLandingViewDidAppear;
- (void)reportForLandingViewState:(unsigned long long)arg1;
- (id)initWithAdItem:(id)arg1;

@end

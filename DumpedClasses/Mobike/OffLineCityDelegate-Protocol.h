//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSError, QCityData;

@protocol OffLineCityDelegate <NSObject>
- (void)onReceiveCity:(QCityData *)arg1 Error:(NSError *)arg2;
- (void)notifyCheckCityDataUpdateResult:(int)arg1;
- (void)cityDataIsReadyForUse:(QCityData *)arg1;
- (void)onReceiveCity:(QCityData *)arg1 Size:(long long)arg2 totalLength:(long long)arg3;

@optional
- (void)pauseCityDownload:(QCityData *)arg1;
@end


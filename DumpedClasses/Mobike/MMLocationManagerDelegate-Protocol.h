//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CLHeading, MMLocation, MMLocationManager, NSError;

@protocol MMLocationManagerDelegate <NSObject>

@optional
- (void)locationManager:(MMLocationManager *)arg1 didChangeAuthorizationStatus:(int)arg2;
- (void)locationManager:(MMLocationManager *)arg1 didFailWithError:(NSError *)arg2;
- (void)locationManager:(MMLocationManager *)arg1 didUpdateHeading:(CLHeading *)arg2;
- (void)locationManager:(MMLocationManager *)arg1 didUpdateLocation:(MMLocation *)arg2;
@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "CLLocationManagerDelegate.h"

@class CLLocationManager, NSString;

@interface VIDeviceInfoUtils : NSObject <CLLocationManagerDelegate>
{
    CLLocationManager *_locationManager;
}

+ (double)statusBarHeight;
+ (double)screenWidth;
+ (double)screenHeight;
+ (id)deviceName;
+ (id)fetchSSIDInfo;
@property(retain, nonatomic) CLLocationManager *locationManager; // @synthesize locationManager=_locationManager;
- (void).cxx_destruct;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


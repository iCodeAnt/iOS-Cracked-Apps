//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MQQHotspotOperation.h"

@class CLLocation, MQQHotspotConfiguredResult, NSArray, NSError;

@interface MQQHotspotConfiguratorOperation : MQQHotspotOperation
{
    MQQHotspotConfiguratorOperation *_dependencyConfigurator;
    long long _configuratorPriority;
    NSError *_error;
    NSArray *_wifiList;
    CLLocation *_location;
    MQQHotspotConfiguredResult *_configuredResult;
}

@property(retain) MQQHotspotConfiguredResult *configuredResult; // @synthesize configuredResult=_configuredResult;
@property(retain) CLLocation *location; // @synthesize location=_location;
@property(retain) NSArray *wifiList; // @synthesize wifiList=_wifiList;
@property(retain) NSError *error; // @synthesize error=_error;
@property long long configuratorPriority; // @synthesize configuratorPriority=_configuratorPriority;
@property(retain) MQQHotspotConfiguratorOperation *dependencyConfigurator;
- (void)dealloc;
- (id)initWithWiFiList:(id)arg1 location:(id)arg2;

@end

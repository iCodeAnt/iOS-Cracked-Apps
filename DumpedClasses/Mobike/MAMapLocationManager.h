//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "CLLocationManagerDelegate.h"

@class NSMutableArray, NSString;

@interface MAMapLocationManager : NSObject <CLLocationManagerDelegate>
{
    NSMutableArray *_bindingArr;
}

+ (id)sharedInstance;
@property(retain, nonatomic) NSMutableArray *bindingArr; // @synthesize bindingArr=_bindingArr;
- (void).cxx_destruct;
- (id)getMatchedBindingOf:(id)arg1;
- (void)locationManager:(id)arg1 didUpdateHeading:(id)arg2;
- (void)locationManager:(id)arg1 didFailWithError:(id)arg2;
- (void)locationManager:(id)arg1 didUpdateLocations:(id)arg2;
- (void)willDestroyHandler:(id)arg1;
- (void)bindHandler:(id)arg1 toLocationManager:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


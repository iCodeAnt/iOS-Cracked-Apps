//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AMapSearchObject.h"

@class NSArray, NSString;

@interface AMapLocalWeatherForecast : AMapSearchObject
{
    NSString *_adcode;
    NSString *_province;
    NSString *_city;
    NSString *_reportTime;
    NSArray *_casts;
}

+ (id)ajo_arrayClassMapping;
+ (id)ajo_mapping;
@property(retain, nonatomic) NSArray *casts; // @synthesize casts=_casts;
@property(copy, nonatomic) NSString *reportTime; // @synthesize reportTime=_reportTime;
@property(copy, nonatomic) NSString *city; // @synthesize city=_city;
@property(copy, nonatomic) NSString *province; // @synthesize province=_province;
@property(copy, nonatomic) NSString *adcode; // @synthesize adcode=_adcode;
- (void).cxx_destruct;
- (id)init;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QMSBaseResult.h"

@class NSString;

@interface QMSReGeoCodeAdInfo : QMSBaseResult
{
    NSString *_adcode;
    NSString *_name;
    NSString *_nation;
    NSString *_province;
    NSString *_city;
    NSString *_city_code;
    NSString *_city_code_mo;
    NSString *_district;
    struct CLLocationCoordinate2D _location;
}

@property(copy, nonatomic) NSString *district; // @synthesize district=_district;
@property(copy, nonatomic) NSString *city_code_mo; // @synthesize city_code_mo=_city_code_mo;
@property(copy, nonatomic) NSString *city_code; // @synthesize city_code=_city_code;
@property(copy, nonatomic) NSString *city; // @synthesize city=_city;
@property(copy, nonatomic) NSString *province; // @synthesize province=_province;
@property(copy, nonatomic) NSString *nation; // @synthesize nation=_nation;
@property(nonatomic) struct CLLocationCoordinate2D location; // @synthesize location=_location;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(copy, nonatomic) NSString *adcode; // @synthesize adcode=_adcode;
- (void).cxx_destruct;

@end


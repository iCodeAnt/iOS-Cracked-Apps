//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QMSBaseResult.h"

@class NSString;

@interface QMSReGeoCodeFamousArea : QMSBaseResult
{
    NSString *_title;
    double __distance;
    NSString *__dir_desc;
    struct CLLocationCoordinate2D _location;
}

@property(copy, nonatomic) NSString *_dir_desc; // @synthesize _dir_desc=__dir_desc;
@property(nonatomic) double _distance; // @synthesize _distance=__distance;
@property(nonatomic) struct CLLocationCoordinate2D location; // @synthesize location=_location;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;

@end


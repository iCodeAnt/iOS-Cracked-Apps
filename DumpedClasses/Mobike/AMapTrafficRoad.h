//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AMapSearchObject.h"

@class NSString;

@interface AMapTrafficRoad : AMapSearchObject
{
    float _angle;
    float _speed;
    NSString *_name;
    long long _status;
    NSString *_direction;
    NSString *_polyline;
}

+ (id)ajo_mapping;
@property(copy, nonatomic) NSString *polyline; // @synthesize polyline=_polyline;
@property(nonatomic) float speed; // @synthesize speed=_speed;
@property(nonatomic) float angle; // @synthesize angle=_angle;
@property(copy, nonatomic) NSString *direction; // @synthesize direction=_direction;
@property(nonatomic) long long status; // @synthesize status=_status;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;

@end

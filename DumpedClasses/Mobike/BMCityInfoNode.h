//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface BMCityInfoNode : NSObject
{
    int _cityId;
    int _resultNumber;
    NSString *_cityName;
}

@property(nonatomic) int resultNumber; // @synthesize resultNumber=_resultNumber;
@property(nonatomic) int cityId; // @synthesize cityId=_cityId;
@property(retain, nonatomic) NSString *cityName; // @synthesize cityName=_cityName;
- (void).cxx_destruct;
- (void)dealloc;
- (id)init;

@end


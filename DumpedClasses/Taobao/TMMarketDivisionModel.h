//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface TMMarketDivisionModel : NSObject
{
    _Bool _hasChild;
    NSString *_provinceName;
    NSString *_cityName;
    NSString *_districtName;
    NSString *_divisionName;
    NSString *_divisionCode;
}

@property(nonatomic) _Bool hasChild; // @synthesize hasChild=_hasChild;
@property(copy, nonatomic) NSString *divisionCode; // @synthesize divisionCode=_divisionCode;
@property(copy, nonatomic) NSString *divisionName; // @synthesize divisionName=_divisionName;
@property(copy, nonatomic) NSString *districtName; // @synthesize districtName=_districtName;
@property(copy, nonatomic) NSString *cityName; // @synthesize cityName=_cityName;
@property(copy, nonatomic) NSString *provinceName; // @synthesize provinceName=_provinceName;
- (void).cxx_destruct;
- (id)initWithData:(id)arg1;

@end


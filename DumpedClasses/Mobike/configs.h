//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "Mobike_Model.h"

#import "NSCoding.h"

@class ColorEgg, DepositConfigInfo, MPLConig, NSMutableArray, NSMutableSet, NSString, OperationIconConfig, mobikeConfigs;

@interface configs : Mobike_Model <NSCoding>
{
    _Bool _isRedpacketOn;
    NSString *_operationAreaCityCode;
    long long _version;
    NSMutableSet *_citySet;
    NSMutableArray *_cards;
    mobikeConfigs *_bikeConfigs;
    OperationIconConfig *_operationIconfig;
    NSMutableArray *_operationBoundConfig;
    long long _currency;
    ColorEgg *_egg;
    MPLConig *_mpl;
    NSString *_h5BaseUrl;
    DepositConfigInfo *_depositConfig;
    long long _locatedCountryId;
}

@property long long locatedCountryId; // @synthesize locatedCountryId=_locatedCountryId;
@property(retain) DepositConfigInfo *depositConfig; // @synthesize depositConfig=_depositConfig;
@property(retain) NSString *h5BaseUrl; // @synthesize h5BaseUrl=_h5BaseUrl;
@property(retain) MPLConig *mpl; // @synthesize mpl=_mpl;
@property(retain) ColorEgg *egg; // @synthesize egg=_egg;
@property long long currency; // @synthesize currency=_currency;
@property(retain) NSMutableArray *operationBoundConfig; // @synthesize operationBoundConfig=_operationBoundConfig;
@property(retain) OperationIconConfig *operationIconfig; // @synthesize operationIconfig=_operationIconfig;
@property(retain) mobikeConfigs *bikeConfigs; // @synthesize bikeConfigs=_bikeConfigs;
@property(retain) NSMutableArray *cards; // @synthesize cards=_cards;
@property(retain) NSMutableSet *citySet; // @synthesize citySet=_citySet;
@property _Bool isRedpacketOn; // @synthesize isRedpacketOn=_isRedpacketOn;
@property long long version; // @synthesize version=_version;
@property(retain) NSString *operationAreaCityCode; // @synthesize operationAreaCityCode=_operationAreaCityCode;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class ECSCartRestaurant, ECSCartRestaurantCheckoutInfo, NSArray;

@interface ECSCartRestaurantSectionModel : NSObject
{
    _Bool _shouldExpand;
    ECSCartRestaurantCheckoutInfo *_restaurantCheckoutInfo;
    long long _unexpandCount;
    NSArray *_sectionData;
    unsigned long long _balanceType;
    ECSCartRestaurant *_cartRestaurant;
    NSArray *_foods;
}

@property(copy, nonatomic) NSArray *foods; // @synthesize foods=_foods;
@property(retain, nonatomic) ECSCartRestaurant *cartRestaurant; // @synthesize cartRestaurant=_cartRestaurant;
@property(nonatomic) unsigned long long balanceType; // @synthesize balanceType=_balanceType;
@property(copy, nonatomic) NSArray *sectionData; // @synthesize sectionData=_sectionData;
@property(nonatomic) long long unexpandCount; // @synthesize unexpandCount=_unexpandCount;
@property(nonatomic) _Bool shouldExpand; // @synthesize shouldExpand=_shouldExpand;
@property(retain, nonatomic) ECSCartRestaurantCheckoutInfo *restaurantCheckoutInfo; // @synthesize restaurantCheckoutInfo=_restaurantCheckoutInfo;
- (void).cxx_destruct;
- (void)updateBalanceType;
- (void)updateSectionData;
- (void)updateDisplayData;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSString;

@interface MOPCategoryItemReq : NSObject
{
    int _pageNo;
    NSString *_districtCode;
    NSString *_categoryId;
    NSString *_longitude;
    NSString *_latitude;
    NSString *_leftBottomLongitude;
    NSString *_leftBottomLatitude;
    NSString *_rightTopLongitude;
    NSString *_rightTopLatitude;
    NSArray *_existsItemIdSet;
}

+ (Class)existsItemIdSetElementClass;
@property(retain, nonatomic) NSArray *existsItemIdSet; // @synthesize existsItemIdSet=_existsItemIdSet;
@property(retain, nonatomic) NSString *rightTopLatitude; // @synthesize rightTopLatitude=_rightTopLatitude;
@property(retain, nonatomic) NSString *rightTopLongitude; // @synthesize rightTopLongitude=_rightTopLongitude;
@property(retain, nonatomic) NSString *leftBottomLatitude; // @synthesize leftBottomLatitude=_leftBottomLatitude;
@property(retain, nonatomic) NSString *leftBottomLongitude; // @synthesize leftBottomLongitude=_leftBottomLongitude;
@property(nonatomic) int pageNo; // @synthesize pageNo=_pageNo;
@property(retain, nonatomic) NSString *latitude; // @synthesize latitude=_latitude;
@property(retain, nonatomic) NSString *longitude; // @synthesize longitude=_longitude;
@property(retain, nonatomic) NSString *categoryId; // @synthesize categoryId=_categoryId;
@property(retain, nonatomic) NSString *districtCode; // @synthesize districtCode=_districtCode;
- (void).cxx_destruct;

@end

//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QMSSearchOption.h"

@class NSString;

@interface QMSPoiSearchOption : QMSSearchOption
{
    unsigned long long _page_size;
    unsigned long long _page_index;
    NSString *_keyword;
    NSString *_boundary;
    NSString *_filter;
    NSString *_orderby;
}

+ (id)fromStandardPoiSearchBoundsRequest:(id)arg1;
+ (id)fromStandardPoiSearchCityRequest:(id)arg1;
@property(copy, nonatomic) NSString *orderby; // @synthesize orderby=_orderby;
@property(copy, nonatomic) NSString *filter; // @synthesize filter=_filter;
@property(copy, nonatomic) NSString *boundary; // @synthesize boundary=_boundary;
@property(copy, nonatomic) NSString *keyword; // @synthesize keyword=_keyword;
@property(nonatomic) unsigned long long page_index; // @synthesize page_index=_page_index;
@property(nonatomic) unsigned long long page_size; // @synthesize page_size=_page_size;
- (void).cxx_destruct;
- (void)setOrderbyDisanceAsc:(_Bool)arg1;
- (void)setFilterByCategories:(id)arg1;
- (void)setBoundaryByRectangleWithleftBottomCoordinate:(struct CLLocationCoordinate2D)arg1 rightTopCoordinate:(struct CLLocationCoordinate2D)arg2;
- (void)setBoundaryByNearbyWithCenterCoordinate:(struct CLLocationCoordinate2D)arg1 radius:(unsigned long long)arg2;
- (void)setBoundaryByRegionWithCityName:(id)arg1 autoExtend:(_Bool)arg2;
- (id)init;

@end


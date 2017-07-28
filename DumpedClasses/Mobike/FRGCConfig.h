//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FRGCGeoDetail, FRGCGeoHash, NSString;

@interface FRGCConfig : NSObject
{
    NSString *_version;
    FRGCGeoHash *_geoHash;
    FRGCGeoDetail *_detail;
}

@property(retain, nonatomic) FRGCGeoDetail *detail; // @synthesize detail=_detail;
@property(retain, nonatomic) FRGCGeoHash *geoHash; // @synthesize geoHash=_geoHash;
@property(copy, nonatomic) NSString *version; // @synthesize version=_version;
- (void).cxx_destruct;
- (id)initWithFilePath:(id)arg1;
- (void)setupWithDictionary:(id)arg1;
- (void)setupGeoHashWithDictionary:(id)arg1;
- (void)setupDetailWithDictionary:(id)arg1;
- (id)itemForSectionID:(id)arg1;
- (id)sectionIDsForCoordinate:(struct CLLocationCoordinate2D)arg1;
- (id)sectionIDsForKey:(id)arg1;
- (id)keyForCoordinate:(struct CLLocationCoordinate2D)arg1;

@end


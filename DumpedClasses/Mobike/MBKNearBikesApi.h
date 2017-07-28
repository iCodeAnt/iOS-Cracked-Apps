//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MBKApi.h"

@class NSArray;

@interface MBKNearBikesApi : MBKApi
{
    NSArray *_bikeListArray;
}

@property(retain, nonatomic) NSArray *bikeListArray; // @synthesize bikeListArray=_bikeListArray;
- (void).cxx_destruct;
- (id)clientAuthor;
- (id)author;
- (void)parseResponse:(id)arg1;
- (int)httpMethod;
- (id)relativePath;
- (void)setParamsWithUserId:(id)arg1 cityCode:(id)arg2 nearFlag:(id)arg3 pageNum:(id)arg4 coordinate:(struct CLLocationCoordinate2D)arg5;

@end


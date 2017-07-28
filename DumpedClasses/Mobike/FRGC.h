//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FRGCBoundary, FRGCConfig;

@interface FRGC : NSObject
{
    FRGCConfig *_config;
    FRGCBoundary *_boundary;
}

@property(retain, nonatomic) FRGCBoundary *boundary; // @synthesize boundary=_boundary;
@property(retain, nonatomic) FRGCConfig *config; // @synthesize config=_config;
- (void).cxx_destruct;
- (id)initWithConfigureFilePath:(id)arg1 boundaryFilePath:(id)arg2;
- (void)setupBoundaryWithFilePath:(id)arg1;
- (void)setupConfigWithFilePath:(id)arg1;
- (id)itemForCoordinate:(struct CLLocationCoordinate2D)arg1 error:(id *)arg2;
- (id)constructErrorWithCode:(long long)arg1 description:(id)arg2;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GMSStreetViewDataMap.h"

@interface GMSStreetViewDepthMap : GMSStreetViewDataMap
{
    struct vector<gmscore::math::Vector4f, std::__1::allocator<gmscore::math::Vector4f>> _planeEquations;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (struct Vector4f)planeEquationAtX:(int)arg1 y:(int)arg2;
- (_Bool)readRemainingDataFromInput:(struct GMSx_LEJavaDataInput *)arg1 numberOfItems:(int)arg2;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GMSx_PBGeneratedMessage.h"

@class GMSx_PBMutableArray;

@interface GMSx_GMMMfeTileProto : GMSx_PBGeneratedMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool hasTileFlagsArray; // @dynamic hasTileFlagsArray;
@property(nonatomic) _Bool hasTileIndexX; // @dynamic hasTileIndexX;
@property(nonatomic) _Bool hasTileIndexY; // @dynamic hasTileIndexY;
@property(nonatomic) _Bool hasZoomLevel; // @dynamic hasZoomLevel;
@property(retain, nonatomic) GMSx_PBMutableArray *tileFlagsArray; // @dynamic tileFlagsArray;
@property(nonatomic) int tileIndexX; // @dynamic tileIndexX;
@property(nonatomic) int tileIndexY; // @dynamic tileIndexY;
@property(nonatomic) int zoomLevel; // @dynamic zoomLevel;

@end


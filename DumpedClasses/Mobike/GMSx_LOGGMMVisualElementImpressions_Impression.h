//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GMSx_PBGeneratedMessage.h"

@class GMSx_PBMutableArray, NSString;

@interface GMSx_LOGGMMVisualElementImpressions_Impression : GMSx_PBGeneratedMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) NSString *ei; // @dynamic ei;
@property(nonatomic) _Bool hasEi; // @dynamic hasEi;
@property(nonatomic) _Bool hasRawClientTimestampMs; // @dynamic hasRawClientTimestampMs;
@property(nonatomic) _Bool hasUiType; // @dynamic hasUiType;
@property(nonatomic) _Bool hasVeArray; // @dynamic hasVeArray;
@property(nonatomic) long long rawClientTimestampMs; // @dynamic rawClientTimestampMs;
@property(nonatomic) int uiType; // @dynamic uiType;
@property(retain, nonatomic) GMSx_PBMutableArray *veArray; // @dynamic veArray;

@end


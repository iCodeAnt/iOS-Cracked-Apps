//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GMSx_PBGeneratedMessage.h"

@class GMSx_LOCUFeatureIdProto, GMSx_LOCULatLng, NSString;

@interface GMSx_LOCULocationDescriptor : GMSx_PBGeneratedMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) int confidence; // @dynamic confidence;
@property(retain, nonatomic) NSString *diagnosticInfo; // @dynamic diagnosticInfo;
@property(retain, nonatomic) GMSx_LOCUFeatureIdProto *featureId; // @dynamic featureId;
@property(nonatomic) _Bool hasConfidence; // @dynamic hasConfidence;
@property(nonatomic) _Bool hasDiagnosticInfo; // @dynamic hasDiagnosticInfo;
@property(nonatomic) _Bool hasFeatureId; // @dynamic hasFeatureId;
@property(nonatomic) _Bool hasHistoricalProducer; // @dynamic hasHistoricalProducer;
@property(nonatomic) _Bool hasHistoricalProminence; // @dynamic hasHistoricalProminence;
@property(nonatomic) _Bool hasLanguage; // @dynamic hasLanguage;
@property(nonatomic) _Bool hasLatlng; // @dynamic hasLatlng;
@property(nonatomic) _Bool hasLatlngSpan; // @dynamic hasLatlngSpan;
@property(nonatomic) _Bool hasLevelFeatureId; // @dynamic hasLevelFeatureId;
@property(nonatomic) _Bool hasLevelNumber; // @dynamic hasLevelNumber;
@property(nonatomic) _Bool hasLoc; // @dynamic hasLoc;
@property(nonatomic) _Bool hasMid; // @dynamic hasMid;
@property(nonatomic) _Bool hasProducer; // @dynamic hasProducer;
@property(nonatomic) _Bool hasRadius; // @dynamic hasRadius;
@property(nonatomic) _Bool hasTimestamp; // @dynamic hasTimestamp;
@property(nonatomic) int historicalProducer; // @dynamic historicalProducer;
@property(nonatomic) int historicalProminence; // @dynamic historicalProminence;
@property(retain, nonatomic) NSString *language; // @dynamic language;
@property(retain, nonatomic) GMSx_LOCULatLng *latlng; // @dynamic latlng;
@property(retain, nonatomic) GMSx_LOCULatLng *latlngSpan; // @dynamic latlngSpan;
@property(retain, nonatomic) GMSx_LOCUFeatureIdProto *levelFeatureId; // @dynamic levelFeatureId;
@property(nonatomic) float levelNumber; // @dynamic levelNumber;
@property(retain, nonatomic) NSString *loc; // @dynamic loc;
@property(nonatomic) unsigned long long mid; // @dynamic mid;
@property(nonatomic) int producer; // @dynamic producer;
@property(nonatomic) float radius; // @dynamic radius;
@property(nonatomic) long long timestamp; // @dynamic timestamp;

@end


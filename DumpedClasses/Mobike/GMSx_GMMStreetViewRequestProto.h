//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GMSx_PBGeneratedMessage.h"

@class GMSx_GMMMapPointProto, GMSx_GMMStreetViewRequestProto_Metadata, GMSx_GMMStreetViewRequestProto_SuperTile, GMSx_GMMStreetViewRequestProto_Thumbnail, GMSx_GMMStreetViewRequestProto_Tiles, GMSx_PBMutableArray, NSString;

@interface GMSx_GMMStreetViewRequestProto : GMSx_PBGeneratedMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) int cbkVersion; // @dynamic cbkVersion;
@property(nonatomic) _Bool clientSideThrottlingSupported; // @dynamic clientSideThrottlingSupported;
@property(nonatomic) _Bool hasCbkVersion; // @dynamic hasCbkVersion;
@property(nonatomic) _Bool hasClientSideThrottlingSupported; // @dynamic hasClientSideThrottlingSupported;
@property(nonatomic) _Bool hasIsPrefetch; // @dynamic hasIsPrefetch;
@property(nonatomic) _Bool hasLatLon; // @dynamic hasLatLon;
@property(nonatomic) _Bool hasLinkSkip; // @dynamic hasLinkSkip;
@property(nonatomic) _Bool hasMetadata; // @dynamic hasMetadata;
@property(nonatomic) _Bool hasPanoId; // @dynamic hasPanoId;
@property(nonatomic) _Bool hasRendererArray; // @dynamic hasRendererArray;
@property(nonatomic) _Bool hasRequestSignature; // @dynamic hasRequestSignature;
@property(nonatomic) _Bool hasSearchRadiusMeters; // @dynamic hasSearchRadiusMeters;
@property(nonatomic) _Bool hasSuperTile; // @dynamic hasSuperTile;
@property(nonatomic) _Bool hasThumbnail; // @dynamic hasThumbnail;
@property(nonatomic) _Bool hasTiles; // @dynamic hasTiles;
@property(nonatomic) _Bool isPrefetch; // @dynamic isPrefetch;
@property(retain, nonatomic) GMSx_GMMMapPointProto *latLon; // @dynamic latLon;
@property(nonatomic) int linkSkip; // @dynamic linkSkip;
@property(retain, nonatomic) GMSx_GMMStreetViewRequestProto_Metadata *metadata; // @dynamic metadata;
@property(retain, nonatomic) NSString *panoId; // @dynamic panoId;
@property(retain, nonatomic) GMSx_PBMutableArray *rendererArray; // @dynamic rendererArray;
@property(nonatomic) _Bool requestSignature; // @dynamic requestSignature;
@property(nonatomic) int searchRadiusMeters; // @dynamic searchRadiusMeters;
@property(retain, nonatomic) GMSx_GMMStreetViewRequestProto_SuperTile *superTile; // @dynamic superTile;
@property(retain, nonatomic) GMSx_GMMStreetViewRequestProto_Thumbnail *thumbnail; // @dynamic thumbnail;
@property(retain, nonatomic) GMSx_GMMStreetViewRequestProto_Tiles *tiles; // @dynamic tiles;

@end


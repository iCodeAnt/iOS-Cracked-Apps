//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSManagedObject.h"

@class GMSCachedTileBlob, NSDate, NSNumber;

@interface GMSCachedTile : NSManagedObject
{
}

- (id)tileCoords;
- (id)stringValue;

// Remaining properties
@property(retain, nonatomic) GMSCachedTileBlob *blob; // @dynamic blob;
@property(retain, nonatomic) NSNumber *perTileEpoch; // @dynamic perTileEpoch;
@property(retain, nonatomic) NSNumber *serverPerTileEpoch; // @dynamic serverPerTileEpoch;
@property(retain, nonatomic) NSNumber *size; // @dynamic size;
@property(retain, nonatomic) NSDate *touched; // @dynamic touched;
@property(retain, nonatomic) NSNumber *type; // @dynamic type;
@property(retain, nonatomic) NSNumber *validationTime; // @dynamic validationTime;
@property(retain, nonatomic) NSNumber *xCoord; // @dynamic xCoord;
@property(retain, nonatomic) NSNumber *yCoord; // @dynamic yCoord;
@property(retain, nonatomic) NSNumber *zoom; // @dynamic zoom;

@end


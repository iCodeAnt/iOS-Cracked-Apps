//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData;

@interface GMSTileResponse : NSObject
{
    id <GMSTile> _tile;
    NSData *_cachableData;
}

+ (id)failure;
+ (id)empty;
+ (id)responseWithTile:(id)arg1 cachableData:(id)arg2;
@property(retain, nonatomic) NSData *cachableData; // @synthesize cachableData=_cachableData;
@property(retain, nonatomic) id <GMSTile> tile; // @synthesize tile=_tile;
- (void).cxx_destruct;

@end


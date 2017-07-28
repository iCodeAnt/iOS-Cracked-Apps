//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GMSMapTileService.h"

@class GMSAnalyticsTimer, GMSStyleTableService;

@interface GMSVectorMapTileService : GMSMapTileService
{
    GMSStyleTableService *_styleTableService;
    GMSAnalyticsTimer *_tileUnpackTimer;
}

+ (void)modifyHeader:(id)arg1 requests:(id)arg2 tileType:(id)arg3 clientParameters:(id)arg4 useGlobalStyles:(_Bool)arg5 activeEpoch:(int)arg6;
+ (id)tileRequestHeaderForFetchType:(int)arg1 requests:(id)arg2 tileFormats:(id)arg3 tileEdgeLength:(int)arg4 textSize:(int)arg5 screenDpi:(int)arg6 serviceFlags:(unsigned int)arg7 tileType:(id)arg8 clientParameters:(id)arg9 useGlobalStyles:(_Bool)arg10 activeEpoch:(int)arg11;
+ (void)modifyRequestProto:(id)arg1 useGlobalStyles:(_Bool)arg2;
+ (id)tileRequestTileProtoForTileCoords:(id)arg1 perTileEpoch:(int)arg2 zoomShift:(int)arg3 tileType:(id)arg4 useGlobalStyles:(_Bool)arg5 extraRequestParams:(id)arg6;
+ (id)tileFormatsUsingGlobalStyles:(_Bool)arg1;
@property(retain, nonatomic) GMSAnalyticsTimer *tileUnpackTimer; // @synthesize tileUnpackTimer=_tileUnpackTimer;
- (void).cxx_destruct;
- (long long)perTileExpirationPeriodMS;
- (id)decodeTileFromTileData:(id)arg1 tileProto:(id)arg2 isTileStoreData:(_Bool)arg3 tileCoords:(id)arg4 validationTime:(long long)arg5;
- (id)dataFromMapTileDataProto:(id)arg1 mapTileResponseHeader:(id)arg2;
- (id)tileRequestHeaderForFetchType:(int)arg1 requests:(id)arg2;
- (id)tileRequestTileProtoForTileCoords:(id)arg1 perTileEpoch:(int)arg2 extraRequestParams:(id)arg3;
- (_Bool)canIncludeTileCoords:(id)arg1 inTileRequests:(id)arg2;
- (void)completeTileDataCacheStartup;
- (void)verifyServerSideLabelingCacheState;
- (void)cachePreloadedTiles:(id)arg1;
- (id)initWithConnection:(id)arg1 clientParameters:(id)arg2 timingClock:(id)arg3 tileDataCache:(id)arg4 offlineTileDataCache:(id)arg5 memCacheSize:(unsigned long long)arg6 styleTableService:(id)arg7 serviceFlags:(unsigned int)arg8 tileType:(id)arg9;
- (id)init;

@end


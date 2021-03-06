//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface FAAPMManager : NSObject
{
    int _sid;
    long long _roomId;
}

+ (id)shareInstance;
@property(nonatomic) long long roomId; // @synthesize roomId=_roomId;
@property(nonatomic) int sid; // @synthesize sid=_sid;
- (void)sendAPMLivePlayerLoadingCount:(_Bool)arg1 liveType:(long long)arg2;
- (void)sendSocketAPMWithInfo:(id)arg1;
- (void)sendAPMLiveEnterRoomValidly:(_Bool)arg1 liveType:(long long)arg2;
- (void)sendAPMLiveStuckRateWithLiveInfo:(id)arg1 liveType:(long long)arg2;
- (void)endAPMTypeFXGetArtLiveSongsDelayAndJsonAnalysisErrorFailRateWithTab:(id)arg1 state:(int)arg2 param:(id)arg3 error:(id)arg4;
- (void)startAPMTypeFXGetArtLiveSongs;
- (void)endAPMTypeFXCommonLiveRemoveMuteDelayAndJsonAnalysisErrorFailRateWithTab:(id)arg1 state:(int)arg2 param:(id)arg3 error:(id)arg4;
- (void)startAPMTypeFXCommonLiveRemoveMute;
- (void)endAPMTypeFXCommonLiveKickOutOrMuteDelayAndJsonAnalysisErrorFailRateWithTab:(id)arg1 state:(int)arg2 param:(id)arg3 error:(id)arg4;
- (void)startAPMTypeFXCommonLiveKickOutOrMute;
- (void)endAPMTypeFXCommonLiveGetMoreMenuDelayAndJsonAnalysisErrorFailRateWithTab:(id)arg1 state:(int)arg2 param:(id)arg3 error:(id)arg4;
- (void)startAPMTypeFXCommonLiveGetMoreMenu;
- (void)endAPMTypeFXCommonLiveGetFansListDelayAndJsonAnalysisErrorFailRateWithTab:(id)arg1 state:(int)arg2 param:(id)arg3 error:(id)arg4;
- (void)endAPMTypeFXCommonLiveGetFansListSf:(int)arg1;
- (void)startAPMTypeFXCommonLiveGetFansList;
- (void)endAPMTypeFXCommonLiveGrabSeatDelayAndJsonAnalysisErrorFailRateWithTab:(id)arg1 state:(int)arg2 param:(id)arg3 error:(id)arg4;
- (void)startAPMTypeFXCommonLiveGrabSeat;
- (void)endAPMTypeFXCommonLiveGetRobSeatListDelayAndJsonAnalysisErrorFailRateWithTab:(id)arg1 state:(int)arg2 param:(id)arg3 error:(id)arg4;
- (void)startAPMTypeFXCommonLiveGetRobSeatList;
- (void)endAPMTypeFXCommonLiveGetSocketInfoDelayAndJsonAnalysisErrorFailRateWithTab:(id)arg1 state:(int)arg2 param:(id)arg3 error:(id)arg4;
- (void)startAPMTypeFXCommonLiveGetSocketInfo;
- (void)endAPMTypeFXCommonLiveGetRoomInfoDelayAndJsonAnalysisErrorFailRateWithTab:(id)arg1 state:(int)arg2 param:(id)arg3 error:(id)arg4;
- (void)startAPMTypeFXCommonLiveGetRoomInfo;
- (void)endAPMTypeMFXGiftGetGiftListDelayAndJsonAnalysisErrorFailRateWithTab:(int)arg1 state:(int)arg2 httpErrInfo:(id)arg3;
- (void)endAPMTypeMFXLiveChatEnabledDelayWithTab:(int)arg1 state:(int)arg2 te:(id)arg3 errorCode:(long long)arg4;
- (void)endAPMTypeMFXLivePullDelayAndFailRateWithTab:(int)arg1 state:(int)arg2 errorType:(int)arg3;
- (void)startAPMTypeMFXLivePullDelayAndFailRateWithTab:(int)arg1;
- (void)sendAPMTypeMFXLivePullFailRateWithTab:(int)arg1 state:(int)arg2 errorType:(int)arg3;
- (void)sendAPMTypeMFXLivePullFailRateWithTab:(int)arg1 state:(int)arg2 fs:(int)arg3;
- (void)sendAPMTypeMFXLivePushFailRateWithState:(int)arg1 errorType:(int)arg2;
- (void)sendAPMTypeMFXLivePushFailRateWithState:(int)arg1 fs:(int)arg2;
- (void)sendAPMTypeMFXSocketFailRateWithState:(int)arg1 errCode:(int)arg2;
- (void)sendAPMTypeMFXSocketFailRateWithState:(int)arg1 fs:(int)arg2;
- (void)endAPMTypeMFXMobileOpenLiveFailRateWithState:(int)arg1 step:(int)arg2 httpErrInfo:(id)arg3;
- (void)startAPMTypeMFXMobileOpenLiveFailRateWithTab:(int)arg1;
- (void)endAPMTypeMFXMobileHomePageEnterRoomOfflineRateWithState:(int)arg1 httpErrInfo:(id)arg2;
- (void)startAPMTypeMFXMobileHomePageEnterRoomOfflineRateWithTab:(int)arg1;
- (void)endAPMTypeMFXMoblieLiveListPageModuleDelayAndFailRateWithTab:(int)arg1 state:(int)arg2 httpErrInfo:(id)arg3;
- (void)startAPMTypeMFXMoblieLiveListPageModuleDelayAndFailRateWithTab:(int)arg1;
- (void)endAPMTypeMFXLiveListPageModuleDelayAndFailRateWithTab:(int)arg1 state:(int)arg2 httpErrInfo:(id)arg3;
- (void)startAPMTypeMFXLiveListPageModuleDelayAndFailRateWithTab:(int)arg1;
- (void)endAPMTypeMFXGetVideoStreamInfoDelayAndFailRateWithTab:(int)arg1 state:(int)arg2 room_id:(long long)arg3 httpErrInfo:(id)arg4;
- (void)startAPMTypeMFXGetVideoStreamInfoDelayAndFailRateWithTab:(int)arg1;
- (void)endAPMTypeMFXHomePageEnterRoomOfflineRateWithTab:(int)arg1 state:(int)arg2 httpErrInfo:(id)arg3;
- (void)startAPMTypeMFXHomePageEnterRoomOfflineRateWithTab:(int)arg1;
- (void)endAPMTypeLiveVideoBufferFeelRateWithTab:(int)arg1;
- (void)startAPMTypeLiveVideoBufferFeelRateWithDelegate:(id)arg1 tab:(int)arg2;
- (void)endAPMTypeMFXGiftSendGiftDelayAndFailRateWithTab:(int)arg1 state:(int)arg2 httpErrInfo:(id)arg3 extendParams:(id)arg4;
- (void)startAPMTypeMFXGiftSendGiftDelayAndFailRateWithTab:(int)arg1;
- (void)endAPMTypeMFXGiftGetGiftListDelayAndFailRateWithTab:(int)arg1 state:(int)arg2 httpErrInfo:(id)arg3;
- (void)startAPMTypeMFXGiftGetGiftListDelayAndFailRateWithTab:(int)arg1;
- (void)endAPMTypeMFXMobileLiveVideoBufferRateWithTab:(int)arg1;
- (void)startAPMTypeMFXMobileLiveVideoBufferRateWithDelegate:(id)arg1 tab:(int)arg2;
- (void)sendAPMTypeMFXFrameDroppingRateWithState_1:(int)arg1 frame:(long long)arg2;
- (void)endAPMTypeMFXLiveChatEnabledDelayWithTab:(int)arg1;
- (void)startAPMTypeMFXLiveChatEnabledDelayWithTab:(int)arg1;
- (void)endAPMTypeMFXMyHomePageLoadDelay;
- (void)startAPMTypeMFXMyHomePageLoadDelay;
- (void)endAPMTypeMFXMobileLiveHomePageLoadDelay;
- (void)startAPMTypeMFXMobileLiveHomePageLoadDelay;
- (void)endAPMTypeMFXMobileLiveVideoBufferRecoverDelayWithPara:(id)arg1 tab:(int)arg2;
- (void)startAPMTypeMFXMobileLiveVideoBufferRecoverDelay:(int)arg1;
- (void)endAPMTypeMFXNormalLiveVideoBufferRecoverDelayWithPara:(id)arg1 tab:(int)arg2;
- (void)startAPMTypeMFXNormalLiveVideoBufferRecoverDelay:(int)arg1;
- (void)endAPMTypeMFXMobileLiveVideoLoadDelayWithPara:(id)arg1;
- (void)startAPMTypeMFXMobileLiveVideoLoadDelay;
- (void)endAPMTypeMFXNormalLiveVideoLoadDelayWithPara:(id)arg1;
- (void)startAPMTypeMFXNormalLiveVideoLoadDelay;

@end


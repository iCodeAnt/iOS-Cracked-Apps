//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "CIMLbsSvrEngineDelegate.h"
#import "CLLocationManagerDelegate.h"
#import "IEngineDispatchDelegate.h"
#import "IIncrUpdateDelegate.h"
#import "IPacketSendResultHandler.h"

@class CLLocation, CUserData, NSArray, NSData, NSMutableArray, NSMutableDictionary, NSString, NSTimer, QQLocationManager;

@interface LBSServerEngine : NSObject <CLLocationManagerDelegate, CIMLbsSvrEngineDelegate, IPacketSendResultHandler, IEngineDispatchDelegate, IIncrUpdateDelegate>
{
    QQLocationManager *_locationManager;
    int _nLat;
    int _nLon;
    int _nAlt;
    long long _nMac;
    double _nHorizontalAccuracy;
    _Bool _bCheckin;
    _Bool _bGetNeighbors;
    _Bool _bGetLocation;
    int _nListType;
    int _elistType;
    int _lbsRetryCount;
    _Bool _isUpdateLocation;
    CLLocation *_lastLocation;
    CUserData *_nUserData;
    int _clientTime;
    int _eDirectionType;
    NSArray *_clientData;
    NSData *_vSelfSig;
    _Bool _hasUpdateLbs;
    NSTimer *_lbsTimeoutTimer;
    NSMutableDictionary *_seqDict;
    _Bool _updateWgs84Location;
    _Bool _bCheckLocation;
    int _xo;
    NSMutableArray *_arrayTask;
}

+ (id)shareInstance;
@property(retain, nonatomic) NSMutableArray *arrayTask; // @synthesize arrayTask=_arrayTask;
- (_Bool)isEnabledAndAuthorize;
- (_Bool)isAuthorized;
- (_Bool)isLocationServerviceEnabled;
- (void)didRecievedReqGetBlackListParser:(char *)arg1 dataLength:(int)arg2;
- (void)notifyRespPBBuffer:(const void *)arg1 size:(int)arg2 result:(int)arg3;
- (void)getReqPBBuffer:(char **)arg1 buffEnd:(char **)arg2;
- (void)CIMLBSSvrEngine:(id)arg1 didRecievedMsg:(CDStruct_7895f40e)arg2;
- (void)UpdateWgs84Location:(Class)arg1;
- (_Bool)QQCheckRobertMsg:(struct Msg *)arg1;
- (id)getTextMsgArrayFromWupData:(struct Msg *)arg1 msgItem:(struct MsgItem *)arg2 fromUIN:(long long)arg3;
- (void)changeAccount;
- (_Bool)isLocationOK:(id)arg1;
- (void)sendLbsRequest;
- (long long)getWifiMacAddress;
- (id)locationManager;
- (void)saveLBSCheckinTime;
- (int)getLBSLastCheckinTime;
- (void)getCurrentLocation:(Class)arg1;
- (_Bool)isNeedToUpdateLocation;
- (void)doLBSCheckin:(_Bool)arg1;
- (int)getTimeSpan;
- (void)stopUpdateLocation;
- (void)startUpdateLocation:(Class)arg1;
- (void)stopLbsTimeoutTimer;
- (void)RequestGetLocation:(int)arg1 lon:(int)arg2 alt:(int)arg3 isMars:(_Bool)arg4 bJiejingSOSO:(_Bool)arg5;
- (void)notifyGetLocationFail;
- (void)deleteBlackList:(id)arg1 type:(int)arg2;
- (void)insertBlackList:(id)arg1 type:(int)arg2;
- (void)getBlackList:(long long)arg1;
- (void)sendEncounterSelfClientMsg:(id)arg1 accostType:(int)arg2 msgType:(int)arg3 toUin:(long long)arg4 actionUrl:(id)arg5;
- (void)sendEncounterClientMsg:(id)arg1 accostType:(int)arg2 msgType:(int)arg3 toUin:(long long)arg4 extraInfo:(id)arg5;
- (int)getMsgItemType:(int)arg1;
- (void)didHandleShareTraceList:(struct ShareTraceList *)arg1;
- (void)didRespPushCardMsg:(struct PushCardMsg *)arg1;
- (void)requestGetShareState;
- (void)notifyError:(id)arg1;
- (void)didRecievedMsg:(CDStruct_7895f40e)arg1;
- (void)respGetFindMeByNum:(char *)arg1 dataLen:(int)arg2 seq:(int)arg3;
- (void)requestGetFindMeByNum:(long long)arg1;
- (int)requestSetFindMeByNum:(_Bool)arg1;
- (_Bool)handleRecivedPacket:(char *)arg1 bufferLength:(int)arg2 sendingModel:(id)arg3;
- (void)notifyMsgSentResult:(id)arg1 result:(int)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(retain, nonatomic) CLLocation *lastLocation; // @dynamic lastLocation;
@property(nonatomic) int nAlt; // @dynamic nAlt;
@property(nonatomic) double nHorizontalAccuracy; // @dynamic nHorizontalAccuracy;
@property(nonatomic) int nLat; // @dynamic nLat;
@property(nonatomic) int nLon; // @dynamic nLon;
@property(retain, nonatomic) CUserData *nUserData; // @dynamic nUserData;
@property(readonly) Class superclass;

@end


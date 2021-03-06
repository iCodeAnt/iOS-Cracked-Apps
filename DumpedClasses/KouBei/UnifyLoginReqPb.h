//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "APPBGeneratedMessage.h"

#import "GeneratedMessageProtocol-Protocol.h"

@class NSMutableArray, NSString;

@interface UnifyLoginReqPb : APPBGeneratedMessage <GeneratedMessageProtocol>
{
    _Bool _hasLoginId;
    _Bool _hasAppId;
    _Bool _hasAppKey;
    _Bool _hasLoginType;
    _Bool _hasValidateTpye;
    _Bool _hasScene;
    _Bool _hasLoginPwd;
    _Bool _hasSsoToken;
    _Bool _hasSignData;
    _Bool _hasCheckCodeId;
    _Bool _hasCheckCode;
    _Bool _hasApdid;
    _Bool _hasUtdid;
    _Bool _hasTid;
    _Bool _hasTtid;
    _Bool _hasProductId;
    _Bool _hasProductVersion;
    _Bool _hasUmidToken;
    _Bool _hasImsi;
    _Bool _hasImei;
    _Bool _hasChannel;
    _Bool _hasClientType;
    _Bool _hasUserAgent;
    _Bool _hasScreenWidth;
    _Bool _hasScreenHigh;
    _Bool _hasMobileBrand;
    _Bool _hasMobileModel;
    _Bool _hasAccessPoint;
    _Bool _hasClientPostion;
    _Bool _hasSystemType;
    _Bool _hasSystemVersion;
    _Bool _hasWifiMac;
    _Bool _hasWifiNodeName;
    _Bool _hasLacId;
    _Bool _hasCellId;
    _Bool _hasIsPrisonBreak;
    _Bool _hasAlipayEnvJson;
    _Bool _hasTaobaoEnvJson;
    _Bool _hasToken;
    _Bool _hasDeviceId;
    _Bool _hasSdkVersion;
    int _loginType;
    int _validateTpye;
    int _screenWidth;
    int _screenHigh;
    NSString *_loginId;
    NSString *_appId;
    NSString *_appKey;
    NSString *_scene;
    NSString *_loginPwd;
    NSString *_ssoToken;
    NSString *_signData;
    NSString *_checkCodeId;
    NSString *_checkCode;
    NSString *_apdid;
    NSString *_utdid;
    NSString *_tid;
    NSString *_ttid;
    NSString *_productId;
    NSString *_productVersion;
    NSString *_umidToken;
    NSString *_imsi;
    NSString *_imei;
    NSString *_channel;
    NSString *_clientType;
    NSString *_userAgent;
    NSString *_mobileBrand;
    NSString *_mobileModel;
    NSString *_accessPoint;
    NSString *_clientPostion;
    NSString *_systemType;
    NSString *_systemVersion;
    NSString *_wifiMac;
    NSString *_wifiNodeName;
    NSString *_lacId;
    NSString *_cellId;
    NSString *_isPrisonBreak;
    NSString *_alipayEnvJson;
    NSString *_taobaoEnvJson;
    NSString *_token;
    NSString *_deviceId;
    NSMutableArray *_appData;
    NSMutableArray *_externParams;
    NSString *_sdkVersion;
}

+ (id)parseFromData:(id)arg1;
@property(retain, nonatomic) NSString *sdkVersion; // @synthesize sdkVersion=_sdkVersion;
@property(retain, nonatomic) NSMutableArray *externParams; // @synthesize externParams=_externParams;
@property(retain, nonatomic) NSMutableArray *appData; // @synthesize appData=_appData;
@property(retain, nonatomic) NSString *deviceId; // @synthesize deviceId=_deviceId;
@property(retain, nonatomic) NSString *token; // @synthesize token=_token;
@property(retain, nonatomic) NSString *taobaoEnvJson; // @synthesize taobaoEnvJson=_taobaoEnvJson;
@property(retain, nonatomic) NSString *alipayEnvJson; // @synthesize alipayEnvJson=_alipayEnvJson;
@property(retain, nonatomic) NSString *isPrisonBreak; // @synthesize isPrisonBreak=_isPrisonBreak;
@property(retain, nonatomic) NSString *cellId; // @synthesize cellId=_cellId;
@property(retain, nonatomic) NSString *lacId; // @synthesize lacId=_lacId;
@property(retain, nonatomic) NSString *wifiNodeName; // @synthesize wifiNodeName=_wifiNodeName;
@property(retain, nonatomic) NSString *wifiMac; // @synthesize wifiMac=_wifiMac;
@property(retain, nonatomic) NSString *systemVersion; // @synthesize systemVersion=_systemVersion;
@property(retain, nonatomic) NSString *systemType; // @synthesize systemType=_systemType;
@property(retain, nonatomic) NSString *clientPostion; // @synthesize clientPostion=_clientPostion;
@property(retain, nonatomic) NSString *accessPoint; // @synthesize accessPoint=_accessPoint;
@property(retain, nonatomic) NSString *mobileModel; // @synthesize mobileModel=_mobileModel;
@property(retain, nonatomic) NSString *mobileBrand; // @synthesize mobileBrand=_mobileBrand;
@property(nonatomic) int screenHigh; // @synthesize screenHigh=_screenHigh;
@property(nonatomic) int screenWidth; // @synthesize screenWidth=_screenWidth;
@property(retain, nonatomic) NSString *userAgent; // @synthesize userAgent=_userAgent;
@property(retain, nonatomic) NSString *clientType; // @synthesize clientType=_clientType;
@property(retain, nonatomic) NSString *channel; // @synthesize channel=_channel;
@property(retain, nonatomic) NSString *imei; // @synthesize imei=_imei;
@property(retain, nonatomic) NSString *imsi; // @synthesize imsi=_imsi;
@property(retain, nonatomic) NSString *umidToken; // @synthesize umidToken=_umidToken;
@property(retain, nonatomic) NSString *productVersion; // @synthesize productVersion=_productVersion;
@property(retain, nonatomic) NSString *productId; // @synthesize productId=_productId;
@property(retain, nonatomic) NSString *ttid; // @synthesize ttid=_ttid;
@property(retain, nonatomic) NSString *tid; // @synthesize tid=_tid;
@property(retain, nonatomic) NSString *utdid; // @synthesize utdid=_utdid;
@property(retain, nonatomic) NSString *apdid; // @synthesize apdid=_apdid;
@property(retain, nonatomic) NSString *checkCode; // @synthesize checkCode=_checkCode;
@property(retain, nonatomic) NSString *checkCodeId; // @synthesize checkCodeId=_checkCodeId;
@property(retain, nonatomic) NSString *signData; // @synthesize signData=_signData;
@property(retain, nonatomic) NSString *ssoToken; // @synthesize ssoToken=_ssoToken;
@property(retain, nonatomic) NSString *loginPwd; // @synthesize loginPwd=_loginPwd;
@property(retain, nonatomic) NSString *scene; // @synthesize scene=_scene;
@property(nonatomic) int validateTpye; // @synthesize validateTpye=_validateTpye;
@property(nonatomic) int loginType; // @synthesize loginType=_loginType;
@property(retain, nonatomic) NSString *appKey; // @synthesize appKey=_appKey;
@property(retain, nonatomic) NSString *appId; // @synthesize appId=_appId;
@property(retain, nonatomic) NSString *loginId; // @synthesize loginId=_loginId;
@property(readonly) _Bool hasSdkVersion; // @synthesize hasSdkVersion=_hasSdkVersion;
@property(readonly) _Bool hasDeviceId; // @synthesize hasDeviceId=_hasDeviceId;
@property(readonly) _Bool hasToken; // @synthesize hasToken=_hasToken;
@property(readonly) _Bool hasTaobaoEnvJson; // @synthesize hasTaobaoEnvJson=_hasTaobaoEnvJson;
@property(readonly) _Bool hasAlipayEnvJson; // @synthesize hasAlipayEnvJson=_hasAlipayEnvJson;
@property(readonly) _Bool hasIsPrisonBreak; // @synthesize hasIsPrisonBreak=_hasIsPrisonBreak;
@property(readonly) _Bool hasCellId; // @synthesize hasCellId=_hasCellId;
@property(readonly) _Bool hasLacId; // @synthesize hasLacId=_hasLacId;
@property(readonly) _Bool hasWifiNodeName; // @synthesize hasWifiNodeName=_hasWifiNodeName;
@property(readonly) _Bool hasWifiMac; // @synthesize hasWifiMac=_hasWifiMac;
@property(readonly) _Bool hasSystemVersion; // @synthesize hasSystemVersion=_hasSystemVersion;
@property(readonly) _Bool hasSystemType; // @synthesize hasSystemType=_hasSystemType;
@property(readonly) _Bool hasClientPostion; // @synthesize hasClientPostion=_hasClientPostion;
@property(readonly) _Bool hasAccessPoint; // @synthesize hasAccessPoint=_hasAccessPoint;
@property(readonly) _Bool hasMobileModel; // @synthesize hasMobileModel=_hasMobileModel;
@property(readonly) _Bool hasMobileBrand; // @synthesize hasMobileBrand=_hasMobileBrand;
@property(readonly) _Bool hasScreenHigh; // @synthesize hasScreenHigh=_hasScreenHigh;
@property(readonly) _Bool hasScreenWidth; // @synthesize hasScreenWidth=_hasScreenWidth;
@property(readonly) _Bool hasUserAgent; // @synthesize hasUserAgent=_hasUserAgent;
@property(readonly) _Bool hasClientType; // @synthesize hasClientType=_hasClientType;
@property(readonly) _Bool hasChannel; // @synthesize hasChannel=_hasChannel;
@property(readonly) _Bool hasImei; // @synthesize hasImei=_hasImei;
@property(readonly) _Bool hasImsi; // @synthesize hasImsi=_hasImsi;
@property(readonly) _Bool hasUmidToken; // @synthesize hasUmidToken=_hasUmidToken;
@property(readonly) _Bool hasProductVersion; // @synthesize hasProductVersion=_hasProductVersion;
@property(readonly) _Bool hasProductId; // @synthesize hasProductId=_hasProductId;
@property(readonly) _Bool hasTtid; // @synthesize hasTtid=_hasTtid;
@property(readonly) _Bool hasTid; // @synthesize hasTid=_hasTid;
@property(readonly) _Bool hasUtdid; // @synthesize hasUtdid=_hasUtdid;
@property(readonly) _Bool hasApdid; // @synthesize hasApdid=_hasApdid;
@property(readonly) _Bool hasCheckCode; // @synthesize hasCheckCode=_hasCheckCode;
@property(readonly) _Bool hasCheckCodeId; // @synthesize hasCheckCodeId=_hasCheckCodeId;
@property(readonly) _Bool hasSignData; // @synthesize hasSignData=_hasSignData;
@property(readonly) _Bool hasSsoToken; // @synthesize hasSsoToken=_hasSsoToken;
@property(readonly) _Bool hasLoginPwd; // @synthesize hasLoginPwd=_hasLoginPwd;
@property(readonly) _Bool hasScene; // @synthesize hasScene=_hasScene;
@property(readonly) _Bool hasValidateTpye; // @synthesize hasValidateTpye=_hasValidateTpye;
@property(readonly) _Bool hasLoginType; // @synthesize hasLoginType=_hasLoginType;
@property(readonly) _Bool hasAppKey; // @synthesize hasAppKey=_hasAppKey;
@property(readonly) _Bool hasAppId; // @synthesize hasAppId=_hasAppId;
@property(readonly) _Bool hasLoginId; // @synthesize hasLoginId=_hasLoginId;
- (void).cxx_destruct;
- (void)mergeFromCodedInputStream:(id)arg1 extensionRegistry:(id)arg2;
- (void)addExternParams:(id)arg1;
- (void)setExternParamsArray:(id)arg1;
- (void)addAppData:(id)arg1;
- (void)setAppDataArray:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


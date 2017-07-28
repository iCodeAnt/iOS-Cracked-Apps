//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "APIBaseDelegate.h"
#import "TCLoginViewDelegate.h"
#import "TCWebViewKitDelegate.h"
#import "TencentRequestDelegate.h"
#import "TencentSessionDelegate.h"
#import "setHeadImageDelegate.h"

@class NSArray, NSDate, NSDictionary, NSMutableDictionary, NSString, NSTimer, TCLoginViewKit, TCOSDKReachability, TCUiKit, TencentRequest;

@interface TencentOAuth : NSObject <TencentRequestDelegate, TCWebViewKitDelegate, TCLoginViewDelegate, setHeadImageDelegate, TencentSessionDelegate, APIBaseDelegate>
{
    NSMutableDictionary *_apiRequests;
    NSString *_accessToken;
    NSDate *_expirationDate;
    id <TencentSessionDelegate> _sessionDelegate;
    NSString *_localAppId;
    NSString *_openId;
    NSString *_redirectURI;
    NSArray *_permissions;
    TencentRequest *_request;
    TCLoginViewKit *_loginViewKit;
    NSString *_userNick;
    _Bool _userGetUserInfo;
    NSString *_appId;
    NSString *_uin;
    NSString *_skey;
    NSDictionary *_passData;
    int _authMode;
    TCOSDKReachability *_reachHost;
    NSTimer *_timer;
    NSMutableDictionary *_loginDict;
    NSMutableDictionary *_openIdDict;
    NSString *_encryToken;
    TCUiKit *_tcUiKit;
    NSString *_unionid;
}

+ (unsigned long long)sendRespMessageToTencentApp:(id)arg1;
+ (id)getLastErrorMsg;
+ (_Bool)CanHandleOpenURL:(id)arg1;
+ (_Bool)HandleOpenURL:(id)arg1;
+ (_Bool)iphoneQZoneSupportSSOLogin;
+ (_Bool)iphoneQZoneInstalled;
+ (_Bool)iphoneQQSupportSSOLogin;
+ (_Bool)iphoneQQInstalled;
+ (int)iphoneQQVersion;
+ (_Bool)isLiteSDK;
+ (id)sdkSubVersion;
+ (id)sdkVersion;
+ (int *)authorizeState;
@property(retain, nonatomic) TCUiKit *tcUiKit; // @synthesize tcUiKit=_tcUiKit;
@property(readonly, nonatomic) NSString *encryToken; // @synthesize encryToken=_encryToken;
@property(retain, nonatomic) NSMutableDictionary *openIdDict; // @synthesize openIdDict=_openIdDict;
@property(retain, nonatomic) NSMutableDictionary *loginDict; // @synthesize loginDict=_loginDict;
@property(retain, nonatomic) NSString *userNick; // @synthesize userNick=_userNick;
@property(retain, nonatomic) NSTimer *timer; // @synthesize timer=_timer;
@property(retain, nonatomic) TCOSDKReachability *reachHost; // @synthesize reachHost=_reachHost;
@property(retain, nonatomic) NSArray *permissions; // @synthesize permissions=_permissions;
@property(retain, nonatomic) NSString *unionid; // @synthesize unionid=_unionid;
@property(nonatomic) int authMode; // @synthesize authMode=_authMode;
@property(copy, nonatomic) NSDictionary *passData; // @synthesize passData=_passData;
@property(retain, nonatomic) NSString *skey; // @synthesize skey=_skey;
@property(retain, nonatomic) NSString *uin; // @synthesize uin=_uin;
@property(retain, nonatomic) NSString *appId; // @synthesize appId=_appId;
@property(copy, nonatomic) NSString *redirectURI; // @synthesize redirectURI=_redirectURI;
@property(copy, nonatomic) NSString *localAppId; // @synthesize localAppId=_localAppId;
@property(nonatomic) id <TencentSessionDelegate> sessionDelegate; // @synthesize sessionDelegate=_sessionDelegate;
@property(copy, nonatomic) NSDate *expirationDate; // @synthesize expirationDate=_expirationDate;
@property(copy, nonatomic) NSString *accessToken; // @synthesize accessToken=_accessToken;
- (void)apiBase:(id)arg1 didSendBodyData:(long long)arg2 totalBytesWritten:(long long)arg3 totalBytesExpectedToWrite:(long long)arg4;
- (_Bool)shouldAutorotateWithLoginWebkit:(id)arg1;
- (unsigned long long)supportedInterfaceOrientationsWithLoginWebkit:(id)arg1;
- (_Bool)loginViewKit:(id)arg1 shouldAutorotateToInterfaceOrientation:(long long)arg2;
- (_Bool)webViewKit:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(long long)arg3;
- (void)webViewKit:(id)arg1 didLoadWithNetworkError:(id)arg2;
- (void)webViewKit:(id)arg1 didLoadWithContentError:(id)arg2;
- (void)webViewKit:(id)arg1 didFinishedWithError:(id)arg2;
- (id)stringByTCOSDKReplacingHtmlEscapes:(id)arg1;
- (id)encrytoken;
- (void)request:(id)arg1 didLoad:(id)arg2 dat:(id)arg3;
- (void)request:(id)arg1 didReceiveResponse:(id)arg2;
- (void)request:(id)arg1 didFailWithError:(id)arg2;
- (void)getVipRichInfoResponse:(id)arg1;
- (void)getVipInfoResponse:(id)arg1;
- (void)setUserHeadpicResponse:(id)arg1;
- (void)addTopicResponse:(id)arg1;
- (void)addOneBlogResponse:(id)arg1;
- (void)checkPageFansResponse:(id)arg1;
- (void)uploadPicResponse:(id)arg1;
- (void)addAlbumResponse:(id)arg1;
- (void)addShareResponse:(id)arg1;
- (void)getListPhotoResponse:(id)arg1;
- (void)getListAlbumResponse:(id)arg1;
- (void)getUserInfoNotUserResponse:(id)arg1;
- (void)getUserInfoResponse:(id)arg1;
- (id)JSONValue:(id)arg1;
- (void)getOpenIdResponse:(id)arg1;
- (_Bool)tencentNeedPerformReAuth:(id)arg1;
- (_Bool)tencentNeedPerformIncrAuth:(id)arg1 withPermissions:(id)arg2;
- (void)tencentFailedUpdate:(int)arg1;
- (void)tencentDidUpdate:(id)arg1;
- (void)tencentDidNotNetWork;
- (void)tencentDidNotLogin:(_Bool)arg1;
- (void)tencentDidLogin;
- (void)onCGIRequestDidResponse:(id)arg1;
- (_Bool)sendAPIRequest:(id)arg1 callback:(id)arg2;
- (id)cgiRequestWithURL:(id)arg1 method:(id)arg2 params:(id)arg3 callback:(id)arg4;
- (void)cancelAllAPIRequest;
- (_Bool)cancel:(id)arg1;
- (id)localEncrytedToken;
- (void)openSDKWebViewQQShareEnable;
- (_Bool)sendGiftRequest:(id)arg1 exclude:(id)arg2 specified:(id)arg3 only:(_Bool)arg4 type:(id)arg5 title:(id)arg6 message:(id)arg7 imageURL:(id)arg8 source:(id)arg9;
- (_Bool)sendChallenge:(id)arg1 type:(id)arg2 imageURL:(id)arg3 message:(id)arg4 source:(id)arg5;
- (_Bool)sendAppInvitationWithDescription:(id)arg1 imageURL:(id)arg2 source:(id)arg3;
- (_Bool)checkSendStoryParam:(id)arg1 fopenIdArray:(id)arg2;
- (_Bool)sendStory:(id)arg1 friendList:(id)arg2;
- (_Bool)getVipRichInfo;
- (_Bool)getVipInfo;
- (void)onTimerCloseTcWindow;
- (_Bool)didCancelled:(int)arg1;
- (int)didFinishedSetUserLocalPic:(id)arg1 image:(id)arg2 fileName:(id)arg3;
- (_Bool)setUserHeadpic:(id)arg1 andViewController:(id *)arg2;
- (_Bool)setUserHeadpic:(id)arg1;
- (_Bool)addTopicWithParams:(id)arg1;
- (_Bool)checkPageFansWithParams:(id)arg1;
- (_Bool)addOneBlogWithParams:(id)arg1;
- (_Bool)addAlbumWithParams:(id)arg1;
- (_Bool)uploadPicWithParams:(id)arg1;
- (_Bool)addShareWithParams:(id)arg1;
- (_Bool)getListPhotoWithParams:(id)arg1;
- (_Bool)getListAlbum;
- (_Bool)getUserInfo;
- (_Bool)getOpenId:(id)arg1;
- (void)setEncryToken:(id)arg1;
- (_Bool)oldCanhandleOpenURL:(id)arg1;
- (id)getServerSideCode;
- (_Bool)handleOpenURL:(id)arg1;
- (_Bool)isOpenIdValid;
- (_Bool)isSessionValid;
- (id)requestWithGraphPath:(id)arg1 andParams:(id)arg2 andHttpMethod:(id)arg3 andDelegate:(id)arg4;
- (id)requestWithGraphPath:(id)arg1 andParams:(id)arg2 andDelegate:(id)arg3;
- (id)requestWithGraphPath:(id)arg1 andDelegate:(id)arg2;
- (id)requestWithMethodName:(id)arg1 andParams:(id)arg2 andHttpMethod:(id)arg3 andDelegate:(id)arg4;
- (id)requestWithParams:(id)arg1 andDelegate:(id)arg2;
- (void)logout:(id)arg1;
- (_Bool)authorizeWithPermissions:(id)arg1 andExtraParams:(id)arg2 delegate:(id)arg3 inSafari:(_Bool)arg4;
- (_Bool)authorize:(id)arg1 localAppId:(id)arg2 inSafari:(_Bool)arg3;
- (_Bool)authorize:(id)arg1 inSafari:(_Bool)arg2;
- (_Bool)authorize:(id)arg1;
- (void)getUnionIdResponse:(id)arg1;
- (_Bool)RequestUnionId;
- (_Bool)reauthorizeWithPermissions:(id)arg1;
- (_Bool)incrAuthWithPermissions:(id)arg1;
- (id)parseURLParams:(id)arg1;
- (void)onTimer;
- (void)reachabilityChanged:(id)arg1;
- (void)StopNotifyNetWork;
- (_Bool)StartNotifyNetWork;
- (void)tencentDialogLogin:(id)arg1 expirationDate:(id)arg2;
- (void)loginViewKit:(id)arg1 didFailuredWithError:(id)arg2 serial:(id)arg3;
- (void)loginViewKitDidSucceedLogin:(id)arg1 serial:(id)arg2;
- (_Bool)authorizeWithTencentAppAuthInSafari:(_Bool)arg1 permissions:(id)arg2 delegate:(id)arg3;
- (_Bool)authorizeWithTencentAppAuthInSafari:(_Bool)arg1 permissions:(id)arg2 andExtraParams:(id)arg3 delegate:(id)arg4;
- (id)getOwnBaseUrl;
- (id)openUrl:(id)arg1 params:(id)arg2 httpMethod:(id)arg3 delegate:(id)arg4;
- (void)dealloc;
- (id)getUserOpenID;
@property(copy, nonatomic) NSString *openId;
- (void)retryHandleOpenURL;
- (void)appBecomeActive;
- (id)initWithAppId:(id)arg1 andDelegate:(id)arg2;
- (void)deleteAPIRequestBySeq:(id)arg1;
- (void)cancelWithRequestKey:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


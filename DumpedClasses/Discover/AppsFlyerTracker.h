//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "AppsFlyerTrackerDelegate.h"
#import "NSURLSessionDelegate.h"
#import "NSURLSessionDownloadDelegate.h"
#import "NSURLSessionTaskDelegate.h"

@class AppsFlyerKeychainWrapper, NSArray, NSDictionary, NSObject<OS_dispatch_queue>, NSString, NSURL, NSURLSession, NSURLSessionConfiguration;

@interface AppsFlyerTracker : NSObject <NSURLSessionDelegate, NSURLSessionTaskDelegate, NSURLSessionDownloadDelegate, AppsFlyerTrackerDelegate>
{
    _Bool _isDebug;
    _Bool didCollectIAdData;
    _Bool _useReceiptValidationSandbox;
    int emailCryptType;
    NSArray *userEmails;
    double lastLaunchTime;
    NSURL *deeplink;
    NSURL *referralURL;
    NSString *sourceApplication;
    id <AppsFlyerTrackerDelegate> _delegate;
    NSObject<OS_dispatch_queue> *dispatchQueue;
    NSString *platfromDevName;
    NSDictionary *pushPayload;
    AppsFlyerKeychainWrapper *keychain;
    NSDictionary *iADV3data;
    NSURLSession *statSession;
    NSURLSessionConfiguration *sessionConfiguration;
    _Bool _disableAppleAdSupportTracking;
    _Bool _shouldCollectDeviceName;
    _Bool _deviceTrackingDisabled;
    _Bool _disableIAdTracking;
    NSString *_customerUserID;
    NSDictionary *_customData;
    NSString *_appsFlyerDevKey;
    NSString *_appleAppID;
    NSString *_currencyCode;
}

+ (id)sharedTracker;
@property(nonatomic, setter=setUseReceiptValidationSandbox:) _Bool useReceiptValidationSandbox; // @synthesize useReceiptValidationSandbox=_useReceiptValidationSandbox;
@property(nonatomic) id <AppsFlyerTrackerDelegate> delegate; // @synthesize delegate=_delegate;
@property _Bool disableIAdTracking; // @synthesize disableIAdTracking=_disableIAdTracking;
@property _Bool deviceTrackingDisabled; // @synthesize deviceTrackingDisabled=_deviceTrackingDisabled;
@property(nonatomic, setter=setShouldCollectDeviceName:) _Bool shouldCollectDeviceName; // @synthesize shouldCollectDeviceName=_shouldCollectDeviceName;
@property(nonatomic, setter=setIsDebug:) _Bool isDebug; // @synthesize isDebug=_isDebug;
@property _Bool disableAppleAdSupportTracking; // @synthesize disableAppleAdSupportTracking=_disableAppleAdSupportTracking;
@property(retain, nonatomic) NSString *currencyCode; // @synthesize currencyCode=_currencyCode;
@property(retain, nonatomic, setter=setAppleAppID:) NSString *appleAppID; // @synthesize appleAppID=_appleAppID;
@property(retain, nonatomic, setter=setAppsFlyerDevKey:) NSString *appsFlyerDevKey; // @synthesize appsFlyerDevKey=_appsFlyerDevKey;
@property(retain, nonatomic, setter=setAdditionalData:) NSDictionary *customData; // @synthesize customData=_customData;
@property(retain, nonatomic, setter=setCustomerUserID:) NSString *customerUserID; // @synthesize customerUserID=_customerUserID;
- (void).cxx_destruct;
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;
- (void)URLSession:(id)arg1 downloadTask:(id)arg2 didFinishDownloadingToURL:(id)arg3;
- (void)handlePushNotification:(id)arg1;
- (void)onConversionDataRequestFailure:(id)arg1;
- (void)onConversionDataReceived:(id)arg1;
- (id)getInstallDate:(id)arg1;
- (id)getFirstLanuchDate:(id)arg1;
- (id)getVersionUpdateDate:(id)arg1 currentUpdateDate:(id)arg2;
- (int)getInAppCounter:(_Bool)arg1;
- (void)incrementRealLaunchCounter;
- (int)getRealLaunchCounter;
- (int)getCounter:(_Bool)arg1;
- (id)createURLFor:(id)arg1 withAppID:(id)arg2 isInAppEvent:(_Bool)arg3;
- (void)startConnection:(id)arg1;
- (void)callServerWithEventName:(id)arg1 value:(id)arg2 withDictionary:(id)arg3 isEvent:(_Bool)arg4;
- (double)getTimePassedSinceLastLaunch;
- (void)validateAppID;
- (void)callServerWithEventName:(id)arg1 value:(id)arg2 isInAppEvent:(_Bool)arg3;
- (void)callServerWithEventName:(id)arg1;
- (id)getDevicePaltform;
- (_Bool)getKeychainData;
- (id)getAppsFlyerUID;
- (id)generateAppsFlyerId;
- (id)installDate;
- (void)trackLocation:(double)arg1 latitude:(double)arg2;
- (void)validateAndTrackInAppPurchase:(id)arg1 price:(id)arg2 currency:(id)arg3 transactionId:(id)arg4 additionalParameters:(id)arg5 success:(CDUnknownBlockType)arg6 failure:(CDUnknownBlockType)arg7;
- (void)trackEvent:(id)arg1 withValues:(id)arg2;
- (void)trackEvent:(id)arg1 withValue:(id)arg2;
- (void)sendLaunchToServer;
- (void)trackAppLaunch;
- (void)handleConversionDataWithDelegate:(id)arg1;
- (void)loadConversionDataWithDelegate:(id)arg1;
- (void)handleOpenURL:(id)arg1 sourceApplication:(id)arg2;
- (void)didUpdateUserActivity:(id)arg1;
- (void)continueUserActivity:(id)arg1 restorationHandler:(CDUnknownBlockType)arg2;
- (void)handleOpenURL:(id)arg1 sourceApplication:(id)arg2 withAnnotaion:(id)arg3;
- (void)handleEnteredBackground;
- (void)backgroundstatCall;
- (id)init;
- (void)setUserEmails:(id)arg1 withCryptType:(int)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


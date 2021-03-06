//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "LegacySystemService.h"

@class NSString, PSCheckCertifyResp;

@interface LegacySystemServiceImpl : NSObject <LegacySystemService>
{
    id _delegate;
    NSString *_token;
    NSString *_trackUrl;
    CDUnknownBlockType _block;
    PSCheckCertifyResp *_checkResp;
}

+ (id)sharedService;
@property(retain, nonatomic) PSCheckCertifyResp *checkResp; // @synthesize checkResp=_checkResp;
@property(copy, nonatomic) CDUnknownBlockType block; // @synthesize block=_block;
@property(retain, nonatomic) NSString *trackUrl; // @synthesize trackUrl=_trackUrl;
@property(copy, nonatomic) NSString *token; // @synthesize token=_token;
@property(nonatomic) id delegate; // @synthesize delegate=_delegate;
- (id)getOtp;
- (id)genBlueQRCode:(id)arg1 level:(long long)arg2 size:(unsigned int)arg3;
- (id)genQRCodeWithLevel:(id)arg1 level:(long long)arg2;
- (id)genQRCode:(id)arg1;
- (id)genBarcode:(id)arg1;
- (void)didFinishLoadingCCDCCardInfo:(id)arg1;
- (id)importAccountFromOldVersionArchiveAndClear:(_Bool)arg1;
- (id)queryCCDCCardInfoWithCardNumber:(id)arg1 CCDCCardUsedType:(int)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (id)queryCCDCForeignCardInfoWithCardNumber:(id)arg1 CCDCCardUsedType:(int)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)getCurrentUserPayerValidationWithBlock:(CDUnknownBlockType)arg1;
- (void)didReceiveVersionUpdateNotification:(id)arg1;
- (void)checkNewVersion;
- (void)updateBundleVersion;
- (void)reportActive;
- (void)setSafePayURL:(id)arg1;
- (void)setCCDCURL:(id)arg1;
- (void)setGatewayURL:(id)arg1;
- (void)start;
@property(copy, nonatomic) NSString *sessionId; // @dynamic sessionId;
- (void)loginDidLogout:(id)arg1;
- (void)loginDidFinished:(id)arg1;
- (void)loginWithAccountChanged:(id)arg1;
- (void)dealloc;
- (void)loadBundleInfoPlist:(id)arg1;
- (void)refreshBundleInfoPlist:(id)arg1;
- (void)closeReceiveAndConnect;
- (void)startReceive;
- (void)startReceiveAndConnect;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


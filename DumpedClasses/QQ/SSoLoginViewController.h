//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQViewController.h"

#import "QQSmsLoginFillVerifyViewDelegate.h"
#import "QQSmsLoginSetPhoneViewDelegate.h"
#import "RequestDelegate.h"
#import "SSoAcountEditCellIDDelegate.h"
#import "SimpleAlertViewDelegate.h"
#import "SimpleLoginDelegate.h"
#import "UIActionSheetDelegate.h"
#import "VerifyViewDelegate.h"

@class AuthorizationRequest, NSData, NSDictionary, NSString, NSTimer, QQNavigationController, QQSmsLoginFillVerifyViewController, QQSmsLoginSetPhoneViewController, QQValidCodeWebViewController, SSoAccountView, SSoAcountEditCellID, SSoAcountEditCellPW, SSoVerifyViewController, UIButton, UIImageView, UILabel, UIScrollView, UIView;

@interface SSoLoginViewController : QQViewController <SimpleLoginDelegate, RequestDelegate, VerifyViewDelegate, SSoAcountEditCellIDDelegate, SimpleAlertViewDelegate, UIActionSheetDelegate, QQSmsLoginSetPhoneViewDelegate, QQSmsLoginFillVerifyViewDelegate>
{
    UIImageView *_logoImage;
    UIImageView *_nameImage;
    SSoAcountEditCellID *_acountCellID;
    SSoAcountEditCellPW *_acountCellPW;
    UIButton *_loginBtn;
    UILabel *_lineLable1;
    UILabel *_lineLable2;
    _Bool _adjust;
    NSTimer *_loginTimer;
    _Bool _keyBoardisShow;
    NSDictionary *_loginInfoForThirdPart;
    NSString *_quickAccount;
    NSData *_quickPasswordMD5;
    _Bool _isNeedShowHistoryAccount;
    UIScrollView *_scrollView;
    SSoAccountView *_accountView;
    _Bool _accountViewShow;
    SSoVerifyViewController *_verifyViewController;
    QQValidCodeWebViewController *_validCodeWebViewController;
    QQNavigationController *_validSmsCodeNavController;
    _Bool _isFirstInSmsValid;
    int _resendSmsTimeLeft;
    int _resendSmsTimeLimit;
    NSTimer *_resendSmsLimitTimer;
    UILabel *_loginBgLabel;
    UIView *_line;
    _Bool _autoLogin;
    _Bool _autoAuthorization;
    QQSmsLoginSetPhoneViewController *_smsLoginSetPhoneViewController;
    QQSmsLoginFillVerifyViewController *_smsLoginFillVerifyViewController;
    AuthorizationRequest *_authorizationRequest;
    long long _uin;
    NSString *_userNick;
    NSData *_sKEY;
    NSString *_accountLogin;
    _Bool _showAccountBtn;
}

- (void).cxx_destruct;
- (void)qRcodeLoginFailed:(id)arg1;
- (void)qRcodeLoginSucceed;
- (void)loginFailedOnSmsLogin:(int)arg1 withMsg:(id)arg2 loginType:(int)arg3;
- (void)inputSmsCodeErrOnSmsLogin:(id)arg1;
- (void)needInputSmsCodeOnSmsLogin:(id)arg1;
- (void)dismissSmsLoginInputSmsCodeUI;
- (void)showSmsLoginInputSmsCodeUI:(id)arg1 tag:(int)arg2;
- (void)QQSmsLoginFillVerifyViewShouldDismiss:(id)arg1;
- (void)QQSmsLoginSetPhoneViewNextBtnAction:(id)arg1 country:(id)arg2;
- (void)QQSmsLoginSetPhoneViewShouldDismiss:(id)arg1;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)forgetPassWord;
- (void)buttonClick:(id)arg1 atIndex:(int)arg2;
- (void)leftButtonClick:(id)arg1;
- (void)enable:(_Bool)arg1;
- (void)enablePasswordFirstResponder:(_Bool)arg1;
- (void)clear;
- (void)accountBtnClick:(id)arg1;
- (void)UserIDDidChanged:(id)arg1;
- (void)KeyBoardWillShow:(id)arg1;
- (int)getResendSmsLimitSeconds:(int)arg1;
- (_Bool)reqResendSmsCodeForMobile:(int)arg1 sessionId:(int)arg2;
- (_Bool)commitSmsCode:(id)arg1 forMobile:(int)arg2 sessionId:(int)arg3;
- (void)stopResendSmsLimitTimer;
- (void)onResendSmsLimitTimeout;
- (void)startResendSmsLimitTimer:(int)arg1;
- (void)onDeviceProtectTipsStartBtnAction:(id)arg1 mobileType:(int)arg2 sessionId:(int)arg3;
- (void)onDeviceProtectTipsChangeBtnAction:(int)arg1;
- (void)onDeviceProtectTipsClose:(int)arg1;
- (void)dismissValidSmsCodeUI;
- (void)showValidSmsCodeUI:(id)arg1 tag:(int)arg2;
- (void)inputSmsCodeErr:(id)arg1;
- (void)needInputSmsCode:(id)arg1;
- (_Bool)commitVerifyTicket:(id)arg1 sessionID:(long long)arg2;
- (void)verifyCancelled:(id)arg1;
- (void)checkVerifyCode:(id)arg1 code:(id)arg2;
- (void)refreshVerifyCode:(id)arg1;
- (void)needVerifyCodeInURL:(id)arg1;
- (void)needVerifyCode:(id)arg1;
- (void)reportWtloginError:(long long)arg1;
- (void)reportNoNetWork:(id)arg1;
- (void)RequestSvrErrorCode:(id)arg1;
- (void)RequestSystemNetError:(id)arg1;
- (void)GetQQHeadDelegate:(id)arg1 headBuf:(id)arg2;
- (void)SetAuthorizationDelegate:(id)arg1 dicinfo:(id)arg2 errorMsg:(id)arg3;
- (void)GetAuthorizationInfoDelegate:(id)arg1 dicinfo:(id)arg2 data:(id)arg3 errorMsg:(id)arg4;
- (void)adjust;
- (void)animationStop;
- (void)showAccountsList;
- (void)SSoAcountCellAccountBtnClick:(id)arg1;
- (void)setUserID:(id)arg1;
- (void)setUserID:(id)arg1 password:(id)arg2;
- (void)saveCurAccount:(_Bool)arg1 Uin:(unsigned long long)arg2 Nick:(id)arg3;
- (void)loadPassword:(unsigned long long)arg1:(_Bool)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)LoginTimerOut;
- (void)inputPassword:(id)arg1;
- (void)quickLoginFailed:(id)arg1;
- (void)quickLoginEnd;
- (void)loginFailed:(int)arg1 withMsg:(id)arg2 loginType:(int)arg3;
- (void)loginSucceed:(id)arg1 Uin:(unsigned int)arg2 Nickname:(id)arg3 loginType:(int)arg4;
- (void)gotoAuthorizationWithUin:(unsigned int)arg1 andNickName:(id)arg2 andSkey:(id)arg3;
- (_Bool)doLogin;
- (_Bool)doLoginWithA2D2;
- (void)onLoginTimeout;
- (void)stopLoginTimer;
- (void)startLoginTimer;
- (void)dealloc;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)backgroundTap:(id)arg1;
- (void)createBgView;
- (void)viewDidLoad;
- (void)createScrollView;
- (void)createPhoneLoginEntry;
- (void)createButton:(struct CGRect)arg1;
- (void)createLoginTable:(struct CGRect)arg1;
@property(nonatomic) _Bool showAccountBtn; // @dynamic showAccountBtn;
- (id)init;

// Remaining properties
@property(retain, nonatomic) NSString *accountLogin; // @dynamic accountLogin;
@property(nonatomic) _Bool accountViewShow; // @dynamic accountViewShow;
@property(retain, nonatomic) AuthorizationRequest *authorizationRequest; // @dynamic authorizationRequest;
@property(nonatomic) _Bool autoLogin; // @dynamic autoLogin;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(nonatomic) _Bool isNeedShowHistoryAccount; // @dynamic isNeedShowHistoryAccount;
@property(retain, nonatomic) NSDictionary *loginInfoForThirdPart; // @dynamic loginInfoForThirdPart;
@property(retain, nonatomic) NSString *quickAccount; // @dynamic quickAccount;
@property(retain, nonatomic) NSData *quickPasswordMD5; // @dynamic quickPasswordMD5;
@property(retain, nonatomic) NSData *sKEY; // @dynamic sKEY;
@property(retain, nonatomic) UIScrollView *scrollView; // @dynamic scrollView;
@property(readonly) Class superclass;
@property(nonatomic) long long uin; // @dynamic uin;
@property(retain, nonatomic) NSString *userNick; // @dynamic userNick;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "Mobike_ViewController.h"

#import "MBKApplePayDelegate.h"
#import "UIAlertViewDelegate.h"
#import "UITextFieldDelegate.h"
#import "netNoneFreshDelegate.h"

@class MBKCardConfigModel, NSMutableArray, NSString, NoNetWrokViewController, PayMethodButton, UIButton, UILabel, UIView;

@interface MBKCardPayViewController : Mobike_ViewController <UITextFieldDelegate, netNoneFreshDelegate, MBKApplePayDelegate, UIAlertViewDelegate>
{
    double payCount;
    long long payIndex;
    NSString *cardId;
    PayMethodButton *weichatPay;
    PayMethodButton *redPacketPay;
    id orderInfo;
    long long applePayType;
    long long days;
    _Bool _rechargeListReady;
    _Bool _payMethodListReady;
    unsigned long long _cardPayType;
    unsigned long long _payPlatform;
    NoNetWrokViewController *_netWorkView;
    UIButton *_rechargeBtn;
    UIView *_subBtnView;
    UILabel *_payInfoLabel;
    UIView *_payMethodContainerView;
    NSMutableArray *_rechargeListArray;
    NSMutableArray *_payMethodListArray;
    UILabel *_depositLine;
    MBKCardConfigModel *_cardConfigModel;
}

@property(retain, nonatomic) MBKCardConfigModel *cardConfigModel; // @synthesize cardConfigModel=_cardConfigModel;
@property(retain, nonatomic) UILabel *depositLine; // @synthesize depositLine=_depositLine;
@property(nonatomic) _Bool payMethodListReady; // @synthesize payMethodListReady=_payMethodListReady;
@property(nonatomic) _Bool rechargeListReady; // @synthesize rechargeListReady=_rechargeListReady;
@property(retain) NSMutableArray *payMethodListArray; // @synthesize payMethodListArray=_payMethodListArray;
@property(retain) NSMutableArray *rechargeListArray; // @synthesize rechargeListArray=_rechargeListArray;
@property(retain, nonatomic) UIView *payMethodContainerView; // @synthesize payMethodContainerView=_payMethodContainerView;
@property(retain, nonatomic) UILabel *payInfoLabel; // @synthesize payInfoLabel=_payInfoLabel;
@property(retain, nonatomic) UIView *subBtnView; // @synthesize subBtnView=_subBtnView;
@property(retain, nonatomic) UIButton *rechargeBtn; // @synthesize rechargeBtn=_rechargeBtn;
@property(retain, nonatomic) NoNetWrokViewController *netWorkView; // @synthesize netWorkView=_netWorkView;
@property(nonatomic) unsigned long long payPlatform; // @synthesize payPlatform=_payPlatform;
@property(nonatomic) unsigned long long cardPayType; // @synthesize cardPayType=_cardPayType;
- (void).cxx_destruct;
- (void)didReceiveMemoryWarning;
- (void)dealloc;
- (id)attributedString:(id)arg1 length:(long long)arg2;
- (void)applePayResultCallBack:(id)arg1 withError:(id)arg2;
- (void)onRequestPayWayListFailed:(id)arg1;
- (void)onRequestPayWayListSucc:(id)arg1;
- (void)requestSellingListFailed:(id)arg1;
- (void)requestSellingListSucc:(id)arg1;
- (void)requestDepositionFailed:(id)arg1;
- (void)requestDepositionSucc:(id)arg1;
- (void)requestPayParamsFailed:(id)arg1;
- (void)requestPayParamsSucc:(id)arg1;
- (void)paymentStatusCallbackFailed;
- (void)paymentStatusCallback;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)handleNotification:(id)arg1;
- (void)requestPayList;
- (void)netNoneFresh:(long long)arg1;
- (void)rechargeBtnAction:(id)arg1;
- (void)redpacketEnough:(_Bool)arg1;
- (void)onTapPayMethond:(long long)arg1;
- (void)rechargeInstructionAction:(id)arg1;
- (void)onBackAction:(id)arg1;
- (void)getAcountInfo;
- (void)loadNomal;
- (id)removeFloatAllZero:(id)arg1;
- (void)appToForeGround:(id)arg1;
- (void)selectedMoneyAction:(long long)arg1;
- (void)updateAllLayout;
- (void)layoutPayMethods;
- (void)layoutRecharedButtons;
- (void)setupController;
- (void)setupView;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithPayType:(unsigned long long)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


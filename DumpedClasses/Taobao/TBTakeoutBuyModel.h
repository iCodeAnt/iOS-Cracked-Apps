//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBJSONModel.h"

@class NSArray<TBTakeoutBuyStoreModel>, NSString, TBTakeoutBuyPayWayModel, TBTakeoutBuyRealPayInfoModel, TBTakeoutBuySubmitModel;

@interface TBTakeoutBuyModel : TBJSONModel
{
    TBTakeoutBuySubmitModel *_submit;
    id _extraInfo;
    TBTakeoutBuyRealPayInfoModel *_realPayInfo;
    TBTakeoutBuyPayWayModel *_payWay;
    NSArray<TBTakeoutBuyStoreModel> *_stores;
    NSString *_toast;
}

@property(copy, nonatomic) NSString *toast; // @synthesize toast=_toast;
@property(retain, nonatomic) NSArray<TBTakeoutBuyStoreModel> *stores; // @synthesize stores=_stores;
@property(retain, nonatomic) TBTakeoutBuyPayWayModel *payWay; // @synthesize payWay=_payWay;
@property(retain, nonatomic) TBTakeoutBuyRealPayInfoModel *realPayInfo; // @synthesize realPayInfo=_realPayInfo;
@property(retain, nonatomic) id extraInfo; // @synthesize extraInfo=_extraInfo;
@property(retain, nonatomic) TBTakeoutBuySubmitModel *submit; // @synthesize submit=_submit;
- (void).cxx_destruct;

@end


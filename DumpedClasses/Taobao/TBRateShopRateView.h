//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class TBRateShopRateComponent, TBRateStarView, UILabel;

@interface TBRateShopRateView : UIView
{
    TBRateStarView *_extendsRateOptionsRateStarView;
    TBRateStarView *_logisticsServiceScoreRateStarView;
    TBRateStarView *_orderMerchandiseScoreRateStarView;
    TBRateStarView *_saleConsignmentScoreRateStarView;
    TBRateStarView *_serviceQualityScoreRateStarView;
    TBRateShopRateComponent *_shopRateRateComponent;
    UILabel *_shopRateLabel;
}

@property(retain, nonatomic) UILabel *shopRateLabel; // @synthesize shopRateLabel=_shopRateLabel;
@property(retain, nonatomic) TBRateShopRateComponent *shopRateRateComponent; // @synthesize shopRateRateComponent=_shopRateRateComponent;
@property(retain, nonatomic) TBRateStarView *serviceQualityScoreRateStarView; // @synthesize serviceQualityScoreRateStarView=_serviceQualityScoreRateStarView;
@property(retain, nonatomic) TBRateStarView *saleConsignmentScoreRateStarView; // @synthesize saleConsignmentScoreRateStarView=_saleConsignmentScoreRateStarView;
@property(retain, nonatomic) TBRateStarView *orderMerchandiseScoreRateStarView; // @synthesize orderMerchandiseScoreRateStarView=_orderMerchandiseScoreRateStarView;
@property(retain, nonatomic) TBRateStarView *logisticsServiceScoreRateStarView; // @synthesize logisticsServiceScoreRateStarView=_logisticsServiceScoreRateStarView;
@property(retain, nonatomic) TBRateStarView *extendsRateOptionsRateStarView; // @synthesize extendsRateOptionsRateStarView=_extendsRateOptionsRateStarView;
- (void).cxx_destruct;
- (void)setShopRateComponent:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewCell.h"

@class UIButton, UIImageView, UILabel;

@interface XYPHStoreHomeBetaGoodsCell : UICollectionViewCell
{
    UIImageView *_goodsImageView;
    UIImageView *_coverImageView;
    UILabel *_goodsTitleLabel;
    UILabel *_goodsDescLabel;
    UILabel *_goodsPriceLabel;
    UIButton *_saleInfoLabel;
    UIButton *_redClubButton;
    UIImageView *_vendorImageView;
}

@property(retain, nonatomic) UIImageView *vendorImageView; // @synthesize vendorImageView=_vendorImageView;
@property(retain, nonatomic) UIButton *redClubButton; // @synthesize redClubButton=_redClubButton;
@property(retain, nonatomic) UIButton *saleInfoLabel; // @synthesize saleInfoLabel=_saleInfoLabel;
@property(retain, nonatomic) UILabel *goodsPriceLabel; // @synthesize goodsPriceLabel=_goodsPriceLabel;
@property(retain, nonatomic) UILabel *goodsDescLabel; // @synthesize goodsDescLabel=_goodsDescLabel;
@property(retain, nonatomic) UILabel *goodsTitleLabel; // @synthesize goodsTitleLabel=_goodsTitleLabel;
@property(retain, nonatomic) UIImageView *coverImageView; // @synthesize coverImageView=_coverImageView;
@property(retain, nonatomic) UIImageView *goodsImageView; // @synthesize goodsImageView=_goodsImageView;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (void)initialize;
- (id)initWithFrame:(struct CGRect)arg1;

@end

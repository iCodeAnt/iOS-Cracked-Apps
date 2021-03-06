//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AUBaseListItem.h"

@class AUListItemModel, UIImageView, UILabel;
@protocol AUCouponsItemDelagate;

@interface AUCouponsItem : AUBaseListItem
{
    long long _style;
    UIImageView *_leftImageView;
    UILabel *_subTitleLabel;
    UILabel *_assistDescLabel;
    AUListItemModel<AUCouponsItemDelagate> *_model;
}

+ (double)cellHeightWithStyle:(long long)arg1;
@property(retain, nonatomic) AUListItemModel<AUCouponsItemDelagate> *model; // @synthesize model=_model;
@property(retain, nonatomic) UILabel *assistDescLabel; // @synthesize assistDescLabel=_assistDescLabel;
@property(retain, nonatomic) UILabel *subTitleLabel; // @synthesize subTitleLabel=_subTitleLabel;
@property(retain, nonatomic) UIImageView *leftImageView; // @synthesize leftImageView=_leftImageView;
@property(nonatomic) long long style; // @synthesize style=_style;
- (void).cxx_destruct;
- (id)titleLabel;
- (void)layoutSubviews;
- (void)setDataModel:(CDUnknownBlockType)arg1;

@end


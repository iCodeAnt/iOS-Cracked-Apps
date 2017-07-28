//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NVMCollectionViewCell.h"

@class NSString, NVMAsyncDisplayLabel, UIImageView, UITextView;

@interface ESPDiscountFoodCollectionViewCell : NVMCollectionViewCell
{
    NSString *_highlightText;
    id <ESPDiscountFoodDataType> _food;
    UIImageView *_foodImageView;
    NVMAsyncDisplayLabel *_foodNameLabel;
    UITextView *_priceTextView;
    UIImageView *_discountImageView;
    NVMAsyncDisplayLabel *_discountLabel;
}

+ (struct CGSize)itemSize;
@property(retain, nonatomic) NVMAsyncDisplayLabel *discountLabel; // @synthesize discountLabel=_discountLabel;
@property(retain, nonatomic) UIImageView *discountImageView; // @synthesize discountImageView=_discountImageView;
@property(retain, nonatomic) UITextView *priceTextView; // @synthesize priceTextView=_priceTextView;
@property(retain, nonatomic) NVMAsyncDisplayLabel *foodNameLabel; // @synthesize foodNameLabel=_foodNameLabel;
@property(retain, nonatomic) UIImageView *foodImageView; // @synthesize foodImageView=_foodImageView;
@property(retain, nonatomic) id <ESPDiscountFoodDataType> food; // @synthesize food=_food;
@property(copy, nonatomic) NSString *highlightText; // @synthesize highlightText=_highlightText;
- (void).cxx_destruct;
- (id)accessibilityLabel;
- (_Bool)isAccessibilityElement;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

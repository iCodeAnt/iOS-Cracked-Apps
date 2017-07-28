//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSString, UIImageView, UILabel;

@interface SAirportCarInfoScrollViewCell : UIView
{
    _Bool _isSelected;
    _Bool _isSpecCarHomepageUse;
    long long _carTypeIndex;
    CDUnknownBlockType _tapBlock;
    NSString *_carType;
    NSString *_carLevelId;
    NSString *_carImageNameUnselected;
    NSString *_carImageNameSelected;
    UIImageView *_carImageViewUnselected;
    UIImageView *_carImageViewSelected;
    UILabel *_carNameLabelUnselected;
    UILabel *_carNameLabelSelected;
    UIImageView *_bottomTriangle;
}

@property(retain, nonatomic) UIImageView *bottomTriangle; // @synthesize bottomTriangle=_bottomTriangle;
@property(retain, nonatomic) UILabel *carNameLabelSelected; // @synthesize carNameLabelSelected=_carNameLabelSelected;
@property(retain, nonatomic) UILabel *carNameLabelUnselected; // @synthesize carNameLabelUnselected=_carNameLabelUnselected;
@property(retain, nonatomic) UIImageView *carImageViewSelected; // @synthesize carImageViewSelected=_carImageViewSelected;
@property(retain, nonatomic) UIImageView *carImageViewUnselected; // @synthesize carImageViewUnselected=_carImageViewUnselected;
@property(copy, nonatomic) NSString *carImageNameSelected; // @synthesize carImageNameSelected=_carImageNameSelected;
@property(copy, nonatomic) NSString *carImageNameUnselected; // @synthesize carImageNameUnselected=_carImageNameUnselected;
@property(copy, nonatomic) NSString *carLevelId; // @synthesize carLevelId=_carLevelId;
@property(copy, nonatomic) NSString *carType; // @synthesize carType=_carType;
@property(copy, nonatomic) CDUnknownBlockType tapBlock; // @synthesize tapBlock=_tapBlock;
@property(nonatomic) _Bool isSpecCarHomepageUse; // @synthesize isSpecCarHomepageUse=_isSpecCarHomepageUse;
@property(nonatomic) _Bool isSelected; // @synthesize isSelected=_isSelected;
@property(nonatomic) long long carTypeIndex; // @synthesize carTypeIndex=_carTypeIndex;
- (void).cxx_destruct;
- (void)changeSelectedState:(_Bool)arg1;
- (void)changeButtonTriangle:(_Bool)arg1;
- (void)createBottomTriangle;
- (void)tapGesture;
- (void)addTapGesture;
- (void)layoutSubviews;
- (void)createLines;
- (void)createSubViews;
- (id)initWithFrame:(struct CGRect)arg1 carType:(id)arg2 carLevel:(id)arg3 carImageNameUnselected:(id)arg4 carImageNameSelected:(id)arg5;

@end

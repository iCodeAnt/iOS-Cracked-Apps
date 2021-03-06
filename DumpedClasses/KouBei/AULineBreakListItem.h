//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AUBaseListItem.h"

@class AUListItemModel, AUNCssItemView, UILabel;
@protocol AULineBreakListItemModelDelegate;

@interface AULineBreakListItem : AUBaseListItem
{
    UILabel *_subtitleLabel;
    AUNCssItemView *_cssView;
    AUListItemModel<AULineBreakListItemModelDelegate> *_model;
}

+ (double)cellHeightForModel:(id)arg1;
@property(retain, nonatomic) AUListItemModel<AULineBreakListItemModelDelegate> *model; // @synthesize model=_model;
@property(retain, nonatomic) AUNCssItemView *cssView; // @synthesize cssView=_cssView;
@property(retain, nonatomic) UILabel *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;
- (void).cxx_destruct;
- (id)titleLabel;
- (void)layoutSubviews;
- (void)setModelBlock:(CDUnknownBlockType)arg1;

@end


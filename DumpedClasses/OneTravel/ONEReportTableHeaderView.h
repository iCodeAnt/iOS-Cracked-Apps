//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UILabel;

@interface ONEReportTableHeaderView : UIView
{
    UIView *_contentView;
    UILabel *_titleLabel;
    UILabel *_startLabel;
    UILabel *_endLabel;
}

@property(retain, nonatomic) UILabel *endLabel; // @synthesize endLabel=_endLabel;
@property(retain, nonatomic) UILabel *startLabel; // @synthesize startLabel=_startLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
- (void).cxx_destruct;
- (void)setHeaderViewData:(id)arg1;
- (id)renderPoint:(_Bool)arg1;
- (void)configSubViews;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

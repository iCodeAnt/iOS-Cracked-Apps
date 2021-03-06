//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class AWSPerformanceView, UIView;

@interface AWSStockDetailPerformanceCell : UITableViewCell
{
    AWSPerformanceView *_performance;
    UIView *_headerView;
    UIView *_contentViews;
}

@property(retain, nonatomic) UIView *contentViews; // @synthesize contentViews=_contentViews;
@property(retain, nonatomic) UIView *headerView; // @synthesize headerView=_headerView;
@property(retain, nonatomic) AWSPerformanceView *performance; // @synthesize performance=_performance;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)updateHeader:(id)arg1 subText:(id)arg2 status:(unsigned long long)arg3;
- (void)updateTitle:(id)arg1 subTitle:(id)arg2 leftDataDef:(id)arg3 leftData:(id)arg4 rightDataDef:(id)arg5 rightData:(id)arg6 unit:(id)arg7 xLabel:(id)arg8 status:(unsigned long long)arg9;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class NSDictionary, NSIndexPath, UIImageView, UILabel, UITableView;

@interface TBCouponButtonListCell : UITableViewCell
{
    UITableView *_tableView;
    NSIndexPath *_indexPath;
    NSDictionary *_dateDict;
    UILabel *_titleLabelView;
    UIImageView *_selectIconImageView;
}

@property(retain, nonatomic) UIImageView *selectIconImageView; // @synthesize selectIconImageView=_selectIconImageView;
@property(retain, nonatomic) UILabel *titleLabelView; // @synthesize titleLabelView=_titleLabelView;
@property(retain, nonatomic) NSDictionary *dateDict; // @synthesize dateDict=_dateDict;
@property(readonly, nonatomic) NSIndexPath *indexPath; // @synthesize indexPath=_indexPath;
@property(readonly, nonatomic) __weak UITableView *tableView; // @synthesize tableView=_tableView;
- (void).cxx_destruct;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

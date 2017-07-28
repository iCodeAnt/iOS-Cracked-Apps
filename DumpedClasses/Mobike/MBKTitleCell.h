//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

#import "MBKViewProtocol.h"

@class MBKTitleCellModel, Mobike_ViewController, NSString, UIButton, UILabel;

@interface MBKTitleCell : UITableViewCell <MBKViewProtocol>
{
    UILabel *_titleLabel;
    UIButton *_detialButton;
    MBKTitleCellModel *_model;
    id _delegate;
}

+ (double)viewWidth:(id)arg1;
+ (double)viewHeight:(id)arg1;
+ (id)reuseIdentifier;
@property(nonatomic) __weak id delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) MBKTitleCellModel *model; // @synthesize model=_model;
@property(nonatomic) __weak UIButton *detialButton; // @synthesize detialButton=_detialButton;
@property(nonatomic) __weak UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void).cxx_destruct;
- (void)detialAction:(id)arg1;
- (void)configSubView;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)awakeFromNib;

// Remaining properties
@property(nonatomic) __weak Mobike_ViewController *controller;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


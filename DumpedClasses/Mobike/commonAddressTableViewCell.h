//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class UIImageView, UILabel;

@interface commonAddressTableViewCell : UITableViewCell
{
    UILabel *_unCommonAddres;
    UILabel *_commonAddressTitle;
    UIImageView *_commonAddressIcon;
    UILabel *_commonAddressDetail;
}

@property(retain, nonatomic) UILabel *commonAddressDetail; // @synthesize commonAddressDetail=_commonAddressDetail;
@property(retain, nonatomic) UIImageView *commonAddressIcon; // @synthesize commonAddressIcon=_commonAddressIcon;
@property(retain, nonatomic) UILabel *commonAddressTitle; // @synthesize commonAddressTitle=_commonAddressTitle;
@property(retain, nonatomic) UILabel *unCommonAddres; // @synthesize unCommonAddres=_unCommonAddres;
- (void).cxx_destruct;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)updateCellWith:(id)arg1 obj2:(id)arg2;
- (void)awakeFromNib;

@end


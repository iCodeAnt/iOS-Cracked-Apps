//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class NSDictionary, UIImageView, UILabel;

@interface CTableViewCell : UITableViewCell
{
    NSDictionary *_param;
    UILabel *_titleLabel;
    UIImageView *_arrowImg;
}

@property(nonatomic) __weak UIImageView *arrowImg; // @synthesize arrowImg=_arrowImg;
@property(nonatomic) __weak UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) NSDictionary *param; // @synthesize param=_param;
- (void).cxx_destruct;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)awakeFromNib;

@end


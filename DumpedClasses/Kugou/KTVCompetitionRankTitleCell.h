//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "KFCommedTableViewCell.h"

@class KGThemeLabel, KGThemeLine;

@interface KTVCompetitionRankTitleCell : KFCommedTableViewCell
{
    KGThemeLabel *_contentLabel;
    KGThemeLine *_topLineView;
    double _leftMargin;
}

+ (double)cellHeight;
@property(nonatomic) double leftMargin; // @synthesize leftMargin=_leftMargin;
@property(retain, nonatomic) KGThemeLine *topLineView; // @synthesize topLineView=_topLineView;
@property(retain, nonatomic) KGThemeLabel *contentLabel; // @synthesize contentLabel=_contentLabel;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

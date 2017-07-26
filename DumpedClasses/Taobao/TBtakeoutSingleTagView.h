//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class TBTakeoutItemTagModel, UILabel;

@interface TBtakeoutSingleTagView : UIView
{
    _Bool _isInSkuView;
    double _cawidth;
    double _caheight;
    UILabel *_textLabel;
    UILabel *_subTextLabel;
    TBTakeoutItemTagModel *_itemTagModel;
}

@property(retain, nonatomic) TBTakeoutItemTagModel *itemTagModel; // @synthesize itemTagModel=_itemTagModel;
@property(retain, nonatomic) UILabel *subTextLabel; // @synthesize subTextLabel=_subTextLabel;
@property(retain, nonatomic) UILabel *textLabel; // @synthesize textLabel=_textLabel;
@property(nonatomic) double caheight; // @synthesize caheight=_caheight;
@property(nonatomic) double cawidth; // @synthesize cawidth=_cawidth;
@property(nonatomic) _Bool isInSkuView; // @synthesize isInSkuView=_isInSkuView;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithItemTagModel:(id)arg1;

@end

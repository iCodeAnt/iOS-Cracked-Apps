//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewCell.h"

@class QLHTMLFontLabel, QLJCEActorInfo, QLSImageView;

@interface QLSearchActorLeftRightCell : UICollectionViewCell
{
    QLJCEActorInfo *_actorInfo;
    QLSImageView *_avatorView;
    QLHTMLFontLabel *_firstLineLbl;
    QLHTMLFontLabel *_secondLineLbl;
    QLSImageView *_iconView;
}

@property(retain, nonatomic) QLSImageView *iconView; // @synthesize iconView=_iconView;
@property(retain, nonatomic) QLHTMLFontLabel *secondLineLbl; // @synthesize secondLineLbl=_secondLineLbl;
@property(retain, nonatomic) QLHTMLFontLabel *firstLineLbl; // @synthesize firstLineLbl=_firstLineLbl;
@property(retain, nonatomic) QLSImageView *avatorView; // @synthesize avatorView=_avatorView;
@property(retain, nonatomic) QLJCEActorInfo *actorInfo; // @synthesize actorInfo=_actorInfo;
- (void).cxx_destruct;
- (void)reportShowUp;
- (void)didTapView;
- (void)layoutSubviews;
- (void)setObject:(id)arg1 actorType:(long long)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end

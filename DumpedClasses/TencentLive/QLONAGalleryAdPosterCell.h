//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QLBaseTabelViewCell.h"

@class QLONAGalleryAdPosterView;

@interface QLONAGalleryAdPosterCell : QLBaseTabelViewCell
{
    QLONAGalleryAdPosterView *_galleryAdPosterViewView;
}

+ (int)thumbStyleWithPosterObj:(id)arg1;
+ (double)getHeightWithPosterObj:(id)arg1 uInfo:(id)arg2;
@property(retain, nonatomic) QLONAGalleryAdPosterView *galleryAdPosterViewView; // @synthesize galleryAdPosterViewView=_galleryAdPosterViewView;
- (void).cxx_destruct;
- (void)reportShowUp;
- (void)itemCellDidInvisible;
- (void)itemCellDidShowUp;
- (_Bool)canSlideMore:(struct CGPoint)arg1;
- (void)splashAdEnd:(id)arg1;
- (void)layoutSubviews;
- (void)startLoadModel;
- (void)setObject:(id)arg1;
- (void)dealloc;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

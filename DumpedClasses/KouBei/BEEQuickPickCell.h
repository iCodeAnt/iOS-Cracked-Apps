//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class BEEAsset, UIImageView;

@interface BEEQuickPickCell : UICollectionViewCell
{
    UIImageView *_imageView;
    UIImageView *_checkIconView;
    int _positionStatus;
    _Bool _hasSetVoiceOver;
    _Bool _picked;
    BEEAsset *_beeAsset;
}

@property(nonatomic) _Bool picked; // @synthesize picked=_picked;
@property(retain, nonatomic) BEEAsset *beeAsset; // @synthesize beeAsset=_beeAsset;
- (void).cxx_destruct;
- (void)setVoiceOverWithForce:(_Bool)arg1;
- (void)updateCheckIconViewFrame;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect)arg1;

@end


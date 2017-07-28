//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewCell.h"

#import "UICollectionViewDataSource.h"
#import "UICollectionViewDelegateFlowLayout.h"

@class NSArray, NSString, UICollectionView, UIImageView;

@interface ESPRestaurantDetailInfoQualitySectionControllerCertsCell : UICollectionViewCell <UICollectionViewDataSource, UICollectionViewDelegateFlowLayout>
{
    NSArray *_certNames;
    UIImageView *_indicator;
    UICollectionView *_certsView;
}

+ (double)cellHeight;
@property(retain, nonatomic) UICollectionView *certsView; // @synthesize certsView=_certsView;
@property(retain, nonatomic) UIImageView *indicator; // @synthesize indicator=_indicator;
@property(copy, nonatomic) NSArray *certNames; // @synthesize certNames=_certNames;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

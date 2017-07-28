//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewFlowLayout.h"

@class GMSx_QTMCollectionView, NSMutableArray, NSMutableIndexSet;

@interface GMSx_QTMCollectionViewFlowLayout : UICollectionViewFlowLayout
{
    NSMutableArray *_deletedIndexPaths;
    NSMutableArray *_insertedIndexPaths;
    NSMutableIndexSet *_deletedSections;
    NSMutableIndexSet *_insertedSections;
}

+ (Class)layoutAttributesClass;
+ (void)updateLayout:(id)arg1 animated:(_Bool)arg2 updateBlock:(CDUnknownBlockType)arg3 completion:(CDUnknownBlockType)arg4;
- (void).cxx_destruct;
- (void)beginCellAppearanceAnimationIfNecessary:(id)arg1;
- (struct CGRect)boundsForAppearanceAnimationWithInitialBounds:(struct CGRect)arg1;
- (long long)numberOfItemsInSection:(long long)arg1;
- (void)addDecorationViewIfNecessary:(id)arg1;
- (void)addInfoBarAttributesIfNecessary:(id)arg1;
- (void)hideAttributeIfNecessary:(id)arg1;
- (void)inlayAttributeIfNecessary:(id)arg1;
- (unsigned long long)cellStateMaskForElementWithAttribute:(id)arg1;
- (unsigned long long)ordinalPositionForGridElementWithAttribute:(id)arg1;
- (unsigned long long)ordinalPositionForListElementWithAttribute:(id)arg1;
- (id)updateSupplementaryViewAttribute:(id)arg1;
- (id)updateAttribute:(id)arg1;
- (id)finalLayoutAttributesForDisappearingSupplementaryElementOfKind:(id)arg1 atIndexPath:(id)arg2;
- (id)finalLayoutAttributesForDisappearingItemAtIndexPath:(id)arg1;
- (id)initialLayoutAttributesForAppearingSupplementaryElementOfKind:(id)arg1 atIndexPath:(id)arg2;
- (id)initialLayoutAttributesForAppearingItemAtIndexPath:(id)arg1;
- (void)finalizeCollectionViewUpdates;
- (void)prepareForCollectionViewUpdates:(id)arg1;
- (struct CGPoint)targetContentOffsetForProposedContentOffset:(struct CGPoint)arg1;
- (id)layoutAttributesForDecorationViewOfKind:(id)arg1 atIndexPath:(id)arg2;
- (id)layoutAttributesForSupplementaryViewOfKind:(id)arg1 atIndexPath:(id)arg2;
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;
- (_Bool)shouldInvalidateLayoutForBoundsChange:(struct CGRect)arg1;
- (id)layoutAttributesForElementsInRect:(struct CGRect)arg1;
- (id)init;

// Remaining properties
@property(readonly, nonatomic) GMSx_QTMCollectionView *collectionView; // @dynamic collectionView;

@end


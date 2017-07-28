//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewDataSource.h"

@class GMSx_QTMCollectionView, GMSx_QTMCollectionViewCell, NSArray, NSIndexPath, NSString, UICollectionReusableView;

@protocol QTMCollectionViewModelDelegate <UICollectionViewDataSource>

@optional
- (void)collectionView:(GMSx_QTMCollectionView *)arg1 didCancelSwipeToDismissSection:(long long)arg2;
- (void)collectionView:(GMSx_QTMCollectionView *)arg1 didEndSwipeToDismissSection:(long long)arg2;
- (void)collectionView:(GMSx_QTMCollectionView *)arg1 willBeginSwipeToDismissSection:(long long)arg2;
- (_Bool)collectionView:(GMSx_QTMCollectionView *)arg1 canSwipeToDismissSection:(long long)arg2;
- (void)collectionView:(GMSx_QTMCollectionView *)arg1 didCancelSwipeToDismissItemAtIndexPath:(NSIndexPath *)arg2;
- (void)collectionView:(GMSx_QTMCollectionView *)arg1 didEndSwipeToDismissItemAtIndexPath:(NSIndexPath *)arg2;
- (void)collectionView:(GMSx_QTMCollectionView *)arg1 willBeginSwipeToDismissItemAtIndexPath:(NSIndexPath *)arg2;
- (_Bool)collectionView:(GMSx_QTMCollectionView *)arg1 canSwipeToDismissItemAtIndexPath:(NSIndexPath *)arg2;
- (void)collectionView:(GMSx_QTMCollectionView *)arg1 willExchangeItemAtIndexPath:(NSIndexPath *)arg2 withItemAtIndexPath:(NSIndexPath *)arg3;
- (void)collectionView:(GMSx_QTMCollectionView *)arg1 didDeleteItemsAtIndexPaths:(NSArray *)arg2;
- (void)collectionView:(GMSx_QTMCollectionView *)arg1 willDeleteItemsAtIndexPaths:(NSArray *)arg2;
- (_Bool)collectionView:(GMSx_QTMCollectionView *)arg1 shouldExchangeItemDuringMoveAtIndexPath:(NSIndexPath *)arg2 toIndexPath:(NSIndexPath *)arg3;
- (void)collectionView:(GMSx_QTMCollectionView *)arg1 didEndDraggingItemAtIndexPath:(NSIndexPath *)arg2;
- (void)collectionView:(GMSx_QTMCollectionView *)arg1 willBeginDraggingItemAtIndexPath:(NSIndexPath *)arg2;
- (void)collectionView:(GMSx_QTMCollectionView *)arg1 didMoveItemAtIndexPath:(NSIndexPath *)arg2 toIndexPath:(NSIndexPath *)arg3;
- (void)collectionView:(GMSx_QTMCollectionView *)arg1 willMoveItemAtIndexPath:(NSIndexPath *)arg2 toIndexPath:(NSIndexPath *)arg3;
- (_Bool)collectionView:(GMSx_QTMCollectionView *)arg1 canMoveItemAtIndexPath:(NSIndexPath *)arg2 toIndexPath:(NSIndexPath *)arg3;
- (_Bool)collectionView:(GMSx_QTMCollectionView *)arg1 canMoveItemAtIndexPath:(NSIndexPath *)arg2;
- (_Bool)collectionView:(GMSx_QTMCollectionView *)arg1 canSelectItemDuringEditingAtIndexPath:(NSIndexPath *)arg2;
- (_Bool)collectionView:(GMSx_QTMCollectionView *)arg1 canEditItemAtIndexPath:(NSIndexPath *)arg2;
- (void)collectionViewDidEndEditing:(GMSx_QTMCollectionView *)arg1;
- (void)collectionViewWillEndEditing:(GMSx_QTMCollectionView *)arg1;
- (void)collectionViewDidBeginEditing:(GMSx_QTMCollectionView *)arg1;
- (void)collectionViewWillBeginEditing:(GMSx_QTMCollectionView *)arg1;
- (void)collectionView:(GMSx_QTMCollectionView *)arg1 didConfigureSupplementaryView:(UICollectionReusableView *)arg2 forElementKind:(NSString *)arg3 atIndexPath:(NSIndexPath *)arg4;
- (void)collectionView:(GMSx_QTMCollectionView *)arg1 didConfigureCell:(GMSx_QTMCollectionViewCell *)arg2 forItemAtIndexPath:(NSIndexPath *)arg3;
- (Class)collectionView:(GMSx_QTMCollectionView *)arg1 cellClassForContentViewObject:(id <GOOContentViewObject>)arg2;
@end


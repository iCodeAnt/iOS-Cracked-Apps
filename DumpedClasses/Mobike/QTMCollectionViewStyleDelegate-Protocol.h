//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class GMSx_QTMCollectionView, GMSx_QTMInkTouchController, GMSx_QTMInkView, NSArray, NSIndexPath, UIColor;

@protocol QTMCollectionViewStyleDelegate <NSObject>

@optional
- (void)collectionView:(GMSx_QTMCollectionView *)arg1 didProcessInkView:(GMSx_QTMInkView *)arg2 atIndexPath:(NSIndexPath *)arg3;
- (GMSx_QTMInkView *)collectionView:(GMSx_QTMCollectionView *)arg1 inkTouchController:(GMSx_QTMInkTouchController *)arg2 inkViewAtIndexPath:(NSIndexPath *)arg3;
- (unsigned long long)collectionView:(GMSx_QTMCollectionView *)arg1 inkTouchStyleAtIndexPath:(NSIndexPath *)arg2;
- (struct UIEdgeInsets)collectionView:(GMSx_QTMCollectionView *)arg1 accessoryInsetsForFooterAtSection:(long long)arg2;
- (struct UIEdgeInsets)collectionView:(GMSx_QTMCollectionView *)arg1 accessoryInsetsForHeaderAtSection:(long long)arg2;
- (struct UIEdgeInsets)collectionView:(GMSx_QTMCollectionView *)arg1 accessoryInsetsAtIndexPath:(NSIndexPath *)arg2;
- (unsigned long long)collectionView:(GMSx_QTMCollectionView *)arg1 accessoryTypeForFooterAtSection:(long long)arg2;
- (unsigned long long)collectionView:(GMSx_QTMCollectionView *)arg1 accessoryTypeForHeaderAtSection:(long long)arg2;
- (unsigned long long)collectionView:(GMSx_QTMCollectionView *)arg1 accessoryTypeAtIndexPath:(NSIndexPath *)arg2;
- (UIColor *)collectionView:(GMSx_QTMCollectionView *)arg1 innerBackgroundColorForFooterAtSection:(long long)arg2;
- (UIColor *)collectionView:(GMSx_QTMCollectionView *)arg1 innerBackgroundColorForHeaderAtSection:(long long)arg2;
- (UIColor *)collectionView:(GMSx_QTMCollectionView *)arg1 innerBackgroundColorAtIndexPath:(NSIndexPath *)arg2;
- (unsigned long long)collectionView:(GMSx_QTMCollectionView *)arg1 cellDividerStyleInsetsForSection:(long long)arg2;
- (unsigned long long)collectionView:(GMSx_QTMCollectionView *)arg1 cellDividerStyleForSection:(long long)arg2;
- (unsigned long long)collectionView:(GMSx_QTMCollectionView *)arg1 cellStyleForSection:(long long)arg2;
- (void)collectionView:(GMSx_QTMCollectionView *)arg1 didRemoveInlayFromItemAtIndexPaths:(NSArray *)arg2;
- (void)collectionView:(GMSx_QTMCollectionView *)arg1 didApplyInlayToItemAtIndexPaths:(NSArray *)arg2;
- (unsigned long long)collectionView:(GMSx_QTMCollectionView *)arg1 footerStyleForSection:(long long)arg2;
- (unsigned long long)collectionView:(GMSx_QTMCollectionView *)arg1 itemStyleAtIndexPath:(NSIndexPath *)arg2;
- (unsigned long long)collectionView:(GMSx_QTMCollectionView *)arg1 headerStyleForSection:(long long)arg2;
@end


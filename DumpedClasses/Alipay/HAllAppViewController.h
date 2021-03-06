//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "DTViewController.h"

#import "AUSearchTitleViewDelegate.h"
#import "DTCustomNavigationBarProtocol.h"
#import "DTNavigationBarAppearanceProtocol.h"
#import "HAppEditCellViewDelegate.h"
#import "HCollectionEntranceFooterDelegate.h"
#import "HCollectionViewCellDelegate.h"
#import "HEditGridViewDelegate.h"
#import "HEditToolBarDelegate.h"
#import "HTopAppBarViewDelegate.h"
#import "UICollectionViewDataSource.h"
#import "UICollectionViewDelegate.h"

@class BEECustomAlertView, HAppCellModel, HCollectionEntranceFooter, HEditGridView, HEditToolBar, HTopAppBarView, NSArray, NSMutableArray, NSMutableDictionary, NSString, UICollectionView, UIImageView, UIView;

@interface HAllAppViewController : DTViewController <HEditGridViewDelegate, HAppEditCellViewDelegate, HCollectionViewCellDelegate, DTNavigationBarAppearanceProtocol, UICollectionViewDelegate, UICollectionViewDataSource, AUSearchTitleViewDelegate, HTopAppBarViewDelegate, DTCustomNavigationBarProtocol, HCollectionEntranceFooterDelegate, HEditToolBarDelegate>
{
    HEditGridView *_gridView;
    UICollectionView *_collectionView;
    NSMutableArray *_sectionArray;
    NSArray *_myAppModelArray;
    HAppCellModel *_moreAppModel;
    NSMutableDictionary *_myAppModelsDic;
    NSArray *_startdMyAppModels;
    NSMutableArray *_allRecentApps;
    _Bool _inEditing;
    _Bool _editClicked;
    _Bool _followScroll;
    _Bool _gotoNextPage;
    _Bool _needReload;
    UIView *_lineView;
    HEditToolBar *_editingToolBar;
    UIImageView *_shadowView;
    UIView *_topContainerView;
    HTopAppBarView *_topAppsView;
    UIView *_flexibleView;
    HCollectionEntranceFooter *_entranceFooterView;
    _Bool _viewInAppear;
    _Bool _hasExposure;
    BEECustomAlertView *_customAlertView;
    _Bool _autoEditMode;
}

@property(nonatomic) _Bool autoEditMode; // @synthesize autoEditMode=_autoEditMode;
- (void).cxx_destruct;
- (void)createCollectionView;
- (id)createShadowView;
- (id)createGridView;
- (void)completeButtonClick;
- (void)cancelButtonClick;
- (void)entranceFooterClicked;
- (void)back;
- (void)topAppsEditButtonClick;
- (void)didPressedTitleView:(id)arg1;
- (id)middleNavSearchTitleView;
- (void)scrollViewDidScroll:(id)arg1;
- (void)openApp:(id)arg1;
- (void)refreshBizMark;
- (void)setEditingBar:(_Bool)arg1;
- (void)reportBizMark;
- (_Bool)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (double)appCellHeight;
- (double)appCellWidth;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForFooterInSection:(long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (void)reloadCollectionView;
- (void)setCellsPlayEditMode:(_Bool)arg1;
- (void)gridViewEndMove;
- (void)gridViewBeginMove;
- (void)editButtonClicked:(id)arg1;
- (void)cellViewDidDelete:(id)arg1;
- (void)cellViewWillDelete:(id)arg1;
- (void)cellDidClicked:(id)arg1;
- (void)stopEditing:(_Bool)arg1;
- (void)stopEditUI:(CDUnknownBlockType)arg1;
- (void)setUserDisable:(_Bool)arg1;
- (void)viewWillLayoutSubviews;
- (void)startEditing;
- (void)longPressed:(id)arg1;
- (void)reloadAllData;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)doEnterForeGround:(id)arg1;
- (void)exposureSPMs;
- (void)viewWillAppear:(_Bool)arg1;
- (void)resetInset:(_Bool)arg1;
- (void)doRecentAppDeleteNotification:(id)arg1;
- (void)doEnterBackGround:(id)arg1;
- (void)requestRepaceApps;
- (_Bool)needReqeust;
- (void)viewDidLoad;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


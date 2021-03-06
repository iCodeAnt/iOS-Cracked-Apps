//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "TTFeedCollectionCellDelegate.h"
#import "UICollectionViewDataSource.h"
#import "UICollectionViewDelegate.h"
#import "UICollectionViewDelegateFlowLayout.h"
#import "UIScrollViewDelegate.h"

@class NSArray, NSString, TTFeedRefreshView, UICollectionView;

@interface TTFeedCollectionViewController : UIViewController <UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout, UIScrollViewDelegate, TTFeedCollectionCellDelegate>
{
    _Bool _userDrag;
    _Bool _userClick;
    _Bool _isDisplay;
    _Bool _firstLoad;
    NSString *_name;
    NSArray *_pageCategories;
    long long _currentIndex;
    id <TTFeedCollectionViewControllerDelegate> _delegate;
    UICollectionView *_collectionView;
    long long _targetIndex;
    long long _dragBeginIndex;
    double _topInset;
    double _bottomInset;
    TTFeedRefreshView *_refreshView;
    NSString *_lastCategoryID;
}

@property(copy, nonatomic) NSString *lastCategoryID; // @synthesize lastCategoryID=_lastCategoryID;
@property(retain, nonatomic) TTFeedRefreshView *refreshView; // @synthesize refreshView=_refreshView;
@property(nonatomic) double bottomInset; // @synthesize bottomInset=_bottomInset;
@property(nonatomic) double topInset; // @synthesize topInset=_topInset;
@property(nonatomic) _Bool firstLoad; // @synthesize firstLoad=_firstLoad;
@property(nonatomic) _Bool isDisplay; // @synthesize isDisplay=_isDisplay;
@property(nonatomic) _Bool userClick; // @synthesize userClick=_userClick;
@property(nonatomic) _Bool userDrag; // @synthesize userDrag=_userDrag;
@property(nonatomic) long long dragBeginIndex; // @synthesize dragBeginIndex=_dragBeginIndex;
@property(nonatomic) long long targetIndex; // @synthesize targetIndex=_targetIndex;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(nonatomic) __weak id <TTFeedCollectionViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) long long currentIndex; // @synthesize currentIndex=_currentIndex;
@property(copy, nonatomic) NSArray *pageCategories; // @synthesize pageCategories=_pageCategories;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (_Bool)shouldAnimateRefreshViewWithScrollViewCel:(id)arg1;
- (void)adjustToolViewsWhenListCellMovedFromIndex:(unsigned long long)arg1 toIndex:(unsigned long long)arg2 percent:(double)arg3;
- (_Bool)subscribeListIsEmpty;
- (void)adjustToolViewsAppearance:(id)arg1;
- (void)adjustToolViewsAppearance;
- (void)handleRefreshButtonSettingEnabledNotification:(id)arg1;
- (void)refreshButtonPressed:(id)arg1;
- (void)ttFeedCollectionCellStopLoading:(id)arg1 isPullDownRefresh:(_Bool)arg2;
- (void)ttFeedCollectionCellStartLoading:(id)arg1;
- (void)leaveCategory:(id)arg1;
- (void)enterCategory:(id)arg1;
- (void)setCurrentIndex:(long long)arg1 scrollToPositionAnimated:(_Bool)arg2;
- (id)categoryAtIndex:(long long)arg1;
- (id)currentCategory;
- (id)pageCellAtIndex:(long long)arg1;
- (id)currentCollectionPageCell;
- (void)relayoutPages;
- (double)scrollPercent:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)currentPageCellAppear;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)themeChanged:(id)arg1;
- (void)viewWillLayoutSubviews;
- (void)viewDidLayoutSubviews;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithName:(id)arg1 topInset:(double)arg2 bottomInset:(double)arg3;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


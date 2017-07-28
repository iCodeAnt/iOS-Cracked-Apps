//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "UICollectionViewDataSource.h"
#import "UICollectionViewDelegate.h"
#import "UICollectionViewDelegateFlowLayout.h"

@class NSDictionary, NSIndexPath, NSMutableArray, NSString, UICollectionView, UICollectionViewFlowLayout, UIColor, UIFont;

@interface GrowingBarChart : UIView <UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout>
{
    double _rowHeight;
    double _maxTitleWidth;
    double _minTitleWidth;
    UIColor *_maxBarColor;
    UIColor *_minBarColor;
    NSIndexPath *_detailIndex;
    CDUnknownBlockType _onDetailIndexChange;
    UIView *_headerView;
    NSMutableArray *_allRows;
    long long _maxValue;
    double _currentMaxTitleWidth;
    double _currentMaxValueWidth;
    UIFont *_titleFont;
    NSDictionary *_titleFontAttr;
    UIFont *_valueFont;
    NSDictionary *_valueFontAttr;
    UIView *_detailView;
    double _detalViewHeight;
    UICollectionView *_tableView;
    UICollectionViewFlowLayout *_layout;
}

@property(retain, nonatomic) UICollectionViewFlowLayout *layout; // @synthesize layout=_layout;
@property(retain, nonatomic) UICollectionView *tableView; // @synthesize tableView=_tableView;
@property(nonatomic) double detalViewHeight; // @synthesize detalViewHeight=_detalViewHeight;
@property(retain, nonatomic) UIView *detailView; // @synthesize detailView=_detailView;
@property(retain, nonatomic) NSDictionary *valueFontAttr; // @synthesize valueFontAttr=_valueFontAttr;
@property(retain, nonatomic) UIFont *valueFont; // @synthesize valueFont=_valueFont;
@property(retain, nonatomic) NSDictionary *titleFontAttr; // @synthesize titleFontAttr=_titleFontAttr;
@property(retain, nonatomic) UIFont *titleFont; // @synthesize titleFont=_titleFont;
@property(nonatomic) double currentMaxValueWidth; // @synthesize currentMaxValueWidth=_currentMaxValueWidth;
@property(nonatomic) double currentMaxTitleWidth; // @synthesize currentMaxTitleWidth=_currentMaxTitleWidth;
@property(nonatomic) long long maxValue; // @synthesize maxValue=_maxValue;
@property(retain, nonatomic) NSMutableArray *allRows; // @synthesize allRows=_allRows;
@property(retain, nonatomic) UIView *headerView; // @synthesize headerView=_headerView;
@property(copy, nonatomic) CDUnknownBlockType onDetailIndexChange; // @synthesize onDetailIndexChange=_onDetailIndexChange;
@property(readonly, nonatomic) NSIndexPath *detailIndex; // @synthesize detailIndex=_detailIndex;
@property(retain, nonatomic) UIColor *minBarColor; // @synthesize minBarColor=_minBarColor;
@property(retain, nonatomic) UIColor *maxBarColor; // @synthesize maxBarColor=_maxBarColor;
@property(nonatomic) double minTitleWidth; // @synthesize minTitleWidth=_minTitleWidth;
@property(nonatomic) double maxTitleWidth; // @synthesize maxTitleWidth=_maxTitleWidth;
@property(nonatomic) double rowHeight; // @synthesize rowHeight=_rowHeight;
- (void).cxx_destruct;
- (void)closeDetailView:(_Bool)arg1;
- (void)addDetailView:(id)arg1 forIndexPath:(id)arg2 animated:(_Bool)arg3;
- (void)makeVisiableCellDoBlock:(CDUnknownBlockType)arg1;
- (id)addTitle:(id)arg1 value:(long long)arg2 valueText:(id)arg3 color:(id)arg4 onClick:(CDUnknownBlockType)arg5;
- (id)addTitle:(id)arg1 value:(long long)arg2 color:(id)arg3 onClick:(CDUnknownBlockType)arg4;
- (void)setBackgroundColor:(id)arg1;
- (id)addTitle:(id)arg1 value:(long long)arg2;
- (void)clearAll;
- (id)initWithFrame:(struct CGRect)arg1;
- (_Bool)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class FBGraphSearchTextInputBar, UITableView;

@interface FBSearchInputView : UIView
{
    UITableView *_tableView;
    FBGraphSearchTextInputBar *_searchBar;
    UIView *_resultsView;
    double _tableViewOffsetTop;
    double _locationPromptStickerBottomAnchorY;
    double _topLayoutGuideLength;
    double _bottomLayoutGuideLength;
}

@property(nonatomic) double bottomLayoutGuideLength; // @synthesize bottomLayoutGuideLength=_bottomLayoutGuideLength;
@property(nonatomic) double topLayoutGuideLength; // @synthesize topLayoutGuideLength=_topLayoutGuideLength;
@property(nonatomic) double locationPromptStickerBottomAnchorY; // @synthesize locationPromptStickerBottomAnchorY=_locationPromptStickerBottomAnchorY;
@property(nonatomic) double tableViewOffsetTop; // @synthesize tableViewOffsetTop=_tableViewOffsetTop;
@property(retain, nonatomic) UIView *resultsView; // @synthesize resultsView=_resultsView;
@property(readonly, nonatomic) FBGraphSearchTextInputBar *searchBar; // @synthesize searchBar=_searchBar;
@property(readonly, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
- (void).cxx_destruct;
- (long long)indexOfAccessibilityElement:(id)arg1;
- (id)accessibilityElementAtIndex:(long long)arg1;
- (long long)accessibilityElementCount;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)updateSearchBarHeightIfNecessary;
- (void)layoutSubviews;
- (void)setExternalTableView:(id)arg1;
- (id)initWithUseExternalTableView:(_Bool)arg1 typeaheadStyle:(unsigned long long)arg2 createSearchBar:(_Bool)arg3 showCancelButtonOnSearchBar:(_Bool)arg4 cancelTapBlock:(CDUnknownBlockType)arg5 useLargeFont:(_Bool)arg6;

@end

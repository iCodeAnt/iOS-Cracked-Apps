//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class MCSearchBar, MCSearchBarContainerView, NMTableViewContainer, UITableView;

@interface NMAtUserPickView : UIView
{
    MCSearchBarContainerView *_searchBarContainer;
    MCSearchBar *_searchBar;
    UITableView *_tableView;
    NMTableViewContainer *_tableViewContainer;
    UIView *_bottomLine;
    id _delegate;
}

@property(readonly, nonatomic) MCSearchBar *searchBar; // @synthesize searchBar=_searchBar;
@property(readonly, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
- (void).cxx_destruct;
@property(nonatomic) __weak id delegate;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

@end


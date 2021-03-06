//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QLBaseTableViewController.h"

#import "P_QLDragToRefresh.h"

@class NSString, QLJCEONAVerticalPosterList;

@interface QLPosterFloatingSubController : QLBaseTableViewController <P_QLDragToRefresh>
{
    id <QLVideoListsViewControllerHelper> _delegate;
    NSString *_dataKey;
    NSString *_pageTitle;
    QLJCEONAVerticalPosterList *_posterList;
}

@property(retain, nonatomic) QLJCEONAVerticalPosterList *posterList; // @synthesize posterList=_posterList;
@property(copy, nonatomic) NSString *pageTitle; // @synthesize pageTitle=_pageTitle;
@property(copy, nonatomic) NSString *dataKey; // @synthesize dataKey=_dataKey;
@property(nonatomic) __weak id <QLVideoListsViewControllerHelper> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)currentPageTableViewForReport;
- (void)configureFooterDragView;
- (void)dragReload:(_Bool)arg1;
- (_Bool)hasFootterDragRefresh;
- (_Bool)hasHeaderDragRefresh;
- (id)dragRefreshView;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillLayoutSubviews;
- (void)scrollViewDidScroll:(id)arg1;
- (_Bool)shouldIgnorePageForNaviReport;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (_Bool)needToReportScrollEvent;
- (id)initWithDataKey:(id)arg1 pageTitle:(id)arg2 delegate:(id)arg3;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


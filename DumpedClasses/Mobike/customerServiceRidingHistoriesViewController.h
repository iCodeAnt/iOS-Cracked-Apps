//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "Mobike_ViewController.h"

#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"
#import "netNoneFreshDelegate.h"

@class NSArray, NSString, NoNetWrokViewController, UITableView;

@interface customerServiceRidingHistoriesViewController : Mobike_ViewController <UITableViewDelegate, UITableViewDataSource, netNoneFreshDelegate>
{
    NoNetWrokViewController *_netWorkView;
    UITableView *_table;
    NSArray *_histories;
}

@property(retain) NSArray *histories; // @synthesize histories=_histories;
@property(retain) UITableView *table; // @synthesize table=_table;
- (void).cxx_destruct;
- (id)noRidingHistory;
- (void)netNoneFresh:(long long)arg1;
- (void)requestRidingHistoryFailed:(id)arg1;
- (void)requestRidingHistorySucc:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (void)dealloc;
- (void)setupController;
- (void)didReceiveMemoryWarning;
- (void)setupView;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


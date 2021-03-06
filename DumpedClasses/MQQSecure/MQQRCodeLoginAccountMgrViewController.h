//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MQQBaseViewController.h"

#import "MQQAlertViewDelegate-Protocol.h"
#import "MQQRCodeLoginManagerDelegate-Protocol.h"
#import "MQQRefreshTableHeaderDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class MQQRCodeLoginManager, MQQRefreshTableHeaderView, NSMutableArray, NSString, UIButton, UITableView;

@interface MQQRCodeLoginAccountMgrViewController : MQQBaseViewController <MQQAlertViewDelegate, MQQRCodeLoginManagerDelegate, MQQRefreshTableHeaderDelegate, UITableViewDataSource, UITableViewDelegate>
{
    MQQRCodeLoginManager *_qrcodeLoginManager;
    UITableView *_accountMgrTableView;
    MQQRefreshTableHeaderView *_refreshTableHeaderView;
    UIButton *_editButton;
    _Bool _isTableReloading;
    long long _indexToDelete;
    NSMutableArray *accountList;
}

@property(retain, nonatomic) NSMutableArray *accountList; // @synthesize accountList;
- (void)mqqAlertView:(id)arg1 didDismissWithButtonIndex:(long long)arg2;
- (void)loginManagerDidKickSuccessForAccount:(id)arg1;
- (void)loginManagerDidKickFailedForAccount:(id)arg1;
- (void)editButtonClicked:(id)arg1;
- (void)kickButtonClicked:(id)arg1;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)doneLoadingTableViewData;
- (id)mqqRefreshTableHeaderDataSourceLastUpdated:(id)arg1;
- (_Bool)mqqRefreshTableHeaderDataSourceIsLoading:(id)arg1;
- (void)mqqRefreshTableHeaderDidTriggerRefresh:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (_Bool)isNetworkContected;
- (void)didReceiveMemoryWarning;
- (void)dealloc;
- (void)reloadAccountMgrTableView;
- (void)updateAccountWithKickList;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQViewController.h"

#import "ThirdEntrySettingCellProtocol.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class NSArray, NSString, UITableView;

@interface ThirdEntrySettingViewController : QQViewController <UITableViewDataSource, UITableViewDelegate, ThirdEntrySettingCellProtocol>
{
    long long _entryType;
    UITableView *_tableView;
    NSArray *_dataSource;
    id <ThirdEntrySettingProtocol> _delegate;
}

@property(nonatomic) __weak id <ThirdEntrySettingProtocol> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)handleGetEntrySettingNotification:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)actionSwitchOn:(_Bool)arg1 withType:(long long)arg2;
- (void)setEntryData;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)loadView;
- (void)dealloc;
- (void)registerNotifications;
- (id)init;
- (id)initWithSetting:(long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


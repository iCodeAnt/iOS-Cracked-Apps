//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQSearchBaseLogicEngine.h"

#import "CFFootViewDelegate.h"
#import "UISearchBarDelegate.h"

@class NSMutableArray, NSString;

@interface QQHistorySearchLogicEngine : QQSearchBaseLogicEngine <CFFootViewDelegate, UISearchBarDelegate>
{
    NSMutableArray *_searchResult;
    NSMutableArray *_searchHistoryRecords;
    int _searchType;
    _Bool hasMoreMsg;
    id <QQHistorySearchLogicEngineDelegate> _historyDelegate;
    _Bool _showHistoryRecord;
    long long _searchStatus;
    int _xo;
    NSString *keyword;
}

+ (id)getInstance;
@property(retain, nonatomic) NSString *keyword; // @synthesize keyword;
- (void)searchBarSearchButtonClicked:(id)arg1;
- (void)searchBarCancelButtonClicked:(id)arg1;
- (void)searchBar:(id)arg1 textDidChange:(id)arg2;
- (void)searchBarTextDidEndEditing:(id)arg1;
- (void)searchBarTextDidBeginEditing:(id)arg1;
- (_Bool)searchBar:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(id)arg3;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)addHistorySearchRecord:(id)arg1;
- (void)saveHistorySearchRecord;
- (void)loadHistorySearchRecord:(_Bool)arg1;
- (void)resetHistorySearchRecord;
- (id)getHistorySearchRecordFilePath;
- (void)resetLogicEngine;
- (void)clearSearchResult;
- (id)sortMsgArray:(id)arg1;
- (id)removeDuplicateInArray:(id)arg1;
- (id)getSearchResult;
- (void)updateSearchResult:(id)arg1 finish:(_Bool)arg2;
- (_Bool)addSearchCloudResult:(id)arg1 cloud:(_Bool)arg2 finish:(_Bool)arg3;
- (void)addSearchResult:(id)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(nonatomic) id <QQHistorySearchLogicEngineDelegate> historyDelegate; // @dynamic historyDelegate;
@property(nonatomic) long long searchStatus; // @dynamic searchStatus;
@property(nonatomic) int searchType; // @dynamic searchType;
@property(readonly) Class superclass;

@end


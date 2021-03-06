//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableView.h>

#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class NSArray, NSString;
@protocol SearchSuggestionTableViewDelegate;

@interface SuggestionTableView : UITableView <UITableViewDelegate, UITableViewDataSource>
{
    NSArray *_arrSuggestion;
    _Bool resultIsHistory;
    NSString *suggestEventID;
    id <SearchSuggestionTableViewDelegate> _searchDelegate;
    long long _type;
    NSString *_keywords;
}

@property(copy, nonatomic) NSString *keywords; // @synthesize keywords=_keywords;
@property(nonatomic) long long type; // @synthesize type=_type;
@property(retain, nonatomic) NSString *suggestEventID; // @synthesize suggestEventID;
@property(nonatomic) _Bool resultIsHistory; // @synthesize resultIsHistory;
@property(nonatomic) id <SearchSuggestionTableViewDelegate> searchDelegate; // @synthesize searchDelegate=_searchDelegate;
@property(retain, nonatomic) NSArray *_arrSuggestion; // @synthesize _arrSuggestion;
- (void).cxx_destruct;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)toplay:(id)arg1;
- (void)addSearchButtonClick:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 style:(long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


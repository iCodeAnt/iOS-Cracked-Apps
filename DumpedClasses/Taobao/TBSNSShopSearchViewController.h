//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBViewController.h"

@class NSString, TBSNSShopSearchView;

@interface TBSNSShopSearchViewController : TBViewController
{
    TBSNSShopSearchView *_searchView;
    NSString *_keyword;
}

+ (_Bool)tbNeedNavibar;
@property(retain, nonatomic) NSString *keyword; // @synthesize keyword=_keyword;
@property(retain, nonatomic) TBSNSShopSearchView *searchView; // @synthesize searchView=_searchView;
- (void).cxx_destruct;
- (void)viewDidAppear:(_Bool)arg1;
- (void)loadView;
- (void)didReceiveMemoryWarning;
- (void)dealloc;
- (id)dataForUserTrack;
- (void)assureEntranceViewCreated;
- (id)initWithNavigatorURL:(id)arg1 query:(id)arg2;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

@end


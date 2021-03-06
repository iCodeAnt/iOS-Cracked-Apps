//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "FBInstantGameChallengeCellDelegate-Protocol.h"
#import "FBInstantGameChallengeViewDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class FBInstantGameAllMatchesFetcher, FBInstantGameChallengeView, FBInstantGameChallengeViewUIMetrics, FBQuicksilverGameInfo, FBQuicksilverPlayerInfo, FBQuicksilverPlayerInfoTableViewSection, FBUserSession, NSArray, NSString, UITableView;
@protocol FBInstantGameChallengeViewControllerDelegate;

@interface FBInstantGameChallengeViewController : UIViewController <UITableViewDelegate, UITableViewDataSource, FBInstantGameChallengeCellDelegate, FBInstantGameChallengeViewDelegate>
{
    FBQuicksilverGameInfo *_gameInfo;
    FBUserSession *_session;
    FBInstantGameChallengeViewUIMetrics *_metrics;
    FBInstantGameAllMatchesFetcher *_fetcher;
    FBQuicksilverPlayerInfoTableViewSection *_playerInfoTableViewSection;
    NSArray *_challengeMatchupInfos;
    FBQuicksilverPlayerInfo *_viewerPlayerInfo;
    UITableView *_challengeTableView;
    FBInstantGameChallengeView *_challengeView;
    id <FBInstantGameChallengeViewControllerDelegate> _delegate;
}

@property(nonatomic) __weak id <FBInstantGameChallengeViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)gameChallengeViewDidTapDoneButton:(id)arg1;
- (void)instantGameChallengeCellDidTapToPlay:(id)arg1;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)_updateChallengeTableViewWithMatchupSection:(id)arg1;
- (void)_didFinishFetchTableData:(id)arg1 error:(id)arg2;
- (void)viewDidLoad;
- (void)loadView;
- (id)initWithSession:(id)arg1 gameInfo:(id)arg2 threadID:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


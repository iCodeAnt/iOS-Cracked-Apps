//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "KGViewController.h"

#import "KGViewControllerDelegate.h"
#import "KQSearchForFailMatchProtocol.h"
#import "SelectMusicBaseCellDelegate.h"
#import "TabViewDelegate.h"
#import "UISearchBarDelegate.h"
#import "UITextFieldDelegate.h"

@class KQGroupMyCollectionListViewController, KQGroupRecomendSongViewController, KQLocalGroupSongViewController, KQSelectLocalMusicViewController, NSArray, NSMutableArray, NSString, SelectMusicBottomView, TabView, UIView;

@interface SelectMusicController : KGViewController <UITextFieldDelegate, SelectMusicBaseCellDelegate, KGViewControllerDelegate, UISearchBarDelegate, TabViewDelegate, KQSearchForFailMatchProtocol>
{
    NSMutableArray *_selectedSongInfoArr;
    long long _currentSelectedIndex;
    CDUnknownBlockType _finishBlcok;
    NSArray *_arrayFromCreateKQ;
    NSArray *_songListArray;
    NSString *_nickName;
    NSString *_groupId;
    NSArray *_arTags;
    unsigned long long _pageSourceType;
    TabView *_tabView;
    UIView *_contentView;
    NSArray *_titleArray;
    UIView *_searchBgview;
    KQGroupRecomendSongViewController *_recommendVC;
    KQLocalGroupSongViewController *_localGroupVC;
    KQGroupMyCollectionListViewController *_myCollectionListVC;
    KQSelectLocalMusicViewController *_localVC;
    SelectMusicBottomView *_bottomView;
}

@property(retain, nonatomic) SelectMusicBottomView *bottomView; // @synthesize bottomView=_bottomView;
@property(retain, nonatomic) KQSelectLocalMusicViewController *localVC; // @synthesize localVC=_localVC;
@property(retain, nonatomic) KQGroupMyCollectionListViewController *myCollectionListVC; // @synthesize myCollectionListVC=_myCollectionListVC;
@property(retain, nonatomic) KQLocalGroupSongViewController *localGroupVC; // @synthesize localGroupVC=_localGroupVC;
@property(retain, nonatomic) KQGroupRecomendSongViewController *recommendVC; // @synthesize recommendVC=_recommendVC;
@property(retain, nonatomic) UIView *searchBgview; // @synthesize searchBgview=_searchBgview;
@property(retain, nonatomic) NSArray *titleArray; // @synthesize titleArray=_titleArray;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) TabView *tabView; // @synthesize tabView=_tabView;
@property(nonatomic) unsigned long long pageSourceType; // @synthesize pageSourceType=_pageSourceType;
@property(retain, nonatomic) NSArray *arTags; // @synthesize arTags=_arTags;
@property(copy, nonatomic) NSString *groupId; // @synthesize groupId=_groupId;
@property(copy, nonatomic) NSString *nickName; // @synthesize nickName=_nickName;
@property(retain, nonatomic) NSArray *songListArray; // @synthesize songListArray=_songListArray;
@property(retain, nonatomic) NSArray *arrayFromCreateKQ; // @synthesize arrayFromCreateKQ=_arrayFromCreateKQ;
@property(copy, nonatomic) CDUnknownBlockType finishBlcok; // @synthesize finishBlcok=_finishBlcok;
- (void).cxx_destruct;
- (long long)showPlayBarWay;
- (void)didReceiveMemoryWarning;
- (id)tableviewForCurrentIndex;
- (void)refreshMusicTabelView;
- (void)KGUsingControllerState:(int)arg1;
- (void)finishBtnClicked;
- (void)removeObjectWithArray:(id)arg1 andSongInfo:(id)arg2;
- (void)checkSongsTryToAdd:(id)arg1 andFilteredSongs:(id *)arg2 andCount:(long long *)arg3;
- (void)removeSongsFromSelected:(id)arg1;
- (void)addSongsToSelected:(id)arg1 andSuccessBlk:(CDUnknownBlockType)arg2;
- (void)addObjectToWithArray:(id)arg1 andSongInfo:(id)arg2;
- (void)showPaySongForbidAlertView;
- (void)showForbidAlertView;
- (void)tryAddToSonglist:(id)arg1 isTryListen:(_Bool)arg2 andSuccesBlk:(CDUnknownBlockType)arg3;
- (void)SelectMusicListenClicked:(id)arg1;
- (_Bool)existSongInfo:(id)arg1 inArray:(id)arg2;
- (void)showAddMusicAnimation:(id)arg1;
- (void)SelectMusicBaseCellClicked:(id)arg1 andToBeSelected:(_Bool)arg2;
- (void)searchResultSongTryListen:(id)arg1;
- (void)searchResultSongSelect:(id)arg1;
- (void)goToEditMusic;
- (void)showMyCollectListView;
- (void)showLocalMusicView;
- (void)showRecommendView;
- (void)showLocalGroupView;
- (void)btnClicked:(long long)arg1;
- (void)createTabView;
- (void)clickedSearchBtn;
- (void)createSearchView;
- (void)initMainView;
- (void)initOriginData;
- (void)backEvent:(id)arg1;
- (void)dealloc;
- (void)viewDidLoad;
- (id)initWithSongInfoArray:(id)arg1 andGroupid:(id)arg2 andTags:(id)arg3 andFinishBlock:(CDUnknownBlockType)arg4 andPageSoure:(unsigned long long)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

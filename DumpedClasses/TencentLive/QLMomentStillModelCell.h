//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QLRequestModelCellV1.h"

#import "QLMomentStillPickerControllerDelegate.h"
#import "QLMultiVideosListViewDelegate.h"
#import "UIScrollViewDelegate.h"

@class NSMutableArray, NSString, QLMomentStillListHeaderView, QLMomentStillModel, QLMultiVideosListView;

@interface QLMomentStillModelCell : QLRequestModelCellV1 <QLMomentStillPickerControllerDelegate, QLMultiVideosListViewDelegate, UIScrollViewDelegate>
{
    NSMutableArray *_selectStillArray;
    _Bool _shouldHideHeaderView;
    _Bool _notAutoLoadData;
    unsigned long long _sourceType;
    unsigned long long _photoOpType;
    QLMomentStillModel *_stillModel;
    NSMutableArray *_localStills;
    NSMutableArray *_stillList;
    long long _maxSelectedCount;
    id _delegate;
    QLMultiVideosListView *_mediaListView;
    QLMomentStillListHeaderView *_headerView;
}

@property(retain, nonatomic) QLMomentStillListHeaderView *headerView; // @synthesize headerView=_headerView;
@property(retain, nonatomic) QLMultiVideosListView *mediaListView; // @synthesize mediaListView=_mediaListView;
@property(nonatomic) id delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool notAutoLoadData; // @synthesize notAutoLoadData=_notAutoLoadData;
@property(nonatomic) _Bool shouldHideHeaderView; // @synthesize shouldHideHeaderView=_shouldHideHeaderView;
@property(nonatomic) long long maxSelectedCount; // @synthesize maxSelectedCount=_maxSelectedCount;
@property(retain, nonatomic) NSMutableArray *stillList; // @synthesize stillList=_stillList;
@property(retain, nonatomic) NSMutableArray *localStills; // @synthesize localStills=_localStills;
@property(retain, nonatomic) QLMomentStillModel *stillModel; // @synthesize stillModel=_stillModel;
@property(nonatomic) unsigned long long photoOpType; // @synthesize photoOpType=_photoOpType;
@property(nonatomic) unsigned long long sourceType; // @synthesize sourceType=_sourceType;
- (void).cxx_destruct;
- (void)videosListView:(id)arg1 reloadData:(id)arg2;
- (void)videosListView:(id)arg1 reportScroll:(id)arg2;
- (void)stillPickerController:(id)arg1 didSelectPhotos:(id)arg2;
- (void)stillPickerController:(id)arg1 didSelectPhoto:(id)arg2;
- (void)showError:(_Bool)arg1 error:(id)arg2;
- (void)reloadDatas;
- (void)refreshStillPhotoListGraffitiInfoInNeed;
- (void)requestModel:(id)arg1 didFailedLoadWithError:(id)arg2;
- (void)requestModelDidFinishLoad:(id)arg1;
- (void)viewDidDisapear;
- (void)pushImagePickerController;
- (void)visibleCellVideoStartToPlay:(_Bool)arg1;
- (void)refreshToSelectItems;
- (void)refreshEmptyState;
- (id)titleForEmpty;
- (void)refreshItemViews;
- (void)addLocalObjects:(id)arg1;
- (void)singleTaped:(id)arg1;
- (id)backgroundColorOfTipView;
- (double)modelItemCellHeight;
- (id)modelSubTitle;
- (_Bool)modelCanAccessMore;
- (_Bool)shouldCustomTitleStyle;
- (id)modelTitle;
- (struct CGRect)basedFrameOfTipView;
- (void)layoutSubviews;
- (void)startLoadModel;
- (void)loadModel;
@property(readonly, nonatomic) NSMutableArray *selectStillArray;
- (id)seperatorImgView;
- (void)awakeFromNib;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

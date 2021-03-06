//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "QYPPListViewController.h"

#import "QYPPMultiImageBrowserViewControllerDelegate-Protocol.h"

@class NSString;

@interface PPao_StarPicViewController : QYPPListViewController <QYPPMultiImageBrowserViewControllerDelegate>
{
    NSString *_wallId;
    NSString *_order;
}

@property(copy, nonatomic) NSString *order; // @synthesize order=_order;
@property(copy, nonatomic) NSString *wallId; // @synthesize wallId=_wallId;
- (void).cxx_destruct;
- (id)multiImageBrowserViewController:(id)arg1 willBackToViewAtIndex:(long long)arg2;
- (void)setServerDataException;
- (void)setNoMoreTripDataIfNeed;
- (void)listFailureLoadMore;
- (void)listFailureRefresh;
- (void)listFinishRefresh;
- (void)networkStatusChanged:(long long)arg1;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)setupNavigationBar;
- (void)refresh;
- (void)viewDidAppear:(_Bool)arg1;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QARMapBaseViewController.h"

#import "UIAlertViewDelegate.h"

@class ARMapItemInfo, AVCaptureVideoPreviewLayer, LbsPackInfo, NSObject<OS_dispatch_queue>, NSString, NSTimer, QQLbsARGameView, UIImageView;

@interface QQLbsARViewController : QARMapBaseViewController <UIAlertViewDelegate>
{
    AVCaptureVideoPreviewLayer *_captureLayer;
    NSObject<OS_dispatch_queue> *_sessionQueue;
    QQLbsARGameView *_gameView;
    long long once;
    _Bool _orgIdleTimer;
    NSTimer *_treasureFoundTimer;
    UIImageView *_noPermissionBg;
    _Bool _noQuitConfirm;
    int _type;
    NSString *_busiName;
    unsigned long long _poiID;
    unsigned long long _taskID;
    ARMapItemInfo *_item;
    NSString *_unzipDirPath;
    LbsPackInfo *_lbsPackInfo;
}

@property(retain, nonatomic) LbsPackInfo *lbsPackInfo; // @synthesize lbsPackInfo=_lbsPackInfo;
@property(nonatomic) _Bool noQuitConfirm; // @synthesize noQuitConfirm=_noQuitConfirm;
@property(copy, nonatomic) NSString *unzipDirPath; // @synthesize unzipDirPath=_unzipDirPath;
@property(retain, nonatomic) ARMapItemInfo *item; // @synthesize item=_item;
@property(nonatomic) unsigned long long taskID; // @synthesize taskID=_taskID;
@property(nonatomic) unsigned long long poiID; // @synthesize poiID=_poiID;
@property(nonatomic) int type; // @synthesize type=_type;
@property(copy, nonatomic) NSString *busiName; // @synthesize busiName=_busiName;
- (void).cxx_destruct;
- (void)terminateGame;
- (void)alertView:(id)arg1 didDismissWithButtonIndex:(long long)arg2;
- (void)viewWillLayoutSubviews;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)invalidTimerAction:(id)arg1;
- (_Bool)releaseTreasureTimer;
- (void)initTreasureTimer;
- (void)viewDidLoad;
- (_Bool)shouldDetectFile;
- (void)loadView;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FAViewHandlerBase.h"

#import "UIActionSheetDelegate.h"
#import "UIAlertViewDelegate.h"

@class FAModel, NSString;

@interface FAViewHandlerOffline : FAViewHandlerBase <UIActionSheetDelegate, UIAlertViewDelegate>
{
    FAModel *_wyModel;
}

- (void)continueVideo;
- (void)dismiss;
- (_Bool)handlerVideoError:(id)arg1;
- (void)alertViewClicked:(long long)arg1;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)onVideoMenuClick;
- (void)sendToPC;
- (void)onSendToPCAction;
- (void)onSaveToWeiYunAction;
- (void)forwardFile;
- (void)onForwardAction;
- (void)didWYTransferUpdate:(id)arg1;
- (void)didFileTransferUpdate:(id)arg1;
- (void)operateFile;
- (void)onOperateAction;
- (double)getProgressValue;
- (id)getOperationBtnTitle;
- (id)getErrLabelText;
- (id)getSizeTimeLabelText;
- (_Bool)canOnlinePreview;
- (_Bool)canFreeForward;
- (_Bool)canShowProgress;
- (void)onVideoPlayFailed:(id)arg1;
- (_Bool)onVideoPlayEnd:(long long)arg1;
- (void)onVideoStopPlay;
- (void)didFileUrlFetch:(id)arg1;
- (_Bool)canPreloadVideo;
- (id)getVideoViewData;
- (void)onMenuClick:(int)arg1;
- (int)getMenuFlag;
- (_Bool)isKindOfHandler;
- (int)getCurrentViewMode;
- (void)finish;
- (void)dealloc;
- (int)businessType;
- (void)initEvent;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


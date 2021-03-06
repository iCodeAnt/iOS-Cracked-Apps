//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQGroupVideoChatViewController.h"

#import "PLLiveCountDownViewDelegate.h"

@class NSString, NSTimer, PLLiveCountDownView, QQGroupAVBeautifyLogic, UIButton, UILabel;

@interface QQGroupVideoStartupViewController : QQGroupVideoChatViewController <PLLiveCountDownViewDelegate>
{
    UIButton *_inviteBtn;
    UIButton *_launchVideoBtn;
    UILabel *_warningLabel;
    NSTimer *_countDownTimer;
    long long _secondsCountDown;
    UILabel *_timeLabel;
    PLLiveCountDownView *_countDownView;
    QQGroupAVBeautifyLogic *_beautifyLogic;
}

- (void).cxx_destruct;
- (void)displayBeautifyFrame:(id)arg1;
- (void)beautifyProcessOnTransmitVideoData:(char *)arg1 BufferSize:(unsigned long long)arg2 Width:(unsigned long long)arg3 HeightY:(unsigned long long)arg4;
- (void)onCloseAction;
- (void)countDownAnimationStoped;
- (void)startVideoChat:(id)arg1;
- (void)setGroupVieoUin:(unsigned long long)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)initInterface;
- (void)unInitInterface;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


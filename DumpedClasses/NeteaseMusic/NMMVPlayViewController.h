//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "NMMVPlayViewDelegate.h"

@class CMMotionManager, NMMV, NMMVDetailViewController, NMMVPlayView, NMMVPlayerController, NMMVQuality, NSString, NSTimer, NSURL, UIView;

@interface NMMVPlayViewController : UIViewController <NMMVPlayViewDelegate>
{
    NSURL *_contentUrl;
    double _initialPlaybackTime;
    double _lastPlaybackDuration;
    _Bool _isPlaying;
    _Bool _isManualPause;
    _Bool _isFullScreen;
    _Bool _errorAlertShown;
    _Bool _isMVStreamLoaded;
    NMMVPlayerController *_moviePlayer;
    long long _currentOrientation;
    UIView *_fullscreenBgView;
    _Bool _orientationObserverAdded;
    NMMVQuality *_targePlayQuality;
    CMMotionManager *_motionManager;
    NMMV *_lastResetMV;
    _Bool _needResumeAudioPlay;
    double _startPlayTime;
    _Bool _isSwitchingDefination;
    NMMVPlayerController *_mvPlayer;
    id <NMMVPlayViewControllDelegate> _delegate;
    NMMVDetailViewController *_weakDetailController;
    NMMV *_mv;
    NMMV *_nextPlayMV;
    NMMVPlayView *_playView;
    NSString *_playSource;
    NSTimer *_playTimer;
    NSTimer *_checkCacheTimer;
}

@property(retain, nonatomic) NSTimer *checkCacheTimer; // @synthesize checkCacheTimer=_checkCacheTimer;
@property(retain, nonatomic) NSTimer *playTimer; // @synthesize playTimer=_playTimer;
@property(nonatomic) _Bool isSwitchingDefination; // @synthesize isSwitchingDefination=_isSwitchingDefination;
@property(retain, nonatomic) NSString *playSource; // @synthesize playSource=_playSource;
@property(nonatomic) _Bool isFullScreen; // @synthesize isFullScreen=_isFullScreen;
@property(retain, nonatomic) NMMVPlayView *playView; // @synthesize playView=_playView;
@property(retain, nonatomic) NMMV *nextPlayMV; // @synthesize nextPlayMV=_nextPlayMV;
@property(retain, nonatomic) NMMV *mv; // @synthesize mv=_mv;
@property(nonatomic) _Bool isPlaying; // @synthesize isPlaying=_isPlaying;
@property(nonatomic) __weak NMMVDetailViewController *weakDetailController; // @synthesize weakDetailController=_weakDetailController;
@property(nonatomic) __weak id <NMMVPlayViewControllDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NMMVPlayerController *mvPlayer; // @synthesize mvPlayer=_mvPlayer;
- (void).cxx_destruct;
- (void)addInteruptOrSkipBILogIfNeed;
- (void)addPlayEndBILogWithEndType:(id)arg1 time:(double)arg2;
- (void)addPlayBILog;
- (void)addBILogWithType:(id)arg1;
- (void)destroy;
- (void)alarmRingStateChange:(id)arg1;
- (void)mvSubscribeChanged:(id)arg1;
- (void)downloadMVChanged:(id)arg1;
- (void)mvDownloadMenuView:(id)arg1 downloadWithSelectedQuality:(id)arg2;
- (void)checkResumeAudioPlay;
- (void)resetResumeAudioPlay;
- (void)pauseAudioPlay;
- (void)resetForPlayNext;
- (void)resetForPlay;
- (_Bool)canPlayNextMV;
- (void)cancelAutoPlayNextMV:(_Bool)arg1;
- (void)resetAutoPlayNextCountingDown;
- (void)preparePlayNext:(_Bool)arg1;
- (void)startAutoPlayNext:(_Bool)arg1;
- (void)processPlayEnded;
- (void)moviePlayBackStateDidChange:(id)arg1;
- (void)loadStateDidChange:(id)arg1;
- (void)notifyError;
- (void)orientationChanged:(id)arg1;
- (void)mvWillStartPlay:(id)arg1;
- (void)removeMovieNotificationHandlers;
- (void)installMovieNotificationObservers;
- (void)mvNavigationBar:(id)arg1 downloadButtonClicked:(id)arg2;
- (void)mvNavigationBar:(id)arg1 shareButtonClicked:(id)arg2;
- (void)mvNavigationBar:(id)arg1 subButtonClicked:(id)arg2;
- (void)mvNavigationBar:(id)arg1 backButtonClicekd:(id)arg2;
- (void)mvPlayViewCancelPlayNextMV:(id)arg1;
- (void)mvPlayViewPlayNextMV:(id)arg1;
- (void)processPausePlay:(_Bool)arg1;
- (void)videoPlayControlViewVolumeChanged:(id)arg1;
- (void)videoPlayControlViewResignComment:(id)arg1;
- (void)videoPlayControlView:(id)arg1 swtichToQuality:(id)arg2;
- (void)videoPlayControlViewQualitySwitchButtonClicked:(id)arg1;
- (void)replayButtonClicked;
- (void)videoPlayControlView:(id)arg1 playPauseClicked:(_Bool)arg2 triggeredByGesture:(_Bool)arg3;
- (void)videoPlayControlViewReplayButtonClicked:(id)arg1;
- (void)togglePausePlay:(_Bool)arg1;
- (void)videoPlayControlView:(id)arg1 endSeekingToTime:(double)arg2 triggeredByGesture:(_Bool)arg3;
- (void)videoPlayControlViewBeginSeeking:(id)arg1 triggeredByGesture:(_Bool)arg2;
- (void)videoPlayControlView:(id)arg1 switchToFullScreen:(_Bool)arg2 triggeredByGesture:(_Bool)arg3;
- (void)videoPlayControlViewShareAction:(id)arg1;
- (void)videoPlayControlViewBackButtonClicked:(id)arg1;
- (double)videoCurrentPlaybackTime;
- (double)videoDuration;
- (void)setSelectedQuality:(id)arg1;
- (void)refreshViewAfterMVLoaded;
- (void)sizeStatusChangedTo:(unsigned long long)arg1 sizeButton:(id)arg2;
- (void)switchFullScreen:(_Bool)arg1;
- (void)stopPlay;
- (void)holdPlay;
- (void)display3GAlertWithStartBlock:(CDUnknownBlockType)arg1;
- (_Bool)checkPlayMVIn2G3G:(_Bool)arg1;
- (void)checkPlayableCache;
- (void)refreshMVPlayingInfo;
- (void)removeTimer;
- (void)installTimer;
- (void)configMvPlayer;
- (void)doStartPlay;
- (void)playURL:(id)arg1 initialPlaybackTime:(double)arg2;
- (void)playURLNextRunLop:(id)arg1;
- (void)playURL:(id)arg1;
- (void)alertFailToPlay;
- (void)loadAndPlay:(id)arg1;
- (void)playTargetQuality:(id)arg1 localUrl:(id)arg2;
- (void)networkStatusChanged;
- (_Bool)isPlayEnded;
- (id)miniBottomBar;
- (id)bottomBar;
- (_Bool)isMVPlayerLoaded;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;
- (void)dealloc;
- (void)uninstallOrientationChangeObserver;
- (void)installOrientationChangeObserver;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "KKMediaPlayerEventProtocol.h"

@class KKMediaRootViewController, NSMutableArray, NSString, NSTimer, QLAdsHitTagItem;

@interface KKAdsService : NSObject <KKMediaPlayerEventProtocol>
{
    double _currentTime;
    double _jumpStartTime;
    double _jumpEndTime;
    double _duration;
    _Bool _isRequestAdsInValueInterval;
    double _downEdgeTime;
    double _upEdgeTime;
    _Bool _didGetMiddlePoints;
    _Bool _didGetIvbPoints;
    _Bool _didGetCornerPoints;
    _Bool _didGetWbsPoints;
    _Bool _isLiveTV;
    _Bool _needAdPlayTime;
    _Bool _isSeeking;
    _Bool _isLivePlaying;
    int _playmode;
    id <KKAdvertismentAddedProtocol> _delegate;
    KKMediaRootViewController *_mainCtrl;
    unsigned long long _adsServiceState;
    unsigned long long _adsPlayType;
    QLAdsHitTagItem *_currentBreakPoint;
    unsigned long long _forbidenState;
    NSMutableArray *_pointsTimeOfPlayAdsArray;
    long long _countDown;
    NSTimer *_countDownTimer;
    double _nextLiveCornerAdTime;
    double _nextBanabaAdTime;
    double _startPlayTime;
    double _backGroundPlayTime;
    double _livePlayTime;
    NSTimer *_liveTimer;
}

@property(nonatomic) _Bool isLivePlaying; // @synthesize isLivePlaying=_isLivePlaying;
@property(nonatomic) _Bool isSeeking; // @synthesize isSeeking=_isSeeking;
@property(nonatomic) _Bool needAdPlayTime; // @synthesize needAdPlayTime=_needAdPlayTime;
@property(retain, nonatomic) NSTimer *liveTimer; // @synthesize liveTimer=_liveTimer;
@property(nonatomic) double livePlayTime; // @synthesize livePlayTime=_livePlayTime;
@property(nonatomic) double backGroundPlayTime; // @synthesize backGroundPlayTime=_backGroundPlayTime;
@property(nonatomic) double startPlayTime; // @synthesize startPlayTime=_startPlayTime;
@property(nonatomic) double nextBanabaAdTime; // @synthesize nextBanabaAdTime=_nextBanabaAdTime;
@property(nonatomic) double nextLiveCornerAdTime; // @synthesize nextLiveCornerAdTime=_nextLiveCornerAdTime;
@property(retain, nonatomic) NSTimer *countDownTimer; // @synthesize countDownTimer=_countDownTimer;
@property(nonatomic) long long countDown; // @synthesize countDown=_countDown;
@property(retain, nonatomic) NSMutableArray *pointsTimeOfPlayAdsArray; // @synthesize pointsTimeOfPlayAdsArray=_pointsTimeOfPlayAdsArray;
@property(nonatomic) unsigned long long forbidenState; // @synthesize forbidenState=_forbidenState;
@property(retain, nonatomic) QLAdsHitTagItem *currentBreakPoint; // @synthesize currentBreakPoint=_currentBreakPoint;
@property(nonatomic) unsigned long long adsPlayType; // @synthesize adsPlayType=_adsPlayType;
@property(nonatomic) unsigned long long adsServiceState; // @synthesize adsServiceState=_adsServiceState;
@property(nonatomic) int playmode; // @synthesize playmode=_playmode;
@property(nonatomic) _Bool isLiveTV; // @synthesize isLiveTV=_isLiveTV;
@property(nonatomic) KKMediaRootViewController *mainCtrl; // @synthesize mainCtrl=_mainCtrl;
@property id <KKAdvertismentAddedProtocol> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)checkAdWithHitTagType:(long long)arg1;
- (void)liveTimerChanged:(id)arg1;
- (void)didMediaPlayerStateChanged:(int)arg1 error:(id)arg2 playerCtl:(id)arg3;
- (void)onAppDidBecomeActive;
- (void)onAppWillResignActive;
- (void)didMediaPlayerProgressUpdated:(double)arg1 duration:(double)arg2;
- (void)playAds;
- (_Bool)isCurrentTimeInRequestInterval:(double)arg1 requestTimeOut:(double)arg2 currentPlayTime:(double)arg3 adsPlayPoints:(id)arg4;
- (_Bool)isTimeToRequestAds:(double)arg1 adsPlayPoints:(id)arg2 adsPlayType:(unsigned long long)arg3;
- (void)setJumpStartTimeLength:(double)arg1 JumpEndTimeLength:(double)arg2;
- (void)setCurrentTimeLength:(double)arg1;
- (void)forbidenSeekTime:(unsigned long long)arg1;
- (void)cleanAds;
- (void)waitToPlayAds;
- (void)cleanCountDownView;
- (void)freshCountDownView:(long long)arg1 timerNumber:(long long)arg2;
- (void)showCountDownView;
- (void)destroyCountDownTimer;
- (void)countDownAction:(id)arg1;
- (void)createCountDownTimer;
- (void)stopLiveTimer;
- (void)resetVaule;
- (void)countDownCalculate;
- (void)createNewPoints:(id)arg1 withType:(long long)arg2;
- (void)setBreakPoint:(id)arg1 withType:(long long)arg2;
- (double)getCurrentPlayTime;
- (void)cleanResource;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


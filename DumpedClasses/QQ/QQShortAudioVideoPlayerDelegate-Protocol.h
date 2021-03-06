//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSError;

@protocol QQShortAudioVideoPlayerDelegate <NSObject>

@optional
- (void)onPlayerCurrentTime:(double)arg1;
- (void)playerDidStop;
- (void)playerDidEndPlay;
- (void)onPlayerLoadProgress:(double)arg1;
- (void)onPlayerLoadComplete;
- (void)onPlayerLoadError:(NSError *)arg1;
- (void)onPlayerPlayError:(NSError *)arg1;
- (_Bool)netWorkChangePauseState;
- (void)onUploadCancelButtonClick;
- (void)onMenuButtonClick:(id)arg1;
- (void)onPlayerDidLoaded;
- (void)clickVideoView;
@end


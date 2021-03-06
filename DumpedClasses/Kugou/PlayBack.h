//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "BasicUPnPServiceObserver.h"

@class MediaRenderer1Device, MediaServer1Device, NSMutableArray;

@interface PlayBack : NSObject <BasicUPnPServiceObserver>
{
    MediaRenderer1Device *renderer;
    MediaServer1Device *server;
    NSMutableArray *playlist;
    long long pos;
    id <PlayBackDelegate> _delegate;
}

+ (id)GetInstance;
@property __weak id <PlayBackDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain) NSMutableArray *playlist; // @synthesize playlist;
@property(retain) MediaServer1Device *server; // @synthesize server;
@property(readonly) __weak MediaRenderer1Device *renderer; // @synthesize renderer;
- (void).cxx_destruct;
- (void)basicUPnPService:(id)arg1 receivedEvents:(id)arg2;
- (id)XMLEscapeString:(id)arg1;
- (id)getPositionInfo;
- (id)getTransportInfo;
- (long long)setVolumeValue:(float)arg1;
- (long long)seek:(float)arg1;
- (long long)stop;
- (long long)pause;
- (void)continuePlay;
- (_Bool)playWithUri:(id)arg1 metaData:(id)arg2;
- (int)Play:(long long)arg1;
- (int)Play:(id)arg1 position:(long long)arg2;
- (void)setRenderer:(id)arg1;
- (id)init;

@end


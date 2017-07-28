//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SRWebSocketDelegate.h"

@class NSHashTable, NSString;

@interface SRWebSocketCloser : NSObject <SRWebSocketDelegate>
{
    NSHashTable *_websockets;
}

+ (id)sharedInstance;
@property(retain, nonatomic) NSHashTable *websockets; // @synthesize websockets=_websockets;
- (void).cxx_destruct;
- (void)webSocket:(id)arg1 didCloseWithCode:(long long)arg2 reason:(id)arg3 wasClean:(_Bool)arg4;
- (void)webSocket:(id)arg1 didFailWithError:(id)arg2;
- (void)webSocket:(id)arg1 didReceiveMessage:(id)arg2;
- (void)removeWebSocket:(id)arg1;
- (void)addWebSocket:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

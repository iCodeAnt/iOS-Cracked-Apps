//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class GTSSimplePing, NSData, NSError;

@protocol GTSSimplePingDelegate <NSObject>

@optional
- (void)simplePing:(GTSSimplePing *)arg1 didReceiveUnexpectedPacket:(NSData *)arg2;
- (void)simplePing:(GTSSimplePing *)arg1 didReceivePingResponsePacket:(NSData *)arg2 sequenceNumber:(unsigned short)arg3;
- (void)simplePing:(GTSSimplePing *)arg1 didFailToSendPacket:(NSData *)arg2 sequenceNumber:(unsigned short)arg3 error:(NSError *)arg4;
- (void)simplePing:(GTSSimplePing *)arg1 didSendPacket:(NSData *)arg2 sequenceNumber:(unsigned short)arg3;
- (void)simplePing:(GTSSimplePing *)arg1 didFailWithError:(NSError *)arg2;
- (void)simplePing:(GTSSimplePing *)arg1 didStartWithAddress:(NSData *)arg2;
@end


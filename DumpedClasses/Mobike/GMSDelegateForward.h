//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray;

@interface GMSDelegateForward : NSObject
{
    NSArray *_protocols;
    id _gms_internalDelegate;
}

@property(readonly, nonatomic) __weak id gms_internalDelegate; // @synthesize gms_internalDelegate=_gms_internalDelegate;
- (void).cxx_destruct;
- (void)forwardInvocation:(id)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (id)initWithProtocol:(id)arg1 delegate:(id)arg2;
- (id)initWithProtocol:(id)arg1 secondaryProtocols:(id)arg2 delegate:(id)arg3;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "QNResolverDelegate.h"

@class NSString;

@interface QNTxtResolver : NSObject <QNResolverDelegate>
{
    NSString *_address;
    unsigned long long _timeout;
}

@property(readonly, nonatomic) unsigned long long timeout; // @synthesize timeout=_timeout;
@property(readonly, nonatomic) NSString *address; // @synthesize address=_address;
- (void).cxx_destruct;
- (id)query:(id)arg1 networkInfo:(id)arg2 error:(id *)arg3;
- (id)initWithAddress:(id)arg1 timeout:(unsigned long long)arg2;
- (id)initWithAddress:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData, NSMutableData;

@interface GX_AsyncReadPacket : NSObject
{
    NSMutableData *buffer;
    long long bytesDone;
    double timeout;
    long long maxLength;
    long long tag;
    NSData *term;
    _Bool readAllAvailableData;
}

- (void).cxx_destruct;
- (void)dealloc;
- (long long)searchForTermAfterPreBuffering:(long long)arg1;
- (unsigned long long)prebufferReadLengthForTerm;
- (unsigned long long)readLengthForTerm;
- (id)initWithData:(id)arg1 timeout:(double)arg2 tag:(long long)arg3 readAllAvailable:(_Bool)arg4 terminator:(id)arg5 maxLength:(long long)arg6;

@end


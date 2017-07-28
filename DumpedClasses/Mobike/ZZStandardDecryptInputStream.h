//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSInputStream.h"

@interface ZZStandardDecryptInputStream : NSInputStream
{
    NSInputStream *_upstream;
    struct ZZStandardCryptoEngine _crypto;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (_Bool)hasBytesAvailable;
- (_Bool)getBuffer:(char **)arg1 length:(unsigned long long *)arg2;
- (long long)read:(char *)arg1 maxLength:(unsigned long long)arg2;
- (void)close;
- (void)open;
- (id)streamError;
- (unsigned long long)streamStatus;
- (id)initWithStream:(id)arg1 password:(id)arg2 header:(char *)arg3 check:(unsigned short)arg4 version:(unsigned char)arg5 error:(out id *)arg6;

@end


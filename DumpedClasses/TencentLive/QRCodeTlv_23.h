//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WloginTlv.h"

@class NSData;

@interface QRCodeTlv_23 : WloginTlv
{
    NSData *acQrPicBuf;
}

@property(retain) NSData *acQrPicBuf; // @synthesize acQrPicBuf;
- (void)dealloc;
- (int)decode:(char **)arg1 andBuffLen:(int *)arg2;

@end

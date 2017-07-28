//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData, NSString;

@interface GtExtDataHeader : NSObject
{
    short version_;
    short dataType_;
    unsigned char headerLen_;
    short encryptId_;
    NSString *_dataRid;
    NSData *_signData;
}

+ (_Bool)isValidMagic:(id)arg1;
@property(retain, nonatomic) NSData *signData; // @synthesize signData=_signData;
@property(retain, nonatomic) NSString *dataRid; // @synthesize dataRid=_dataRid;
@property(nonatomic) short encryptId; // @synthesize encryptId=encryptId_;
@property(readonly, nonatomic) unsigned char headerLen; // @synthesize headerLen=headerLen_;
@property(nonatomic) short dataType; // @synthesize dataType=dataType_;
@property(readonly, nonatomic) short version; // @synthesize version=version_;
- (void).cxx_destruct;
- (id)parseHeaderData:(id)arg1;
- (id)createHeadDataType:(short)arg1 andRid:(id)arg2 andEncryptId:(short)arg3 signData:(id)arg4;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface TXYRespPacket : NSObject
{
    int _errCode;
    NSString *_errorMsg;
    NSString *_session;
    NSString *_reportURL;
    long long _cloudType;
}

+ (_Bool)decodeAttributePacket:(UniAttribute_bd4bb1cc *)arg1 withData:(id)arg2;
+ (id)genErrorPacket:(int)arg1 info:(id)arg2;
+ (_Bool)decodePackageWithData:(id)arg1 packet:(UniPacket_690cfacd *)arg2;
+ (id)decodePacket:(id)arg1 cloudType:(long long)arg2;
@property(nonatomic) long long cloudType; // @synthesize cloudType=_cloudType;
@property(retain, nonatomic) NSString *reportURL; // @synthesize reportURL=_reportURL;
@property(retain, nonatomic) NSString *session; // @synthesize session=_session;
@property(retain, nonatomic) NSString *errorMsg; // @synthesize errorMsg=_errorMsg;
@property(nonatomic) int errCode; // @synthesize errCode=_errCode;
- (void).cxx_destruct;
- (id)getFailResp:(id)arg1;
- (id)getCompleteResp:(id)arg1;
- (void)decodeBody:(void *)arg1;

@end


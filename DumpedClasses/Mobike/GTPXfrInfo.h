//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class GTPDnsInfo, NSString;

@interface GTPXfrInfo : NSObject
{
    _Bool _isUseDns;
    _Bool _isUnquery;
    NSString *_gtp_host;
    unsigned long long _gtp_port;
    double _gtp_speed;
    GTPDnsInfo *_dnsInfo;
    long long _dnsIndex;
}

+ (id)toAbbreviationString:(id)arg1;
@property(nonatomic) long long dnsIndex; // @synthesize dnsIndex=_dnsIndex;
@property(retain, nonatomic) GTPDnsInfo *dnsInfo; // @synthesize dnsInfo=_dnsInfo;
@property(nonatomic) _Bool isUnquery; // @synthesize isUnquery=_isUnquery;
@property(nonatomic) _Bool isUseDns; // @synthesize isUseDns=_isUseDns;
@property(nonatomic) double gtp_speed; // @synthesize gtp_speed=_gtp_speed;
@property(nonatomic) unsigned long long gtp_port; // @synthesize gtp_port=_gtp_port;
@property(retain, nonatomic) NSString *gtp_host; // @synthesize gtp_host=_gtp_host;
- (void).cxx_destruct;
- (id)description;
- (id)toGetHost;
- (id)init;

@end


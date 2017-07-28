//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class ValueCache;

@interface GTXSecurityUtils : NSObject
{
    int _keyNumber;
    ValueCache *_httpCache;
    ValueCache *_socketCache;
}

+ (id)AESOperation:(unsigned int)arg1 data:(id)arg2 key:(id)arg3 iv:(id)arg4;
+ (id)m:(id)arg1 t:(id)arg2;
+ (id)l:(id)arg1 t:(id)arg2;
+ (id)k;
+ (id)j;
+ (id)altAESIv:(id)arg1;
+ (id)altAESKey;
+ (id)i:(id)arg1;
+ (id)h:(id)arg1;
+ (id)g:(id)arg1 d:(id)arg2 i:(id)arg3;
+ (id)f:(id)arg1 d:(id)arg2 i:(id)arg3;
+ (id)e;
+ (id)d:(id)arg1;
+ (id)c:(id)arg1 d:(id)arg2 i:(id)arg3;
+ (id)b:(id)arg1 d:(id)arg2 i:(id)arg3;
+ (id)a;
+ (id)instance;
@property int keyNumber; // @synthesize keyNumber=_keyNumber;
@property(retain, nonatomic) ValueCache *socketCache; // @synthesize socketCache=_socketCache;
@property(retain, nonatomic) ValueCache *httpCache; // @synthesize httpCache=_httpCache;
- (void).cxx_destruct;
- (id)generateAESKey:(id)arg1 salt:(id)arg2;
- (id)random;
- (id)cacheKey;
- (id)init;

@end


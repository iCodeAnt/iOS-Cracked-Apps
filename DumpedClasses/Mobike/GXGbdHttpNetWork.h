//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface GXGbdHttpNetWork : NSObject
{
}

+ (id)sharedInstance;
- (_Bool)isValidHttpbody:(id)arg1 andresponseCT_T:(id)arg2 andResponseSign:(id)arg3;
- (id)sendSyncRequestWithUrl:(id)arg1 andBody:(id)arg2 andResponse:(id *)arg3 andError:(id *)arg4 andGzip:(_Bool)arg5;
- (void)sendAsyncRequestWithUrl:(id)arg1 andBody:(id)arg2 andGzip:(_Bool)arg3 callBack:(CDUnknownBlockType)arg4;

@end


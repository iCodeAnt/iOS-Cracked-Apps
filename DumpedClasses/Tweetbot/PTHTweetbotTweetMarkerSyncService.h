//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PTHTweetbotSyncService.h"

@class NSMutableDictionary;

@interface PTHTweetbotTweetMarkerSyncService : PTHTweetbotSyncService
{
    NSMutableDictionary *_tidsDictionary;
}

+ (id)title;
- (void).cxx_destruct;
- (void)dealloc;
- (void)postPosition;
- (void)_postPositionForCursor:(id)arg1;
- (void)_postPosition;
- (void)getPosition;
- (id)queryDictionary;
- (id)request;
- (id)initWithAccount:(id)arg1;

@end

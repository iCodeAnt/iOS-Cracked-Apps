//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "DBAccountChangedProtocol.h"

@class NSString, NearbyUnreadCountTableOperation;

@interface NearbyUnreadCountTable : NSObject <DBAccountChangedProtocol>
{
    NearbyUnreadCountTableOperation *_dbOperation;
}

- (id)nearbyUnreadCount:(unsigned long long)arg1;
- (id)nearbyUnreadCountArray;
- (_Bool)updateNearbyUnreadCountWithArray:(id)arg1;
- (_Bool)updateNearbyUnreadCountWithParams:(id)arg1;
- (_Bool)deleteAll;
- (_Bool)deleteItemWithUinArray:(id)arg1;
- (_Bool)deleteItemWithUin:(unsigned long long)arg1;
- (void)onDBChanged:(id)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


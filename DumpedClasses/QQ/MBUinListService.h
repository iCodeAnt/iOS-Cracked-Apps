//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IEngineDispatchDelegate.h"

@class NSString;

@interface MBUinListService : NSObject <IEngineDispatchDelegate>
{
    CDUnknownBlockType _rpComBlk;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)dealloc;
- (void)notifyError:(id)arg1;
- (void)didRecievedMsg:(CDStruct_7895f40e)arg1;
- (id)stringToHex:(id)arg1;
- (void)requestMassBlessingKey:(id)arg1 complete:(CDUnknownBlockType)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

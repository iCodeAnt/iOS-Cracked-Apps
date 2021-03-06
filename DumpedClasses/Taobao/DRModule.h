//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "DRObject.h"

#import "DRCustomEventProtocol.h"

@class NSMutableDictionary, NSString;

@interface DRModule : DRObject <DRCustomEventProtocol>
{
    NSString *_moduleName;
    id <DREventProtocol> _instance;
    NSMutableDictionary *_dItems;
    NSMutableDictionary *_eventCallbacks;
}

@property(retain, nonatomic) NSMutableDictionary *eventCallbacks; // @synthesize eventCallbacks=_eventCallbacks;
@property(retain, nonatomic) NSMutableDictionary *dItems; // @synthesize dItems=_dItems;
@property(readonly, nonatomic) id <DREventProtocol> instance; // @synthesize instance=_instance;
@property(readonly, nonatomic) NSString *moduleName; // @synthesize moduleName=_moduleName;
- (void).cxx_destruct;
- (void)free;
- (void)dealloc;
- (_Bool)isPreload;
- (void)removeAllCustomEvent;
- (void)removeCustomEventWithOperationType:(id)arg1;
- (CDUnknownBlockType)callbackWithOpertaionType:(id)arg1;
- (_Bool)registerCustomEventWithOperationType:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)registerEventInstance:(id)arg1;
- (id)allDRItemViews;
- (id)allDRItems;
- (void)removeDRItem:(id)arg1;
- (id)dItemForItemIdentifier:(id)arg1;
- (_Bool)addDRItem:(id)arg1;
- (void)cacheSelf;
- (id)initWithModuleName:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


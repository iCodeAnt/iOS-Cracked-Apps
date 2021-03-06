//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug  6 2017 20:42:30).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CGUpnpDevice.h"

@class CGUpnpAvContentDirectory, UIImage;
@protocol CGUpnpAvServerDelegate;

@interface CGUpnpAvServer : CGUpnpDevice
{
    CGUpnpAvContentDirectory *contentDirectory;
    struct _CgUpnpAvServer *cAvObject;
    id <CGUpnpAvServerDelegate> delegateServer;
    UIImage *thumbnailImage;
}

@property(retain) UIImage *thumbnailImage; // @synthesize thumbnailImage;
@property id <CGUpnpAvServerDelegate> delegateServer; // @synthesize delegateServer;
@property struct _CgUpnpAvServer *cAvObject; // @synthesize cAvObject;
@property(retain) CGUpnpAvContentDirectory *contentDirectory; // @synthesize contentDirectory;
- (void)unlock;
- (void)lock;
- (_Bool)stop;
- (_Bool)start;
- (id)searchByBrowse:(id)arg1;
- (id)searchByBrowse:(id)arg1 objectId:(id)arg2;
- (void)addAvObjectsFromArray:(id)arg1 newAvObjs:(id)arg2;
- (_Bool)hasAvObject:(id)arg1 avObject:(id)arg2;
- (_Bool)hasAvObject:(id)arg1 objectId:(id)arg2;
- (id)search:(id)arg1;
- (_Bool)hasSearchAvObjectDelegate;
- (id)searchAction;
- (id)browseDirectChildren:(id)arg1;
- (id)browseDirectChildren:(id)arg1 requestedCount:(unsigned long long)arg2;
- (id)browseDirectChildren:(id)arg1 requestedCount:(unsigned long long)arg2 startingIndex:(unsigned long long)arg3;
- (int)browseDirectChildrenTotalMatches:(id)arg1;
- (id)browseMetadata:(id)arg1;
- (_Bool)browse:(id)arg1 browseFlag:(id)arg2 options:(id)arg3;
- (id)browseAction;
- (id)objectForTitlePath:(id)arg1;
- (id)objectForId:(id)arg1;
- (id)rootObject;
- (void)dealloc;
- (id)userObject;
- (void)setUserObject:(id)arg1;
- (id)initWithCObject:(struct _CgUpnpDevice *)arg1;
- (id)init;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug  6 2017 20:42:30).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface TADPathManager : NSObject
{
}

+ (id)sharedInstance;
- (id)getCacheH5MaterialPath;
- (_Bool)addSkipBackupAttributeToItemAtURL:(id)arg1;
- (id)getFullPath:(id)arg1 pathtype:(int)arg2;
- (id)getOrderCache:(_Bool)arg1;
- (id)getConfigCache:(_Bool)arg1;
- (id)getCacheDirectory;
- (id)getDocumentDirectory;
- (id)getImageCacheDirectory:(_Bool)arg1;

@end


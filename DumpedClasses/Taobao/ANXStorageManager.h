//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary;

@interface ANXStorageManager : NSObject
{
    NSMutableDictionary *_userDefaults;
    NSMutableDictionary *_files;
}

+ (id)sharedManager;
@property(retain, nonatomic) NSMutableDictionary *files; // @synthesize files=_files;
@property(retain, nonatomic) NSMutableDictionary *userDefaults; // @synthesize userDefaults=_userDefaults;
- (void).cxx_destruct;
- (id)storageWithType:(unsigned long long)arg1 namespace:(id)arg2;

@end

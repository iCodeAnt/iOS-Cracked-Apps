//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface GtExtConfigManager : NSObject
{
    int _socketProt;
    NSString *_socketHost;
    NSString *_extSdkLog;
}

+ (id)sharedInstance;
@property(retain, nonatomic) NSString *extSdkLog; // @synthesize extSdkLog=_extSdkLog;
@property(nonatomic) int socketProt; // @synthesize socketProt=_socketProt;
@property(retain, nonatomic) NSString *socketHost; // @synthesize socketHost=_socketHost;
- (void).cxx_destruct;
- (id)genPlistConfigDict;
- (id)init;

@end


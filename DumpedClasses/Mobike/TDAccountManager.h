//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary, NSString;

@interface TDAccountManager : NSObject
{
    NSString *_currentAccountId;
    NSMutableDictionary *_accountProfiles;
}

+ (id)accountManagerFromDictionary:(id)arg1;
@property(retain, nonatomic) NSMutableDictionary *accountProfiles; // @synthesize accountProfiles=_accountProfiles;
@property(retain, nonatomic) NSString *currentAccountId; // @synthesize currentAccountId=_currentAccountId;
- (void).cxx_destruct;
- (void)setCurrentAccount:(id)arg1;
- (id)currentAccountProfile;
- (id)accountProfileFromAccountId:(id)arg1;
- (id)accountManagerToDictionary;

@end


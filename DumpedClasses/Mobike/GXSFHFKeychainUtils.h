//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface GXSFHFKeychainUtils : NSObject
{
}

+ (void)removeGXSdkUserForKey:(id)arg1 inAppId:(id)arg2;
+ (id)getGXSdkUserForKey:(id)arg1 inAppId:(id)arg2;
+ (void)saveGXSdkUser:(id)arg1 forKey:(id)arg2 inAppId:(id)arg3;
+ (id)genericQueryForUserName:(id)arg1 serviceName:(id)arg2;
+ (_Bool)deleteItemForUsername:(id)arg1 andServiceName:(id)arg2;
+ (_Bool)storeUsername:(id)arg1 andPassword:(id)arg2 forServiceName:(id)arg3;
+ (id)getPasswordForUsername:(id)arg1 andServiceName:(id)arg2;

@end


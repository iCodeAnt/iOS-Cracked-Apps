//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSLock, NSMutableDictionary;

@interface WXComponentFactory : NSObject
{
    NSMutableDictionary *_componentConfigs;
    NSLock *_configLock;
}

+ (id)componentMethodMapsWithName:(id)arg1;
+ (SEL)methodWithComponentName:(id)arg1 withMethod:(id)arg2;
+ (id)componentConfigs;
+ (void)unregisterAllComponents;
+ (void)registerComponents:(id)arg1;
+ (void)registerComponent:(id)arg1 withClass:(Class)arg2 withPros:(id)arg3;
+ (Class)classWithComponentName:(id)arg1;
+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)unregisterAllComponents;
- (void)registerComponents:(id)arg1;
- (void)registerComponent:(id)arg1 withClass:(Class)arg2 withPros:(id)arg3;
- (Class)classWithComponentName:(id)arg1;
- (id)getComponentConfigs;
- (SEL)_methodWithComponetName:(id)arg1 withMethod:(id)arg2;
- (id)_componentMethodMapsWithName:(id)arg1;
- (id)init;

@end

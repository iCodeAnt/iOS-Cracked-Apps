//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "ISecurityGuardOpenInitialize.h"

@class NSString;

@interface SecurityGuardOpenInitialize : NSObject <ISecurityGuardOpenInitialize>
{
}

+ (id)sharedInstance;
- (_Bool)privateInitialize;
- (Class)getMetaClass;
- (long long)initialize;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

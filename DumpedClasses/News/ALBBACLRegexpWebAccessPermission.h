//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "ALBBACLPermission.h"

@class NSRegularExpression, NSString;

@interface ALBBACLRegexpWebAccessPermission : NSObject <ALBBACLPermission>
{
    NSRegularExpression *_pRegex;
}

@property(retain, nonatomic) NSRegularExpression *pRegex; // @synthesize pRegex=_pRegex;
- (void).cxx_destruct;
- (_Bool)hasPermission:(id)arg1;
- (id)initWithURLPattern:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


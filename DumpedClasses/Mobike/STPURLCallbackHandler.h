//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray;

@interface STPURLCallbackHandler : NSObject
{
    NSArray *_callbacks;
}

+ (id)shared;
@property(retain, nonatomic) NSArray *callbacks; // @synthesize callbacks=_callbacks;
- (void).cxx_destruct;
- (void)unregisterListener:(id)arg1;
- (void)registerListener:(id)arg1 forURL:(id)arg2;
- (_Bool)handleURLCallback:(id)arg1;
- (id)init;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class GTXUserData, NSOperationQueue;

@interface GTXClientUserInitService : NSObject
{
    _Bool _authenticating;
    GTXUserData *_userData;
    NSOperationQueue *_queue;
}

+ (void)initService:(CDUnknownBlockType)arg1;
+ (id)authorization;
+ (_Bool)authenticated;
+ (id)service;
@property _Bool authenticating; // @synthesize authenticating=_authenticating;
@property(retain, nonatomic) NSOperationQueue *queue; // @synthesize queue=_queue;
@property(retain, nonatomic) GTXUserData *userData; // @synthesize userData=_userData;
- (void).cxx_destruct;
- (void)authenticate:(CDUnknownBlockType)arg1;
- (void)initUserData:(id)arg1;
- (id)init;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface CAccountUpload : NSObject
{
}

+ (id)sharedInstance;
- (void)dealloc;
- (void)uploadData:(id)arg1 token:(id)arg2 imageName:(id)arg3 withType:(unsigned long long)arg4 block:(CDUnknownBlockType)arg5;
- (void)uploadHeadData:(id)arg1 token:(id)arg2;
- (_Bool)canActivateUpload;
- (void)requestQNtokenFailed:(id)arg1;
- (void)requestQNtokenSucc:(id)arg1;
- (void)uploadAccordingToFamily:(id)arg1 handle:(CDUnknownBlockType)arg2;
- (void)uploadHeadImageData;
- (void)setupController;
- (id)init;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "WXApiDelegate.h"

@class NSString;

@interface MBKWXApiManager : NSObject <WXApiDelegate>
{
    long long _invokeType;
    id <MBKWXApiManagerDelegate> _delegate;
}

+ (id)sharedInstance;
@property(nonatomic) __weak id <MBKWXApiManagerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) long long invokeType; // @synthesize invokeType=_invokeType;
- (void).cxx_destruct;
- (void)onReq:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


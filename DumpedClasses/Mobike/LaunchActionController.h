//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "MBKGuideLineDelegate.h"

@class MBKGuideLine, NSMutableSet, NSString;

@interface LaunchActionController : NSObject <MBKGuideLineDelegate>
{
    MBKGuideLine *introView;
    NSMutableSet *_citySet;
}

+ (id)sharedInstance;
@property(retain, nonatomic) NSMutableSet *citySet; // @synthesize citySet=_citySet;
- (void).cxx_destruct;
- (void)writeOpenAreaToFile:(id)arg1;
- (id)readOpenAreaFromLocal;
- (void)requestOpenAreaFailed:(id)arg1;
- (void)requestOpenAreaSucc:(id)arg1;
- (void)checkOpenArea;
- (_Bool)isOpenArea:(id)arg1;
- (void)dealloc;
- (void)onRequestVersionCodeFailed:(id)arg1;
- (void)onRequestVersionCodeSucc:(id)arg1;
- (void)checkVersionUpdate;
- (_Bool)checkNetWork;
- (void)onDoneButtonPressed;
- (void)setupGuideLine;
- (void)setupController;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, UIImage;

@interface TBSafeMode : NSObject
{
    _Bool _shouldCompleteClean;
    id <TBSafeModeDelegate> _delegate;
    UIImage *_logoImage;
    NSString *_appName;
}

+ (void)finishSafeMode:(_Bool)arg1;
+ (void)updateConfigInfo:(id)arg1;
+ (_Bool)isProcessing;
+ (void)setDelegate:(id)arg1;
+ (void)showSafeModeView;
+ (void)setAppName:(id)arg1;
+ (void)setMainLogo:(id)arg1;
+ (void)postSafeModeTriggeredData:(_Bool)arg1;
+ (_Bool)needChangeToSafeMode;
+ (void)skip;
+ (void)tryToFixCrash;
+ (void)createTBDocumentsDirectory;
+ (void)resetToFirstInstall;
+ (void)restoreWhiteListPaths;
+ (void)keepWhiteListPaths;
+ (void)restoreWhiteListUserDefaults;
+ (void)keepWhiteListUserDefaults;
+ (void)cleanLibAndDoc;
+ (id)sharedInstance;
@property(copy, nonatomic) NSString *appName; // @synthesize appName=_appName;
@property(retain, nonatomic) UIImage *logoImage; // @synthesize logoImage=_logoImage;
@property(nonatomic) _Bool shouldCompleteClean; // @synthesize shouldCompleteClean=_shouldCompleteClean;
@property(nonatomic) id <TBSafeModeDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;

@end


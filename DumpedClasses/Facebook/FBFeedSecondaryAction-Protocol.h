//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class FBFeedSupersededSecondaryActions, NSString, UIImage, UIView;

@protocol FBFeedSecondaryAction <NSObject>
- (NSString *)accessibilityIdentifier;
- (NSString *)detail;
- (UIImage *)overrideIcon;
- (unsigned long long)glyphName;
- (NSString *)title;
- (void)performWithSourceView:(UIView *)arg1 sourceRect:(struct CGRect)arg2;

@optional
- (FBFeedSupersededSecondaryActions *)supersededSecondaryActions;
- (_Bool)shouldPerformAfterMenuDismissed;
- (long long)menuPriority;
- (NSString *)actionNameForLogging;
@end

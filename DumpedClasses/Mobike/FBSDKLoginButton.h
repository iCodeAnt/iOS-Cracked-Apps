//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBSDKButton.h"

#import "FBSDKButtonImpressionTracking.h"
#import "UIActionSheetDelegate.h"

@class FBSDKLoginManager, NSArray, NSString;

@interface FBSDKLoginButton : FBSDKButton <FBSDKButtonImpressionTracking, UIActionSheetDelegate>
{
    _Bool _hasShownTooltipBubble;
    FBSDKLoginManager *_loginManager;
    NSString *_userID;
    NSString *_userName;
    id <FBSDKLoginButtonDelegate> _delegate;
    NSArray *_publishPermissions;
    NSArray *_readPermissions;
    unsigned long long _tooltipBehavior;
    unsigned long long _tooltipColorStyle;
}

@property(nonatomic) unsigned long long tooltipColorStyle; // @synthesize tooltipColorStyle=_tooltipColorStyle;
@property(nonatomic) unsigned long long tooltipBehavior; // @synthesize tooltipBehavior=_tooltipBehavior;
@property(copy, nonatomic) NSArray *readPermissions; // @synthesize readPermissions=_readPermissions;
@property(copy, nonatomic) NSArray *publishPermissions; // @synthesize publishPermissions=_publishPermissions;
@property(nonatomic) __weak id <FBSDKLoginButtonDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_updateContent;
- (void)_showTooltipIfNeeded;
- (id)_shortLogInTitle;
- (id)_longLogInTitle;
- (id)_logOutTitle;
- (void)_buttonPressed:(id)arg1;
- (void)_accessTokenDidChangeNotification:(id)arg1;
- (void)configureButton;
- (id)impressionTrackingIdentifier;
- (id)impressionTrackingEventName;
- (id)analyticsParameters;
- (void)actionSheet:(id)arg1 didDismissWithButtonIndex:(long long)arg2;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)didMoveToWindow;
@property(nonatomic) unsigned long long loginBehavior;
@property(nonatomic) unsigned long long defaultAudience;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


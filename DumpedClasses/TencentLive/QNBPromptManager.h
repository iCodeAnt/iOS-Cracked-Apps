//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface QNBPromptManager : NSObject
{
}

+ (_Bool)activityHUDShowing;
+ (_Bool)updateHUDViewLocation:(id)arg1;
+ (void)showHUDWithTip:(_Bool)arg1 tip:(id)arg2 withHasLoadingActivity:(_Bool)arg3 containerView:(id)arg4;
+ (void)ShowHUDPrompt:(id)arg1 withParentViewController:(id)arg2 withLeftIcon:(id)arg3;
+ (void)ShowHUDPrompt:(id)arg1 parentWindow:(id)arg2 withCustomView:(id)arg3 offsetX:(long long)arg4 offsetY:(long long)arg5 hideCompletion:(CDUnknownBlockType)arg6;
+ (void)ShowHUDPrompt:(id)arg1 parentWindow:(id)arg2 withCustomView:(id)arg3 hideCompletion:(CDUnknownBlockType)arg4;
+ (void)ShowHUDPrompt:(id)arg1 withCustomView:(id)arg2 offsetX:(long long)arg3 offsetY:(long long)arg4;
+ (void)ShowHUDPrompt:(id)arg1 withCustomView:(id)arg2;
+ (void)ShowHUDPrompt:(id)arg1 withParentViewController:(id)arg2 icon:(id)arg3 offsetX:(long long)arg4 offsetY:(long long)arg5 delay:(double)arg6 withInteractionEnabed:(_Bool)arg7;
+ (void)ShowHUDPrompt:(id)arg1 withParentViewController:(id)arg2 withIcon:(id)arg3;
+ (void)ShowHUDPrompt:(id)arg1 withParentViewController:(id)arg2;
+ (void)HideHUDPromptViewWithParentView:(id)arg1;
+ (void)HideHUDPromptView;
+ (_Bool)isShowingHUDPromptView;

@end


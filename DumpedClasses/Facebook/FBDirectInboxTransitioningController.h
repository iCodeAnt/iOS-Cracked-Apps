//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "UIViewControllerAnimatedTransitioning-Protocol.h"
#import "UIViewControllerTransitioningDelegate-Protocol.h"

@class NSString;
@protocol FBDirectInboxTransitioningControllerDataSource;

@interface FBDirectInboxTransitioningController : NSObject <UIViewControllerAnimatedTransitioning, UIViewControllerTransitioningDelegate>
{
    _Bool _isPresenting;
    id <FBDirectInboxTransitioningControllerDataSource> _dataSource;
}

- (void).cxx_destruct;
- (void)animateTransition:(id)arg1;
- (double)transitionDuration:(id)arg1;
- (id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;
- (id)animationControllerForDismissedController:(id)arg1;
- (id)initWithDataSource:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

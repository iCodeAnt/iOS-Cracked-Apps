//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug  6 2017 20:42:30).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class SSDKContentViewController, UIWindow;

@interface SSDKRootViewController : UIViewController
{
    UIWindow *_window;
    SSDKContentViewController *_viewController;
}

@property(retain, nonatomic) SSDKContentViewController *viewController; // @synthesize viewController=_viewController;
@property(retain, nonatomic) UIWindow *window; // @synthesize window=_window;
- (void).cxx_destruct;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewDidAppear:(_Bool)arg1;
- (id)initWithViewController:(id)arg1 window:(id)arg2;

@end

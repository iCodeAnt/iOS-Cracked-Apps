//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class UIViewController, UIViewController<ZJScrollPageViewChildVcDelegate>, ZJTitleView;

@protocol ZJScrollPageViewDelegate <NSObject>
- (UIViewController<ZJScrollPageViewChildVcDelegate> *)childViewController:(UIViewController<ZJScrollPageViewChildVcDelegate> *)arg1 forIndex:(long long)arg2;
- (long long)numberOfChildViewControllers;

@optional
- (void)scrollPageController:(UIViewController *)arg1 childViewControllDidDisappear:(UIViewController *)arg2 forIndex:(long long)arg3;
- (void)scrollPageController:(UIViewController *)arg1 childViewControllWillDisappear:(UIViewController *)arg2 forIndex:(long long)arg3;
- (void)scrollPageController:(UIViewController *)arg1 childViewControllDidAppear:(UIViewController *)arg2 forIndex:(long long)arg3;
- (void)scrollPageController:(UIViewController *)arg1 childViewControllWillAppear:(UIViewController *)arg2 forIndex:(long long)arg3;
- (void)setUpTitleView:(ZJTitleView *)arg1 forIndex:(long long)arg2;
- (void)currentIndex:(long long)arg1;
@end


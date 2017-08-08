//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug  6 2017 20:42:30).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GWBaseViewController.h"

#import "GWPilotAnimationViewDelegate-Protocol.h"
#import "UINavigationControllerDelegate-Protocol.h"
#import "UIPageViewControllerDataSource-Protocol.h"
#import "UIPageViewControllerDelegate-Protocol.h"
#import "UIScrollViewDelegate-Protocol.h"
#import "WPSwitchScrollViewDelegate-Protocol.h"

@class GWPhotoViewAnimation, GWPilotAnimationView, Movie, NSString, UIPageViewController, WPMovieModel, WPMoviePhotoModel, WPSwitchScrollView;

@interface WPMoviePhotoContainerViewController : GWBaseViewController <UIPageViewControllerDataSource, UIPageViewControllerDelegate, WPSwitchScrollViewDelegate, UINavigationControllerDelegate, UIScrollViewDelegate, GWPilotAnimationViewDelegate>
{
    WPMoviePhotoModel *_model;
    WPMovieModel *_movieModel;
    WPSwitchScrollView *_switchScrollView;
    UIPageViewController *_pageController;
    long long _selectedIndex;
    long long _preSelectedIndex;
    GWPilotAnimationView *_navBarView;
    Movie *_currentMovie;
    GWPhotoViewAnimation *_photoViewAnimation;
}

@property(retain, nonatomic) GWPhotoViewAnimation *photoViewAnimation; // @synthesize photoViewAnimation=_photoViewAnimation;
@property(retain, nonatomic) Movie *currentMovie; // @synthesize currentMovie=_currentMovie;
@property(retain, nonatomic) GWPilotAnimationView *navBarView; // @synthesize navBarView=_navBarView;
@property(nonatomic) long long preSelectedIndex; // @synthesize preSelectedIndex=_preSelectedIndex;
@property(nonatomic) long long selectedIndex; // @synthesize selectedIndex=_selectedIndex;
@property(retain, nonatomic) UIPageViewController *pageController; // @synthesize pageController=_pageController;
@property(retain, nonatomic) WPSwitchScrollView *switchScrollView; // @synthesize switchScrollView=_switchScrollView;
@property(retain, nonatomic) WPMovieModel *movieModel; // @synthesize movieModel=_movieModel;
@property(retain, nonatomic) WPMoviePhotoModel *model; // @synthesize model=_model;
- (void).cxx_destruct;
- (void)onBackBtnClicked;
- (void)scrollViewDidScroll:(id)arg1;
- (id)navigationController:(id)arg1 animationControllerForOperation:(long long)arg2 fromViewController:(id)arg3 toViewController:(id)arg4;
- (id)pageViewController:(id)arg1 viewControllerAfterViewController:(id)arg2;
- (id)pageViewController:(id)arg1 viewControllerBeforeViewController:(id)arg2;
- (void)pageViewController:(id)arg1 didFinishAnimating:(_Bool)arg2 previousViewControllers:(id)arg3 transitionCompleted:(_Bool)arg4;
- (void)pageViewController:(id)arg1 willTransitionToViewControllers:(id)arg2;
- (void)wp_switchScrollView:(id)arg1 didSelectedIndex:(long long)arg2;
- (long long)indexOfPhotoListViewController:(id)arg1;
- (void)setListVCBlockFuntion:(id)arg1;
- (void)setUpViews;
- (void)didReceiveMemoryWarning;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithGWMovieModel:(id)arg1 PhotoModel:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

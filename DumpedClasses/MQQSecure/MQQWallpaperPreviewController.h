//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MQQBaseViewController.h"

#import "MQQAlertViewDelegate-Protocol.h"
#import "MQQImagePreviewViewDataSource-Protocol.h"
#import "MQQImagePreviewViewDelegate-Protocol.h"
#import "MQQScrollTouchViewDelegate-Protocol.h"
#import "MQQWallpaperCalendarViewDelegate-Protocol.h"

@class MQQButton, MQQImagePreviewView, MQQWallpaperBlurSliderView, MQQWallpaperCalendarView, MQQWallpaperMarkEditView, NSMutableArray, NSMutableDictionary, NSString, UIButton, UILabel, UIView;

@interface MQQWallpaperPreviewController : MQQBaseViewController <MQQWallpaperCalendarViewDelegate, MQQScrollTouchViewDelegate, MQQImagePreviewViewDataSource, MQQImagePreviewViewDelegate, MQQAlertViewDelegate>
{
    MQQImagePreviewView *_imagePreviewView;
    MQQButton *_backButton;
    UIButton *_blurButton;
    UIButton *_calendarButton;
    UIButton *_saveButton;
    MQQWallpaperBlurSliderView *_blurSliderView;
    NSMutableArray *_wallpaperArray;
    long long _currentIndex;
    UIView *_calendarMaskView;
    UILabel *_clockLabel;
    MQQWallpaperMarkEditView *_markEditView;
    UIView *_calendarContainView;
    MQQWallpaperCalendarView *_calendarView;
    long long _calendarColorType;
    struct CGPoint _startPanLocation;
    NSMutableDictionary *_calendarMarks;
    UIView *_calendarContentView;
}

@property(retain, nonatomic) UIView *calendarContentView; // @synthesize calendarContentView=_calendarContentView;
@property(retain, nonatomic) UIView *calendarMaskView; // @synthesize calendarMaskView=_calendarMaskView;
@property(nonatomic) long long currentIndex; // @synthesize currentIndex=_currentIndex;
@property(retain, nonatomic) NSMutableArray *wallpaperArray; // @synthesize wallpaperArray=_wallpaperArray;
@property(retain, nonatomic) MQQImagePreviewView *imagePreviewView; // @synthesize imagePreviewView=_imagePreviewView;
- (void)imagePreviewViewWillBeginDragging:(id)arg1;
- (void)imagePreviewViewDidScrollOverRightEdge:(id)arg1;
- (void)imagePreviewView:(id)arg1 didScrollToIndex:(long long)arg2;
- (void)imagePreviewView:(id)arg1 willScrollToIndex:(long long)arg2;
- (id)imagePreviewView:(id)arg1 imageCellForIndex:(long long)arg2 isAssetsDataChange:(_Bool)arg3;
- (void)checkAndGuideSettingWallpaper;
- (_Bool)hasSavedCurrentWallpaper;
- (void)saveWallpaperImage;
- (void)saveButtonClicked;
- (void)blurRangeDidChanged;
- (void)blurRangeChanged;
- (void)calendarButtonClicked;
- (void)blurButtonClicked;
- (void)didSaveWallpapers:(id)arg1;
- (id)willSaveWallpapers;
- (void)didScrollOverRightEdge;
- (id)imageCellForIndex:(long long)arg1;
- (void)enumerateSaveTypeUsingBlock:(CDUnknownBlockType)arg1;
- (void)currentIndexDidChange;
- (void)currentIndexWillChange:(long long)arg1;
@property(readonly, nonatomic) long long colorTypeOfCurrentWallpaper;
- (void)updateDisplay:(_Bool)arg1;
- (void)setButton:(id)arg1 isSelected:(_Bool)arg2 withNormalImage:(id)arg3;
- (id)buttonWithFrame:(struct CGRect)arg1 title:(id)arg2 normalImage:(id)arg3 isSelected:(_Bool)arg4;
@property(readonly, nonatomic) _Bool isWallpaperWithCalendar;
@property(readonly, nonatomic) _Bool isWallpaperWithBlur;
@property(readonly, nonatomic) long long numberOfPages;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)dealloc;
- (void)viewDidLoad;
- (id)initWithWallpapers:(id)arg1 currentWallpaper:(id)arg2;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)calendarView:(id)arg1 didDateInfoClicked:(id)arg2;
- (void)locateCalenderView;
- (void)updateCalenderInfo;
- (void)scrollView:(id)arg1 touchesCancelled:(id)arg2 withEvent:(id)arg3;
- (void)scrollView:(id)arg1 touchesEnded:(id)arg2 withEvent:(id)arg3;
- (void)scrollView:(id)arg1 touchesMoved:(id)arg2 withEvent:(id)arg3;
- (void)scrollView:(id)arg1 touchesBegan:(id)arg2 withEvent:(id)arg3;
- (void)cancelMarkForDate:(id)arg1;
- (void)hideMarkEditView;
- (void)cancelMarkButtonClicked;
- (void)addLocalNotificationButtonClicked;
- (void)setCalendarColorType:(long long)arg1;
- (void)changeMonthWithAnimationType:(id)arg1;
- (void)updateToNextMonth;
- (void)updateToLastMonth;
- (void)switchCalenderMonth:(id)arg1;
@property(nonatomic, getter=isCalendarHidden, setter=setCanlendarHidden:) _Bool calendarHidden;
@property(nonatomic, getter=isCalendarContentViewsHidden, setter=setCalendarContentViewsHidden:) _Bool calendarContentViewsHidden;
- (void)refreshSystemTime;
- (void)showCalendarTip;
- (void)updateCalendarMarks;
- (void)changeCalenderColorType;
- (id)calendarImageInImageCell:(id)arg1;
- (void)updateWallpaperColorType:(long long)arg1;
- (void)loadCalendar;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

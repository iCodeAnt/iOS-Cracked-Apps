//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "DRCBaseViewController.h"

@class DRCOrderInfoSettingView, UIButton, UIView;

@interface DRCRentCarViewController : DRCBaseViewController
{
    UIView *_orderInfoShadow;
    DRCOrderInfoSettingView *_orderInfoSettingView;
    UIButton *_btnSelectCar;
}

@property(retain, nonatomic) UIButton *btnSelectCar; // @synthesize btnSelectCar=_btnSelectCar;
@property(retain, nonatomic) DRCOrderInfoSettingView *orderInfoSettingView; // @synthesize orderInfoSettingView=_orderInfoSettingView;
@property(retain, nonatomic) UIView *orderInfoShadow; // @synthesize orderInfoShadow=_orderInfoShadow;
- (void).cxx_destruct;
- (void)makeConstraints;
- (void)viewDidLoad;

@end

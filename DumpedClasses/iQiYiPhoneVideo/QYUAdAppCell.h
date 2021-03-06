//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "QYUPhoneCardBaseCell.h"

@class AdInfoObject, NSString, UIButton, UIImageView, UILabel;

@interface QYUAdAppCell : QYUPhoneCardBaseCell
{
    UIImageView *appIcon;
    UILabel *appName;
    UILabel *appDescribe;
    NSString *appUrl;
    UIButton *installBtn;
    UIImageView *botLine;
    AdInfoObject *infoObject;
    NSString *cardTtitle;
}

+ (id)getCellObjByContainer:(id)arg1 andIndex:(long long)arg2;
+ (long long)getLinesByCardData:(id)arg1 andShowNum:(long long)arg2;
+ (void)load;
@property(retain, nonatomic) NSString *cardTtitle; // @synthesize cardTtitle;
@property(retain, nonatomic) UIImageView *botLine; // @synthesize botLine;
@property(retain, nonatomic) AdInfoObject *infoObject; // @synthesize infoObject;
@property(retain, nonatomic) UIButton *installBtn; // @synthesize installBtn;
@property(retain, nonatomic) NSString *appUrl; // @synthesize appUrl;
@property(retain, nonatomic) UILabel *appName; // @synthesize appName;
@property(retain, nonatomic) UIImageView *appIcon; // @synthesize appIcon;
@property(retain, nonatomic) UILabel *appDescribe; // @synthesize appDescribe;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)setCellModel:(id)arg1;
- (void)refreshDisplay;
- (void)initSubviews;
- (void)installBtnPress:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end


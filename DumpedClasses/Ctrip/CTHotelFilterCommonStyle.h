//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, UIColor, UIFont;

@interface CTHotelFilterCommonStyle : NSObject
{
    _Bool _mixedSelect;
    NSString *_title;
    UIFont *_titleFont;
    UIColor *_titleColor;
    double _titleMargin;
    double _cornerRadius;
    long long _columns;
    double _btnHeight;
    double _widthMargin;
    double _xMargin;
    double _heightMargin;
    double _yMargin;
    double _btnbordeNomalrwidth;
    double _btnborderSelectwidth;
    UIFont *_btnFont;
    UIColor *_btnBoderNomalColor;
    UIColor *_btnBoderSelectColor;
    UIColor *_btnTitleNomalColor;
    UIColor *_btnTitleSelectColor;
    NSString *_okStr;
}

@property(retain, nonatomic) NSString *okStr; // @synthesize okStr=_okStr;
@property(retain, nonatomic) UIColor *btnTitleSelectColor; // @synthesize btnTitleSelectColor=_btnTitleSelectColor;
@property(retain, nonatomic) UIColor *btnTitleNomalColor; // @synthesize btnTitleNomalColor=_btnTitleNomalColor;
@property(retain, nonatomic) UIColor *btnBoderSelectColor; // @synthesize btnBoderSelectColor=_btnBoderSelectColor;
@property(retain, nonatomic) UIColor *btnBoderNomalColor; // @synthesize btnBoderNomalColor=_btnBoderNomalColor;
@property(retain, nonatomic) UIFont *btnFont; // @synthesize btnFont=_btnFont;
@property(nonatomic) double btnborderSelectwidth; // @synthesize btnborderSelectwidth=_btnborderSelectwidth;
@property(nonatomic) double btnbordeNomalrwidth; // @synthesize btnbordeNomalrwidth=_btnbordeNomalrwidth;
@property(nonatomic) double yMargin; // @synthesize yMargin=_yMargin;
@property(nonatomic) double heightMargin; // @synthesize heightMargin=_heightMargin;
@property(nonatomic) double xMargin; // @synthesize xMargin=_xMargin;
@property(nonatomic) double widthMargin; // @synthesize widthMargin=_widthMargin;
@property(nonatomic) _Bool mixedSelect; // @synthesize mixedSelect=_mixedSelect;
@property(nonatomic) double btnHeight; // @synthesize btnHeight=_btnHeight;
@property(nonatomic) long long columns; // @synthesize columns=_columns;
@property(nonatomic) double cornerRadius; // @synthesize cornerRadius=_cornerRadius;
@property(nonatomic) double titleMargin; // @synthesize titleMargin=_titleMargin;
@property(retain, nonatomic) UIColor *titleColor; // @synthesize titleColor=_titleColor;
@property(retain, nonatomic) UIFont *titleFont; // @synthesize titleFont=_titleFont;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (id)init;

@end


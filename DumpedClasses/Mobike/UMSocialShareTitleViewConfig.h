//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, UIColor, UIFont;

@interface UMSocialShareTitleViewConfig : NSObject
{
    _Bool _isShow;
    NSString *_shareTitleViewTitleString;
    UIFont *_shareTitleViewFont;
    UIColor *_shareTitleViewTitleColor;
    UIColor *_shareTitleViewBackgroundColor;
    double _shareTitleViewPaddingTop;
    double _shareTitleViewPaddingBottom;
}

@property(nonatomic) double shareTitleViewPaddingBottom; // @synthesize shareTitleViewPaddingBottom=_shareTitleViewPaddingBottom;
@property(nonatomic) double shareTitleViewPaddingTop; // @synthesize shareTitleViewPaddingTop=_shareTitleViewPaddingTop;
@property(retain, nonatomic) UIColor *shareTitleViewBackgroundColor; // @synthesize shareTitleViewBackgroundColor=_shareTitleViewBackgroundColor;
@property(retain, nonatomic) UIColor *shareTitleViewTitleColor; // @synthesize shareTitleViewTitleColor=_shareTitleViewTitleColor;
@property(retain, nonatomic) UIFont *shareTitleViewFont; // @synthesize shareTitleViewFont=_shareTitleViewFont;
@property(retain, nonatomic) NSString *shareTitleViewTitleString; // @synthesize shareTitleViewTitleString=_shareTitleViewTitleString;
@property(nonatomic) _Bool isShow; // @synthesize isShow=_isShow;
- (void).cxx_destruct;

@end


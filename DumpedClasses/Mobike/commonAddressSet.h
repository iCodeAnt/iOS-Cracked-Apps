//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSDictionary, UIImageView, UILabel;

@interface commonAddressSet : UIView
{
    _Bool _isSet;
    UIImageView *_icon;
    UILabel *_title;
    UILabel *_detail;
    NSDictionary *_poi;
}

@property NSDictionary *poi; // @synthesize poi=_poi;
@property _Bool isSet; // @synthesize isSet=_isSet;
@property(retain) UILabel *detail; // @synthesize detail=_detail;
@property(retain) UILabel *title; // @synthesize title=_title;
@property(retain) UIImageView *icon; // @synthesize icon=_icon;
- (void).cxx_destruct;
- (void)updateSubViews:(id)arg1 index:(int)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end


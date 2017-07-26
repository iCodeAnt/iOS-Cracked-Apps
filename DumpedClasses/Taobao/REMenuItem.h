//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, REMenuItemView, UIImage, UIView;

@interface REMenuItem : NSObject
{
    _Bool _isLight;
    int _sortType;
    NSString *_title;
    NSString *_subtitle;
    UIImage *_image;
    UIImage *_higlightedImage;
    CDUnknownBlockType _action;
    long long _tag;
    UIView *_customView;
    REMenuItemView *_itemView;
}

@property(nonatomic) REMenuItemView *itemView; // @synthesize itemView=_itemView;
@property(nonatomic) int sortType; // @synthesize sortType=_sortType;
@property(nonatomic) _Bool isLight; // @synthesize isLight=_isLight;
@property(retain, nonatomic) UIView *customView; // @synthesize customView=_customView;
@property(nonatomic) long long tag; // @synthesize tag=_tag;
@property(copy, nonatomic) CDUnknownBlockType action; // @synthesize action=_action;
@property(retain, nonatomic) UIImage *higlightedImage; // @synthesize higlightedImage=_higlightedImage;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
@property(copy, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (id)description;
- (id)initWithCustomView:(id)arg1;
- (id)initWithCustomView:(id)arg1 action:(CDUnknownBlockType)arg2;
- (id)initWithTitle:(id)arg1 subtitle:(id)arg2 image:(id)arg3 highlightedImage:(id)arg4 action:(CDUnknownBlockType)arg5;
- (id)initWithTitle:(id)arg1 image:(id)arg2 highlightedImage:(id)arg3 action:(CDUnknownBlockType)arg4;

@end

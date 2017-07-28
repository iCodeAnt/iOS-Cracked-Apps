//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

@class SharePlatView, UIView;

@interface SharePlatController : UIViewController
{
    long long _typeCollection;
    CDUnknownBlockType _shareToPlatformHandler;
    UIView *_container;
    SharePlatView *_widget;
    UIView *_allback;
}

@property(retain, nonatomic) UIView *allback; // @synthesize allback=_allback;
@property(retain, nonatomic) SharePlatView *widget; // @synthesize widget=_widget;
@property(retain, nonatomic) UIView *container; // @synthesize container=_container;
@property(copy, nonatomic) CDUnknownBlockType shareToPlatformHandler; // @synthesize shareToPlatformHandler=_shareToPlatformHandler;
@property(nonatomic) long long typeCollection; // @synthesize typeCollection=_typeCollection;
- (void).cxx_destruct;
- (void)dealloc;
- (void)unshow;
- (void)show;
- (void)backGroundClicked:(id)arg1;
- (id)initWithPlatformCollection:(long long)arg1;
- (id)init;

@end


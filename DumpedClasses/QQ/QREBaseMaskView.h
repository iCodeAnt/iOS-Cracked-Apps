//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@interface QREBaseMaskView : UIView
{
    _Bool _isShowing;
    _Bool _isVideoChatting;
}

@property(nonatomic) _Bool isVideoChatting; // @synthesize isVideoChatting=_isVideoChatting;
@property(nonatomic) _Bool isShowing; // @synthesize isShowing=_isShowing;
- (void)dealloc;
- (void)removeFromSuperview;
- (void)setHidden:(_Bool)arg1;
- (void)handleVideoChatEnd;
- (void)handleVideoChatStart;
- (void)logoutNotification;
- (id)initWithFrame:(struct CGRect)arg1;

@end

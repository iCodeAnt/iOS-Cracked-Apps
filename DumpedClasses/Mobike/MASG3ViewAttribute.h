//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class UIView;

@interface MASG3ViewAttribute : NSObject
{
    UIView *_view;
    id _item;
    long long _layoutAttribute;
}

@property(readonly, nonatomic) long long layoutAttribute; // @synthesize layoutAttribute=_layoutAttribute;
@property(readonly, nonatomic) __weak id item; // @synthesize item=_item;
@property(readonly, nonatomic) __weak UIView *view; // @synthesize view=_view;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (_Bool)isSizeAttribute;
- (id)initWithView:(id)arg1 item:(id)arg2 layoutAttribute:(long long)arg3;
- (id)initWithView:(id)arg1 layoutAttribute:(long long)arg2;

@end


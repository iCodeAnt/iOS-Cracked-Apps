//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSString, UIImage;

@interface GMSStreetViewMarkerDrawStyle : NSObject <NSCopying>
{
    UIImage *_icon;
    NSString *_snippet;
    struct CGPoint _anchor;
}

+ (id)styleWithIcon:(id)arg1 anchor:(struct CGPoint)arg2 snippet:(id)arg3;
@property(readonly, nonatomic) NSString *snippet; // @synthesize snippet=_snippet;
@property(readonly, nonatomic) struct CGPoint anchor; // @synthesize anchor=_anchor;
@property(readonly, nonatomic) UIImage *icon; // @synthesize icon=_icon;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithIcon:(id)arg1 anchor:(struct CGPoint)arg2 snippet:(id)arg3;
- (id)init;

@end


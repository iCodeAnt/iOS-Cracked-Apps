//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSAttributedString, UIColor, UIFont;

@interface UMSocialStringWarterMarkConfig : NSObject <NSCopying>
{
    NSAttributedString *_warterMarkAttributedString;
    unsigned long long _warterMarkStringLimit;
    UIColor *_warterMarkStringColor;
    UIFont *_warterMarkStringFont;
    double _paddingToHorizontalParentBorder;
    double _paddingToVerticalParentBorder;
    struct CGAffineTransform _warterMarkStringTransform;
}

+ (id)defaultStringWarterMarkConfig;
@property(nonatomic) struct CGAffineTransform warterMarkStringTransform; // @synthesize warterMarkStringTransform=_warterMarkStringTransform;
@property(nonatomic) double paddingToVerticalParentBorder; // @synthesize paddingToVerticalParentBorder=_paddingToVerticalParentBorder;
@property(nonatomic) double paddingToHorizontalParentBorder; // @synthesize paddingToHorizontalParentBorder=_paddingToHorizontalParentBorder;
@property(retain, nonatomic) UIFont *warterMarkStringFont; // @synthesize warterMarkStringFont=_warterMarkStringFont;
@property(retain, nonatomic) UIColor *warterMarkStringColor; // @synthesize warterMarkStringColor=_warterMarkStringColor;
@property(nonatomic) unsigned long long warterMarkStringLimit; // @synthesize warterMarkStringLimit=_warterMarkStringLimit;
@property(retain, nonatomic) NSAttributedString *warterMarkAttributedString; // @synthesize warterMarkAttributedString=_warterMarkAttributedString;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)checkValid;
- (void)setDefaultValues;
- (id)init;

@end


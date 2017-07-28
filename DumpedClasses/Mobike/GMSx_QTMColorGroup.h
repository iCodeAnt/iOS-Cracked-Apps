//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSecureCoding.h"

@class NSString, UIColor;

@interface GMSx_QTMColorGroup : NSObject <NSSecureCoding>
{
    const CDStruct_d2b197d1 *_tones;
    unsigned long long _numTones;
    long long _groupID;
    UIColor *_bodyTextColor;
    UIColor *_bodyTextColorOnLightestColor;
    UIColor *_bodyTextColorOnLighterColor;
    UIColor *_bodyTextColorOnRegularColor;
    UIColor *_bodyTextColorOnDarkerColor;
    UIColor *_bodyTextColorOnAccentColor;
    UIColor *_bodyTextColorOnBrightAccentColor;
    UIColor *_lightBodyTextColor;
    UIColor *_buttonBackgroundColor;
    UIColor *_buttonDisabledBackgroundColorDark;
    UIColor *_buttonDisabledBackgroundColorLight;
    UIColor *_buttonActionTextColor;
    UIColor *_buttonTextColor;
    UIColor *_buttonInkColor;
}

+ (double)minContrastRatioForOptions:(unsigned long long)arg1;
+ (id)exceptionColorFromChoices:(id)arg1 onColor:(id)arg2 options:(unsigned long long)arg3;
+ (id)bodyTextColorOnBackgroundImage:(id)arg1 inRegion:(struct CGRect)arg2 withFont:(id)arg3;
+ (id)bodyTextColorOnBackgroundImage:(id)arg1 withFont:(id)arg2;
+ (id)bodyTextColorOnColor:(id)arg1 withFont:(id)arg2;
+ (_Bool)supportsSecureCoding;
+ (double)minAlphaOfColor:(id)arg1 onColor:(id)arg2 options:(unsigned long long)arg3;
+ (double)luminanceOfColor:(id)arg1;
+ (id)textColorOnColor:(id)arg1 textAlpha:(double)arg2 font:(id)arg3;
+ (id)textColorOnColor:(id)arg1 textAlpha:(double)arg2 options:(unsigned long long)arg3;
+ (id)textColorFromChoices:(id)arg1 onColor:(id)arg2 options:(unsigned long long)arg3;
+ (double)contrastRatioForColor:(id)arg1 onColor:(id)arg2;
+ (id)colorWithRGBA:(CDStruct_d2b197d1)arg1;
+ (_Bool)colorToneIsAccent:(long long)arg1;
+ (_Bool)colorToneIsTint:(long long)arg1;
+ (id)colorGroupFromTargetColor:(id)arg1 checkStandardGroups:(_Bool)arg2;
+ (id)colorGroupFromTargetColor:(id)arg1;
+ (id)colorGroupWithName:(id)arg1;
+ (id)colorGroupWithID:(long long)arg1;
+ (id)clearColors;
+ (id)googleYellowColors;
+ (id)googleGreenColors;
+ (id)googleRedColors;
+ (id)googleBlueColors;
+ (id)greyColors;
+ (id)whiteColors;
+ (void)initialize;
@property(readonly, nonatomic) UIColor *buttonInkColor; // @synthesize buttonInkColor=_buttonInkColor;
@property(readonly, nonatomic) UIColor *buttonTextColor; // @synthesize buttonTextColor=_buttonTextColor;
@property(readonly, nonatomic) UIColor *buttonActionTextColor; // @synthesize buttonActionTextColor=_buttonActionTextColor;
@property(readonly, nonatomic) UIColor *buttonDisabledBackgroundColorLight; // @synthesize buttonDisabledBackgroundColorLight=_buttonDisabledBackgroundColorLight;
@property(readonly, nonatomic) UIColor *buttonDisabledBackgroundColorDark; // @synthesize buttonDisabledBackgroundColorDark=_buttonDisabledBackgroundColorDark;
@property(readonly, nonatomic) UIColor *buttonBackgroundColor; // @synthesize buttonBackgroundColor=_buttonBackgroundColor;
@property(readonly, nonatomic) UIColor *lightBodyTextColor; // @synthesize lightBodyTextColor=_lightBodyTextColor;
@property(readonly, nonatomic) UIColor *bodyTextColorOnBrightAccentColor; // @synthesize bodyTextColorOnBrightAccentColor=_bodyTextColorOnBrightAccentColor;
@property(readonly, nonatomic) UIColor *bodyTextColorOnAccentColor; // @synthesize bodyTextColorOnAccentColor=_bodyTextColorOnAccentColor;
@property(readonly, nonatomic) UIColor *bodyTextColorOnDarkerColor; // @synthesize bodyTextColorOnDarkerColor=_bodyTextColorOnDarkerColor;
@property(readonly, nonatomic) UIColor *bodyTextColorOnRegularColor; // @synthesize bodyTextColorOnRegularColor=_bodyTextColorOnRegularColor;
@property(readonly, nonatomic) UIColor *bodyTextColorOnLighterColor; // @synthesize bodyTextColorOnLighterColor=_bodyTextColorOnLighterColor;
@property(readonly, nonatomic) UIColor *bodyTextColorOnLightestColor; // @synthesize bodyTextColorOnLightestColor=_bodyTextColorOnLightestColor;
@property(readonly, nonatomic) UIColor *bodyTextColor; // @synthesize bodyTextColor=_bodyTextColor;
@property(readonly, nonatomic) long long groupID; // @synthesize groupID=_groupID;
- (void).cxx_destruct;
- (void)initBodyTextColors;
- (void)initButtonColors;
- (_Bool)hasAccentColors;
- (id)colorWithTone:(long long)arg1;
- (id)lightBodyTextColorOnColor:(id)arg1 withFont:(id)arg2;
- (id)lightBodyTextColorOnTone:(long long)arg1 withFont:(id)arg2;
- (id)bodyTextColorOnTone:(long long)arg1 withFont:(id)arg2;
- (id)bodyTextColorOnDarkerColorWithFont:(id)arg1;
- (id)bodyTextColorOnRegularColorWithFont:(id)arg1;
- (id)bodyTextColorOnLighterColorWithFont:(id)arg1;
- (id)bodyTextColorOnLightestColorWithFont:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
@property(readonly, nonatomic) NSString *name;
@property(readonly, nonatomic) UIColor *statusBarColor;
@property(readonly, nonatomic) UIColor *brightAccentColor;
@property(readonly, nonatomic) UIColor *accentColor;
@property(readonly, nonatomic) UIColor *darkerColor;
@property(readonly, nonatomic) UIColor *regularColor;
@property(readonly, nonatomic) UIColor *lighterColor;
@property(readonly, nonatomic) UIColor *lightestColor;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (void)dealloc;
- (id)initWithName:(id)arg1;
- (id)initWithGroupID:(long long)arg1 tones:(const CDStruct_d2b197d1 *)arg2 numTones:(unsigned long long)arg3;
- (id)initWithTargetColor:(id)arg1 checkStandardGroups:(_Bool)arg2;
- (id)initWithPredefinedColorGroupID:(long long)arg1;
- (id)init;

@end


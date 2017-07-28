//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIControl.h"

#import "UIKeyInput.h"
#import "UITextInputTraits.h"

@class NSMutableArray, NSString, UIColor, UIFont, UIImage, UIView;

@interface CHDigitInput : UIControl <UITextInputTraits, UIKeyInput>
{
    long long currentIndex;
    NSMutableArray *digitViews;
    NSMutableArray *bgImageViews;
    _Bool _matchNumberOfDigitsWithValueLength;
    long long _value;
    long long _numberOfDigits;
    NSString *_placeHolderCharacter;
    double _digitPadding;
    UIView *_backgroundView;
    UIImage *_digitOverlayImage;
    UIImage *_digitBackgroundImage;
    UIColor *_backgroundColor;
    UIColor *_highlightedBackgroundColor;
    UIColor *_digitViewBackgroundColor;
    UIColor *_digitViewHighlightedBackgroundColor;
    UIColor *_digitViewTextColor;
    UIColor *_digitViewHighlightedTextColor;
    UIFont *_digitViewFont;
    UIColor *_digitViewShadowColor;
    UIColor *_digitViewHighlightedShadowColor;
    NSString *_activeString;
    struct CGSize _digitViewShadowOffset;
    struct CGSize _digitViewHighlightedShadowOffset;
}

@property(retain) NSString *activeString; // @synthesize activeString=_activeString;
@property(nonatomic) struct CGSize digitViewHighlightedShadowOffset; // @synthesize digitViewHighlightedShadowOffset=_digitViewHighlightedShadowOffset;
@property(retain, nonatomic) UIColor *digitViewHighlightedShadowColor; // @synthesize digitViewHighlightedShadowColor=_digitViewHighlightedShadowColor;
@property(nonatomic) struct CGSize digitViewShadowOffset; // @synthesize digitViewShadowOffset=_digitViewShadowOffset;
@property(retain, nonatomic) UIColor *digitViewShadowColor; // @synthesize digitViewShadowColor=_digitViewShadowColor;
@property(retain, nonatomic) UIFont *digitViewFont; // @synthesize digitViewFont=_digitViewFont;
@property(retain, nonatomic) UIColor *digitViewHighlightedTextColor; // @synthesize digitViewHighlightedTextColor=_digitViewHighlightedTextColor;
@property(retain, nonatomic) UIColor *digitViewTextColor; // @synthesize digitViewTextColor=_digitViewTextColor;
@property(retain, nonatomic) UIColor *digitViewHighlightedBackgroundColor; // @synthesize digitViewHighlightedBackgroundColor=_digitViewHighlightedBackgroundColor;
@property(retain, nonatomic) UIColor *digitViewBackgroundColor; // @synthesize digitViewBackgroundColor=_digitViewBackgroundColor;
@property(retain, nonatomic) UIColor *highlightedBackgroundColor; // @synthesize highlightedBackgroundColor=_highlightedBackgroundColor;
@property(retain, nonatomic) UIColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property(retain, nonatomic) UIImage *digitBackgroundImage; // @synthesize digitBackgroundImage=_digitBackgroundImage;
@property(retain, nonatomic) UIImage *digitOverlayImage; // @synthesize digitOverlayImage=_digitOverlayImage;
@property(retain, nonatomic) UIView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(nonatomic) double digitPadding; // @synthesize digitPadding=_digitPadding;
@property(retain, nonatomic) NSString *placeHolderCharacter; // @synthesize placeHolderCharacter=_placeHolderCharacter;
@property(nonatomic) long long numberOfDigits; // @synthesize numberOfDigits=_numberOfDigits;
@property(nonatomic) _Bool matchNumberOfDigitsWithValueLength; // @synthesize matchNumberOfDigitsWithValueLength=_matchNumberOfDigitsWithValueLength;
@property(nonatomic) long long value; // @synthesize value=_value;
- (void).cxx_destruct;
- (void)setHighlighted:(_Bool)arg1;
- (void)setEnabled:(_Bool)arg1;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (_Bool)resignFirstResponder;
- (_Bool)canBecomeFirstResponder;
- (void)layoutSubviews;
@property(nonatomic) long long keyboardAppearance;
@property(nonatomic) long long keyboardType;
@property(readonly, nonatomic) _Bool hasText;
- (void)deleteAll;
- (void)deleteBackward;
- (void)insertText:(id)arg1;
- (void)setText:(id)arg1 ForIndex:(long long)arg2;
- (void)unhighlightAll;
- (void)highlightIndex:(long long)arg1;
- (void)setupDigitViews;
- (void)redrawControl;
- (id)initWithNumberOfDigits:(long long)arg1;
- (id)init;

// Remaining properties
@property(nonatomic) long long autocapitalizationType;
@property(nonatomic) long long autocorrectionType;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(nonatomic) _Bool enablesReturnKeyAutomatically;
@property(readonly) unsigned long long hash;
@property(nonatomic) long long returnKeyType;
@property(nonatomic, getter=isSecureTextEntry) _Bool secureTextEntry;
@property(nonatomic) long long spellCheckingType;
@property(readonly) Class superclass;
@property(copy, nonatomic) NSString *textContentType;

@end


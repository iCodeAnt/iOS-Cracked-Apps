//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "NMCustomTruncatingLabelProtocol.h"

@class NSString, UIColor, UIFont, UILabel;

@interface NMCustomTruncatingLabel : UIView <NMCustomTruncatingLabelProtocol>
{
    UILabel *_headLabel;
    UILabel *_tailLabel;
    NSString *_text;
    UIFont *_font;
    UIColor *_textColor;
    UIColor *_shadowColor;
    long long _textAlignment;
    unsigned long long _numberOfLines;
    long long _lineBreakMode;
    NSString *_headText;
    NSString *_tailText;
    double _minHeadWidth;
    struct CGSize _shadowOffset;
}

@property(nonatomic) double minHeadWidth; // @synthesize minHeadWidth=_minHeadWidth;
@property(retain, nonatomic) NSString *tailText; // @synthesize tailText=_tailText;
@property(retain, nonatomic) NSString *headText; // @synthesize headText=_headText;
@property(nonatomic) long long lineBreakMode; // @synthesize lineBreakMode=_lineBreakMode;
@property(nonatomic) unsigned long long numberOfLines; // @synthesize numberOfLines=_numberOfLines;
@property(nonatomic) long long textAlignment; // @synthesize textAlignment=_textAlignment;
@property(retain, nonatomic) UIColor *shadowColor; // @synthesize shadowColor=_shadowColor;
@property(nonatomic) struct CGSize shadowOffset; // @synthesize shadowOffset=_shadowOffset;
@property(retain, nonatomic) UIColor *textColor; // @synthesize textColor=_textColor;
@property(retain, nonatomic) UIFont *font; // @synthesize font=_font;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;
@property(retain, nonatomic) NSString *text; // @synthesize text=_text;
- (void)setBackgroundColor:(id)arg1;
@property(retain, nonatomic) UIColor *tailTextColor;
@property(retain, nonatomic) UIColor *headTextColor;
@property(retain, nonatomic) UIFont *tailFont;
@property(retain, nonatomic) UIFont *headFont;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


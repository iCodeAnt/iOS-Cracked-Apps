//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSString, UIColor;

@interface IQPopUp : UIView
{
    int popWidth;
    UIColor *popUpColor;
    NSString *_strMsg;
    struct CGRect showOnRect;
    struct CGRect fieldFrame;
}

@property(copy, nonatomic) NSString *strMsg; // @synthesize strMsg=_strMsg;
@property(retain, nonatomic) UIColor *popUpColor; // @synthesize popUpColor;
@property(nonatomic) struct CGRect fieldFrame; // @synthesize fieldFrame;
@property(nonatomic) int popWidth; // @synthesize popWidth;
@property(nonatomic) struct CGRect showOnRect; // @synthesize showOnRect;
- (void).cxx_destruct;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)drawRect:(struct CGRect)arg1;

@end


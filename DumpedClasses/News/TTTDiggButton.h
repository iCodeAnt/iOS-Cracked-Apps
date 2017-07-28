//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TTAlphaThemedButton.h"

@interface TTTDiggButton : TTAlphaThemedButton
{
    _Bool _digged;
    CDUnknownBlockType _shouldClickBlock;
    CDUnknownBlockType _buttonClickBlock;
    CDUnknownBlockType _diggCountBlock;
}

+ (id)setDefaultPropertyForDigButton:(id)arg1;
+ (id)buttonWithType:(long long)arg1;
@property(copy, nonatomic) CDUnknownBlockType diggCountBlock; // @synthesize diggCountBlock=_diggCountBlock;
@property(copy, nonatomic) CDUnknownBlockType buttonClickBlock; // @synthesize buttonClickBlock=_buttonClickBlock;
@property(nonatomic, getter=hasDigged) _Bool digged; // @synthesize digged=_digged;
@property(copy, nonatomic) CDUnknownBlockType shouldClickBlock; // @synthesize shouldClickBlock=_shouldClickBlock;
- (void).cxx_destruct;
- (void)buttonClicked;
- (void)setDiggCount:(long long)arg1;
- (id)init;

@end

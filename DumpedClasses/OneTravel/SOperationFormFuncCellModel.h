//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SOperationFormCellModel.h"

@class NSString, UIImage;

@interface SOperationFormFuncCellModel : SOperationFormCellModel
{
    _Bool _bracketHighlighted;
    _Bool _oneLineTitle;
    _Bool _selected;
    long long _funcStyle;
    UIImage *_icon;
    NSString *_title;
    NSString *_content;
}

@property(nonatomic) _Bool selected; // @synthesize selected=_selected;
@property(nonatomic) _Bool oneLineTitle; // @synthesize oneLineTitle=_oneLineTitle;
@property(nonatomic) _Bool bracketHighlighted; // @synthesize bracketHighlighted=_bracketHighlighted;
@property(retain, nonatomic) NSString *content; // @synthesize content=_content;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) UIImage *icon; // @synthesize icon=_icon;
@property(nonatomic) long long funcStyle; // @synthesize funcStyle=_funcStyle;
- (void).cxx_destruct;
- (double)height;
- (id)init;

@end

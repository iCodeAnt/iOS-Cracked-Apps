//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FALCBaseChatCell.h"

@class FAOHAttributedLabel, NSDictionary, UILabel;

@interface FALCChatSystemMsgCell : FALCBaseChatCell
{
    _Bool _isNotice;
    UILabel *_titleLabel;
    FAOHAttributedLabel *_msgLabel;
    NSDictionary *_msgDic;
}

+ (id)cmd618:(id)arg1;
+ (id)cmd802:(id)arg1;
+ (id)cmd801:(id)arg1;
+ (id)cmd702:(id)arg1;
+ (id)cmd613:(id)arg1;
+ (id)cmd612:(id)arg1;
+ (id)cmd611:(id)arg1;
+ (id)cmd608:(id)arg1;
+ (id)cmd606:(id)arg1;
+ (id)cmd601:(id)arg1;
+ (id)cmd332:(id)arg1;
+ (id)cmd337:(id)arg1;
+ (id)cmd336:(id)arg1;
+ (id)cmd331:(id)arg1;
+ (id)cmd322:(id)arg1;
+ (id)cmd321:(id)arg1;
+ (id)cmd100:(id)arg1;
+ (id)getContent:(id)arg1;
+ (double)styleCellHeightOfMsg:(id)arg1;
+ (double)cellHeightOfMsg:(id)arg1;
@property(nonatomic) _Bool isNotice; // @synthesize isNotice=_isNotice;
@property(retain, nonatomic) NSDictionary *msgDic; // @synthesize msgDic=_msgDic;
@property(retain, nonatomic) FAOHAttributedLabel *msgLabel; // @synthesize msgLabel=_msgLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void).cxx_destruct;
- (void)updateTitle:(id)arg1 content:(id)arg2;
- (void)updateView;
- (void)updateSubViewFrame;
- (void)layoutSubviews;
- (void)setMessage:(id)arg1;
- (void)changeClearStyle;
- (void)initView;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end


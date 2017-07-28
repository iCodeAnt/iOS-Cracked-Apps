//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIButton;

@interface MBKMyBikeButtonPanel : UIView
{
    UIButton *_shareButton;
    UIButton *_exchangeButton;
    id <MBKMyBikeButtonPanelDelegate> _delegate;
}

@property(nonatomic) __weak id <MBKMyBikeButtonPanelDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak UIButton *exchangeButton; // @synthesize exchangeButton=_exchangeButton;
@property(nonatomic) __weak UIButton *shareButton; // @synthesize shareButton=_shareButton;
- (void).cxx_destruct;
- (void)onTapExchangeButton:(id)arg1;
- (void)onTapShareButton:(id)arg1;
- (void)awakeFromNib;

@end


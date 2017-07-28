//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PersonalInfoBaseCell.h"

@class NSArray, NSMutableArray;

@interface PersonalInfoFocusCell : PersonalInfoBaseCell
{
    id <PersonalInfoCenterActionDelegate> _delegate;
    NSArray *_focusAnchor;
    NSMutableArray *_imageViews;
}

+ (double)cellHeight;
@property(retain, nonatomic) NSMutableArray *imageViews; // @synthesize imageViews=_imageViews;
@property(retain, nonatomic) NSArray *focusAnchor; // @synthesize focusAnchor=_focusAnchor;
@property(nonatomic) __weak id <PersonalInfoCenterActionDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)photoClickAction:(id)arg1;
- (void)createViews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

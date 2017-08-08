//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FBSharedFramework/CKCompositeComponent.h>

@class NSAttributedString;

@interface FBGraphSearchExpandableTextComponent : CKCompositeComponent
{
    NSAttributedString *_attributedString;
    unsigned long long _state;
    CKTypedComponentAction_4b39899e _seeMoreAction;
    struct FBGraphSearchExpandableComponentStyle _style;
}

+ (id)newWithAttributedString:(id)arg1 style:(const struct FBGraphSearchExpandableComponentStyle *)arg2 seeMoreAction:(CKTypedComponentAction_4b39899e)arg3;
@property(readonly, nonatomic) unsigned long long state; // @synthesize state=_state;
@property(readonly, nonatomic) CKTypedComponentAction_4b39899e seeMoreAction; // @synthesize seeMoreAction=_seeMoreAction;
@property(readonly, nonatomic) struct FBGraphSearchExpandableComponentStyle style; // @synthesize style=_style;
@property(readonly, copy, nonatomic) NSAttributedString *attributedString; // @synthesize attributedString=_attributedString;
- (id).cxx_construct;
- (void).cxx_destruct;
- (struct CKComponentBoundsAnimation)boundsAnimationFromPreviousComponent:(id)arg1;
- (void)didTapSeeMore:(id)arg1;

@end

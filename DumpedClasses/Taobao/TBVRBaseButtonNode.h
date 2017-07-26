//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "VUINode.h"

@class NSMutableArray, TBVRUIManager, VUIAnimationGroup, VUIDillyNode, VUIPropertiesAnimation, VUIWaterNode;

@interface TBVRBaseButtonNode : VUINode
{
    double _mFocusEnterSecond;
    NSMutableArray *touchEventTargets;
    NSMutableArray *touchDownEventTargets;
    NSMutableArray *touchUpEventTargets;
    NSMutableArray *selectEventTargets;
    NSMutableArray *focusEnterTargets;
    NSMutableArray *focusMoveTargets;
    NSMutableArray *focusLeaveTargets;
    float scaleFactor;
    VUIAnimationGroup *enterGroup;
    VUIAnimationGroup *leaveGroup;
    _Bool _needsApplyAbstrator;
    int _waterColor;
    int _waterDuration;
    TBVRUIManager *_manager;
    VUIDillyNode *_textureNode;
    VUIWaterNode *_waterNode;
    long long _type;
    VUIPropertiesAnimation *_waterAnimation;
}

@property(retain, nonatomic) VUIPropertiesAnimation *waterAnimation; // @synthesize waterAnimation=_waterAnimation;
@property(nonatomic) _Bool needsApplyAbstrator; // @synthesize needsApplyAbstrator=_needsApplyAbstrator;
@property(nonatomic) int waterDuration; // @synthesize waterDuration=_waterDuration;
@property(nonatomic) int waterColor; // @synthesize waterColor=_waterColor;
@property(nonatomic) long long type; // @synthesize type=_type;
@property(retain, nonatomic) VUIWaterNode *waterNode; // @synthesize waterNode=_waterNode;
@property(retain, nonatomic) VUIDillyNode *textureNode; // @synthesize textureNode=_textureNode;
@property(nonatomic) __weak TBVRUIManager *manager; // @synthesize manager=_manager;
- (void).cxx_destruct;
- (void)onCardboardTap;
- (void)onTouchUp;
- (void)onTouchDown;
- (void)onTap;
- (void)invokeEvent:(long long)arg1;
- (void)addTarget:(id)arg1 action:(SEL)arg2 forControlEvents:(long long)arg3;
- (void)touchEvent:(id)arg1;
- (void)dealloc;
- (void)onRelease;
- (void)setMReceiveFocusEvent:(_Bool)arg1;
- (_Bool)onFocusEvent:(id)arg1;
- (id)getAbsTranslation;
- (void)setTexture:(id)arg1 forState:(long long)arg2;
- (void)setWaterMaskTexture:(id)arg1;
- (void)updateFocusAnimation;
- (void)setMTag:(id)arg1;
- (void)removeWaterNode;
- (void)addWaterNode;
- (void)initChild;
- (void)handleSplitNotification:(id)arg1;
- (id)initWithGeometry:(id)arg1 manager:(id)arg2 scaleFactor:(float)arg3;
- (id)initWithGeometry:(id)arg1 manager:(id)arg2;

@end

//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FBSharedFramework/NTNativeTemplateComponent.h>

@class FBFeedToolbox, FBMemFeedStory, FBMemFeedback, FBNativeTemplateContext, NSDictionary;
@protocol NTAction;

@interface FBNativeTemplateUFIComponent2 : NTNativeTemplateComponent
{
    NSDictionary *_genericHelpers;
    id <NTAction> _shareAction;
    FBFeedToolbox *_toolbox;
    FBNativeTemplateContext *_context;
    FBMemFeedback *_feedback;
    FBMemFeedStory *_story;
}

+ (id)newWithModel:(id)arg1 context:(id)arg2;
@property(readonly, nonatomic) FBMemFeedStory *story; // @synthesize story=_story;
@property(readonly, nonatomic) FBMemFeedback *feedback; // @synthesize feedback=_feedback;
@property(readonly, nonatomic) FBNativeTemplateContext *context; // @synthesize context=_context;
- (void).cxx_destruct;
- (void)didTapView;
- (void)countButtonTapped:(id)arg1 button:(id)arg2;
- (void)shareButtonTapped:(id)arg1 button:(id)arg2;

@end

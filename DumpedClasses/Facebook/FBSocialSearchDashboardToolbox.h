//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FBSharedFramework/FBSectionComponentFeedToolbox.h>

@class FBInlineComposerComponentToolbox, FBRootGraphQLQuerySectionComponentListenerAnnouncer;

@interface FBSocialSearchDashboardToolbox : FBSectionComponentFeedToolbox
{
    FBRootGraphQLQuerySectionComponentListenerAnnouncer *_rootGQLAnnouncer;
    FBInlineComposerComponentToolbox *_composerToolbox;
}

@property(readonly, nonatomic) FBInlineComposerComponentToolbox *composerToolbox; // @synthesize composerToolbox=_composerToolbox;
@property(readonly, nonatomic) FBRootGraphQLQuerySectionComponentListenerAnnouncer *rootGQLAnnouncer; // @synthesize rootGQLAnnouncer=_rootGQLAnnouncer;
- (void).cxx_destruct;
- (id)initWithContext:(id)arg1;

@end

//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "FBComposerCompositionStateChangedListener-Protocol.h"

@class FBComposerPublicationHandlerConfiguration;
@protocol FBComposerPublicationHandlingDelegate;

@protocol FBComposerPublicationHandling <FBComposerCompositionStateChangedListener>
@property(nonatomic) __weak id <FBComposerPublicationHandlingDelegate> delegate;
- (void)publishWithConfiguration:(FBComposerPublicationHandlerConfiguration *)arg1;
- (void)tryToPublishWithConfiguration:(FBComposerPublicationHandlerConfiguration *)arg1;
@end


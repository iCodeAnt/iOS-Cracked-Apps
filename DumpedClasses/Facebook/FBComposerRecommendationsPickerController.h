//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "FBComposerPickerController-Protocol.h"
#import "FBPlacePickerViewControllerDelegate-Protocol.h"

@class FBPlacePickerV2ViewController, FBUserSession, NSString;
@protocol FBComposerUpdateHandler;

@interface FBComposerRecommendationsPickerController : NSObject <FBPlacePickerViewControllerDelegate, FBComposerPickerController>
{
    FBPlacePickerV2ViewController *_placePickerController;
    FBUserSession *_session;
    id <FBComposerUpdateHandler> _updateHandler;
}

- (void).cxx_destruct;
- (void)placePickerDidRemoveCurrentPlace:(id)arg1;
- (_Bool)placePickerDidCancel:(id)arg1;
- (void)placePicker:(id)arg1 didFinishWithFreeString:(id)arg2;
- (void)placePicker:(id)arg1 didFinishWithPlace:(id)arg2 location:(id)arg3 suggestedPhoto:(_Bool)arg4;
- (void)popoverWantsPickerToCloseItself;
- (struct CGSize)popoverContentSizeForOrientation:(long long)arg1;
- (unsigned long long)popoverStyle;
- (id)presentableViewControllerWithNavigationPayload:(id)arg1;
- (void)dealloc;
- (id)initWithSession:(id)arg1 updateHandler:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


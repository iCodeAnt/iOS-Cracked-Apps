//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FBSharedFramework/CKCompositeComponent.h>

@class NSArray;

@interface FBLiveMapHScrollComponent : CKCompositeComponent
{
    NSArray *_videos;
    CKTypedComponentAction_4b39899e _hScrollAction;
}

+ (id)newWithVideos:(id)arg1 imageDownloader:(id)arg2 scenePath:(id)arg3 toolbox:(id)arg4 hScrollAction:(CKTypedComponentAction_4b39899e)arg5 cardMoreAction:(CKTypedComponentAction_4b39899e)arg6;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)component:(id)arg1 scrollViewDidScroll:(id)arg2;

@end

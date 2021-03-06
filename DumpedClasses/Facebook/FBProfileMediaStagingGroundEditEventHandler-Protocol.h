//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class FBMediaPickerDataSourceManager, FBUserSession, UIImage;
@protocol FBMediaAttachmentProtocol, FBProfilePictureStagingGroundLoggerProtocol;

@protocol FBProfileMediaStagingGroundEditEventHandler <NSObject>
- (void)resetCropInfo;
- (UIImage *)updateEditInfoToResImage:(UIImage *)arg1;
- (void)handleEditButtonTapEvent:(id <FBMediaAttachmentProtocol>)arg1 mediaDataSourceManager:(FBMediaPickerDataSourceManager *)arg2 originalImageToEdit:(UIImage *)arg3 frameImage:(UIImage *)arg4 userSession:(FBUserSession *)arg5 logger:(id <FBProfilePictureStagingGroundLoggerProtocol>)arg6 underlayEnabled:(_Bool)arg7;
@end


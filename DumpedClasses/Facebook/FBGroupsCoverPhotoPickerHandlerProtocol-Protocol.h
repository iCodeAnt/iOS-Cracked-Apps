//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class FBUserSession, NSString;
@protocol FBGroupsCoverPhotoPickerHandlerDelegate, FBNavigationCoordinator;

@protocol FBGroupsCoverPhotoPickerHandlerProtocol
+ (id)new;
@property(nonatomic) __weak id <FBGroupsCoverPhotoPickerHandlerDelegate> delegate;
- (void)handleCoverPhotoChangeRequestForGroupID:(NSString *)arg1 navigationCoordinator:(id <FBNavigationCoordinator>)arg2;
- (id)initWithSession:(FBUserSession *)arg1;
- (id)init;
@end

//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSString, NSURL, UIImage, UITextView;

@protocol TTIMMessageInputViewDelegate <NSObject>

@optional
- (void)ttimMessageInputViewCameraDidBackWithURL:(NSURL *)arg1 isVideo:(_Bool)arg2 previewImage:(UIImage *)arg3;
- (void)ttimMessageInputViewAlbumPhotosDidPicked:(NSArray *)arg1 sourceAssets:(NSArray *)arg2 isSelectOriginalPhoto:(_Bool)arg3;
- (void)ttimMessageInputViewTextDidSend:(NSString *)arg1;
- (void)ttimMessageInputViewTextDidChange:(UITextView *)arg1;
- (void)ttimMessageInputViewTextDidBeginEditing:(UITextView *)arg1;
@end


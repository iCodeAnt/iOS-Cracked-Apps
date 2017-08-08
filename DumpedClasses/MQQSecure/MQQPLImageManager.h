//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class PHImageManager;

@interface MQQPLImageManager : NSObject
{
    PHImageManager *_PHImageManager;
}

+ (id)defaultManager;
@property(readonly, nonatomic) PHImageManager *PHImageManager; // @synthesize PHImageManager=_PHImageManager;
- (int)requestExportSessionForVideo:(id)arg1 options:(id)arg2 exportPreset:(id)arg3 resultHandler:(CDUnknownBlockType)arg4;
- (void)cancelImageRequest:(int)arg1;
- (int)requestImageDataForAsset:(id)arg1 options:(id)arg2 resultHandler:(CDUnknownBlockType)arg3;
- (int)requestImageForAsset:(id)arg1 targetSize:(struct CGSize)arg2 contentMode:(long long)arg3 options:(id)arg4 resultHandler:(CDUnknownBlockType)arg5;
- (void)dealloc;
- (id)init;
- (int)AL_requestImageDataForAsset:(id)arg1 version:(long long)arg2 resultHandler:(CDUnknownBlockType)arg3;
- (int)AL_requestImageForAsset:(id)arg1 targetSize:(struct CGSize)arg2 version:(long long)arg3 resultHandler:(CDUnknownBlockType)arg4;
- (int)PH_requestExportSessionForVideo:(id)arg1 options:(id)arg2 exportPreset:(id)arg3 resultHandler:(CDUnknownBlockType)arg4;
- (void)PH_cancelImageRequest:(int)arg1;
- (int)PH_requestImageDataForAsset:(id)arg1 options:(id)arg2 resultHandler:(CDUnknownBlockType)arg3;
- (int)PH_requestImageForAsset:(id)arg1 targetSize:(struct CGSize)arg2 contentMode:(long long)arg3 options:(id)arg4 resultHandler:(CDUnknownBlockType)arg5;

@end

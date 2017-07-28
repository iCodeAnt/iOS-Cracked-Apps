//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface UMShareObject : NSObject
{
    NSString *_title;
    NSString *_descr;
    id _thumbImage;
}

+ (void)um_imageDataWithImage:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
+ (void)um_waterMarkWithLocalImage:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
+ (void)doum_imageDataWithLocalImage:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
+ (void)um_imageDataWithImage:(id)arg1 completion:(CDUnknownBlockType)arg2;
+ (id)shareObjectWithTitle:(id)arg1 descr:(id)arg2 thumImage:(id)arg3;
@property(retain, nonatomic) id thumbImage; // @synthesize thumbImage=_thumbImage;
@property(copy, nonatomic) NSString *descr; // @synthesize descr=_descr;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (id)getImageData;

@end


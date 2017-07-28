//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSMutableArray, NSString, UIColor, UIImage, UIWindow;

@protocol GrowingNode <NSObject>
- (id <GrowingNodeAsyncNativeHandler>)growingNodeAsyncNativeHandler;
- (id)growingNodeAttribute:(NSString *)arg1 forChild:(id <GrowingNode>)arg2;
- (id)growingNodeAttribute:(NSString *)arg1;
- (UIImage *)growingNodeScreenShotWithScale:(double)arg1;
- (UIImage *)growingNodeScreenShot:(UIImage *)arg1;
- (struct CGRect)growingNodeFrame;
- (void)growingNodeHighLight:(_Bool)arg1 withBorderColor:(UIColor *)arg2 andBackgroundColor:(UIColor *)arg3;
- (id <GrowingNode>)growingNodeAttachedInfoNode;
- (UIWindow *)growingNodeWindow;
- (NSDictionary *)growingNodeDataDict;
- (NSString *)growingNodeContent;
- (NSString *)growingNodeName;
- (_Bool)growingNodeUserInteraction;
- (_Bool)growingNodeDonotCircle;
- (_Bool)growingNodeDonotTrack;
- (id <GrowingNode>)growingNodeParent;
- (void)growingNodeOutChilds:(NSMutableArray *)arg1 outPaths:(NSMutableArray *)arg2 filterChildNode:(id <GrowingNode>)arg3;
- (void)growingNodeOutContainerChilds:(NSMutableArray *)arg1 outPaths:(NSMutableArray *)arg2 filterChildNode:(id <GrowingNode>)arg3;

@optional
- (unsigned long long)growingNodeEligibleEventCategory;
@end


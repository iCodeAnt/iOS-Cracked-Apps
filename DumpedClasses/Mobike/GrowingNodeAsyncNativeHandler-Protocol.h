//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray;

@protocol GrowingNodeAsyncNativeHandler <NSObject>
- (void)getPageInfoWithCallback:(void (^)(NSDictionary *))arg1;
- (void)setCircledTags:(NSArray *)arg1 onFinish:(void (^)(void))arg2;
- (_Bool)isResponsive;
- (void)setLastPoint:(struct CGPoint)arg1;
- (void)getAllNode:(void (^)(NSArray *, NSDictionary *))arg1;
- (void)impressAllChildren;
- (void)cancelHighlight;
- (void)findNodeAtPoint:(struct CGPoint)arg1 withCallback:(void (^)(NSArray *, NSDictionary *))arg2;
- (void)highlightElementAtPoint:(struct CGPoint)arg1;
- (void)refreshContext;
@end


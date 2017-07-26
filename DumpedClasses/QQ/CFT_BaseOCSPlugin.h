//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "BaseSingleton.h"

@class CFT_UILoadingView;

@interface CFT_BaseOCSPlugin : BaseSingleton
{
    CDUnknownBlockType _failBlock;
    CFT_UILoadingView *_loadingview;
}

+ (_Bool)isNewOcsPack:(id)arg1;
+ (void)invokeOcsPluginBid:(id)arg1 successBlock:(CDUnknownBlockType)arg2 failedBlock:(CDUnknownBlockType)arg3;
+ (void)invokeOcsPluginLoadviewBid:(id)arg1 loadView:(id)arg2 showLoadSelector:(id)arg3 successBlock:(CDUnknownBlockType)arg4 failedBlock:(CDUnknownBlockType)arg5;
+ (void)invokeOcsPluginLoadview:(id)arg1 showLoadSelector:(id)arg2 successBlock:(CDUnknownBlockType)arg3 failedBlock:(CDUnknownBlockType)arg4;
+ (void)removeLoadingview;
@property(retain, nonatomic) CFT_UILoadingView *loadingview; // @synthesize loadingview=_loadingview;
@property(copy, nonatomic) CDUnknownBlockType failBlock; // @synthesize failBlock=_failBlock;
- (void)dealloc;
- (id)init;

@end

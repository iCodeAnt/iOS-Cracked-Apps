//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSCache, NSOperationQueue;

@interface KGLocalSingerManage : NSObject
{
    NSCache *_singerCache;
    NSOperationQueue *_loadDataQueue;
    CDUnknownBlockType _callBack;
}

+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)sharedSingleton;
@property(copy, nonatomic) CDUnknownBlockType callBack; // @synthesize callBack=_callBack;
@property(retain, nonatomic) NSOperationQueue *loadDataQueue; // @synthesize loadDataQueue=_loadDataQueue;
@property(readonly, nonatomic) NSCache *singerCache; // @synthesize singerCache=_singerCache;
- (void).cxx_destruct;
- (long long)samplingNum;
- (_Bool)isVaild;
- (void)handleSingerName:(id)arg1 andHeadPicUrl:(id)arg2 andSingerID:(id)arg3 andIsKugouSinger:(_Bool)arg4;
- (id)createSingerArray:(id)arg1 index:(long long)arg2 count:(long long)arg3;
- (_Bool)getSingerDataWithSingernames:(id)arg1;
- (void)updateLocalSingerWithSuccessBlock:(CDUnknownBlockType)arg1;
- (void)p_loadDataOperationWith:(id)arg1;
- (void)initAllData;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end

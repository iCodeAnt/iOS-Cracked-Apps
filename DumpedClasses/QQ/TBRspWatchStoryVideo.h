//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBRspGeneralModel.h"

@class TBStoryVideoDesModel;

@interface TBRspWatchStoryVideo : TBRspGeneralModel
{
    unsigned int _unreadCount;
    TBStoryVideoDesModel *_videoDes;
}

@property(nonatomic) unsigned int unreadCount; // @synthesize unreadCount=_unreadCount;
@property(retain, nonatomic) TBStoryVideoDesModel *videoDes; // @synthesize videoDes=_videoDes;
- (_Bool)parsePBData:(char *)arg1 withLength:(int)arg2;
- (void)dealloc;

@end

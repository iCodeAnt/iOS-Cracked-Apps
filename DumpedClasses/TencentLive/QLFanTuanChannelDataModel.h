//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QLPageDataBaseModel.h"

@class MoabCache, NSString;

@interface QLFanTuanChannelDataModel : QLPageDataBaseModel
{
    MoabCache *_cahce;
    NSString *_channelID;
}

@property(retain, nonatomic) NSString *channelID; // @synthesize channelID=_channelID;
- (void).cxx_destruct;
- (void)request:(id)arg1 didFailLoadWithError:(id)arg2;
- (void)requestDidFinishLoad:(id)arg1;
- (void)processResponce:(id)arg1 isCache:(_Bool)arg2;
- (void)load:(int)arg1 more:(_Bool)arg2;
- (id)initWithChannelID:(id)arg1;

@end

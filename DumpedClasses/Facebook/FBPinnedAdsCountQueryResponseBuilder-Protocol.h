//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "FBFragmentModelBuilderProtocol-Protocol.h"

@protocol FBPinnedAdsCountQueryResponse, FBPinnedAdsCountQuery_viewerResponse;

@protocol FBPinnedAdsCountQueryResponseBuilder <FBFragmentModelBuilderProtocol>
- (id)setViewer:(id <FBPinnedAdsCountQuery_viewerResponse>)arg1;
- (id <FBPinnedAdsCountQueryResponse>)getResult;
@end

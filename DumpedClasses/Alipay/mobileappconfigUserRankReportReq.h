//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSString;

@interface mobileappconfigUserRankReportReq : NSObject
{
    NSString *_platform;
    NSArray *_userStageRankList;
}

+ (Class)userStageRankListElementClass;
@property(retain, nonatomic) NSArray *userStageRankList; // @synthesize userStageRankList=_userStageRankList;
@property(retain, nonatomic) NSString *platform; // @synthesize platform=_platform;
- (void).cxx_destruct;

@end

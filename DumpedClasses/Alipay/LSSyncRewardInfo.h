//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class LSLiveUserInfo, NSString;

@interface LSSyncRewardInfo : NSObject
{
    float _amount;
    NSString *_bizType;
    NSString *_liveId;
    LSLiveUserInfo *_userInfo;
}

+ (id)instanceWithDic:(id)arg1;
@property(retain, nonatomic) LSLiveUserInfo *userInfo; // @synthesize userInfo=_userInfo;
@property(nonatomic) float amount; // @synthesize amount=_amount;
@property(retain, nonatomic) NSString *liveId; // @synthesize liveId=_liveId;
@property(retain, nonatomic) NSString *bizType; // @synthesize bizType=_bizType;
- (void).cxx_destruct;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"

@class NSString;

@interface MBKStickerActivityModel : NSObject <NSCoding>
{
    NSString *_activityId;
    NSString *_advertiser;
    NSString *_title;
    NSString *_countries;
    NSString *_area;
    NSString *_beginTime;
    NSString *_endTime;
    NSString *_prizeSum;
    NSString *_sumPerDay;
    NSString *_activityLogo;
    NSString *_advertiserLogo;
    NSString *_prizeLink;
    NSString *_shareLink;
    NSString *_activityDescription;
    NSString *_priority;
    NSString *_status;
    NSString *_ActivityOperator;
    NSString *_updateTime;
    NSString *_createTime;
    NSString *_prizes;
    NSString *_ongoing;
    NSString *_noPrizeImgUrl;
    NSString *_noPrizeImgBgUrl;
    NSString *_stickerActivity;
}

+ (id)mj_replacedKeyFromPropertyName;
@property(readonly, nonatomic) NSString *stickerActivity; // @synthesize stickerActivity=_stickerActivity;
@property(readonly, nonatomic) NSString *noPrizeImgBgUrl; // @synthesize noPrizeImgBgUrl=_noPrizeImgBgUrl;
@property(readonly, nonatomic) NSString *noPrizeImgUrl; // @synthesize noPrizeImgUrl=_noPrizeImgUrl;
@property(readonly, nonatomic) NSString *ongoing; // @synthesize ongoing=_ongoing;
@property(readonly, nonatomic) NSString *prizes; // @synthesize prizes=_prizes;
@property(readonly, nonatomic) NSString *createTime; // @synthesize createTime=_createTime;
@property(readonly, nonatomic) NSString *updateTime; // @synthesize updateTime=_updateTime;
@property(readonly, nonatomic) NSString *ActivityOperator; // @synthesize ActivityOperator=_ActivityOperator;
@property(readonly, nonatomic) NSString *status; // @synthesize status=_status;
@property(readonly, nonatomic) NSString *priority; // @synthesize priority=_priority;
@property(readonly, nonatomic) NSString *activityDescription; // @synthesize activityDescription=_activityDescription;
@property(readonly, nonatomic) NSString *shareLink; // @synthesize shareLink=_shareLink;
@property(readonly, nonatomic) NSString *prizeLink; // @synthesize prizeLink=_prizeLink;
@property(readonly, nonatomic) NSString *advertiserLogo; // @synthesize advertiserLogo=_advertiserLogo;
@property(readonly, nonatomic) NSString *activityLogo; // @synthesize activityLogo=_activityLogo;
@property(readonly, nonatomic) NSString *sumPerDay; // @synthesize sumPerDay=_sumPerDay;
@property(readonly, nonatomic) NSString *prizeSum; // @synthesize prizeSum=_prizeSum;
@property(readonly, nonatomic) NSString *endTime; // @synthesize endTime=_endTime;
@property(readonly, nonatomic) NSString *beginTime; // @synthesize beginTime=_beginTime;
@property(readonly, nonatomic) NSString *area; // @synthesize area=_area;
@property(readonly, nonatomic) NSString *countries; // @synthesize countries=_countries;
@property(readonly, nonatomic) NSString *title; // @synthesize title=_title;
@property(readonly, nonatomic) NSString *advertiser; // @synthesize advertiser=_advertiser;
@property(readonly, nonatomic) NSString *activityId; // @synthesize activityId=_activityId;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end


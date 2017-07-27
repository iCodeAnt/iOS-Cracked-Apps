//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, NSURL;

@interface QLFacilityUrlManager : NSObject
{
    _Bool _nacIsEnable;
}

+ (id)sharedInstance;
@property(readonly, nonatomic) NSString *logReportTaskURL;
@property(readonly, nonatomic) NSString *propertyIntroURL;
@property(readonly, nonatomic) NSString *pppIntroURL;
@property(readonly, nonatomic) NSString *dlnaIntroURL2;
@property(readonly, nonatomic) NSString *dlnaIntroURL;
@property(readonly, nonatomic) NSString *qlappPropsUploadPhotoURL;
@property(readonly, nonatomic) NSString *liveDetailToolEffectURL;
@property(readonly, nonatomic) NSString *qlappLivePhotoUploadURL;
@property(readonly, nonatomic) NSString *visitorGiveTicketURL;
- (id)getMainNickName;
@property(readonly, nonatomic) NSString *drawingResourceURL;
@property(readonly, nonatomic) NSString *videoTipsURL;
@property(readonly, nonatomic) NSString *unicomCheckUserOrder;
@property(readonly, nonatomic) NSString *unicomCheckUserIp;
@property(readonly, nonatomic) NSString *commonH5EntryUrl;
@property(readonly, nonatomic) NSString *unicomH5BaseUrl;
@property(readonly, nonatomic) NSString *telecomOrderUrl;
@property(readonly, nonatomic) NSString *mobileH5EntryUrl;
@property(readonly, nonatomic) NSString *mobileGetMobUrl;
@property(readonly, nonatomic) NSString *telecomBaseUrl;
@property(readonly, nonatomic) NSString *unicomBaseUrl;
@property(readonly, copy, nonatomic) NSString *userHelpUrl;
@property(readonly, nonatomic) NSString *iapVisitorBindUINURL;
@property(readonly, nonatomic) NSString *momentToUserIDURL;
@property(readonly, nonatomic) NSString *momentVideoLikeURL;
@property(readonly, nonatomic) NSString *momentVideoTimelineURL;
- (id)gtk;
- (id)webPlayURLWithChannelID:(id)arg1;
- (id)webPlayURLWithType:(long long)arg1 coverID:(id)arg2 vid:(id)arg3 title:(id)arg4 isPayed:(_Bool)arg5;
- (id)sharePlayURLWithType:(long long)arg1 coverID:(id)arg2 vid:(id)arg3 title:(id)arg4 noCopyright:(_Bool)arg5 isPayed:(_Bool)arg6;
@property(readonly, nonatomic) NSString *feedbackURL;
@property(readonly, nonatomic) NSString *uploadTokenURL;
@property(readonly, nonatomic) NSString *unicomGetvinfoURL;
@property(readonly, nonatomic) NSString *unicomGetvbKeyURL;
@property(readonly, nonatomic) NSString *unicomGetvKeyURL;
- (id)sinaAuthorizeWithQQ:(id)arg1;
@property(readonly, nonatomic) NSString *infoReportUrl;
@property(readonly, nonatomic) NSString *videoSizeListURL;
@property(readonly, nonatomic) NSString *momentUploadPhotoURL;
- (id)getSystemQueryString;
- (id)facilityfdForLive;
- (id)facilityFdForDownload;
- (id)facilityFdForPlay;
- (id)facilitySdtfromForDownload;
- (id)facilitySdtfrom;
@property(readonly, nonatomic) __weak NSURL *fullJCE_URLInfomation;
@property(readonly, nonatomic) __weak NSString *errorCodeConfigURL;
@property(readonly, nonatomic) __weak NSString *interactiveVoteH5URL;
@property(readonly, nonatomic) __weak NSString *liveTVStationShareURL;
@property(readonly, nonatomic) __weak NSString *liveShareURL;
@property(readonly, nonatomic) __weak NSString *defaultPlaybackServerUrl;
@property(readonly, nonatomic) __weak NSString *adsConfigURL;
@property(readonly, nonatomic) __weak NSString *liveProgramVInfoRetryURL;
@property(readonly, nonatomic) __weak NSString *liveProgramVInfoURL;
@property(readonly, nonatomic) __weak NSString *getsizeURL;
@property(readonly, nonatomic) __weak NSString *checkTimeURL;
@property(readonly, nonatomic) __weak NSString *getspeedURL;
@property(readonly, nonatomic) __weak NSString *getvinfoURL;
@property(readonly, nonatomic) __weak NSString *getinfoURL;
@property(readonly, nonatomic) __weak NSString *getvbKeyURL;
@property(readonly, nonatomic) __weak NSString *getbKeyURL;
@property(readonly, nonatomic) __weak NSString *getvKeyURL;
@property(readonly, nonatomic) __weak NSString *getkeyURL;
@property(readonly, nonatomic) __weak NSString *getPlatform;
@property(readonly, nonatomic) __weak NSString *getFdForLive;
@property(readonly, nonatomic) __weak NSString *getFdForDownload;
@property(readonly, nonatomic) __weak NSString *getFdForPlay;
@property(readonly, nonatomic) __weak NSString *getSdtFromForLive;
@property(readonly, nonatomic) __weak NSString *getSdtFromForDownload;
@property(readonly, nonatomic) __weak NSString *getSdtFromForPlay;
- (void)updateNacEnable:(_Bool)arg1;
- (void)setNacEnableByDomain;
- (id)init;

@end

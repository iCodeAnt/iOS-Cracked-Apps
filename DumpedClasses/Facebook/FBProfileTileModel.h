//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class FBMemProfileTileSection, FBProfileTileBasicInfo, FBProtileAnalyticsInfo, NSArray, NSString;

@interface FBProfileTileModel : NSObject <NSCopying>
{
    unsigned long long _subtype;
    FBProfileTileBasicInfo *_friendsGrid_basicInfo;
    NSArray *_friendsGrid_friends;
    FBProfileTileBasicInfo *_friendsHScroll_basicInfo;
    NSArray *_friendsHScroll_friends;
    FBProfileTileBasicInfo *_photosMosaic_basicInfo;
    FBProfileTileBasicInfo *_photosHScroll_basicInfo;
    FBProfileTileBasicInfo *_videosMosaic_basicInfo;
    NSString *_bottomLabel_title;
    FBMemProfileTileSection *_profileTileSection_profileTileSection;
    _Bool _profileTileSection_shouldHideCardDivider;
    _Bool _profileTileSection_shouldHideProtileHeaderIfNoItem;
    _Bool _profileTileSection_shouldHideProtileFooter;
    FBProtileAnalyticsInfo *_profileTileSection_protileAnalyticsInfo;
}

+ (id)videosMosaicWithBasicInfo:(id)arg1;
+ (id)profileTileSectionWithProfileTileSection:(id)arg1 shouldHideCardDivider:(_Bool)arg2 shouldHideProtileHeaderIfNoItem:(_Bool)arg3 shouldHideProtileFooter:(_Bool)arg4 protileAnalyticsInfo:(id)arg5;
+ (id)photosMosaicWithBasicInfo:(id)arg1;
+ (id)photosHScrollWithBasicInfo:(id)arg1;
+ (id)loading;
+ (id)friendsHScrollWithBasicInfo:(id)arg1 friends:(id)arg2;
+ (id)friendsGridWithBasicInfo:(id)arg1 friends:(id)arg2;
+ (id)bottomLabelWithTitle:(id)arg1;
- (void).cxx_destruct;
- (void)matchFriendsGrid:(CDUnknownBlockType)arg1 friendsHScroll:(CDUnknownBlockType)arg2 photosMosaic:(CDUnknownBlockType)arg3 photosHScroll:(CDUnknownBlockType)arg4 videosMosaic:(CDUnknownBlockType)arg5 bottomLabel:(CDUnknownBlockType)arg6 loading:(CDUnknownBlockType)arg7 profileTileSection:(CDUnknownBlockType)arg8;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SSUserSettingManager.h"

@interface NewsUserSettingManager : SSUserSettingManager
{
}

+ (float)settedMomentDiggCommentFontSize;
+ (float)settedEssayDetailViewTextFontLineHeight;
+ (float)settedEssayTextFontLineHeight;
+ (float)settedEssayDetailViewTextFontSize;
+ (float)settedEssayTextFontSize;
+ (double)fontSizeFromNormalSize:(double)arg1 isWidescreen:(_Bool)arg2;
+ (id)fontSettings;
+ (id)settedFontShortString;
+ (void)setHasShownAutoRefresh:(_Bool)arg1;
+ (_Bool)hasShownAutoRefresh;
+ (_Bool)hasShownHelp;
+ (void)setHasShownHelp:(_Bool)arg1;
+ (_Bool)needLoadDataFromStart;
+ (void)setNeedLoadDataFromStart:(_Bool)arg1;
+ (void)setNoNeedDisplaySlideHelp:(_Bool)arg1;
+ (void)increaseSlideDisplayHelp;
+ (_Bool)noNeedDisplaySlideHelp;
+ (id)sharedManager;

@end

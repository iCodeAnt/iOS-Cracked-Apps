//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ReadInJoyChannelArticleModel.h"

@interface ReadInJoyChannelAdModel : ReadInJoyChannelArticleModel
{
}

+ (id)tableName;
- (id)queryAdListFromChannel:(unsigned long long)arg1 inDb:(id)arg2;
- (void)deleteOutOfDateAdInDb:(id)arg1;
- (void)createTableIfNeededInDb:(id)arg1;
- (void)deleteOutOfDateAd;
- (_Bool)loadAdListFromChannel:(unsigned long long)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)createTableIfNeeded;
- (id)adListFromResultSet:(id)arg1;
- (id)queryAdsUsingSqlCommand:(id)arg1 andArguments:(id)arg2 inDb:(id)arg3;

@end


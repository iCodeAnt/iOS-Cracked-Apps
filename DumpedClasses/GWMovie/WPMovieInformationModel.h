//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug  6 2017 20:42:30).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GWObject.h"

@class NSString;

@interface WPMovieInformationModel : GWObject
{
    _Bool _isLike;
    NSString *_activeId;
    NSString *_cover;
    long long _likesCount;
    NSString *_photo;
    long long _readsCount;
    NSString *_title;
    NSString *_updateTime;
    NSString *_url;
    NSString *_actorName;
}

+ (id)mj_replacedKeyFromPropertyName;
@property(retain, nonatomic) NSString *actorName; // @synthesize actorName=_actorName;
@property(retain, nonatomic) NSString *url; // @synthesize url=_url;
@property(retain, nonatomic) NSString *updateTime; // @synthesize updateTime=_updateTime;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) long long readsCount; // @synthesize readsCount=_readsCount;
@property(retain, nonatomic) NSString *photo; // @synthesize photo=_photo;
@property(nonatomic) long long likesCount; // @synthesize likesCount=_likesCount;
@property(nonatomic) _Bool isLike; // @synthesize isLike=_isLike;
@property(retain, nonatomic) NSString *cover; // @synthesize cover=_cover;
@property(retain, nonatomic) NSString *activeId; // @synthesize activeId=_activeId;
- (void).cxx_destruct;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBJSONModel.h"

@class NSDate, NSMutableDictionary, NSString;

@interface TBContactShareRelationshipModel : TBJSONModel
{
    NSString *_recommendName;
    NSMutableDictionary *_friendInfo;
    NSDate *_updateTime;
}

@property(retain, nonatomic) NSDate *updateTime; // @synthesize updateTime=_updateTime;
@property(retain, nonatomic) NSMutableDictionary *friendInfo; // @synthesize friendInfo=_friendInfo;
@property(retain, nonatomic) NSString *recommendName; // @synthesize recommendName=_recommendName;
- (void).cxx_destruct;

@end

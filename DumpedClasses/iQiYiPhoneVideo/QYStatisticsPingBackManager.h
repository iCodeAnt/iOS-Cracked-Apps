//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DataLoadManager.h"

@class NSArray;

@interface QYStatisticsPingBackManager : DataLoadManager
{
    int _urlType;
    NSArray *_pbArray;
}

@property(nonatomic) int urlType; // @synthesize urlType=_urlType;
@property(retain, nonatomic) NSArray *pbArray; // @synthesize pbArray=_pbArray;
- (void).cxx_destruct;
- (_Bool)parse:(id)arg1;
- (id)getpostdata;
- (id)bodyDataForPost;
- (id)urlStl;
- (id)init;

@end


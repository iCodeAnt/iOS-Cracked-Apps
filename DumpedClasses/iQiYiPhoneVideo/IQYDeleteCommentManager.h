//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DataLoadManager.h"

@class NSString;

@interface IQYDeleteCommentManager : DataLoadManager
{
    NSString *_businessType;
    NSString *_contentid;
}

@property(retain, nonatomic) NSString *contentid; // @synthesize contentid=_contentid;
@property(retain, nonatomic) NSString *businessType; // @synthesize businessType=_businessType;
- (void).cxx_destruct;
- (_Bool)parse:(id)arg1;
- (id)urlStl;
- (id)init;

@end


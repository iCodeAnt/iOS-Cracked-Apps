//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "XYRKModel.h"

@class NSArray, NSNumber;

@interface XYPHMessageYouHeader : XYRKModel
{
    NSNumber *_userCount;
    NSArray *_users;
}

+ (id)JSONKeyPathsByPropertyKey;
@property(retain, nonatomic) NSArray *users; // @synthesize users=_users;
@property(retain, nonatomic) NSNumber *userCount; // @synthesize userCount=_userCount;
- (void).cxx_destruct;

@end


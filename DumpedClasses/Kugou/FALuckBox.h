//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FAModel.h"

@class NSString;

@interface FALuckBox : FAModel
{
    long long _costType;
    long long _userId;
    NSString *_nickName;
    NSString *_userLogo;
    long long _costValue;
    NSString *_desc;
    NSString *_descDetail;
}

@property(retain, nonatomic) NSString *descDetail; // @synthesize descDetail=_descDetail;
@property(retain, nonatomic) NSString *desc; // @synthesize desc=_desc;
@property(nonatomic) long long costValue; // @synthesize costValue=_costValue;
@property(retain, nonatomic) NSString *userLogo; // @synthesize userLogo=_userLogo;
@property(retain, nonatomic) NSString *nickName; // @synthesize nickName=_nickName;
@property(nonatomic) long long userId; // @synthesize userId=_userId;
@property(nonatomic) long long costType; // @synthesize costType=_costType;
- (void).cxx_destruct;

@end

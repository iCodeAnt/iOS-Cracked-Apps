//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSString;

@interface STATUSBARMsgboxModel : NSObject
{
    NSString *_operate;
    NSString *_msgType;
    NSString *_msgId;
    NSArray *_operateMsgIdList;
    NSString *_templateCode;
    NSString *_templateType;
    NSString *_title;
    NSString *_content;
    NSString *_icon;
    NSString *_link;
    NSString *_linkName;
    long long _gmtCreate;
    long long _gmtValid;
    NSString *_templateId;
}

+ (Class)operateMsgIdListElementClass;
@property(copy, nonatomic) NSString *templateId; // @synthesize templateId=_templateId;
@property(nonatomic) long long gmtValid; // @synthesize gmtValid=_gmtValid;
@property(nonatomic) long long gmtCreate; // @synthesize gmtCreate=_gmtCreate;
@property(retain, nonatomic) NSString *linkName; // @synthesize linkName=_linkName;
@property(retain, nonatomic) NSString *link; // @synthesize link=_link;
@property(retain, nonatomic) NSString *icon; // @synthesize icon=_icon;
@property(retain, nonatomic) NSString *content; // @synthesize content=_content;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) NSString *templateType; // @synthesize templateType=_templateType;
@property(retain, nonatomic) NSString *templateCode; // @synthesize templateCode=_templateCode;
@property(retain, nonatomic) NSArray *operateMsgIdList; // @synthesize operateMsgIdList=_operateMsgIdList;
@property(retain, nonatomic) NSString *msgId; // @synthesize msgId=_msgId;
@property(retain, nonatomic) NSString *msgType; // @synthesize msgType=_msgType;
@property(retain, nonatomic) NSString *operate; // @synthesize operate=_operate;
- (void).cxx_destruct;

@end

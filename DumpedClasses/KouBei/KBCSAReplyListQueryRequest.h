//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "KBCSARequestData.h"

@class NSString;

@interface KBCSAReplyListQueryRequest : KBCSARequestData
{
    int _pageSize;
    NSString *_objectId;
    NSString *_secondObjectId;
    NSString *_bizType;
    NSString *_lastReplyId;
    NSString *_orderBy;
}

@property(nonatomic) int pageSize; // @synthesize pageSize=_pageSize;
@property(retain, nonatomic) NSString *orderBy; // @synthesize orderBy=_orderBy;
@property(retain, nonatomic) NSString *lastReplyId; // @synthesize lastReplyId=_lastReplyId;
@property(retain, nonatomic) NSString *bizType; // @synthesize bizType=_bizType;
@property(retain, nonatomic) NSString *secondObjectId; // @synthesize secondObjectId=_secondObjectId;
@property(retain, nonatomic) NSString *objectId; // @synthesize objectId=_objectId;
- (void).cxx_destruct;

@end


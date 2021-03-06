//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "APPBGeneratedMessage.h"

#import "GeneratedMessageProtocol-Protocol.h"

@class NSString, ProtoUpMsg;

@interface ProtoSyncOpCode2004 : APPBGeneratedMessage <GeneratedMessageProtocol>
{
    _Bool _hasBizType;
    _Bool _hasSyncKey;
    _Bool _hasMsg;
    _Bool _hasBizName;
    int _bizType;
    long long _syncKey;
    ProtoUpMsg *_msg;
    NSString *_bizName;
}

+ (id)parseFromData:(id)arg1;
@property(retain, nonatomic) NSString *bizName; // @synthesize bizName=_bizName;
@property(retain, nonatomic) ProtoUpMsg *msg; // @synthesize msg=_msg;
@property(nonatomic) long long syncKey; // @synthesize syncKey=_syncKey;
@property(nonatomic) int bizType; // @synthesize bizType=_bizType;
@property(readonly) _Bool hasBizName; // @synthesize hasBizName=_hasBizName;
@property(readonly) _Bool hasMsg; // @synthesize hasMsg=_hasMsg;
@property(readonly) _Bool hasSyncKey; // @synthesize hasSyncKey=_hasSyncKey;
@property(readonly) _Bool hasBizType; // @synthesize hasBizType=_hasBizType;
- (void).cxx_destruct;
- (void)mergeFromCodedInputStream:(id)arg1 extensionRegistry:(id)arg2;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


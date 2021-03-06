//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class APCustomStorage;

@interface SNSendDataManager : NSObject
{
    APCustomStorage *_sendStorage;
    id <SNSendDataManagerDAOProtocol> _optionStoreDAO;
}

+ (id)shareInstance;
- (void).cxx_destruct;
- (void)dealloc;
- (void)doOption:(CDUnknownBlockType)arg1;
- (id)deleteSendMessagesWithout:(id)arg1;
- (void)updateAllSendingMessageToFail;
- (id)querySendingMessagesWithMessageStatus:(int)arg1 bizs:(id)arg2;
- (id)querySendingMessagesWithMessageBizs:(id)arg1;
- (id)querySendMessageWithClientMsgID:(id)arg1;
- (id)querySendingAllMessage;
- (id)querySendMessageWithClientMsgIDs:(id)arg1;
- (_Bool)updateAllMessagesSendingStatus:(id)arg1;
- (_Bool)updateSendMessages:(id)arg1;
- (_Bool)deleteSendMessages:(id)arg1;
- (_Bool)insertSendMessage:(id)arg1;
- (_Bool)insertSendMessages:(id)arg1;
- (void)userInfoUpdated:(id)arg1;
- (id)init;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class DTRpcAsyncCaller, NSString, SPFundChannel;

@interface SPFundChannelManager : NSObject
{
    SPFundChannel *_fundChannel;
    NSString *_bizFundLimit;
    DTRpcAsyncCaller *_groupPayeeFundChannelCaller;
}

@property(retain, nonatomic) DTRpcAsyncCaller *groupPayeeFundChannelCaller; // @synthesize groupPayeeFundChannelCaller=_groupPayeeFundChannelCaller;
@property(readonly, nonatomic) NSString *bizFundLimit; // @synthesize bizFundLimit=_bizFundLimit;
- (void).cxx_destruct;
- (void)clear;
- (int)getCurrentChannelType:(id)arg1;
- (void)getDefaultFundChannelInfoWithProductName:(id)arg1 startBlock:(CDUnknownBlockType)arg2 finishBlock:(CDUnknownBlockType)arg3;
- (void)getDefaultFundChannelInfoWithProductName:(id)arg1 subProductName:(id)arg2 amount:(id)arg3 startBlock:(CDUnknownBlockType)arg4 finishBlock:(CDUnknownBlockType)arg5;
- (id)displayBankCardChannelContent;
- (id)displayChannelNameToCard;
- (id)displayChannelNameToAccount;
- (id)displayChannelContentToCard;
- (id)displayChannelLimitAmountForToAccount;
- (id)displayChannelLimitToCard;
- (void)reloadDataWIthChannelDict:(id)arg1;
- (void)reloadDataWithBizChannelResp:(id)arg1;
- (void)dealloc;
@property(readonly, nonatomic) SPFundChannel *curFundChannel;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ONEBaseStore.h"

@class NSArray, NSMutableDictionary;

@interface ONESideOperationStore : ONEBaseStore
{
    NSArray *_operationItems;
    id <ONESideOperationStoreDelegate> _delegate;
    CDUnknownBlockType _operationItemsChangeBlock;
    NSArray *_sideMenuDescriptionModels;
    NSArray *_redDotsDicts;
    NSMutableDictionary *_redPointControlDict;
    NSArray *_newsModels;
}

+ (id)sharedInstance;
@property(retain, nonatomic) NSArray *newsModels; // @synthesize newsModels=_newsModels;
@property(retain, nonatomic) NSMutableDictionary *redPointControlDict; // @synthesize redPointControlDict=_redPointControlDict;
@property(retain, nonatomic) NSArray *redDotsDicts; // @synthesize redDotsDicts=_redDotsDicts;
@property(retain, nonatomic) NSArray *sideMenuDescriptionModels; // @synthesize sideMenuDescriptionModels=_sideMenuDescriptionModels;
@property(copy, nonatomic) CDUnknownBlockType operationItemsChangeBlock; // @synthesize operationItemsChangeBlock=_operationItemsChangeBlock;
@property(nonatomic) __weak id <ONESideOperationStoreDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (_Bool)isValidRedPointExist;
- (id)defaultOperationItems;
- (id)operationsConfigPath;
- (id)redPointConfigPath;
@property(readonly, nonatomic) NSArray *operationItems; // @synthesize operationItems=_operationItems;
- (void)addAdditionParamToUrlWithModel:(id)arg1;
- (id)arrayOfModelsFromDictionaries:(id)arg1;
- (_Bool)isArrowNeedRedPoint;
- (void)redPointCellSelectedWithEntranceId:(id)arg1;
- (id)descriptionForEntranceId:(id)arg1;
- (void)updateSideOperationConfigWithSuccess:(CDUnknownBlockType)arg1 failure:(CDUnknownBlockType)arg2;
- (void)updateSideOperationConfig;
- (id)init;

@end

//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSError, NSMutableArray, NSMutableIndexSet;
@protocol MQQPHCompressionTaskDelegate;

@interface MQQPHCompressionTask : NSObject
{
    long long _status;
    id <MQQPHCompressionTaskDelegate> _delegate;
    NSArray *_assetArray;
    NSMutableArray *_uncompressedAssetArray;
    NSMutableArray *_compressedItemArray;
    NSMutableArray *_failedItemArray;
    NSMutableArray *_compressedItemArrayByMethodPH;
    NSMutableIndexSet *_compressedIndexSet;
    long long _compressingSize;
    long long _compressedSize;
    double _compressedElapse;
    long long _assetOperationMethod;
    NSError *_lastError;
}

@property(retain, nonatomic) NSError *lastError; // @synthesize lastError=_lastError;
@property(readonly, nonatomic) long long assetOperationMethod; // @synthesize assetOperationMethod=_assetOperationMethod;
@property(readonly, copy, nonatomic) NSArray *failedItemArray;
@property(readonly, copy, nonatomic) NSArray *compressedItemArray;
@property(readonly, copy, nonatomic) NSArray *uncompressedAssetArray;
@property(readonly, retain, nonatomic) NSArray *assetArray;
@property(nonatomic) id <MQQPHCompressionTaskDelegate> delegate;
@property(readonly, nonatomic) long long status;
- (void)deleteOriginalPHAssets:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (_Bool)createCompressedPHAsset:(id)arg1 compressedItem:(id *)arg2;
- (_Bool)replaceCompressedALAsset:(id)arg1 compressedItem:(id *)arg2;
- (id)unknownError;
- (id)errorWithCode:(long long)arg1;
- (_Bool)deleteCompressedAssetsByPHMethodWithCompletion:(CDUnknownBlockType)arg1;
- (_Bool)shouldDeleteCompressedAssetsByPHMethod;
- (void)checkCompressionStatus;
- (void)handleCompressedResultWithCompressedItem:(id)arg1 finalOperationMethod:(long long)arg2 success:(_Bool)arg3;
- (long long)compressingWithCompressedItem:(id)arg1 operationMethod:(long long)arg2 currentAsset:(id)arg3 success:(_Bool *)arg4 stop:(_Bool *)arg5;
- (void)_start;
- (void)ending;
- (void)didFinish;
- (void)didStop;
- (void)didPause;
- (void)didCompressForItem:(id)arg1;
- (void)resume;
- (void)pause;
- (void)stop;
- (void)start;
- (long long)version;
- (void)dealloc;
- (id)initWithAssets:(id)arg1;

@end


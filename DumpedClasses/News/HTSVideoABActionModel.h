//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MTLModel.h"

#import "MTLJSONSerializing.h"

@class HTSVideoABActionDetailModel, NSString;

@interface HTSVideoABActionModel : MTLModel <MTLJSONSerializing>
{
    HTSVideoABActionDetailModel *_readComment;
    HTSVideoABActionDetailModel *_writeComment;
    HTSVideoABActionDetailModel *_replyComment;
    HTSVideoABActionDetailModel *_diggVideo;
    HTSVideoABActionDetailModel *_diggComment;
    HTSVideoABActionDetailModel *_follow;
    HTSVideoABActionDetailModel *_goProfile;
}

+ (id)modelFromDictionary:(id)arg1;
+ (id)goProfileJSONTransformer;
+ (id)followJSONTransformer;
+ (id)diggCommentJSONTransformer;
+ (id)diggVideoJSONTransformer;
+ (id)replyCommentJSONTransformer;
+ (id)writeCommentJSONTransformer;
+ (id)readCommentJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@property(readonly, nonatomic) HTSVideoABActionDetailModel *goProfile; // @synthesize goProfile=_goProfile;
@property(readonly, nonatomic) HTSVideoABActionDetailModel *follow; // @synthesize follow=_follow;
@property(readonly, nonatomic) HTSVideoABActionDetailModel *diggComment; // @synthesize diggComment=_diggComment;
@property(readonly, nonatomic) HTSVideoABActionDetailModel *diggVideo; // @synthesize diggVideo=_diggVideo;
@property(readonly, nonatomic) HTSVideoABActionDetailModel *replyComment; // @synthesize replyComment=_replyComment;
@property(readonly, nonatomic) HTSVideoABActionDetailModel *writeComment; // @synthesize writeComment=_writeComment;
@property(readonly, nonatomic) HTSVideoABActionDetailModel *readComment; // @synthesize readComment=_readComment;
- (void).cxx_destruct;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

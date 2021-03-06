//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSString;

@interface TBMagicCubeComponentModelGenerator : NSObject
{
    _Bool _fromPayload;
    NSString *_eventToken;
    NSString *_domain;
    NSDictionary *_templateData;
    NSDictionary *_data;
    NSDictionary *_structure;
}

@property(nonatomic) _Bool fromPayload; // @synthesize fromPayload=_fromPayload;
@property(retain, nonatomic) NSDictionary *structure; // @synthesize structure=_structure;
@property(retain, nonatomic) NSDictionary *data; // @synthesize data=_data;
@property(retain, nonatomic) NSDictionary *templateData; // @synthesize templateData=_templateData;
@property(retain, nonatomic) NSString *domain; // @synthesize domain=_domain;
@property(retain, nonatomic) NSString *eventToken; // @synthesize eventToken=_eventToken;
- (void).cxx_destruct;
- (id)getEffectDataById:(id)arg1;
- (id)getActionDataById:(id)arg1;
- (id)getComponentDataById:(id)arg1;
- (id)sourceDic:(id)arg1;
- (id)parseEffectsFrom:(id)arg1;
- (id)parseActionsFrom:(id)arg1;
- (id)parsePayloadFrom:(id)arg1 excludePathes:(id)arg2;
- (id)parseStyleFrom:(id)arg1;
- (id)parseComponentWithDataFromComponentId:(id)arg1;
- (id)parseChildren:(id)arg1;
- (_Bool)checkIfTemplateIsValid:(id)arg1;
- (id)getRootComponentModelFrom:(id)arg1 data:(id)arg2 fromPayload:(_Bool)arg3;
- (id)getRootComponentModelFrom:(id)arg1 data:(id)arg2;
- (id)getRootComponentModelFrom:(id)arg1;
- (id)initWithEventToken:(id)arg1 domain:(id)arg2;

@end


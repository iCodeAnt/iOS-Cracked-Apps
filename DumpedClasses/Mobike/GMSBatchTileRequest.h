//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GMSDASHProtobufferRequest.h"

@class GMSDASHTileService, NSMutableArray;

@interface GMSBatchTileRequest : GMSDASHProtobufferRequest
{
    GMSDASHTileService *_service;
    NSMutableArray *_tileRequests;
}

- (void).cxx_destruct;
- (void)asyncSerializeRequestData:(struct JavaDataOutput *)arg1 connection:(id)arg2;
- (void)asyncRequestFailed:(id)arg1 connection:(id)arg2;
- (id)initWithTileService:(id)arg1 tileRequests:(id)arg2;

@end


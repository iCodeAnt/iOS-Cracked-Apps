//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JSONModel.h"

@class NSArray<Optional>, NSNumber<Optional>, NSString<Optional>;

@interface TRSendWordModel : JSONModel
{
    NSNumber<Optional> *_type;
    NSString<Optional> *_product;
    NSArray<Optional> *_data;
}

@property(retain, nonatomic) NSArray<Optional> *data; // @synthesize data=_data;
@property(retain, nonatomic) NSString<Optional> *product; // @synthesize product=_product;
@property(retain, nonatomic) NSNumber<Optional> *type; // @synthesize type=_type;
- (void).cxx_destruct;

@end


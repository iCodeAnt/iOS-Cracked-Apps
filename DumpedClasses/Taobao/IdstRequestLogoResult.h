//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSString;

@interface IdstRequestLogoResult : NSObject
{
    int _resultType;
    NSDictionary *_data;
    NSString *_message;
}

@property(retain, nonatomic) NSString *message; // @synthesize message=_message;
@property(retain, nonatomic) NSDictionary *data; // @synthesize data=_data;
@property(nonatomic) int resultType; // @synthesize resultType=_resultType;
- (void).cxx_destruct;

@end

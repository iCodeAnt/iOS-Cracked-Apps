//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface BMGEOResult : NSObject
{
    long long _resultType;
    NSString *_address;
    NSString *_cityName;
    struct BMPoint _point;
    long long _error;
}

@property(nonatomic) long long error; // @synthesize error=_error;
@property(nonatomic) struct BMPoint point; // @synthesize point=_point;
@property(retain, nonatomic) NSString *cityName; // @synthesize cityName=_cityName;
@property(retain, nonatomic) NSString *address; // @synthesize address=_address;
@property(nonatomic) long long resultType; // @synthesize resultType=_resultType;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end


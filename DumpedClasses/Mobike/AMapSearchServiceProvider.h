//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface AMapSearchServiceProvider : NSObject
{
    NSString *_restServerAddress;
    NSString *_cloudServerAddress;
    NSString *_AOSServerAddress;
    NSString *_restServerAddress_ride;
}

+ (id)sharedInstance;
@property(copy, nonatomic) NSString *restServerAddress_ride; // @synthesize restServerAddress_ride=_restServerAddress_ride;
@property(copy, nonatomic) NSString *AOSServerAddress; // @synthesize AOSServerAddress=_AOSServerAddress;
@property(copy, nonatomic) NSString *cloudServerAddress; // @synthesize cloudServerAddress=_cloudServerAddress;
@property(copy, nonatomic) NSString *restServerAddress; // @synthesize restServerAddress=_restServerAddress;
- (void).cxx_destruct;
- (id)init;

@end


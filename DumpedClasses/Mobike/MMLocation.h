//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CLLocation;

@interface MMLocation : NSObject
{
    CLLocation *_location;
    long long _areaStat;
}

@property(nonatomic) long long areaStat; // @synthesize areaStat=_areaStat;
@property(retain, nonatomic) CLLocation *location; // @synthesize location=_location;
- (void).cxx_destruct;

@end


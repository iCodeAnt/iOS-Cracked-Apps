//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSString;

@interface STPCustomer : NSObject
{
    NSString *_stripeID;
    id <STPSourceProtocol> _defaultSource;
    NSArray *_sources;
}

+ (id)customerWithStripeID:(id)arg1 defaultSource:(id)arg2 sources:(id)arg3;
@property(retain, nonatomic) NSArray *sources; // @synthesize sources=_sources;
@property(retain, nonatomic) id <STPSourceProtocol> defaultSource; // @synthesize defaultSource=_defaultSource;
@property(copy, nonatomic) NSString *stripeID; // @synthesize stripeID=_stripeID;
- (void).cxx_destruct;

@end


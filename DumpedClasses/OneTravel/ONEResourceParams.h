//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSNumber, NSString;

@interface ONEResourceParams : NSObject
{
    unsigned long long _environment;
    NSString *_appversion;
    NSString *_ns;
    NSNumber *_flat;
    NSNumber *_flng;
    NSString *_token;
    NSDictionary *_comParams;
    NSString *_apiver;
}

@property(copy, nonatomic) NSString *apiver; // @synthesize apiver=_apiver;
@property(copy, nonatomic) NSDictionary *comParams; // @synthesize comParams=_comParams;
@property(copy, nonatomic) NSString *token; // @synthesize token=_token;
@property(retain, nonatomic) NSNumber *flng; // @synthesize flng=_flng;
@property(retain, nonatomic) NSNumber *flat; // @synthesize flat=_flat;
@property(copy, nonatomic) NSString *ns; // @synthesize ns=_ns;
@property(copy, nonatomic) NSString *appversion; // @synthesize appversion=_appversion;
@property(nonatomic) unsigned long long environment; // @synthesize environment=_environment;
- (void).cxx_destruct;
- (id)init;

@end


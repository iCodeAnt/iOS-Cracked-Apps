//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary, NSString;

@interface GrowingCustomField : NSObject
{
    NSMutableDictionary *_persistentData;
    NSString *_filePath;
    _Bool isFirstSetCS;
    _Bool userAccess;
    NSString *_cs1;
    NSString *_cs2;
    NSString *_cs3;
    NSString *_cs4;
    NSString *_cs5;
    NSString *_cs6;
    NSString *_cs7;
    NSString *_cs8;
    NSString *_cs9;
    NSString *_cs10;
}

+ (id)shareInstance;
@property(copy, nonatomic) NSString *cs10; // @synthesize cs10=_cs10;
@property(copy, nonatomic) NSString *cs9; // @synthesize cs9=_cs9;
@property(copy, nonatomic) NSString *cs8; // @synthesize cs8=_cs8;
@property(copy, nonatomic) NSString *cs7; // @synthesize cs7=_cs7;
@property(copy, nonatomic) NSString *cs6; // @synthesize cs6=_cs6;
@property(copy, nonatomic) NSString *cs5; // @synthesize cs5=_cs5;
@property(copy, nonatomic) NSString *cs4; // @synthesize cs4=_cs4;
@property(copy, nonatomic) NSString *cs3; // @synthesize cs3=_cs3;
@property(copy, nonatomic) NSString *cs2; // @synthesize cs2=_cs2;
@property(copy, nonatomic) NSString *cs1; // @synthesize cs1=_cs1;
- (void).cxx_destruct;
- (void)persistence;
- (void)setCS;
- (void)handleFirstSetCS;
- (id)init;

@end


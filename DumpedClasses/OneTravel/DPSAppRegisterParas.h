//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"

@class NSString;

@interface DPSAppRegisterParas : NSObject <NSCoding>
{
    NSString *_appKey;
    NSString *_appSecret;
    long long _globalBusinessID;
    NSString *_noticeResouceName;
}

@property(copy, nonatomic) NSString *noticeResouceName; // @synthesize noticeResouceName=_noticeResouceName;
@property(nonatomic) long long globalBusinessID; // @synthesize globalBusinessID=_globalBusinessID;
@property(copy, nonatomic) NSString *appSecret; // @synthesize appSecret=_appSecret;
@property(copy, nonatomic) NSString *appKey; // @synthesize appKey=_appKey;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MSSDKJsonObject.h"

@class NSString;

@interface MSSDKUrlInfo : MSSDKJsonObject
{
    NSString *_url;
    NSString *_urlId;
}

@property(copy, nonatomic) NSString *urlId; // @synthesize urlId=_urlId;
@property(copy, nonatomic) NSString *url; // @synthesize url=_url;
- (void).cxx_destruct;
- (id)toJSONObject;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end

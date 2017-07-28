//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableData, NSString, NSURLConnection;

@interface QAppKeyCheck : NSObject
{
    id <QAppKeyCheckDelegate> _delegate;
    NSMutableData *_responseData;
    NSURLConnection *_connection;
    NSString *_encodingType;
}

+ (double)refreshTime;
+ (id)vendorID;
+ (id)version;
+ (id)suid;
+ (void)setSuid:(id)arg1;
@property(retain, nonatomic) NSString *encodingType; // @synthesize encodingType=_encodingType;
@property(retain, nonatomic) NSURLConnection *connection; // @synthesize connection=_connection;
@property(retain, nonatomic) NSMutableData *responseData; // @synthesize responseData=_responseData;
@property(retain, nonatomic) id <QAppKeyCheckDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)connection:(id)arg1 didFailWithError:(id)arg2;
- (void)connectionDidFinishLoading:(id)arg1;
- (void)connection:(id)arg1 didReceiveData:(id)arg2;
- (void)connection:(id)arg1 didReceiveResponse:(id)arg2;
- (void)stop;
- (_Bool)start:(id)arg1 withDelegate:(id)arg2;
- (void)dealloc;
- (id)initWithThirdPartyTypeFlag:(long long)arg1;
- (id)init;

@end


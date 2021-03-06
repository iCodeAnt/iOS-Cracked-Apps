//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug  6 2017 20:42:30).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSData, NSString;

@interface MOBFHttpPostedFile : NSObject
{
    NSString *_fileName;
    NSString *_contentType;
    NSData *_fileData;
    NSString *_transferEncoding;
}

+ (id)httpPostedFileByPath:(id)arg1 contentType:(id)arg2;
+ (id)httpPostedFileByFileName:(id)arg1 data:(id)arg2 contentType:(id)arg3 transferEncoding:(id)arg4;
@property(copy, nonatomic) NSString *transferEncoding; // @synthesize transferEncoding=_transferEncoding;
@property(retain, nonatomic) NSData *fileData; // @synthesize fileData=_fileData;
@property(copy, nonatomic) NSString *contentType; // @synthesize contentType=_contentType;
@property(copy, nonatomic) NSString *fileName; // @synthesize fileName=_fileName;
- (void).cxx_destruct;

@end


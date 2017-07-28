//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UMShareObject.h"

@class NSArray, NSData, NSString;

@interface UMShareEmailObject : UMShareObject
{
    NSString *_subject;
    NSArray *_toRecipients;
    NSArray *_ccRecipients;
    NSArray *_bccRecipients;
    NSString *_emailContent;
    id _emailImage;
    NSString *_emailImageType;
    NSString *_emailImageName;
    NSData *_emailSendData;
    NSString *_fileType;
    NSString *_fileName;
}

@property(copy, nonatomic) NSString *fileName; // @synthesize fileName=_fileName;
@property(copy, nonatomic) NSString *fileType; // @synthesize fileType=_fileType;
@property(retain, nonatomic) NSData *emailSendData; // @synthesize emailSendData=_emailSendData;
@property(copy, nonatomic) NSString *emailImageName; // @synthesize emailImageName=_emailImageName;
@property(copy, nonatomic) NSString *emailImageType; // @synthesize emailImageType=_emailImageType;
@property(retain, nonatomic) id emailImage; // @synthesize emailImage=_emailImage;
@property(copy, nonatomic) NSString *emailContent; // @synthesize emailContent=_emailContent;
@property(retain, nonatomic) NSArray *bccRecipients; // @synthesize bccRecipients=_bccRecipients;
@property(retain, nonatomic) NSArray *ccRecipients; // @synthesize ccRecipients=_ccRecipients;
@property(retain, nonatomic) NSArray *toRecipients; // @synthesize toRecipients=_toRecipients;
@property(retain, nonatomic) NSString *subject; // @synthesize subject=_subject;
- (void).cxx_destruct;

@end


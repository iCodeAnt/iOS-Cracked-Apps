//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug  6 2017 20:42:30).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "NSXMLParserDelegate-Protocol.h"

@class DWHTTPRequest, NSMutableString, NSString;

@interface DWUploader : NSObject <NSXMLParserDelegate>
{
    _Bool _finish;
    double _timeoutSeconds;
    CDUnknownBlockType _progressBlock;
    CDUnknownBlockType _finishBlock;
    CDUnknownBlockType _failBlock;
    CDUnknownBlockType _videoContextForRetryBlock;
    CDUnknownBlockType _pausedBlock;
    DWHTTPRequest *_request;
    NSString *_localtime;
    NSString *_userId;
    NSString *_videoTitle;
    NSString *_videoDescription;
    NSString *_videoTag;
    NSString *_key;
    NSString *_videoPath;
    NSString *_videoFileName;
    long long _videoFileSize;
    NSString *_videoFileSizeString;
    NSString *_notifyURL;
    NSString *_videoId;
    NSString *_createTime;
    NSString *_serviceType;
    NSString *_priority;
    NSString *_encodeType;
    NSString *_videoUploadServer;
    NSString *_uploadValidateErrorDescription;
    NSMutableString *_currentElementValue;
    long long _uploadedFileSize;
    NSString *_category;
    long long _uploadBufferSize;
}

@property(nonatomic) long long uploadBufferSize; // @synthesize uploadBufferSize=_uploadBufferSize;
@property(copy, nonatomic) NSString *category; // @synthesize category=_category;
@property(nonatomic) _Bool finish; // @synthesize finish=_finish;
@property(nonatomic) long long uploadedFileSize; // @synthesize uploadedFileSize=_uploadedFileSize;
@property(retain, nonatomic) NSMutableString *currentElementValue; // @synthesize currentElementValue=_currentElementValue;
@property(copy, nonatomic) NSString *uploadValidateErrorDescription; // @synthesize uploadValidateErrorDescription=_uploadValidateErrorDescription;
@property(copy, nonatomic) NSString *videoUploadServer; // @synthesize videoUploadServer=_videoUploadServer;
@property(copy, nonatomic) NSString *encodeType; // @synthesize encodeType=_encodeType;
@property(copy, nonatomic) NSString *priority; // @synthesize priority=_priority;
@property(copy, nonatomic) NSString *serviceType; // @synthesize serviceType=_serviceType;
@property(copy, nonatomic) NSString *createTime; // @synthesize createTime=_createTime;
@property(copy, nonatomic) NSString *videoId; // @synthesize videoId=_videoId;
@property(copy, nonatomic) NSString *notifyURL; // @synthesize notifyURL=_notifyURL;
@property(copy, nonatomic) NSString *videoFileSizeString; // @synthesize videoFileSizeString=_videoFileSizeString;
@property(nonatomic) long long videoFileSize; // @synthesize videoFileSize=_videoFileSize;
@property(copy, nonatomic) NSString *videoFileName; // @synthesize videoFileName=_videoFileName;
@property(copy, nonatomic) NSString *videoPath; // @synthesize videoPath=_videoPath;
@property(copy, nonatomic) NSString *key; // @synthesize key=_key;
@property(copy, nonatomic) NSString *videoTag; // @synthesize videoTag=_videoTag;
@property(copy, nonatomic) NSString *videoDescription; // @synthesize videoDescription=_videoDescription;
@property(copy, nonatomic) NSString *videoTitle; // @synthesize videoTitle=_videoTitle;
@property(copy, nonatomic) NSString *userId; // @synthesize userId=_userId;
@property(copy, nonatomic) NSString *localtime; // @synthesize localtime=_localtime;
@property(retain, nonatomic) DWHTTPRequest *request; // @synthesize request=_request;
@property(copy, nonatomic) CDUnknownBlockType pausedBlock; // @synthesize pausedBlock=_pausedBlock;
@property(copy, nonatomic) CDUnknownBlockType videoContextForRetryBlock; // @synthesize videoContextForRetryBlock=_videoContextForRetryBlock;
@property(copy, nonatomic) CDUnknownBlockType failBlock; // @synthesize failBlock=_failBlock;
@property(copy, nonatomic) CDUnknownBlockType finishBlock; // @synthesize finishBlock=_finishBlock;
@property(copy, nonatomic) CDUnknownBlockType progressBlock; // @synthesize progressBlock=_progressBlock;
@property(nonatomic) double timeoutSeconds; // @synthesize timeoutSeconds=_timeoutSeconds;
- (void).cxx_destruct;
- (void)parser:(id)arg1 didEndElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4;
- (void)parser:(id)arg1 foundCharacters:(id)arg2;
- (void)parser:(id)arg1 didStartElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4 attributes:(id)arg5;
- (void)accessResumeUploadWithUploadedSize:(long long)arg1;
- (id)generateResumeUploadUrlWithUploadedSize:(long long)arg1;
- (void)parseResumeUploadReturnValue:(id)arg1;
- (void)accessCheckUploadWithFirst:(_Bool)arg1;
- (id)generateCheckUploadRequestBodyWithFirst:(_Bool)arg1;
- (id)generateCheckUploadUrlWithFirst:(_Bool)arg1;
- (void)parseCheckUploadReturnValue:(long long)arg1;
- (void)accessUploadValidate;
- (id)generateUploadValidateUrl;
- (id)errorFromUploadValidateWith:(id)arg1;
- (_Bool)parseUploadValidateRetuanValue:(id *)arg1;
- (void)resume;
- (_Bool)validateForResume:(id *)arg1;
- (void)category:(id)arg1;
- (void)pause;
- (void)start;
- (_Bool)validateForStart:(id *)arg1;
- (id)initWithVideoContext:(id)arg1;
- (id)initWithUserId:(id)arg1 andKey:(id)arg2 uploadVideoTitle:(id)arg3 videoDescription:(id)arg4 videoTag:(id)arg5 videoPath:(id)arg6 notifyURL:(id)arg7;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

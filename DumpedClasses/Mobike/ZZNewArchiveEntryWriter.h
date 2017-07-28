//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "ZZArchiveEntryWriter.h"

@class NSMutableData;

@interface ZZNewArchiveEntryWriter : NSObject <ZZArchiveEntryWriter>
{
    NSMutableData *_centralFileHeader;
    NSMutableData *_localFileHeader;
    long long _compressionLevel;
    CDUnknownBlockType _dataBlock;
    CDUnknownBlockType _streamBlock;
    CDUnknownBlockType _dataConsumerBlock;
}

- (void).cxx_destruct;
- (_Bool)writeCentralFileHeaderToChannelOutput:(id)arg1 error:(out id *)arg2;
- (_Bool)writeLocalFileToChannelOutput:(id)arg1 withInitialSkip:(unsigned int)arg2 error:(out id *)arg3;
- (unsigned int)offsetToLocalFileEnd;
- (struct ZZLocalFileHeader *)localFileHeader;
- (struct ZZCentralFileHeader *)centralFileHeader;
- (id)initWithFileName:(id)arg1 fileMode:(unsigned short)arg2 lastModified:(id)arg3 compressionLevel:(long long)arg4 dataBlock:(CDUnknownBlockType)arg5 streamBlock:(CDUnknownBlockType)arg6 dataConsumerBlock:(CDUnknownBlockType)arg7;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GTXFileManager.h"

@class NSFileHandle, NSRecursiveLock, NSString;

@interface GTXBaseFileManager : GTXFileManager
{
    NSFileHandle *_fileHandler;
    unsigned long long _fileSize;
    NSRecursiveLock *_lock;
    NSString *_filePath;
}

@property(retain, nonatomic) NSString *filePath; // @synthesize filePath=_filePath;
@property(retain, nonatomic) NSRecursiveLock *lock; // @synthesize lock=_lock;
@property(nonatomic) unsigned long long fileSize; // @synthesize fileSize=_fileSize;
@property(retain, nonatomic) NSFileHandle *fileHandler; // @synthesize fileHandler=_fileHandler;
- (void).cxx_destruct;
- (void)close;
- (void)flush;
- (unsigned long long)available;
- (void)write:(id)arg1;
- (void)createFileHandler;
- (id)initWithFilePath:(id)arg1;

@end


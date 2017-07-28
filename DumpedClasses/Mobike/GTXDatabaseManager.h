//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class GTXMutableDictionary, NSObject<OS_dispatch_queue>;

@interface GTXDatabaseManager : NSObject
{
    struct sqlite3 *db;
    NSObject<OS_dispatch_queue> *operationQueue;
    GTXMutableDictionary *_layoutDictionary;
}

+ (id)manager;
@property(retain, nonatomic) GTXMutableDictionary *layoutDictionary; // @synthesize layoutDictionary=_layoutDictionary;
- (void).cxx_destruct;
- (void)dealloc;
- (_Bool)closeDatabase;
- (void)updateLastSync;
- (id)readUserData;
- (void)saveUserData:(id)arg1;
- (id)layoutJsonArray;
- (id)findAllNotUploadAttachmentMeta;
- (id)findAllNotUploadCrashReportMeta;
- (id)findAllNotUploadLogFileMetaListByLevelAndTime:(id)arg1 startTime:(long long)arg2 endTime:(long long)arg3;
- (id)findLogFileMetaListByLevelAndTime:(id)arg1 startTime:(long long)arg2 endTime:(long long)arg3;
- (id)findLogFileMetaListByTime:(long long)arg1 endTime:(long long)arg2;
- (id)findAllNotUploadLogFileMetaListByLevel:(id)arg1;
- (id)findLogFileMetaListByLevel:(id)arg1;
- (id)findMaxFragment:(id)arg1;
- (id)findAllNotUploadLogFileMetaList;
- (id)findAllLogFileMetaList;
- (_Bool)closeAllLogFile;
- (_Bool)closeLogFile:(id)arg1 level:(int)arg2 fragment:(int)arg3;
- (short)layoutId:(id)arg1;
- (int)findMaxAttachmentSequence;
- (short)saveMsgLayout:(id)arg1;
- (_Bool)saveAttachmentFileMeta:(id)arg1;
- (_Bool)saveCrashReportFileMeta:(id)arg1;
- (_Bool)saveLogFileMeta:(id)arg1;
- (_Bool)deleteElement:(id)arg1;
- (_Bool)save:(id)arg1 object:(id)arg2;
- (id)extractRows:(id)arg1 class:(Class)arg2;
- (id)dictToObj:(Class)arg1 dict:(id)arg2;
- (id)objToDict:(id)arg1 filter:(id)arg2;
- (int)delete:(id)arg1 condition:(id)arg2;
- (id)query:(id)arg1 columns:(id)arg2 condition:(id)arg3 groupBy:(id)arg4 orderBy:(id)arg5 limit:(id)arg6;
- (int)update:(id)arg1 dict:(id)arg2 condition:(id)arg3;
- (long long)insert:(id)arg1 dict:(id)arg2;
- (_Bool)execSQL:(id)arg1;
- (_Bool)updateTables;
- (_Bool)createTables;
- (_Bool)sqlInit;
- (id)init;

@end


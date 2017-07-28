//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, NSString, _GrowingDataBaseWithMutex;

@interface GrowingEventDataBase : NSObject
{
    _Bool _stopAutoUpdate;
    struct _opaque_pthread_mutex_t updateArrayMutext;
    unsigned long long _autoFlushCount;
    NSString *_name;
    _GrowingDataBaseWithMutex *_db;
    NSMutableArray *_updateKeys;
    NSMutableArray *_updateValues;
}

+ (id)databaseWithPath:(id)arg1 name:(id)arg2;
+ (id)databaseWithName:(id)arg1;
@property(retain, nonatomic) NSMutableArray *updateValues; // @synthesize updateValues=_updateValues;
@property(retain, nonatomic) NSMutableArray *updateKeys; // @synthesize updateKeys=_updateKeys;
@property(retain, nonatomic) _GrowingDataBaseWithMutex *db; // @synthesize db=_db;
@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
@property(nonatomic) unsigned long long autoFlushCount; // @synthesize autoFlushCount=_autoFlushCount;
- (void).cxx_destruct;
- (id)flush;
- (id)flush_deleteDataBase:(id)arg1 byKeys:(id)arg2;
- (id)flush_insertDataBase:(id)arg1 byKeys:(id)arg2 values:(id)arg3;
- (void)performModifyArrayBlock:(CDUnknownBlockType)arg1;
- (id)performDataBaseBlock:(CDUnknownBlockType)arg1;
- (id)clearAllItems;
- (id)enumerateKeysAndValuesUsingBlock:(CDUnknownBlockType)arg1;
- (unsigned long long)countOfEvents;
- (id)valueForKey:(id)arg1 error:(id *)arg2;
- (id)valueForKey:(id)arg1;
- (void)setValue:(id)arg1 forKey:(id)arg2 error:(id *)arg3;
- (void)setValue:(id)arg1 forKey:(id)arg2;
- (void)initDB;
- (id)initWithFilePath:(id)arg1 andName:(id)arg2;
- (void)makeDirByFileName:(id)arg1;

@end


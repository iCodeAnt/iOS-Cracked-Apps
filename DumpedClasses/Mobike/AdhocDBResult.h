//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AdhocDBManager, AdhocDBStatement, NSMutableDictionary, NSString;

@interface AdhocDBResult : NSObject
{
    AdhocDBManager *_parentDB;
    AdhocDBStatement *_statement;
    NSString *_query;
    NSMutableDictionary *_columnNameToIndexMap;
}

+ (id)resultWithStatement:(id)arg1 usingParentDB:(id)arg2;
@property(retain) AdhocDBStatement *statement; // @synthesize statement=_statement;
@property(copy) NSString *query; // @synthesize query=_query;
- (void).cxx_destruct;
- (id)objectAtIndexedSubscript:(int)arg1;
- (id)objectForColumnName:(id)arg1;
- (id)objectForKeyedSubscript:(id)arg1;
- (id)objectForColumnIndex:(int)arg1;
- (id)stringForColumnIndex:(int)arg1;
- (id)dataForColumnIndex:(int)arg1;
- (double)doubleForColumnIndex:(int)arg1;
- (long long)longLongIntForColumnIndex:(int)arg1;
- (int)columnIndexForName:(id)arg1;
- (id)columnNameToIndexMap;
- (_Bool)next;
- (void)setParentDB:(id)arg1;
- (void)close;
- (void)dealloc;

@end


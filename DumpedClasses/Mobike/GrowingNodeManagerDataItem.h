//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSString;

@interface GrowingNodeManagerDataItem : NSObject
{
    NSString *_nodeFullPath;
    NSString *_nodePatchedPath;
    long long _keyIndex;
    id <GrowingNode> _node;
    NSArray *_pathComponents;
}

@property(retain, nonatomic) NSArray *pathComponents; // @synthesize pathComponents=_pathComponents;
@property(retain, nonatomic) id <GrowingNode> node; // @synthesize node=_node;
@property(nonatomic) long long keyIndex; // @synthesize keyIndex=_keyIndex;
@property(copy, nonatomic) NSString *nodePatchedPath; // @synthesize nodePatchedPath=_nodePatchedPath;
@property(copy, nonatomic) NSString *nodeFullPath; // @synthesize nodeFullPath=_nodeFullPath;
- (void).cxx_destruct;
- (id)description;

@end


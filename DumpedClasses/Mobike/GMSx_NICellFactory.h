//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NITableViewModelDelegate.h"

@class NSMutableDictionary, NSString;

@interface GMSx_NICellFactory : NSObject <NITableViewModelDelegate>
{
    NSMutableDictionary *_objectToCellMap;
}

+ (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 model:(id)arg3;
+ (id)tableViewModel:(id)arg1 cellForTableView:(id)arg2 atIndexPath:(id)arg3 withObject:(id)arg4;
+ (id)cellWithNib:(id)arg1 tableView:(id)arg2 indexPath:(id)arg3 object:(id)arg4;
+ (id)cellWithClass:(Class)arg1 tableView:(id)arg2 object:(id)arg3;
@property(copy, nonatomic) NSMutableDictionary *objectToCellMap; // @synthesize objectToCellMap=_objectToCellMap;
- (void).cxx_destruct;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 model:(id)arg3;
- (void)mapObjectClass:(Class)arg1 toCellClass:(Class)arg2;
- (id)tableViewModel:(id)arg1 cellForTableView:(id)arg2 atIndexPath:(id)arg3 withObject:(id)arg4;
- (Class)cellClassFromObject:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


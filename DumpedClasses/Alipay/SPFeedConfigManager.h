//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, NSString;

@interface SPFeedConfigManager : NSObject
{
    id <SPFeedConfigManagerDelegate> _delegate;
    NSMutableArray *_feedConfigItems;
    NSString *_curUserId;
}

@property(retain, nonatomic) NSString *curUserId; // @synthesize curUserId=_curUserId;
@property(retain, nonatomic) NSMutableArray *feedConfigItems; // @synthesize feedConfigItems=_feedConfigItems;
@property(nonatomic) __weak id <SPFeedConfigManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)profileBiz;
- (id)keyForFeedConfig;
- (void)saveConfigItem;
- (void)readConfigItem;
- (void)removeConfigItem:(id)arg1;
- (void)setFeedConfigItemAsync:(id)arg1;
- (void)fetchFeedConfigItemWithBlock:(CDUnknownBlockType)arg1;
- (void)fetchFeedConfigItemsAsync;
- (id)fetchFeedConfigItemSync;

@end

//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface QYMMovieInfoData : NSObject
{
    NSString *_itemCreateAt;
    NSString *_itemId;
    NSString *_itemTitle;
    NSString *_itemDetailUrl;
    NSString *_itemPic;
    NSString *_isImportant;
}

@property(copy, nonatomic) NSString *isImportant; // @synthesize isImportant=_isImportant;
@property(copy, nonatomic) NSString *itemPic; // @synthesize itemPic=_itemPic;
@property(copy, nonatomic) NSString *itemDetailUrl; // @synthesize itemDetailUrl=_itemDetailUrl;
@property(copy, nonatomic) NSString *itemTitle; // @synthesize itemTitle=_itemTitle;
@property(copy, nonatomic) NSString *itemId; // @synthesize itemId=_itemId;
@property(copy, nonatomic) NSString *itemCreateAt; // @synthesize itemCreateAt=_itemCreateAt;
- (void)buildWithDictionary:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (void)dealloc;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class GrowingElement, NSArray, NSMutableArray, NSString, UIImage;

@interface GrowingSelectViewMenuItem : NSObject
{
    _Bool _isPage;
    _Bool _isH5Page;
    _Bool _doNotTrack;
    _Bool _isIgnorePage;
    _Bool _isTextInput;
    _Bool _isInHorizontalTableView;
    _Bool _isWideEnough;
    _Bool _isH5Tag;
    _Bool _isContainer;
    NSString *_pageTitle;
    NSString *_pageQuery;
    NSString *_pageDomainH5;
    NSString *_pageGroup;
    double _fontSize;
    UIImage *_snapshot;
    NSString *_name;
    NSString *_href;
    NSString *_parentXPath;
    NSMutableArray *_h5PageCandidates;
    long long _visiableIndex;
    GrowingElement *_growingElement;
    NSMutableArray *_childItems;
    struct CGRect _frame;
}

@property(retain, nonatomic) NSMutableArray *childItems; // @synthesize childItems=_childItems;
@property(retain, nonatomic) GrowingElement *growingElement; // @synthesize growingElement=_growingElement;
@property(nonatomic) long long visiableIndex; // @synthesize visiableIndex=_visiableIndex;
@property(copy, nonatomic) NSMutableArray *h5PageCandidates; // @synthesize h5PageCandidates=_h5PageCandidates;
@property(copy, nonatomic) NSString *parentXPath; // @synthesize parentXPath=_parentXPath;
@property(nonatomic) _Bool isContainer; // @synthesize isContainer=_isContainer;
@property(copy, nonatomic) NSString *href; // @synthesize href=_href;
@property(nonatomic) _Bool isH5Tag; // @synthesize isH5Tag=_isH5Tag;
@property(nonatomic) struct CGRect frame; // @synthesize frame=_frame;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(retain, nonatomic) UIImage *snapshot; // @synthesize snapshot=_snapshot;
@property(nonatomic) _Bool isWideEnough; // @synthesize isWideEnough=_isWideEnough;
@property(nonatomic) _Bool isInHorizontalTableView; // @synthesize isInHorizontalTableView=_isInHorizontalTableView;
@property(nonatomic) double fontSize; // @synthesize fontSize=_fontSize;
@property(nonatomic) _Bool isTextInput; // @synthesize isTextInput=_isTextInput;
@property(nonatomic) _Bool isIgnorePage; // @synthesize isIgnorePage=_isIgnorePage;
@property(nonatomic) _Bool doNotTrack; // @synthesize doNotTrack=_doNotTrack;
@property(copy, nonatomic) NSString *pageGroup; // @synthesize pageGroup=_pageGroup;
@property(copy, nonatomic) NSString *pageDomainH5; // @synthesize pageDomainH5=_pageDomainH5;
@property(copy, nonatomic) NSString *pageQuery; // @synthesize pageQuery=_pageQuery;
@property(copy, nonatomic) NSString *pageTitle; // @synthesize pageTitle=_pageTitle;
@property(nonatomic) _Bool isH5Page; // @synthesize isH5Page=_isH5Page;
@property(nonatomic) _Bool isPage; // @synthesize isPage=_isPage;
- (void).cxx_destruct;
- (void)sortChildItemsAccordingToFontSize;
@property(readonly, nonatomic) NSArray *childMenuItems;
- (void)addChildItem:(id)arg1;
- (id)init;
- (id)initWithElement:(id)arg1;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSMutableArray, NSString;

@interface TBTakeoutShopFilterItem : NSObject
{
    _Bool _hasSubOption;
    _Bool _hasMultipleOption;
    long long _selectedOptionIndex;
    NSString *_defaultTitle;
    NSArray *_options;
    NSMutableArray *_filterModelArray;
}

@property(retain, nonatomic) NSMutableArray *filterModelArray; // @synthesize filterModelArray=_filterModelArray;
@property(copy, nonatomic) NSArray *options; // @synthesize options=_options;
@property(copy, nonatomic) NSString *defaultTitle; // @synthesize defaultTitle=_defaultTitle;
@property(nonatomic) _Bool hasMultipleOption; // @synthesize hasMultipleOption=_hasMultipleOption;
@property(nonatomic) _Bool hasSubOption; // @synthesize hasSubOption=_hasSubOption;
@property(nonatomic) long long selectedOptionIndex; // @synthesize selectedOptionIndex=_selectedOptionIndex;
- (void).cxx_destruct;
- (void)clearSelection;

@end


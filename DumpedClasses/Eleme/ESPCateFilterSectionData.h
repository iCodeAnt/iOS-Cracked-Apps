//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSString;

@interface ESPCateFilterSectionData : NSObject
{
    _Bool _allowMultiSelection;
    NSString *_name;
    NSString *_subtitle;
    NSArray *_choices;
}

+ (id)sectionNamed:(id)arg1 subTitle:(id)arg2 choices:(id)arg3 allowMultiSelection:(_Bool)arg4;
@property(nonatomic) _Bool allowMultiSelection; // @synthesize allowMultiSelection=_allowMultiSelection;
@property(copy, nonatomic) NSArray *choices; // @synthesize choices=_choices;
@property(copy, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;

@end


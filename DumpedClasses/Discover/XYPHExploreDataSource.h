//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "XYPHRefreshBaseDataSource.h"

@class NSArray, NSMutableArray, NSString, XYPHExplore, XYPHExploreSection;

@interface XYPHExploreDataSource : XYPHRefreshBaseDataSource
{
    NSString *_loadMoreStartKey;
    XYPHExplore *_explore;
    NSMutableArray *_exploreSection;
    NSMutableArray *_exploreBaseModelData;
    XYPHExploreSection *_multiNoteSection;
}

@property(retain, nonatomic) XYPHExploreSection *multiNoteSection; // @synthesize multiNoteSection=_multiNoteSection;
@property(retain, nonatomic) NSMutableArray *exploreBaseModelData; // @synthesize exploreBaseModelData=_exploreBaseModelData;
@property(retain, nonatomic) NSMutableArray *exploreSection; // @synthesize exploreSection=_exploreSection;
@property(retain, nonatomic) XYPHExplore *explore; // @synthesize explore=_explore;
- (void)setLoadMoreStartKey:(id)arg1;
- (void).cxx_destruct;
- (id)sectionObjectAtSection:(long long)arg1;
- (id)objectAtIndexPath:(id)arg1;
- (long long)numberOfObjectsInSection:(long long)arg1;
- (long long)numberOfSections;
- (void)refresh:(CDUnknownBlockType)arg1;
- (void)setupData:(id)arg1 error:(id *)arg2;
- (id)loadMoreStartKey;
@property(readonly, nonatomic) NSArray *banners;
- (id)init;

@end


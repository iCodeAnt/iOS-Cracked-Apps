//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class BMKIndoorPlanNode;

@interface BMKIndoorRoutePlanOption : NSObject
{
    BMKIndoorPlanNode *_from;
    BMKIndoorPlanNode *_to;
}

@property(retain, nonatomic) BMKIndoorPlanNode *to; // @synthesize to=_to;
@property(retain, nonatomic) BMKIndoorPlanNode *from; // @synthesize from=_from;
- (void).cxx_destruct;
- (void)dealloc;
- (id)init;

@end


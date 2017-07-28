//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class GMSIndoorBuilding, GMSIndoorLevel;

@interface GMSIndoorBuildingState : NSObject
{
    int _additionCount;
    GMSIndoorBuilding *_building;
    GMSIndoorLevel *_activeLevel;
}

@property(nonatomic) int additionCount; // @synthesize additionCount=_additionCount;
@property(retain, nonatomic) GMSIndoorLevel *activeLevel; // @synthesize activeLevel=_activeLevel;
@property(readonly, nonatomic) GMSIndoorBuilding *building; // @synthesize building=_building;
- (void).cxx_destruct;
- (id)initWithBuilding:(id)arg1 activeLevelIndex:(unsigned long long)arg2;

@end


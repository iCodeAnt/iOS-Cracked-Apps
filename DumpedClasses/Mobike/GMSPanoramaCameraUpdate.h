//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface GMSPanoramaCameraUpdate : NSObject
{
    CDUnknownBlockType _action;
}

+ (id)updateWithAction:(CDUnknownBlockType)arg1;
+ (id)setZoom:(double)arg1;
+ (id)setPitch:(double)arg1;
+ (id)setHeading:(double)arg1;
+ (id)rotateBy:(double)arg1;
- (void).cxx_destruct;
- (struct CameraPosition)applyToCamera:(struct CameraPosition)arg1;

@end


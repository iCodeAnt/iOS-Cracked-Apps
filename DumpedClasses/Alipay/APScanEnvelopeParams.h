//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CLLocation, NSString, UIImage;

@interface APScanEnvelopeParams : NSObject
{
    NSString *_cloudId;
    UIImage *_currentImage;
    CLLocation *_userLocation;
}

@property(retain, nonatomic) CLLocation *userLocation; // @synthesize userLocation=_userLocation;
@property(retain, nonatomic) UIImage *currentImage; // @synthesize currentImage=_currentImage;
@property(retain, nonatomic) NSString *cloudId; // @synthesize cloudId=_cloudId;
- (void).cxx_destruct;

@end


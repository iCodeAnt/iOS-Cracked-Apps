//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface TVKLogger : NSObject
{
    id <TVKLogDelegate> _delegate;
}

+ (id)sharedTVKLogger;
@property(nonatomic) __weak id <TVKLogDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)log:(int)arg1 withMessage:(id)arg2;

@end

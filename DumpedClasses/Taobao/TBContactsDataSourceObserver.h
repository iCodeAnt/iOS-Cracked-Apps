//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface TBContactsDataSourceObserver : NSObject
{
    _Bool _observed;
    id _realObserver;
    NSString *_timestamp;
}

@property(nonatomic, getter=isObserved) _Bool observed; // @synthesize observed=_observed;
@property(retain, nonatomic) NSString *timestamp; // @synthesize timestamp=_timestamp;
@property(nonatomic) __weak id realObserver; // @synthesize realObserver=_realObserver;
- (void).cxx_destruct;
- (void)stopObserve;
- (void)startObserve;
- (id)initWithRealObserver:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;

@end

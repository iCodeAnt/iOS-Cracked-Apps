//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "P_QNBAppConfigConfig.h"

@class NSString;

@interface QLProjectAppConfigConfig : NSObject <P_QNBAppConfigConfig>
{
}

- (id)getLangString:(id)arg1;
- (id)getConfigPropertyArray:(id)arg1;
- (id)getConfigPropertyObject:(id)arg1;
- (id)getConfigPropertyString:(id)arg1;
- (_Bool)getConfigPropertyBool:(id)arg1;
- (double)getConfigPropertyDouble:(id)arg1;
- (float)getConfigPropertyFloat:(id)arg1;
- (int)getConfigPropertyInt:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "DCHAuthCom_dccom_DCComTHUnauth.h"

@class DCHomeDriverListModelV2;

@interface DCHDAuthUnit : DCHAuthCom_dccom_DCComTHUnauth
{
    DCHomeDriverListModelV2 *_listModel;
}

- (void).cxx_destruct;
- (_Bool)isDriverAuthed;
- (void)listDataUpdate:(id)arg1;
- (void)createUnAuthViewControllerIfNeeds;
- (id)unAuthURL;
- (void)doAfterAuthFinish;
- (void)comWillAppear;
- (id)initWithCompType:(int)arg1;

@end


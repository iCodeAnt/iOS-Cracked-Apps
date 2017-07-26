//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "BEEDataController.h"

@class APButton, BEEResultLargeView;

@interface APFamilyFundTerminateResultController : BEEDataController
{
    APButton *_actionButton;
    BEEResultLargeView *_resultView;
    long long _action;
    _Bool _isSuccess;
    id <APFamilyFundTerminateResultControllerDelegate> _delegate;
}

@property(nonatomic) __weak id <APFamilyFundTerminateResultControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)clickActionButton;
- (void)clickCancelBarButton;
- (void)clickDoneBarButton;
- (void)buildSubViewWithResult:(id)arg1;
- (id)emptyText;
- (void)loadError:(id)arg1;
- (void)loadContent;
- (id)loadData;
- (void)viewDidLoad;

@end

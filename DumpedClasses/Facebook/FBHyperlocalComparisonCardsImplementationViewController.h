//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "FBComparisonCardsImplementationViewControllerProtocol-Protocol.h"

@class FBComparisonCardsToolbox, FBMemHyperlocalQueryResultPageItem, NSArray, NSString;

@interface FBHyperlocalComparisonCardsImplementationViewController : UIViewController <FBComparisonCardsImplementationViewControllerProtocol>
{
    NSArray *_pageItems;
    unsigned long long _currentIndex;
    FBComparisonCardsToolbox *_toolbox;
    FBMemHyperlocalQueryResultPageItem *_previousItem;
}

- (void).cxx_destruct;
- (void)collectionViewDidScroll:(struct FBScrollViewState)arg1;
- (void)updateWithQueryResponse:(id)arg1;
- (void)secondaryButtonTapped:(id)arg1;
- (id)secondaryButtonTitle;
- (_Bool)showSecondaryButton;
- (struct UIEdgeInsets)cardInsets;
- (double)headerUnderflow;
- (double)headerHeight;
- (double)innerComponentHeightOrZero;
- (id)contextForQuery;
- (id)initWithToolbox:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


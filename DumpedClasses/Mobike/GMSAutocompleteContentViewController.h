//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "GMSAutocompleteResultsTableViewDelegate.h"
#import "GMSAutocompleteResultsViewControllerDelegate.h"
#import "UISearchBarDelegate.h"

@class GMSAutocompleteFilter, GMSAutocompleteResultsViewController, GMSAutocompleteViewController, GMSCoordinateBounds, NSString, UISearchBar;

@interface GMSAutocompleteContentViewController : UIViewController <GMSAutocompleteResultsViewControllerDelegate, GMSAutocompleteResultsTableViewDelegate, UISearchBarDelegate>
{
    UISearchBar *_searchBar;
    id <UITableViewDelegate> _resultsControllerTableViewDelegate;
    _Bool _isInPlacePicker;
    NSString *_lastSearch;
    GMSAutocompleteViewController *_autocompleteViewController;
    _Bool _ignoreResultsChanges;
    id <GMSAutocompleteViewControllerDelegate> _delegate;
    GMSAutocompleteResultsViewController *_resultsController;
}

@property(retain, nonatomic) GMSAutocompleteResultsViewController *resultsController; // @synthesize resultsController=_resultsController;
@property(nonatomic) __weak id <GMSAutocompleteViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)hasCancelledSelection;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)didRequestAutocompletePredictionsForResultsController:(id)arg1;
- (void)didUpdateAutocompletePredictionsForResultsController:(id)arg1;
- (_Bool)resultsController:(id)arg1 didSelectPrediction:(id)arg2;
- (void)resultsController:(id)arg1 didFailAutocompleteWithError:(id)arg2;
- (void)resultsController:(id)arg1 didAutocompleteWithPlace:(id)arg2;
- (void)searchBarSearchButtonClicked:(id)arg1;
- (void)searchBar:(id)arg1 textDidChange:(id)arg2;
- (void)cancelButtonTapped:(id)arg1;
@property(retain, nonatomic) GMSAutocompleteFilter *autocompleteFilter;
@property(retain, nonatomic) GMSCoordinateBounds *autocompleteBounds;
- (void)keyboardFrameWillChange:(id)arg1;
- (unsigned long long)selectedIndex;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initForPlacePickerWithAutocompleteViewController:(id)arg1;
- (id)initWithAutocompleteViewController:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


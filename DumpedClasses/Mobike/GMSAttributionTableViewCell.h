//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class UIActivityIndicatorView, UIImageView;

@interface GMSAttributionTableViewCell : UITableViewCell
{
    UIImageView *_attributionImageView;
    _Bool _shouldCenterContents;
    UIActivityIndicatorView *_activityIndicator;
}

@property(nonatomic) _Bool shouldCenterContents; // @synthesize shouldCenterContents=_shouldCenterContents;
@property(readonly, nonatomic) UIActivityIndicatorView *activityIndicator; // @synthesize activityIndicator=_activityIndicator;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)updateImageToBestContrast;
- (id)initWithReuseIdentifier:(id)arg1;

@end


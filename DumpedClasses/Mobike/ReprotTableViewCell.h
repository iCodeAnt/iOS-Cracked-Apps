//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@interface ReprotTableViewCell : UITableViewCell
{
    id <ReportDelegate> _delegate;
}

@property(nonatomic) id <ReportDelegate> delegate; // @synthesize delegate=_delegate;
- (void)dealloc;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)selectReportItem:(id)arg1;
- (void)layoutReportCell:(id)arg1 index:(id)arg2;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end


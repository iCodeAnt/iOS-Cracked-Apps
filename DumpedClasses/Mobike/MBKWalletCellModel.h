//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "MBKViewModelProtocol.h"

@class NSString;

@interface MBKWalletCellModel : NSObject <MBKViewModelProtocol>
{
    _Bool _shouldHighlightDetailString;
    NSString *_titleString;
    NSString *_detailString;
    unsigned long long _classify;
}

@property(nonatomic) unsigned long long classify; // @synthesize classify=_classify;
@property(nonatomic) _Bool shouldHighlightDetailString; // @synthesize shouldHighlightDetailString=_shouldHighlightDetailString;
@property(retain, nonatomic) NSString *detailString; // @synthesize detailString=_detailString;
@property(retain, nonatomic) NSString *titleString; // @synthesize titleString=_titleString;
- (void).cxx_destruct;
- (Class)viewClass;
@property(readonly, nonatomic) double viewHeight;
@property(readonly, nonatomic) double viewWidth;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


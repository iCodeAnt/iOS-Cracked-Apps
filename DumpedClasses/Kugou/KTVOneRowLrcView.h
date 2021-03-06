//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "KTVPanKrcViewDelegate.h"

@class KTVMultiLineKrcView, NSMutableArray, NSString;

@interface KTVOneRowLrcView : UIView <KTVPanKrcViewDelegate>
{
    KTVMultiLineKrcView *krcView;
    NSMutableArray *krcArray;
    double playtime;
    _Bool _hasKrc;
    NSString *_krcPath;
}

@property(retain, nonatomic) NSString *krcPath; // @synthesize krcPath=_krcPath;
@property(nonatomic) _Bool hasKrc; // @synthesize hasKrc=_hasKrc;
- (void).cxx_destruct;
- (void)locationPlayTime:(double)arg1;
- (void)displaySondWord:(double)arg1;
- (void)setKrcAjustTime:(long long)arg1;
- (id)createDefaultKrc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "MBKViewModelProtocol.h"

@class NSString;

@interface MBKCardCellModel : NSObject <MBKViewModelProtocol>
{
    NSString *_carUrl;
    NSString *_cartitleString;
    NSString *_statusString;
    NSString *_cardTimeString;
    NSString *_cardActiveString;
    unsigned long long _classify;
}

@property(nonatomic) unsigned long long classify; // @synthesize classify=_classify;
@property(retain, nonatomic) NSString *cardActiveString; // @synthesize cardActiveString=_cardActiveString;
@property(retain, nonatomic) NSString *cardTimeString; // @synthesize cardTimeString=_cardTimeString;
@property(retain, nonatomic) NSString *statusString; // @synthesize statusString=_statusString;
@property(retain, nonatomic) NSString *cartitleString; // @synthesize cartitleString=_cartitleString;
@property(retain, nonatomic) NSString *carUrl; // @synthesize carUrl=_carUrl;
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


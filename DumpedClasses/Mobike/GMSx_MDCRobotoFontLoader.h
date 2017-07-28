//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "MDCTypographyFontLoading.h"

@class GMSx_MDCFontDiskLoader, NSBundle, NSString;

@interface GMSx_MDCRobotoFontLoader : NSObject <MDCTypographyFontLoading>
{
    _Bool _disableSanityChecks;
    GMSx_MDCFontDiskLoader *_lightFontResource;
    GMSx_MDCFontDiskLoader *_regularFontResource;
    GMSx_MDCFontDiskLoader *_mediumFontResource;
    GMSx_MDCFontDiskLoader *_boldFontResource;
    GMSx_MDCFontDiskLoader *_lightItalicFontResource;
    GMSx_MDCFontDiskLoader *_italicFontResource;
    GMSx_MDCFontDiskLoader *_mediumItalicFontResource;
    GMSx_MDCFontDiskLoader *_boldItalicFontResource;
    NSBundle *_baseBundle;
    NSString *_bundleFileName;
}

+ (id)baseBundle;
+ (id)sharedInstance;
+ (id)italicFontFromFont:(id)arg1;
+ (id)boldFontFromFont:(id)arg1;
+ (_Bool)isBoldFontName:(id)arg1;
+ (_Bool)isItalicFontName:(id)arg1;
@property(nonatomic) _Bool disableSanityChecks; // @synthesize disableSanityChecks=_disableSanityChecks;
@property(retain, nonatomic) NSString *bundleFileName; // @synthesize bundleFileName=_bundleFileName;
@property(retain, nonatomic) NSBundle *baseBundle; // @synthesize baseBundle=_baseBundle;
@property(retain, nonatomic) GMSx_MDCFontDiskLoader *boldItalicFontResource; // @synthesize boldItalicFontResource=_boldItalicFontResource;
@property(retain, nonatomic) GMSx_MDCFontDiskLoader *mediumItalicFontResource; // @synthesize mediumItalicFontResource=_mediumItalicFontResource;
@property(retain, nonatomic) GMSx_MDCFontDiskLoader *italicFontResource; // @synthesize italicFontResource=_italicFontResource;
@property(retain, nonatomic) GMSx_MDCFontDiskLoader *lightItalicFontResource; // @synthesize lightItalicFontResource=_lightItalicFontResource;
@property(retain, nonatomic) GMSx_MDCFontDiskLoader *boldFontResource; // @synthesize boldFontResource=_boldFontResource;
@property(retain, nonatomic) GMSx_MDCFontDiskLoader *mediumFontResource; // @synthesize mediumFontResource=_mediumFontResource;
@property(retain, nonatomic) GMSx_MDCFontDiskLoader *regularFontResource; // @synthesize regularFontResource=_regularFontResource;
@property(retain, nonatomic) GMSx_MDCFontDiskLoader *lightFontResource; // @synthesize lightFontResource=_lightFontResource;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (id)boldItalicFontOfSize:(double)arg1;
- (id)mediumItalicFontOfSize:(double)arg1;
- (id)lightItalicFontOfSize:(double)arg1;
- (id)italicFontOfSize:(double)arg1;
- (id)boldFontOfSize:(double)arg1;
- (id)lightFontOfSize:(double)arg1;
- (id)mediumFontOfSize:(double)arg1;
- (id)regularFontOfSize:(double)arg1;
- (void)resetFontResources;
- (id)initInternal;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


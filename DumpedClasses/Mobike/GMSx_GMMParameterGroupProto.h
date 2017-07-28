//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GMSx_PBGeneratedMessage.h"

@class GMSx_GMMApiParametersProto, GMSx_GMMClientUrlParametersProto, GMSx_GMMEmergencyMenuItemParametersProto, GMSx_GMMEnableFeatureParametersProto, GMSx_GMMGlsReportingParametersProto, GMSx_GMMImageryViewerParametersProto, GMSx_GMMLoggingParametersProto, GMSx_GMMMapMovementRequeryParametersProto, GMSx_GMMNavigationParametersProto, GMSx_GMMOdelayParametersProto, GMSx_GMMOfflineMapsParametersProto, GMSx_GMMPartnerAppsParametersProto, GMSx_GMMPassiveAssistParametersProto, GMSx_GMMPlaceSheetParametersProto, GMSx_GMMPromoParametersProto, GMSx_GMMPromptToRateAppParametersProto, GMSx_GMMSearchParametersProto, GMSx_GMMServerSettingParametersProto, GMSx_GMMSuggestParametersProto, GMSx_GMMTextToSpeechParametersProto, GMSx_GMMTileTypeExpirationParametersProto, GMSx_GMMTileZoomProgressionProto, GMSx_GMMUserGeneratedContentParametersProto, GMSx_GMMUserPreferencesParametersProto, GMSx_GMMVectorMapsParametersProto, GMSx_GMPPaintParameterResponse;

@interface GMSx_GMMParameterGroupProto : GMSx_PBGeneratedMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) GMSx_GMMApiParametersProto *api; // @dynamic api;
@property(retain, nonatomic) GMSx_GMMClientUrlParametersProto *clientUrls; // @dynamic clientUrls;
@property(retain, nonatomic) GMSx_GMMEmergencyMenuItemParametersProto *emergencyMenuItem; // @dynamic emergencyMenuItem;
@property(retain, nonatomic) GMSx_GMMEnableFeatureParametersProto *enableFeatures; // @dynamic enableFeatures;
@property(retain, nonatomic) GMSx_GMMGlsReportingParametersProto *glsReporting; // @dynamic glsReporting;
@property(nonatomic) _Bool hasApi; // @dynamic hasApi;
@property(nonatomic) _Bool hasClientUrls; // @dynamic hasClientUrls;
@property(nonatomic) _Bool hasEmergencyMenuItem; // @dynamic hasEmergencyMenuItem;
@property(nonatomic) _Bool hasEnableFeatures; // @dynamic hasEnableFeatures;
@property(nonatomic) _Bool hasGlsReporting; // @dynamic hasGlsReporting;
@property(nonatomic) _Bool hasHash_p; // @dynamic hasHash_p;
@property(nonatomic) _Bool hasImageryViewer; // @dynamic hasImageryViewer;
@property(nonatomic) _Bool hasLogging; // @dynamic hasLogging;
@property(nonatomic) _Bool hasMapMovementRequery; // @dynamic hasMapMovementRequery;
@property(nonatomic) _Bool hasNavigation; // @dynamic hasNavigation;
@property(nonatomic) _Bool hasOdelay; // @dynamic hasOdelay;
@property(nonatomic) _Bool hasOfflineMaps; // @dynamic hasOfflineMaps;
@property(nonatomic) _Bool hasPaintParameters; // @dynamic hasPaintParameters;
@property(nonatomic) _Bool hasPartnerApps; // @dynamic hasPartnerApps;
@property(nonatomic) _Bool hasPassiveAssist; // @dynamic hasPassiveAssist;
@property(nonatomic) _Bool hasPlaceSheet; // @dynamic hasPlaceSheet;
@property(nonatomic) _Bool hasPromo; // @dynamic hasPromo;
@property(nonatomic) _Bool hasPromptToRateApp; // @dynamic hasPromptToRateApp;
@property(nonatomic) _Bool hasSearch; // @dynamic hasSearch;
@property(nonatomic) _Bool hasServerSetting; // @dynamic hasServerSetting;
@property(nonatomic) _Bool hasSuggest; // @dynamic hasSuggest;
@property(nonatomic) _Bool hasTextToSpeech; // @dynamic hasTextToSpeech;
@property(nonatomic) _Bool hasTileTypeExpiration; // @dynamic hasTileTypeExpiration;
@property(nonatomic) _Bool hasTileZoomProgression; // @dynamic hasTileZoomProgression;
@property(nonatomic) _Bool hasType; // @dynamic hasType;
@property(nonatomic) _Bool hasUserGeneratedContent; // @dynamic hasUserGeneratedContent;
@property(nonatomic) _Bool hasUserPreferencesLogging; // @dynamic hasUserPreferencesLogging;
@property(nonatomic) _Bool hasVectorMaps; // @dynamic hasVectorMaps;
@property(nonatomic) unsigned long long hash_p; // @dynamic hash_p;
@property(retain, nonatomic) GMSx_GMMImageryViewerParametersProto *imageryViewer; // @dynamic imageryViewer;
@property(retain, nonatomic) GMSx_GMMLoggingParametersProto *logging; // @dynamic logging;
@property(retain, nonatomic) GMSx_GMMMapMovementRequeryParametersProto *mapMovementRequery; // @dynamic mapMovementRequery;
@property(retain, nonatomic) GMSx_GMMNavigationParametersProto *navigation; // @dynamic navigation;
@property(retain, nonatomic) GMSx_GMMOdelayParametersProto *odelay; // @dynamic odelay;
@property(retain, nonatomic) GMSx_GMMOfflineMapsParametersProto *offlineMaps; // @dynamic offlineMaps;
@property(retain, nonatomic) GMSx_GMPPaintParameterResponse *paintParameters; // @dynamic paintParameters;
@property(retain, nonatomic) GMSx_GMMPartnerAppsParametersProto *partnerApps; // @dynamic partnerApps;
@property(retain, nonatomic) GMSx_GMMPassiveAssistParametersProto *passiveAssist; // @dynamic passiveAssist;
@property(retain, nonatomic) GMSx_GMMPlaceSheetParametersProto *placeSheet; // @dynamic placeSheet;
@property(retain, nonatomic) GMSx_GMMPromoParametersProto *promo; // @dynamic promo;
@property(retain, nonatomic) GMSx_GMMPromptToRateAppParametersProto *promptToRateApp; // @dynamic promptToRateApp;
@property(retain, nonatomic) GMSx_GMMSearchParametersProto *search; // @dynamic search;
@property(retain, nonatomic) GMSx_GMMServerSettingParametersProto *serverSetting; // @dynamic serverSetting;
@property(retain, nonatomic) GMSx_GMMSuggestParametersProto *suggest; // @dynamic suggest;
@property(retain, nonatomic) GMSx_GMMTextToSpeechParametersProto *textToSpeech; // @dynamic textToSpeech;
@property(retain, nonatomic) GMSx_GMMTileTypeExpirationParametersProto *tileTypeExpiration; // @dynamic tileTypeExpiration;
@property(retain, nonatomic) GMSx_GMMTileZoomProgressionProto *tileZoomProgression; // @dynamic tileZoomProgression;
@property(nonatomic) int type; // @dynamic type;
@property(retain, nonatomic) GMSx_GMMUserGeneratedContentParametersProto *userGeneratedContent; // @dynamic userGeneratedContent;
@property(retain, nonatomic) GMSx_GMMUserPreferencesParametersProto *userPreferencesLogging; // @dynamic userPreferencesLogging;
@property(retain, nonatomic) GMSx_GMMVectorMapsParametersProto *vectorMaps; // @dynamic vectorMaps;

@end


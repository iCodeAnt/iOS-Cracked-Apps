//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GMSx_PBGeneratedMessage.h"

@class NSString;

@interface GMSx_LOGSBSearchboxStats : GMSx_PBGeneratedMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) unsigned int abandonedRequestCount; // @dynamic abandonedRequestCount;
@property(nonatomic) unsigned int browsableCategorySelected; // @dynamic browsableCategorySelected;
@property(nonatomic) unsigned int cancelledFetchFinalTimeoutCount; // @dynamic cancelledFetchFinalTimeoutCount;
@property(nonatomic) unsigned int cancelledFetchLongTimeoutCount; // @dynamic cancelledFetchLongTimeoutCount;
@property(nonatomic) unsigned int cancelledFetchMediumTimeoutCount; // @dynamic cancelledFetchMediumTimeoutCount;
@property(nonatomic) unsigned int cancelledFetchShortTimeoutCount; // @dynamic cancelledFetchShortTimeoutCount;
@property(retain, nonatomic) NSString *clientName; // @dynamic clientName;
@property(retain, nonatomic) NSString *compressedRoundTripHistogram; // @dynamic compressedRoundTripHistogram;
@property(nonatomic) unsigned int connectionRejectedRequestCount; // @dynamic connectionRejectedRequestCount;
@property(nonatomic) unsigned int connectionRequestCount; // @dynamic connectionRequestCount;
@property(nonatomic) unsigned int connectionResponseCount; // @dynamic connectionResponseCount;
@property(nonatomic) unsigned int currentBrowsableCategory; // @dynamic currentBrowsableCategory;
@property(retain, nonatomic) NSString *experimentStats; // @dynamic experimentStats;
@property(nonatomic) unsigned int externalCacheHitCount; // @dynamic externalCacheHitCount;
@property(nonatomic) unsigned int fetcherRequestCount; // @dynamic fetcherRequestCount;
@property(nonatomic) unsigned int firstEditTimeMsec; // @dynamic firstEditTimeMsec;
@property(nonatomic) unsigned int generatedResponseCount; // @dynamic generatedResponseCount;
@property(nonatomic) unsigned int generatedResponseImpressionCount; // @dynamic generatedResponseImpressionCount;
@property(nonatomic) _Bool hasAbandonedRequestCount; // @dynamic hasAbandonedRequestCount;
@property(nonatomic) _Bool hasBrowsableCategorySelected; // @dynamic hasBrowsableCategorySelected;
@property(nonatomic) _Bool hasCancelledFetchFinalTimeoutCount; // @dynamic hasCancelledFetchFinalTimeoutCount;
@property(nonatomic) _Bool hasCancelledFetchLongTimeoutCount; // @dynamic hasCancelledFetchLongTimeoutCount;
@property(nonatomic) _Bool hasCancelledFetchMediumTimeoutCount; // @dynamic hasCancelledFetchMediumTimeoutCount;
@property(nonatomic) _Bool hasCancelledFetchShortTimeoutCount; // @dynamic hasCancelledFetchShortTimeoutCount;
@property(nonatomic) _Bool hasClientName; // @dynamic hasClientName;
@property(nonatomic) _Bool hasCompressedRoundTripHistogram; // @dynamic hasCompressedRoundTripHistogram;
@property(nonatomic) _Bool hasConnectionRejectedRequestCount; // @dynamic hasConnectionRejectedRequestCount;
@property(nonatomic) _Bool hasConnectionRequestCount; // @dynamic hasConnectionRequestCount;
@property(nonatomic) _Bool hasConnectionResponseCount; // @dynamic hasConnectionResponseCount;
@property(nonatomic) _Bool hasCurrentBrowsableCategory; // @dynamic hasCurrentBrowsableCategory;
@property(nonatomic) _Bool hasExperimentStats; // @dynamic hasExperimentStats;
@property(nonatomic) _Bool hasExternalCacheHitCount; // @dynamic hasExternalCacheHitCount;
@property(nonatomic) _Bool hasFetcherRequestCount; // @dynamic hasFetcherRequestCount;
@property(nonatomic) _Bool hasFirstEditTimeMsec; // @dynamic hasFirstEditTimeMsec;
@property(nonatomic) _Bool hasGeneratedResponseCount; // @dynamic hasGeneratedResponseCount;
@property(nonatomic) _Bool hasGeneratedResponseImpressionCount; // @dynamic hasGeneratedResponseImpressionCount;
@property(nonatomic) _Bool hasHighConfidenceIcingResultCount; // @dynamic hasHighConfidenceIcingResultCount;
@property(nonatomic) _Bool hasInternalCacheHitCount; // @dynamic hasInternalCacheHitCount;
@property(nonatomic) _Bool hasLastEditTimeMsec; // @dynamic hasLastEditTimeMsec;
@property(nonatomic) _Bool hasLastQueryBuildTimeMsec; // @dynamic hasLastQueryBuildTimeMsec;
@property(nonatomic) _Bool hasMaxRoundTripTimeMsec; // @dynamic hasMaxRoundTripTimeMsec;
@property(nonatomic) _Bool hasNumZeroPrefixSuggestionsShown; // @dynamic hasNumZeroPrefixSuggestionsShown;
@property(nonatomic) _Bool hasOfflineTriggered; // @dynamic hasOfflineTriggered;
@property(nonatomic) _Bool hasOriginalQuery; // @dynamic hasOriginalQuery;
@property(nonatomic) _Bool hasOutOfSyncResponseCount; // @dynamic hasOutOfSyncResponseCount;
@property(nonatomic) _Bool hasQueryPrefixForDisplayedSuggestions; // @dynamic hasQueryPrefixForDisplayedSuggestions;
@property(nonatomic) _Bool hasReleaseNumber; // @dynamic hasReleaseNumber;
@property(nonatomic) _Bool hasRenderedResponseCount; // @dynamic hasRenderedResponseCount;
@property(nonatomic) _Bool hasRequestIdentifier; // @dynamic hasRequestIdentifier;
@property(nonatomic) _Bool hasSessionDurationMsec; // @dynamic hasSessionDurationMsec;
@property(nonatomic) _Bool hasSessionId; // @dynamic hasSessionId;
@property(nonatomic) _Bool hasSessionNumber; // @dynamic hasSessionNumber;
@property(nonatomic) _Bool hasStartupInitTimeMsec; // @dynamic hasStartupInitTimeMsec;
@property(nonatomic) _Bool hasStartupRenderedResponseTimeMsec; // @dynamic hasStartupRenderedResponseTimeMsec;
@property(nonatomic) _Bool hasTotalRenderedResponseTimeMsec; // @dynamic hasTotalRenderedResponseTimeMsec;
@property(nonatomic) _Bool hasTotalRoundTripTimeMsec; // @dynamic hasTotalRoundTripTimeMsec;
@property(nonatomic) _Bool hasTotalWaitForHighConfidenceIcingResultMsec; // @dynamic hasTotalWaitForHighConfidenceIcingResultMsec;
@property(nonatomic) _Bool hasUnstableConnection; // @dynamic hasUnstableConnection;
@property(nonatomic) _Bool hasZeroPrefixEnabled; // @dynamic hasZeroPrefixEnabled;
@property(nonatomic) _Bool hasZeroPrefixRoundTripTimeMsec; // @dynamic hasZeroPrefixRoundTripTimeMsec;
@property(nonatomic) unsigned int highConfidenceIcingResultCount; // @dynamic highConfidenceIcingResultCount;
@property(nonatomic) unsigned int internalCacheHitCount; // @dynamic internalCacheHitCount;
@property(nonatomic) unsigned int lastEditTimeMsec; // @dynamic lastEditTimeMsec;
@property(nonatomic) unsigned int lastQueryBuildTimeMsec; // @dynamic lastQueryBuildTimeMsec;
@property(nonatomic) unsigned int maxRoundTripTimeMsec; // @dynamic maxRoundTripTimeMsec;
@property(nonatomic) unsigned int numZeroPrefixSuggestionsShown; // @dynamic numZeroPrefixSuggestionsShown;
@property(nonatomic) _Bool offlineTriggered; // @dynamic offlineTriggered;
@property(retain, nonatomic) NSString *originalQuery; // @dynamic originalQuery;
@property(nonatomic) unsigned int outOfSyncResponseCount; // @dynamic outOfSyncResponseCount;
@property(retain, nonatomic) NSString *queryPrefixForDisplayedSuggestions; // @dynamic queryPrefixForDisplayedSuggestions;
@property(nonatomic) unsigned int releaseNumber; // @dynamic releaseNumber;
@property(nonatomic) unsigned int renderedResponseCount; // @dynamic renderedResponseCount;
@property(retain, nonatomic) NSString *requestIdentifier; // @dynamic requestIdentifier;
@property(nonatomic) unsigned int sessionDurationMsec; // @dynamic sessionDurationMsec;
@property(retain, nonatomic) NSString *sessionId; // @dynamic sessionId;
@property(nonatomic) unsigned int sessionNumber; // @dynamic sessionNumber;
@property(nonatomic) unsigned int startupInitTimeMsec; // @dynamic startupInitTimeMsec;
@property(nonatomic) unsigned int startupRenderedResponseTimeMsec; // @dynamic startupRenderedResponseTimeMsec;
@property(nonatomic) unsigned int totalRenderedResponseTimeMsec; // @dynamic totalRenderedResponseTimeMsec;
@property(nonatomic) unsigned int totalRoundTripTimeMsec; // @dynamic totalRoundTripTimeMsec;
@property(nonatomic) unsigned int totalWaitForHighConfidenceIcingResultMsec; // @dynamic totalWaitForHighConfidenceIcingResultMsec;
@property(nonatomic) _Bool unstableConnection; // @dynamic unstableConnection;
@property(nonatomic) _Bool zeroPrefixEnabled; // @dynamic zeroPrefixEnabled;
@property(nonatomic) unsigned int zeroPrefixRoundTripTimeMsec; // @dynamic zeroPrefixRoundTripTimeMsec;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GMSx_PBGeneratedMessage.h"

@class GMSx_LOGGMMUserInteraction_Params, GMSx_LOGGMMVisualElement, GMSx_LOGVisualElementLiteProto, GMSx_PBMutableArray, NSString;

@interface GMSx_LOGGMMUserInteraction : GMSx_PBGeneratedMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) int action; // @dynamic action;
@property(retain, nonatomic) GMSx_LOGVisualElementLiteProto *clientLeafVe; // @dynamic clientLeafVe;
@property(retain, nonatomic) GMSx_PBMutableArray *clientVeTreeArray; // @dynamic clientVeTreeArray;
@property(retain, nonatomic) NSString *contentEi; // @dynamic contentEi;
@property(retain, nonatomic) GMSx_LOGGMMVisualElement *contentVe; // @dynamic contentVe;
@property(nonatomic) long long featureFprint; // @dynamic featureFprint;
@property(nonatomic) _Bool hasAction; // @dynamic hasAction;
@property(nonatomic) _Bool hasClientLeafVe; // @dynamic hasClientLeafVe;
@property(nonatomic) _Bool hasClientVeTreeArray; // @dynamic hasClientVeTreeArray;
@property(nonatomic) _Bool hasContentEi; // @dynamic hasContentEi;
@property(nonatomic) _Bool hasContentVe; // @dynamic hasContentVe;
@property(nonatomic) _Bool hasFeatureFprint; // @dynamic hasFeatureFprint;
@property(nonatomic) _Bool hasParams; // @dynamic hasParams;
@property(nonatomic) _Bool hasPrimaryUserAction; // @dynamic hasPrimaryUserAction;
@property(retain, nonatomic) GMSx_LOGGMMUserInteraction_Params *params; // @dynamic params;
@property(nonatomic) int primaryUserAction; // @dynamic primaryUserAction;

@end


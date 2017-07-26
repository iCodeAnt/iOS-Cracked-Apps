//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MVHallModel, MVSeatView, NSArray;

@interface MVSeatCenterHelper : NSObject
{
    MVHallModel *_hallModel;
    NSArray *_seatViewArray;
    MVSeatView *_seat0;
    MVSeatView *_seat1;
    struct CGPoint _seatCenter;
    struct CGPoint _seatSmallCenter;
    struct CGPoint _seatMin;
    struct CGPoint _seatMax;
    struct CGRect _hotRect;
    struct CGRect _smallHotRect;
    struct CGRect _allSeatsFrame;
}

@property(retain, nonatomic) MVSeatView *seat1; // @synthesize seat1=_seat1;
@property(retain, nonatomic) MVSeatView *seat0; // @synthesize seat0=_seat0;
@property(nonatomic) struct CGRect allSeatsFrame; // @synthesize allSeatsFrame=_allSeatsFrame;
@property(nonatomic) struct CGPoint seatMax; // @synthesize seatMax=_seatMax;
@property(nonatomic) struct CGPoint seatMin; // @synthesize seatMin=_seatMin;
@property(retain, nonatomic) NSArray *seatViewArray; // @synthesize seatViewArray=_seatViewArray;
@property(nonatomic) __weak MVHallModel *hallModel; // @synthesize hallModel=_hallModel;
@property(nonatomic) struct CGRect smallHotRect; // @synthesize smallHotRect=_smallHotRect;
@property(nonatomic) struct CGRect hotRect; // @synthesize hotRect=_hotRect;
@property(nonatomic) struct CGPoint seatSmallCenter; // @synthesize seatSmallCenter=_seatSmallCenter;
@property(nonatomic) struct CGPoint seatCenter; // @synthesize seatCenter=_seatCenter;
- (void).cxx_destruct;
- (_Bool)isHotAreaAvailable;
- (double)area:(struct CGPoint)arg1;
- (void)caculateSeatCenter:(id)arg1;
- (void)inputSeats:(id)arg1;
- (id)initWithHall:(id)arg1;

@end

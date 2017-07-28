//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "GMSEntityProvider.h"

@class GMSMapView, NSString;

@interface GMSSDKEntityProvider : NSObject <GMSEntityProvider>
{
    GMSMapView *_bridge;
    reffed_ptr_57016b98 _idleState;
    struct unique_ptr<gmscore::vector::MutableStateTracker, std::__1::default_delete<gmscore::vector::MutableStateTracker>> _idleStateTracker;
    struct reffed_ptr<gmscore::renderer::Behavior> _behavior;
    struct unique_ptr<gmscore::vector::MutableStateTracker, std::__1::default_delete<gmscore::vector::MutableStateTracker>> _cameraStateTracker;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)willDestroyRenderer:(struct EntityRenderer *)arg1;
- (void)didCreateRenderer:(struct EntityRenderer *)arg1 resources:(id)arg2 behaviorCamera:(reffed_ptr_329922e5)arg3;
- (void)resetIdleState;
- (id)initWithBridge:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


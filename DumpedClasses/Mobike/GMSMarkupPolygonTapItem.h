//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GMSMarkupTapItem.h"

@class GMSPolygon2D;

@interface GMSMarkupPolygonTapItem : GMSMarkupTapItem
{
    GMSPolygon2D *_polygon;
    struct vector<gmscore::model::Rectangle2D, std::__1::allocator<gmscore::model::Rectangle2D>> _bounds;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (_Bool)isHitByTap:(const struct WrappedFrustum2D *)arg1 coords:(struct CGPoint)arg2 camera:(const reffed_ptr_329922e5 *)arg3;
- (id)initWithPolygon:(id)arg1 itemID:(unsigned long long)arg2 provider:(id)arg3;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TTResponseModel.h"

@class NSString, TTPersonalHomeUserInfoDataResponseModel, TTPersonalHomeUserInfoExtraDataResponseModel;

@interface TTPersonalHomeUserInfoResponseModel : TTResponseModel
{
    NSString *_message;
    TTPersonalHomeUserInfoDataResponseModel *_data;
    TTPersonalHomeUserInfoExtraDataResponseModel *_extra_data;
}

+ (_Bool)propertyIsOptional:(id)arg1;
@property(retain, nonatomic) TTPersonalHomeUserInfoExtraDataResponseModel *extra_data; // @synthesize extra_data=_extra_data;
@property(retain, nonatomic) TTPersonalHomeUserInfoDataResponseModel *data; // @synthesize data=_data;
@property(copy, nonatomic) NSString *message; // @synthesize message=_message;
- (void).cxx_destruct;

@end

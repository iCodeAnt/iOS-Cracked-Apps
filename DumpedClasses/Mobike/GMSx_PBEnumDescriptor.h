//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class GMSx_PBArray, NSString;

@interface GMSx_PBEnumDescriptor : NSObject
{
    NSString *name_;
    GMSx_PBArray *values_;
    CDUnknownFunctionPointerType enumVerifier_;
    const char *extraTextFormatInfo_;
}

+ (id)descriptorForName:(const char *)arg1;
+ (id)allocDescriptorForName:(id)arg1 values:(struct PBMessageEnumValueDescription *)arg2 valueCount:(unsigned long long)arg3 enumVerifier:(CDUnknownFunctionPointerType)arg4 extraTextFormatInfo:(const char *)arg5;
+ (id)allocDescriptorForName:(id)arg1 values:(struct PBMessageEnumValueDescription *)arg2 valueCount:(unsigned long long)arg3 enumVerifier:(CDUnknownFunctionPointerType)arg4;
@property(readonly, nonatomic) CDUnknownFunctionPointerType enumVerifier; // @synthesize enumVerifier=enumVerifier_;
@property(readonly, retain, nonatomic) GMSx_PBArray *values; // @synthesize values=values_;
@property(readonly, retain, nonatomic) NSString *name; // @synthesize name=name_;
- (id)textFormatNameForEnumValue:(int)arg1;
- (void)dealloc;
- (id)enumValueWithName:(id)arg1;
- (id)enumValueWithNumber:(int)arg1;
- (id)initWithName:(id)arg1 values:(id)arg2 enumVerifier:(CDUnknownFunctionPointerType)arg3;

@end


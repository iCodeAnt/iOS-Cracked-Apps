//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface OMGCallStackInfo : NSObject
{
    NSString *_imageName;
    unsigned long long _instructionPointer;
}

@property(nonatomic) unsigned long long instructionPointer; // @synthesize instructionPointer=_instructionPointer;
@property(copy, nonatomic) NSString *imageName; // @synthesize imageName=_imageName;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)initWithImageName:(id)arg1 andInstructionPointer:(unsigned long long)arg2;

@end


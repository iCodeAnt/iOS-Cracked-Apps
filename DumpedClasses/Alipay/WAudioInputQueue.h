//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "APAudioSessionManagerDelegate.h"

@class NSMutableData, NSObject<OS_dispatch_queue>;

@interface WAudioInputQueue : NSObject <APAudioSessionManagerDelegate>
{
    _Bool _isRunning;
    _Bool _shouldResume;
    _Bool _started;
    _Bool _enableNoiseSuppresion;
    unsigned int _bufferSize;
    id <WAudioInputQueueDelegate> _delegate;
    double _bufferDuration;
    struct AudioQueueLevelMeterState *_meterState;
    struct OpaqueAudioQueue *_audioQueue;
    NSMutableData *_buffer;
    void *_audioProcessor;
    void *_processedBuffer;
    NSObject<OS_dispatch_queue> *_queue;
    struct AudioStreamBasicDescription _format;
}

+ (id)inputQueueWithFormat:(struct AudioStreamBasicDescription)arg1 bufferDuration:(double)arg2 delegate:(id)arg3 queue:(id)arg4;
@property(nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(nonatomic) void *processedBuffer; // @synthesize processedBuffer=_processedBuffer;
@property(nonatomic) void *audioProcessor; // @synthesize audioProcessor=_audioProcessor;
@property(nonatomic) _Bool enableNoiseSuppresion; // @synthesize enableNoiseSuppresion=_enableNoiseSuppresion;
@property(nonatomic) _Bool started; // @synthesize started=_started;
@property(retain, nonatomic) NSMutableData *buffer; // @synthesize buffer=_buffer;
@property(nonatomic) struct OpaqueAudioQueue *audioQueue; // @synthesize audioQueue=_audioQueue;
@property(nonatomic) _Bool shouldResume; // @synthesize shouldResume=_shouldResume;
@property(readonly, nonatomic) struct AudioQueueLevelMeterState *meterState; // @synthesize meterState=_meterState;
@property(nonatomic) unsigned int bufferSize; // @synthesize bufferSize=_bufferSize;
@property(readonly, nonatomic) double bufferDuration; // @synthesize bufferDuration=_bufferDuration;
@property(readonly, nonatomic) struct AudioStreamBasicDescription format; // @synthesize format=_format;
@property(nonatomic) _Bool isRunning; // @synthesize isRunning=_isRunning;
@property(nonatomic) __weak id <WAudioInputQueueDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)handleAudioQueuePropertyCallBack:(struct OpaqueAudioQueue *)arg1 property:(unsigned int)arg2;
- (void)handleAudioQueueOutputCallBack:(struct OpaqueAudioQueue *)arg1 buffer:(struct AudioQueueBuffer *)arg2 inStartTime:(const struct AudioTimeStamp *)arg3 inNumberPacketDescriptions:(unsigned int)arg4 inPacketDescs:(const struct AudioStreamPacketDescription *)arg5;
- (void)audioSessionManagerReceivePauseCommand:(id)arg1;
@property(readonly, nonatomic) _Bool available; // @dynamic available;
- (_Bool)stop;
- (double)getMeterValue;
- (void)cancel;
- (_Bool)reset;
- (_Bool)pause;
- (_Bool)start;
- (void)disposeAudioOutputQueue;
- (void)createAudioInputQueue;
- (_Bool)checkAudioQueueSuccess:(int)arg1;
- (void)errorForOSStatus:(int)arg1 error:(id *)arg2;
- (void)dealloc;
- (id)initWithFormat:(struct AudioStreamBasicDescription)arg1 bufferDuration:(double)arg2 delegate:(id)arg3 queue:(id)arg4;

@end


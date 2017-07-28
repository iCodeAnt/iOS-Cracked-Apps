//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "AVCaptureMetadataOutputObjectsDelegate.h"
#import "AVCaptureVideoDataOutputSampleBufferDelegate.h"

@class AVCaptureDevice, AVCaptureDeviceInput, AVCaptureMetadataOutput, AVCaptureSession, AVCaptureVideoPreviewLayer, NSString, NSTimer, UIButton, UIImageView, UILabel;

@interface QRcodeView : UIView <AVCaptureMetadataOutputObjectsDelegate, AVCaptureVideoDataOutputSampleBufferDelegate>
{
    int num;
    _Bool upOrdown;
    NSTimer *timer;
    UIView *_maskView;
    UIView *_leftView;
    UIImageView *_bottomView;
    UIView *_rightView;
    UIView *_topView;
    _Bool torchIsOn;
    NSString *bikeCode;
    UIButton *switchLamplightBtn;
    UIButton *manualInputBtn;
    UILabel *lanlightLbl;
    double qrLineY;
    UIImageView *bikeIconImgView;
    UILabel *bright;
    _Bool isManualClose;
    float lastTorchLevel;
    id <manualInputView> _delegate;
    CDUnknownBlockType _callbackQRCode;
    AVCaptureDevice *_device;
    AVCaptureDeviceInput *_input;
    AVCaptureMetadataOutput *_output;
    AVCaptureSession *_session;
    AVCaptureVideoPreviewLayer *_preview;
    UIImageView *_line;
    CDUnknownBlockType _scanBlock;
    unsigned long long _stype;
}

@property(nonatomic) unsigned long long stype; // @synthesize stype=_stype;
@property(copy, nonatomic) CDUnknownBlockType scanBlock; // @synthesize scanBlock=_scanBlock;
@property(retain, nonatomic) UIImageView *line; // @synthesize line=_line;
@property(retain, nonatomic) AVCaptureVideoPreviewLayer *preview; // @synthesize preview=_preview;
@property(retain, nonatomic) AVCaptureSession *session; // @synthesize session=_session;
@property(retain, nonatomic) AVCaptureMetadataOutput *output; // @synthesize output=_output;
@property(retain, nonatomic) AVCaptureDeviceInput *input; // @synthesize input=_input;
@property(retain, nonatomic) AVCaptureDevice *device; // @synthesize device=_device;
@property(copy, nonatomic) CDUnknownBlockType callbackQRCode; // @synthesize callbackQRCode=_callbackQRCode;
@property(nonatomic) id <manualInputView> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)dealloc;
- (void)captureOutput:(id)arg1 didOutputSampleBuffer:(struct opaqueCMSampleBuffer *)arg2 fromConnection:(id)arg3;
- (void)outputDelegate;
- (void)captureOutput:(id)arg1 didOutputMetadataObjects:(id)arg2 fromConnection:(id)arg3;
- (void)autoChangeTorchLevel:(double)arg1;
- (void)lamplilghtOff;
- (void)lamplightSwitch:(id)arg1 sensor:(float)arg2;
- (void)setupCamera;
- (id)getBikeCode;
- (void)stopCamera;
- (void)startCameraHandler:(CDUnknownBlockType)arg1;
- (void)startCamera;
- (void)animation1;
- (void)bluetoothStateChangeWithNoticeBar:(double)arg1;
- (void)pushManualInputView:(id)arg1;
- (void)addCoverView;
- (void)setupView;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1 WithType:(unsigned long long)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "Mobike_ViewController.h"

@class UIButton, UIImageView, UILabel;

@interface mobike_redPacketViewController : Mobike_ViewController
{
    int _redCount;
    UILabel *_redpacketValue;
    UIImageView *_botomImage;
    UIButton *_shareTo;
    UIButton *_myRed;
}

@property(retain, nonatomic) UIButton *myRed; // @synthesize myRed=_myRed;
@property(retain, nonatomic) UIButton *shareTo; // @synthesize shareTo=_shareTo;
@property(retain, nonatomic) UIImageView *botomImage; // @synthesize botomImage=_botomImage;
@property(retain, nonatomic) UILabel *redpacketValue; // @synthesize redpacketValue=_redpacketValue;
@property int redCount; // @synthesize redCount=_redCount;
- (void).cxx_destruct;
- (id)shareDataForUrl;
- (void)shareWebpageToPlatformType:(long long)arg1;
- (void)shareSelectWithType:(long long)arg1;
- (void)checkMyRedPacket:(id)arg1;
- (void)shareToFriends:(id)arg1;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;

@end


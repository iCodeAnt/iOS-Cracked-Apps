//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class UISwitch;

@interface FBAppInviteSettingsTableViewCell : UITableViewCell
{
    UISwitch *_toggleSwitch;
    unsigned long long _identifier;
}

+ (id)cellWithIdentifier:(unsigned long long)arg1 text:(id)arg2 image:(id)arg3 accessory:(long long)arg4 selectionStyle:(long long)arg5;
@property(nonatomic) unsigned long long identifier; // @synthesize identifier=_identifier;
@property(retain, nonatomic) UISwitch *toggleSwitch; // @synthesize toggleSwitch=_toggleSwitch;
- (void).cxx_destruct;
- (void)showToggleSwitch:(_Bool)arg1;

@end

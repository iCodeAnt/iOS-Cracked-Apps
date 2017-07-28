//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface UPAUtils : NSObject
{
}

+ (_Bool)isValidateTextField:(id)arg1 regex:(id)arg2;
+ (id)userIdPath;
+ (void)deleteUserIdFromfile:(id)arg1;
+ (void)writeUserIdToFile:(id)arg1 Key:(id)arg2;
+ (id)readUserIdFromFile:(id)arg1;
+ (id)myToolBar:(id)arg1;
+ (_Bool)isJailbroken;
+ (_Bool)iPadDevice;
+ (id)getFormatPhoneNum:(id)arg1;
+ (_Bool)checkCardId:(id)arg1;
+ (id)maskedBankCard:(id)arg1;
+ (id)getEncrptyCardID:(id)arg1;
+ (id)getNormalCardID:(id)arg1;
+ (id)getFormatCardID:(id)arg1;
+ (id)redTextColor;
+ (id)greenTextColor;
+ (id)adContentColor;
+ (id)adBackgroundColor;
+ (id)underLineDownColor;
+ (id)underLineNormalColor;
+ (id)focusedTextFieldBorderColor;
+ (id)highLightColor;
+ (id)orderBGColor;
+ (id)resultTitleColor;
+ (id)navBarColor;
+ (id)textFieldBGColor;
+ (id)toolBarColor;
+ (id)lightBlackColor;
+ (id)borderColor;
+ (id)navBarTitleColor;
+ (id)getCurrentYear;
+ (id)currentScreen;
+ (id)currentDevice;
+ (id)currentUID;
+ (id)currentMAC;
+ (id)currentLang;
+ (_Bool)bound:(id)arg1;
+ (_Bool)continueQuery:(id)arg1;
+ (_Bool)succeed:(id)arg1;
+ (_Bool)shouldChangeOrientation:(long long)arg1;
+ (struct CGPoint)displayCenter;
+ (double)statusBarHeight;
+ (double)displayHeight;
+ (double)displayWidth;
+ (double)rotatedOffset;
+ (struct CGPoint)rotatedDisplayCenter;
+ (double)rotatedHeight;
+ (double)rotatedWidth;
+ (double)viewControllerBoundsOriginY;
+ (_Bool)iOS7Device;
- (void)setViewColors:(id)arg1 inView:(id)arg2;

@end


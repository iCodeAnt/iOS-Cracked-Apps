//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface TDUtility : NSObject
{
}

+ (float)fileSizeAtPath:(id)arg1;
+ (id)getInstallationAppList;
+ (id)getInfoPlist:(id)arg1;
+ (id)getExecuteableName:(id)arg1;
+ (id)runningProcesses;
+ (id)systemProcesses;
+ (id)getNetworkOperator;
+ (id)getMNC;
+ (id)getMCC;
+ (id)getTelephonyNetworkInfo;
+ (id)getCarrierName;
+ (id)getCellularType;
+ (_Bool)isWWANConnection;
+ (_Bool)isWifiConnection;
+ (_Bool)isNotConnection;
+ (id)getPackageType;
+ (long long)getUpdateTime;
+ (id)getDataPath;
+ (long long)getInstallTime;
+ (long long)getPurchaseDate;
+ (id)getVersionCode;
+ (id)getVendorSign;
+ (id)getVendor;
+ (id)getCategory;
+ (id)getDisplayName;
+ (id)getItemName;
+ (id)getItemId;
+ (id)getAppleID;
+ (id)getiTunesInfo;
+ (id)getBundleExecutable;
+ (id)getBundleId;
+ (_Bool)isTxyTweak;
+ (_Bool)isAppCracked;
+ (id)getWatchPixel;
+ (id)getKeyboards;
+ (_Bool)advertisingEnabled;
+ (_Bool)is24HourTime;
+ (id)getLocale;
+ (int)getBatteryState;
+ (float)getBatteryLevel;
+ (id)getDeviceName;
+ (id)getScreenPixel;
+ (unsigned long long)userMemory;
+ (long long)freeDiskSpace;
+ (long long)totalDiskSpace;
+ (double)getActiveTime;
+ (int)getBootTime;
+ (id)getCountry;
+ (id)getLanguage;
+ (long long)getTimeZoneInt;
+ (id)getTimeZone;
+ (id)getSystemVersion;
+ (id)getSystemName;
+ (id)getHostName;
+ (id)getDeviceModel;
+ (id)getSysInfoByName:(char *)arg1;
+ (id)getIDFV;
+ (id)getIDFA;
+ (_Bool)isJailbroken;
+ (id)getTDUDID;
+ (int)getTimeInterval:(long long)arg1;
+ (int)getTimeInterval:(long long)arg1 withEndTime:(long long)arg2;
+ (long long)getTimeStampByMiliSeconds;
+ (id)getProdParam;
+ (long long)releaseMode;
+ (id)getMobileProvision;
+ (id)getBinaryImage;
+ (id)getIPFromHostName:(id)arg1;
+ (id)parseHostFromURL:(id)arg1;
+ (_Bool)isValidIP:(id)arg1;
+ (id)createUUID;
+ (id)composedUdid;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSDate.h"

@class NSString;

@interface NSDate (Utilities)
+ (id)dateWithMinutesBeforeNow:(long long)arg1;
+ (id)dateWithMinutesFromNow:(long long)arg1;
+ (id)dateWithHoursBeforeNow:(long long)arg1;
+ (id)dateWithHoursFromNow:(long long)arg1;
+ (id)dateYesterday;
+ (id)dateTomorrow;
+ (id)dateWithDaysBeforeNow:(long long)arg1;
+ (id)dateWithDaysFromNow:(long long)arg1;
+ (id)currentCalendar;
@property(readonly) long long year;
@property(readonly) long long nthWeekday;
@property(readonly) long long weekday;
@property(readonly) long long week;
@property(readonly) long long month;
@property(readonly) long long day;
@property(readonly) long long seconds;
@property(readonly) long long minute;
@property(readonly) long long hour;
@property(readonly) long long nearestHour;
- (long long)distanceInDaysToDate:(id)arg1;
- (long long)daysBeforeDate:(id)arg1;
- (long long)daysAfterDate:(id)arg1;
- (long long)hoursBeforeDate:(id)arg1;
- (long long)hoursAfterDate:(id)arg1;
- (long long)minutesBeforeDate:(id)arg1;
- (long long)minutesAfterDate:(id)arg1;
- (id)dateAtEndOfDay;
- (id)dateAtStartOfDay;
- (id)componentsWithOffsetFromDate:(id)arg1;
- (id)dateBySubtractingMinutes:(long long)arg1;
- (id)dateByAddingMinutes:(long long)arg1;
- (id)dateBySubtractingHours:(long long)arg1;
- (id)dateByAddingHours:(long long)arg1;
- (id)dateBySubtractingDays:(long long)arg1;
- (id)dateByAddingDays:(long long)arg1;
- (id)dateBySubtractingMonths:(long long)arg1;
- (id)dateByAddingMonths:(long long)arg1;
- (id)dateBySubtractingYears:(long long)arg1;
- (id)dateByAddingYears:(long long)arg1;
- (_Bool)isTypicallyWorkday;
- (_Bool)isTypicallyWeekend;
- (_Bool)isInPast;
- (_Bool)isInFuture;
- (_Bool)isLaterThanDate:(id)arg1;
- (_Bool)isEarlierThanDate:(id)arg1;
- (_Bool)isLastYear;
- (_Bool)isNextYear;
- (_Bool)isThisYear;
- (_Bool)isSameYearAsDate:(id)arg1;
- (_Bool)isNextMonth;
- (_Bool)isLastMonth;
- (_Bool)isThisMonth;
- (_Bool)isSameMonthAsDate:(id)arg1;
- (_Bool)isLastWeek;
- (_Bool)isNextWeek;
- (_Bool)isThisWeek;
- (_Bool)isSameWeekAsDate:(id)arg1;
- (_Bool)isYesterday;
- (_Bool)isTomorrow;
- (_Bool)isToday;
- (_Bool)isEqualToDateIgnoringTime:(id)arg1;
@property(readonly, nonatomic) NSString *longDateString;
@property(readonly, nonatomic) NSString *longTimeString;
@property(readonly, nonatomic) NSString *longString;
@property(readonly, nonatomic) NSString *mediumDateString;
@property(readonly, nonatomic) NSString *mediumTimeString;
@property(readonly, nonatomic) NSString *mediumString;
@property(readonly, nonatomic) NSString *shortDateString;
@property(readonly, nonatomic) NSString *shortTimeString;
@property(readonly, nonatomic) NSString *shortString;
- (id)stringWithDateStyle:(unsigned long long)arg1 timeStyle:(unsigned long long)arg2;
- (id)stringWithFormat:(id)arg1;
@end


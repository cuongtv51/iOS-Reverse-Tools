//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class ITTCalDay, ITTCalendarView;

@protocol ITTCalendarViewDelegate <NSObject>

@optional
- (void)calendarViewDidSelectPeriodType:(ITTCalendarView *)arg1 periodType:(int)arg2;
- (void)calendarViewDidSelectDay:(ITTCalendarView *)arg1 calDay:(ITTCalDay *)arg2;
@end


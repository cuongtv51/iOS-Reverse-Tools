//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class ITTCalendarScrollView, NSSet, UIEvent;

@protocol ITTCalendarScrollViewDelegate <NSObject>

@optional
- (void)calendarSrollViewTouchesCancelled:(ITTCalendarScrollView *)arg1 touches:(NSSet *)arg2 withEvent:(UIEvent *)arg3;
- (void)calendarSrollViewTouchesEnded:(ITTCalendarScrollView *)arg1 touches:(NSSet *)arg2 withEvent:(UIEvent *)arg3;
- (void)calendarSrollViewTouchesMoved:(ITTCalendarScrollView *)arg1 touches:(NSSet *)arg2 withEvent:(UIEvent *)arg3;
- (void)calendarSrollViewTouchesBegan:(ITTCalendarScrollView *)arg1 touches:(NSSet *)arg2 withEvent:(UIEvent *)arg3;
@end


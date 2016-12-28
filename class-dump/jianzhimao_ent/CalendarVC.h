//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "ITTCalendarViewDelegate.h"

@class ITTCalendarView, NSMutableArray, NSMutableDictionary, NSString, UILabel, UIView;

@interface CalendarVC : UIViewController <ITTCalendarViewDelegate>
{
    _Bool _isAllowSelect;
    id <CalendarVCDelegate> _delegate;
    NSMutableDictionary *_selectedDateDic;
    long long _showMode;
    NSMutableDictionary *_customDateDic;
    UILabel *_errTipLabel;
    UILabel *_errTipSubLabel;
    ITTCalendarView *_calendarView;
    NSMutableArray *_sortDateArray;
    UIView *_footerView;
}

@property(retain, nonatomic) UIView *footerView; // @synthesize footerView=_footerView;
@property(retain, nonatomic) NSMutableArray *sortDateArray; // @synthesize sortDateArray=_sortDateArray;
@property(retain, nonatomic) ITTCalendarView *calendarView; // @synthesize calendarView=_calendarView;
@property(retain, nonatomic) UILabel *errTipSubLabel; // @synthesize errTipSubLabel=_errTipSubLabel;
@property(retain, nonatomic) UILabel *errTipLabel; // @synthesize errTipLabel=_errTipLabel;
@property(retain, nonatomic) NSMutableDictionary *customDateDic; // @synthesize customDateDic=_customDateDic;
@property(nonatomic) long long showMode; // @synthesize showMode=_showMode;
@property(nonatomic) _Bool isAllowSelect; // @synthesize isAllowSelect=_isAllowSelect;
@property(retain, nonatomic) NSMutableDictionary *selectedDateDic; // @synthesize selectedDateDic=_selectedDateDic;
@property(nonatomic) __weak id <CalendarVCDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)closeBtnClick;
- (void)confirmBtnClick;
- (void)updateWarnInfo;
- (void)sortSelectedDate;
- (id)lastSelectedDate;
- (id)firstSelectedDate;
- (id)maxDateWithCurrentDate:(id)arg1;
- (long long)workDayCount;
- (long long)customWorkDayCount;
- (void)setupDefaultMode;
- (void)setupDotMode;
- (void)setupFooterView;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


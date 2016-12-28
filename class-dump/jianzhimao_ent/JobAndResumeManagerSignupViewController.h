//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JobAndResumeManagerBaseViewController.h"

#import "AJAlertViewDelegate.h"
#import "CalendarVCDelegate.h"
#import "JobAndResumeManagerLogicSignupDeleagte.h"
#import "JobAndResumeManagerSignupConditionDelegate.h"
#import "JobManagerSignupConditionViewDelegate.h"

@class JobAndResumeManagerLogicSignup, JobAndResumeManagerSignupConditionViewController, JobManagerSignupBarView, JobManagerSignupConditionView, NSString;

@interface JobAndResumeManagerSignupViewController : JobAndResumeManagerBaseViewController <JobManagerSignupConditionViewDelegate, AJAlertViewDelegate, CalendarVCDelegate, JobAndResumeManagerLogicSignupDeleagte, JobAndResumeManagerSignupConditionDelegate>
{
    JobAndResumeManagerLogicSignup *_logic;
    JobManagerSignupConditionView *_titleView;
    JobManagerSignupBarView *_barView;
    JobAndResumeManagerSignupConditionViewController *_conditionAllViewCtrl;
    JobAndResumeManagerSignupConditionViewController *_conditionMatchViewCtrl;
    JobAndResumeManagerSignupConditionViewController *_currentConditionViewCtrl;
}

@property(retain, nonatomic) JobAndResumeManagerSignupConditionViewController *currentConditionViewCtrl; // @synthesize currentConditionViewCtrl=_currentConditionViewCtrl;
@property(retain, nonatomic) JobAndResumeManagerSignupConditionViewController *conditionMatchViewCtrl; // @synthesize conditionMatchViewCtrl=_conditionMatchViewCtrl;
@property(retain, nonatomic) JobAndResumeManagerSignupConditionViewController *conditionAllViewCtrl; // @synthesize conditionAllViewCtrl=_conditionAllViewCtrl;
@property(retain, nonatomic) JobManagerSignupBarView *barView; // @synthesize barView=_barView;
@property(retain, nonatomic) JobManagerSignupConditionView *titleView; // @synthesize titleView=_titleView;
@property(retain, nonatomic) JobAndResumeManagerLogicSignup *logic; // @synthesize logic=_logic;
- (void).cxx_destruct;
- (void)getResumeList;
- (void)conditionView:(id)arg1 segmentIndex:(long long)arg2;
- (void)updateTotalCount:(long long)arg1;
- (void)updateSelectedBtnStatus:(id)arg1;
- (void)rejectBtnHandler:(id)arg1;
- (void)employBtnHandler:(id)arg1;
- (void)signupNotifityBtnHandler:(id)arg1;
- (id)filterCancleSignuper:(id)arg1;
- (void)selectCondictionMatch;
- (void)selectConditionAll;
- (void)transitionFromViewController:(id)arg1 toViewController:(id)arg2 duration:(double)arg3 animation:(_Bool)arg4;
- (void)selectAllBtnHandler:(id)arg1;
- (void)updateUI;
- (void)reloadListBoth;
- (void)updateCellWithIndexPath:(id)arg1;
- (void)telHandler:(id)arg1;
- (void)reloadListData:(id)arg1;
- (void)updateCell:(id)arg1;
- (void)updateSelectedAllBtn;
- (void)updateView;
- (void)viewWillLayoutSubviews;
- (void)updateFrame;
- (void)initView;
- (void)initData;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)selectToIndex;
- (void)checkShowFooterView;
- (void)endTableViewRefresh;
- (void)removeListData;
- (void)reloadListData;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

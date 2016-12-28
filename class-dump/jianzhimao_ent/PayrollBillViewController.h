//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "BaseNavViewController.h"

#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class JobPayBarView, JobPayMidCell, JobPayTitleView, MJRefreshAutoStateFooter, NSArray, NSMutableArray, NSString, NSTimer, PartimeJobBean, PayrollBillSectionView, SalaryInfoObj, UITableView;

@interface PayrollBillViewController : BaseNavViewController <UITableViewDataSource, UITableViewDelegate>
{
    PartimeJobBean *_partimeJobBean;
    SalaryInfoObj *_salaryInfo;
    JobPayMidCell *_priceBaseCell;
    JobPayMidCell *_priceExtCell;
    PayrollBillSectionView *_billSectionView;
    PayrollBillSectionView *_personSectionView;
    JobPayTitleView *_jobPayTitleView;
    JobPayBarView *_jobPayBarView;
    UITableView *_personTableView;
    MJRefreshAutoStateFooter *_mj_footer;
    NSMutableArray *_dataSource;
    NSArray *_cellTitleBillArray;
    unsigned long long _payrollBillType;
    NSTimer *_timer;
}

@property(retain, nonatomic) NSTimer *timer; // @synthesize timer=_timer;
@property(nonatomic) unsigned long long payrollBillType; // @synthesize payrollBillType=_payrollBillType;
@property(retain, nonatomic) NSArray *cellTitleBillArray; // @synthesize cellTitleBillArray=_cellTitleBillArray;
@property(retain, nonatomic) NSMutableArray *dataSource; // @synthesize dataSource=_dataSource;
@property(retain, nonatomic) MJRefreshAutoStateFooter *mj_footer; // @synthesize mj_footer=_mj_footer;
@property(retain, nonatomic) UITableView *personTableView; // @synthesize personTableView=_personTableView;
@property(retain, nonatomic) JobPayBarView *jobPayBarView; // @synthesize jobPayBarView=_jobPayBarView;
@property(retain, nonatomic) JobPayTitleView *jobPayTitleView; // @synthesize jobPayTitleView=_jobPayTitleView;
@property(retain, nonatomic) PayrollBillSectionView *personSectionView; // @synthesize personSectionView=_personSectionView;
@property(retain, nonatomic) PayrollBillSectionView *billSectionView; // @synthesize billSectionView=_billSectionView;
@property(retain, nonatomic) JobPayMidCell *priceExtCell; // @synthesize priceExtCell=_priceExtCell;
@property(retain, nonatomic) JobPayMidCell *priceBaseCell; // @synthesize priceBaseCell=_priceBaseCell;
@property(retain, nonatomic) SalaryInfoObj *salaryInfo; // @synthesize salaryInfo=_salaryInfo;
@property(retain, nonatomic) PartimeJobBean *partimeJobBean; // @synthesize partimeJobBean=_partimeJobBean;
- (void).cxx_destruct;
- (void)toResumeVC:(id)arg1 resumeType:(unsigned long long)arg2 userResumeType:(long long)arg3 partimeJobBean:(id)arg4;
- (void)toPayVC:(id)arg1;
- (void)toJobDetailVCWithJobBean:(id)arg1 actionDelegate:(id)arg2 isSpread:(_Bool)arg3 jobType:(unsigned long long)arg4;
- (void)toPayBtnHandler:(id)arg1;
- (void)jobPayTitleViewTapHandler:(id)arg1;
- (void)payMethodInputSuccessHandler;
- (void)prePay;
- (void)checkPayPw;
- (void)getBillListHandler:(id)arg1;
- (void)getBillList;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (void)modifyModelDownCount;
- (void)resetDownCount;
- (void)timerHandler:(id)arg1;
- (void)stopTimer;
- (void)startTimer;
- (void)timerSchedule;
- (void)updateTableViewFrame;
- (void)showPrePriceCommonUIWithNeedMoney:(id)arg1;
- (void)showPrePriceNotEnoughUIWithLastPrePrice:(double)arg1 totalMoney:(double)arg2 needMoney:(id)arg3;
- (void)showPrePriceEnoughUIWithLastPrePrice:(double)arg1 totalMoney:(double)arg2 needMoney:(id)arg3;
- (void)updateBarViewUI;
- (void)updateMJ_Footer:(_Bool)arg1;
- (void)updatePriceExt:(double)arg1;
- (void)updatePriceBase:(double)arg1;
- (void)updateBillUserCount:(long long)arg1;
- (void)updateBillSectionView:(long long)arg1;
- (void)updateTitleUI;
- (void)mj_readData;
- (void)initView;
- (void)initData;
- (void)viewDidLoad;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


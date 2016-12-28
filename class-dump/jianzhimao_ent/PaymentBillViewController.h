//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "BaseNavViewController.h"

#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class NSMutableArray, NSString, UILabel, UITableView, UIView;

@interface PaymentBillViewController : BaseNavViewController <UITableViewDataSource, UITableViewDelegate>
{
    UITableView *_billTableView;
    UIView *_tableViewHeaderView;
    UILabel *_headerTipLabel;
    UILabel *_headerTotalArrearsLabel;
    UILabel *_headerSurplusLimitLabel;
    UIView *_headerSurplusLimitView;
    double _warmTipCellDefaultHeight;
    NSString *_warmTipStr;
    NSMutableArray *_billArray;
    NSMutableArray *_cellIDArray;
}

@property(retain, nonatomic) NSMutableArray *cellIDArray; // @synthesize cellIDArray=_cellIDArray;
@property(retain, nonatomic) NSMutableArray *billArray; // @synthesize billArray=_billArray;
@property(copy, nonatomic) NSString *warmTipStr; // @synthesize warmTipStr=_warmTipStr;
@property(nonatomic) double warmTipCellDefaultHeight; // @synthesize warmTipCellDefaultHeight=_warmTipCellDefaultHeight;
@property(nonatomic) __weak UIView *headerSurplusLimitView; // @synthesize headerSurplusLimitView=_headerSurplusLimitView;
@property(nonatomic) __weak UILabel *headerSurplusLimitLabel; // @synthesize headerSurplusLimitLabel=_headerSurplusLimitLabel;
@property(nonatomic) __weak UILabel *headerTotalArrearsLabel; // @synthesize headerTotalArrearsLabel=_headerTotalArrearsLabel;
@property(nonatomic) __weak UILabel *headerTipLabel; // @synthesize headerTipLabel=_headerTipLabel;
@property(nonatomic) __weak UIView *tableViewHeaderView; // @synthesize tableViewHeaderView=_tableViewHeaderView;
@property(nonatomic) __weak UITableView *billTableView; // @synthesize billTableView=_billTableView;
- (void).cxx_destruct;
- (void)requestPaymentBillOrder:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)readBillList;
- (void)requestBillInfo;
- (void)infoBarBtnClick;
- (void)repaymentAllBillBtnClick:(id)arg1;
- (void)surplusLimitClick;
- (void)payBillBtnClick:(id)arg1;
- (void)notificationHandler:(id)arg1;
- (void)mj_readData;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)toPayVC:(id)arg1;
- (id)changeFormatter:(id)arg1;
- (void)initData;
- (void)initView;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


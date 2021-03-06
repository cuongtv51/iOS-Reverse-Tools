//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "BaseViewController.h"

#import "AJAlertViewDelegate.h"
#import "PopViewDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class NSMutableArray, NSMutableAttributedString, NSString, UIButton, UIImageView, UILabel, UITableView;

@interface IndexViewController : BaseViewController <PopViewDelegate, UITableViewDataSource, UITableViewDelegate, AJAlertViewDelegate>
{
    UITableView *_mainTableView;
    UIImageView *_companyLogoImgView;
    UILabel *_companyNameLabel;
    UIButton *_userTypeBtn;
    UIButton *_notificationBarBtn;
    NSMutableArray *_cellIDArray;
    NSString *_specialImagePath;
    double _specialCellHeight;
    UIImageView *_specialImgView;
    NSMutableAttributedString *_tipContentStr;
}

@property(retain, nonatomic) NSMutableAttributedString *tipContentStr; // @synthesize tipContentStr=_tipContentStr;
@property(retain, nonatomic) UIImageView *specialImgView; // @synthesize specialImgView=_specialImgView;
@property(nonatomic) double specialCellHeight; // @synthesize specialCellHeight=_specialCellHeight;
@property(copy, nonatomic) NSString *specialImagePath; // @synthesize specialImagePath=_specialImagePath;
@property(retain, nonatomic) NSMutableArray *cellIDArray; // @synthesize cellIDArray=_cellIDArray;
@property(nonatomic) __weak UIButton *notificationBarBtn; // @synthesize notificationBarBtn=_notificationBarBtn;
@property(retain, nonatomic) UIButton *userTypeBtn; // @synthesize userTypeBtn=_userTypeBtn;
@property(retain, nonatomic) UILabel *companyNameLabel; // @synthesize companyNameLabel=_companyNameLabel;
@property(retain, nonatomic) UIImageView *companyLogoImgView; // @synthesize companyLogoImgView=_companyLogoImgView;
@property(nonatomic) __weak UITableView *mainTableView; // @synthesize mainTableView=_mainTableView;
- (void).cxx_destruct;
- (void)readNewNotify;
- (void)checkUserFrozen:(long long)arg1;
- (void)checkDefaultRedbag;
- (void)readSpecialActivityInfo;
- (void)quickPayJobBtnClick:(id)arg1;
- (void)refreshUserInfo;
- (void)checkSpecialPermission:(long long)arg1;
- (void)checkCurrentUserCertify;
- (void)alertView:(id)arg1 buttonClick:(long long)arg2;
- (void)popView:(id)arg1 click:(long long)arg2;
- (void)refreshCellWithID:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)showReleaseQuickPayJobRedBagTip:(id)arg1;
- (void)showApplyVerifyRedBagTip:(id)arg1;
- (void)configTipWithVerify:(_Bool)arg1;
- (void)refreshUserCertifyWithInfo:(id)arg1;
- (void)refreshUserSpecialPermission:(_Bool)arg1;
- (void)jumpToLatestNotifyPage;
- (void)notificationBarBtnClick:(id)arg1;
- (void)checkLatestNotifyWithNotify:(id)arg1;
- (void)showLatestNotify:(_Bool)arg1;
- (void)jumpToInfoEdit;
- (void)showQuickPayTip3;
- (void)showQuickPayTip2;
- (void)showQuickPayTip1;
- (void)releaseHostJobBtnClick:(id)arg1;
- (void)releaseJobBtnClick:(id)arg1;
- (void)releaseJobWithSenderType:(long long)arg1;
- (void)comeToReleaseJob;
- (void)applyCertifyBtnClick:(id)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)initView;
- (void)initData;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


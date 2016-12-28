//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PartimeJobManagerBaseViewController.h"

#import "AJAlertViewDelegate.h"
#import "UIActionSheetDelegate.h"

@class NSMutableArray, NSString, NSTimer;

@interface PartimeJobRecruitViewController : PartimeJobManagerBaseViewController <AJAlertViewDelegate, UIActionSheetDelegate>
{
    long long _refreshSurplus;
    long long _refreshTotalCount;
    long long _backupRefreshSurplus;
    long long _pushSurplus;
    long long _pushTotalCount;
    long long _backupPushSurplus;
    NSMutableArray *_indexStatusArray;
    _Bool _canRefresh;
    _Bool _canPush;
    NSTimer *_timer;
}

@property(retain, nonatomic) NSTimer *timer; // @synthesize timer=_timer;
- (void).cxx_destruct;
- (void)notificationRefresh;
- (void)toPushJobVC:(long long)arg1;
- (void)finishRecruit:(id)arg1;
- (void)getTrusteeshipLastStatus:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)checkTrusteeshipOrder:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)JobPush:(id)arg1;
- (void)updateJob:(id)arg1;
- (void)deleteJob:(id)arg1;
- (void)getPushSurplus;
- (void)getRefreshSurplus;
- (void)getJobList;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)configCommonCell:(id)arg1 indexPath:(id)arg2 jobBean:(id)arg3;
- (void)configStatusRecruitCell:(id)arg1 indexPath:(id)arg2 jobBean:(id)arg3;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)alertView:(id)arg1 buttonClick:(long long)arg2;
- (void)showPopView_finishRecruit:(id)arg1;
- (void)showPopView_endSignin;
- (void)waitForPayBtnHandler:(id)arg1;
- (void)finishRecruitBtnHandler:(id)arg1;
- (void)toSceneEmployBtnHandler:(id)arg1;
- (void)undercarriageBtnHandler:(id)arg1;
- (void)pushBtnHandler:(id)arg1;
- (void)refreshBtnHandler:(id)arg1;
- (void)toJobDetailBtnHandler:(id)arg1;
- (void)actionSheet:(id)arg1 willDismissWithButtonIndex:(long long)arg2;
- (void)moreBtnHandler:(id)arg1;
- (void)pam_alertCallBackHandle:(long long)arg1;
- (void)configJobListLocalWithPartimeJobBeanClassName:(id)arg1;
- (void)refreshBadge;
- (void)updatePushSurplusUI;
- (void)updateRefreshSurplusUI;
- (void)refreshPushSurplus;
- (void)refreshRefreshSurplus;
- (void)initData;
- (void)modifyModelDownCount;
- (void)resetDownCount;
- (void)timerHandler:(id)arg1;
- (void)stopTimer;
- (void)startTimer;
- (void)timerSchedule;
- (void)updateFrame;
- (void)initView;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


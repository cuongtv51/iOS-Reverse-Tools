//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PartimeJobManagerBaseViewController.h"

#import "AJAlertViewDelegate.h"

@class NSString;

@interface PartimeJobPendingViewController : PartimeJobManagerBaseViewController <AJAlertViewDelegate>
{
}

- (void)toJobDetailPage;
- (void)toLookupJob;
- (void)cancelDeleteJob;
- (void)confirmDeleteJob;
- (void)payingCellDidSelected;
- (void)pam_alertCallBackHandle:(long long)arg1;
- (void)readOrderInfo:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)deleteJob:(long long)arg1 jobBean:(id)arg2;
- (void)getJobList;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)configPartimeJobListPendingCell:(id)arg1 indexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)alertView:(id)arg1 buttonClick:(long long)arg2;
- (void)showPopView_jobPublished:(id)arg1;
- (void)showPopView_invalidJob:(id)arg1;
- (void)showPopView_canclePublishJob;
- (void)continuePayBtnHandler:(id)arg1;
- (void)canclePublishBtnHandler:(id)arg1;
- (void)pendingMidBtnHandler:(id)arg1;
- (void)pendingRightBtnHandler:(id)arg1;
- (void)configJobListLocalWithPartimeJobBeanClassName:(id)arg1;
- (void)updateFrame;
- (void)initView;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


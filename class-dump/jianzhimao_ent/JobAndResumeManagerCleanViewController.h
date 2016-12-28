//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JobAndResumeManagerBaseViewController.h"

@class JobAndResumeManagerLogicClean, JobManagerCleanBarView;

@interface JobAndResumeManagerCleanViewController : JobAndResumeManagerBaseViewController
{
    JobAndResumeManagerLogicClean *_logic;
    JobManagerCleanBarView *_barView;
}

@property(retain, nonatomic) JobManagerCleanBarView *barView; // @synthesize barView=_barView;
@property(retain, nonatomic) JobAndResumeManagerLogicClean *logic; // @synthesize logic=_logic;
- (void).cxx_destruct;
- (void)requestGetJobPrePayInfo;
- (void)getResumeList;
- (void)updateAllDataWithViewCtrl:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)cleanRecordHandler:(id)arg1;
- (void)cleanBarHandler:(id)arg1;
- (void)showCleanBarView:(_Bool)arg1;
- (void)updateCleanBar;
- (void)getJobPrePayInfo;
- (void)updateView;
- (void)updateFrame;
- (void)initView;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "BaseNavViewController.h"

#import "UITextViewDelegate.h"

@class JWTextView, JobPrepayInfoBean, NSString, PartimeJobBean, UILabel;

@interface CleanRequestViewController : BaseNavViewController <UITextViewDelegate>
{
    JobPrepayInfoBean *_jobPrepayInfo;
    PartimeJobBean *_jobBean;
    JWTextView *_contentTextView;
    UILabel *_letterCountLabel;
}

@property(nonatomic) __weak UILabel *letterCountLabel; // @synthesize letterCountLabel=_letterCountLabel;
@property(nonatomic) __weak JWTextView *contentTextView; // @synthesize contentTextView=_contentTextView;
@property(retain, nonatomic) PartimeJobBean *jobBean; // @synthesize jobBean=_jobBean;
@property(retain, nonatomic) JobPrepayInfoBean *jobPrepayInfo; // @synthesize jobPrepayInfo=_jobPrepayInfo;
- (void).cxx_destruct;
- (void)cleanRequestFaildHandler:(id)arg1;
- (void)cleanRequestSuccessHandler;
- (void)requestCleanRequest:(id)arg1;
- (void)submitContent;
- (void)textViewDidChange:(id)arg1;
- (void)viewDidLoad;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


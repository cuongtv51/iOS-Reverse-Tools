//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "BaseNavViewController.h"

#import "UITextViewDelegate.h"

@class IQTextView, JobBaseBean, NSString, UILabel;

@interface RemarkViewController : BaseNavViewController <UITextViewDelegate>
{
    JobBaseBean *_jobBean;
    id <RemarkDelegate> _delegate;
    UILabel *_userNameLabel;
    IQTextView *_remarkContentTextView;
    UILabel *_letterCountLabel;
}

@property(nonatomic) __weak UILabel *letterCountLabel; // @synthesize letterCountLabel=_letterCountLabel;
@property(nonatomic) __weak IQTextView *remarkContentTextView; // @synthesize remarkContentTextView=_remarkContentTextView;
@property(nonatomic) __weak UILabel *userNameLabel; // @synthesize userNameLabel=_userNameLabel;
@property(nonatomic) __weak id <RemarkDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) JobBaseBean *jobBean; // @synthesize jobBean=_jobBean;
- (void).cxx_destruct;
- (void)requestAddRemark:(id)arg1;
- (void)notification;
- (void)submitRemark;
- (_Bool)textView:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(id)arg3;
- (void)textViewDidChange:(id)arg1;
- (void)updateUI;
- (void)initView;
- (void)initData;
- (void)viewDidLoad;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "BaseNavViewController.h"

#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class DataModel, NSMutableArray, NSString, UITableView, UITableViewCell;

@interface LatestNotifyViewController : BaseNavViewController <UITableViewDataSource, UITableViewDelegate>
{
    UITableView *_notifyTableView;
    UITableViewCell *_contentCell;
    long long _expendIndex;
    NSMutableArray *_dataArray;
    NSMutableArray *_webContentArray;
    NSMutableArray *_lateNotifyArray;
    DataModel *_webDataModel;
}

@property(retain, nonatomic) DataModel *webDataModel; // @synthesize webDataModel=_webDataModel;
@property(retain, nonatomic) NSMutableArray *lateNotifyArray; // @synthesize lateNotifyArray=_lateNotifyArray;
@property(retain, nonatomic) NSMutableArray *webContentArray; // @synthesize webContentArray=_webContentArray;
@property(retain, nonatomic) NSMutableArray *dataArray; // @synthesize dataArray=_dataArray;
@property(nonatomic) long long expendIndex; // @synthesize expendIndex=_expendIndex;
@property(retain, nonatomic) UITableViewCell *contentCell; // @synthesize contentCell=_contentCell;
@property(nonatomic) __weak UITableView *notifyTableView; // @synthesize notifyTableView=_notifyTableView;
- (void).cxx_destruct;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)initContentCell;
- (void)didSelectWithRow:(long long)arg1;
- (void)initData;
- (void)configLateNotifyFromLocal;
- (id)getLateNotifyFromLocal;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

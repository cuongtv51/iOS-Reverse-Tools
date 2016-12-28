//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "BaseNavViewController.h"

#import "SelectWorkerCellDelegate.h"
#import "UISearchBarDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class NSMutableArray, NSMutableDictionary, NSString, SelectWorkerViewController, UISearchBar, UITableView;

@interface SelectWorker_All : BaseNavViewController <UITableViewDelegate, UITableViewDataSource, UISearchBarDelegate, SelectWorkerCellDelegate>
{
    NSString *_jobId;
    SelectWorkerViewController *_parentVC;
    UISearchBar *_searchBar;
    UITableView *_tableView;
    NSMutableArray *_workerArray;
    NSMutableDictionary *_selectedWorkerDic;
    NSString *_searchKeyword;
}

@property(copy, nonatomic) NSString *searchKeyword; // @synthesize searchKeyword=_searchKeyword;
@property(retain, nonatomic) NSMutableDictionary *selectedWorkerDic; // @synthesize selectedWorkerDic=_selectedWorkerDic;
@property(retain, nonatomic) NSMutableArray *workerArray; // @synthesize workerArray=_workerArray;
@property(nonatomic) __weak UITableView *tableView; // @synthesize tableView=_tableView;
@property(nonatomic) __weak UISearchBar *searchBar; // @synthesize searchBar=_searchBar;
@property(nonatomic) __weak SelectWorkerViewController *parentVC; // @synthesize parentVC=_parentVC;
@property(copy, nonatomic) NSString *jobId; // @synthesize jobId=_jobId;
- (void).cxx_destruct;
- (void)searchWorker;
- (void)mj_readData;
- (void)selectWorkerCellDidSelected:(id)arg1;
- (void)searchBarCancelButtonClicked:(id)arg1;
- (void)searchBarSearchButtonClicked:(id)arg1;
- (void)searchBarTextDidBeginEditing:(id)arg1;
- (void)dzn_refreshData;
- (void)scrollViewDidScroll:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)pullRefresh;
- (void)refreshArrayWithChangedWorker:(id)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


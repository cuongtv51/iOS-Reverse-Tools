//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "BaseNavViewController.h"

#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class NSDictionary, NSMutableArray, NSString, UITableView;

@interface PersonalCenterViewController : BaseNavViewController <UITableViewDataSource, UITableViewDelegate>
{
    _Bool _isRelease;
    _Bool _isLeaderMode;
    UITableView *_selectionTableView;
    NSMutableArray *_selectionArray;
    NSString *_walletSurPlus;
    NSDictionary *_updateVIPSelection;
    long long _logoStatus;
    NSString *_logoImgPath;
    NSString *_emailStr;
    NSString *_levelName;
}

@property(nonatomic) _Bool isLeaderMode; // @synthesize isLeaderMode=_isLeaderMode;
@property(nonatomic) _Bool isRelease; // @synthesize isRelease=_isRelease;
@property(copy, nonatomic) NSString *levelName; // @synthesize levelName=_levelName;
@property(copy, nonatomic) NSString *emailStr; // @synthesize emailStr=_emailStr;
@property(copy, nonatomic) NSString *logoImgPath; // @synthesize logoImgPath=_logoImgPath;
@property(nonatomic) long long logoStatus; // @synthesize logoStatus=_logoStatus;
@property(retain, nonatomic) NSDictionary *updateVIPSelection; // @synthesize updateVIPSelection=_updateVIPSelection;
@property(retain, nonatomic) NSString *walletSurPlus; // @synthesize walletSurPlus=_walletSurPlus;
@property(retain, nonatomic) NSMutableArray *selectionArray; // @synthesize selectionArray=_selectionArray;
@property(retain, nonatomic) UITableView *selectionTableView; // @synthesize selectionTableView=_selectionTableView;
- (void).cxx_destruct;
- (void)jumpToMore;
- (void)jumpToFeedback;
- (void)jumpToUpdateVIP;
- (void)jumpToMyRedBag;
- (void)jumpToWallet;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)helpCenterBadgeHandler:(id)arg1;
- (void)emailChange:(id)arg1;
- (void)getLeaderSurplusMoney;
- (void)refreshSurplusMoney;
- (void)refreshInfoRow;
- (void)checkVIP;
- (void)checkCurrentUserCertify;
- (void)viewWillAppear:(_Bool)arg1;
- (id)umPageKey;
- (void)initData;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


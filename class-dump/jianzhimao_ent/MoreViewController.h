//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "BaseTableViewController.h"

#import "UIAlertViewDelegate.h"

@class NSString, UILabel;

@interface MoreViewController : BaseTableViewController <UIAlertViewDelegate>
{
    UILabel *_cacheSizeLabel;
}

@property(nonatomic) __weak UILabel *cacheSizeLabel; // @synthesize cacheSizeLabel=_cacheSizeLabel;
- (void).cxx_destruct;
- (void)jumpToClientDownload;
- (void)checkUpdate;
- (void)cleanDick;
- (void)logout;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (void)updateInfo;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


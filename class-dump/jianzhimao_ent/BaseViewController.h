//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "ActionDelegate.h"

@class AccountBean, NSString;

@interface BaseViewController : UIViewController <ActionDelegate>
{
    _Bool _needTranslucentNavigationBarWhenViewWillDisappear;
    AccountBean *_account;
    NSString *_umPageKey;
}

+ (id)loadFromStoryboard:(id)arg1;
@property(nonatomic) _Bool needTranslucentNavigationBarWhenViewWillDisappear; // @synthesize needTranslucentNavigationBarWhenViewWillDisappear=_needTranslucentNavigationBarWhenViewWillDisappear;
@property(retain, nonatomic) NSString *umPageKey; // @synthesize umPageKey=_umPageKey;
@property(retain, nonatomic) AccountBean *account; // @synthesize account=_account;
- (void).cxx_destruct;
- (long long)preferredInterfaceOrientationForPresentation;
- (unsigned long long)supportedInterfaceOrientations;
- (_Bool)shouldAutorotate;
- (_Bool)shouldAutorotateToInterfaceOrientation:(long long)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)popPage;
- (void)push:(id)arg1;
- (void)placeHolderViewDidPressHandler;
- (void)initPlaceHolderView;
- (void)initView;
- (void)initData;
- (void)viewDidLoad;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)init;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


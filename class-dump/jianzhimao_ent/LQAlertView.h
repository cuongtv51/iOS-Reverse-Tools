//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "BaseAlertView.h"

#import "LQAlertViewDelegate.h"

@class NSArray, NSLayoutConstraint, NSMutableArray, NSString, UILabel, UIView;

@interface LQAlertView : BaseAlertView <LQAlertViewDelegate>
{
    _Bool _neverDismiss;
    UILabel *lblTitle;
    UIView *_contentView;
    NSArray *_options;
    NSArray *_actions;
    id <LQAlertViewDelegate> _delegate;
    UIView *_alertView;
    UIView *_titleView;
    UIView *_optionsPanel;
    NSMutableArray *_buttons;
    NSLayoutConstraint *_alertViewHeightConstraint;
    NSLayoutConstraint *_titleViewHeightContraint;
    CDUnknownBlockType _callBackBlock;
}

@property(nonatomic) _Bool neverDismiss; // @synthesize neverDismiss=_neverDismiss;
@property(copy, nonatomic) CDUnknownBlockType callBackBlock; // @synthesize callBackBlock=_callBackBlock;
@property(nonatomic) __weak NSLayoutConstraint *titleViewHeightContraint; // @synthesize titleViewHeightContraint=_titleViewHeightContraint;
@property(nonatomic) __weak NSLayoutConstraint *alertViewHeightConstraint; // @synthesize alertViewHeightConstraint=_alertViewHeightConstraint;
@property(retain, nonatomic) NSMutableArray *buttons; // @synthesize buttons=_buttons;
@property(nonatomic) __weak UIView *optionsPanel; // @synthesize optionsPanel=_optionsPanel;
@property(nonatomic) __weak UIView *titleView; // @synthesize titleView=_titleView;
@property(nonatomic) __weak UIView *alertView; // @synthesize alertView=_alertView;
@property(readonly, nonatomic) __weak id <LQAlertViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) NSArray *actions; // @synthesize actions=_actions;
@property(readonly, nonatomic) NSArray *options; // @synthesize options=_options;
@property(nonatomic) __weak UIView *contentView; // @synthesize contentView=_contentView;
@property(readonly, nonatomic) __weak UILabel *lblTitle; // @synthesize lblTitle;
- (void).cxx_destruct;
- (void)LQAlertView:(id)arg1 didDismissWithButtonIndex:(long long)arg2;
- (id)lastWindow;
- (void)dismiss;
- (void)hide;
- (void)show;
- (void)action:(id)arg1;
- (void)addOptions:(id)arg1 colorfulIndexes:(id)arg2 withDelegate:(id)arg3;
- (void)alertNeverDismissWithTitle:(id)arg1 content:(id)arg2 options:(id)arg3 colorfulIndexes:(id)arg4 withBlock:(CDUnknownBlockType)arg5;
- (void)alertWithTitle:(id)arg1 contentView:(id)arg2 options:(id)arg3 colorfulIndexes:(id)arg4 withBlock:(CDUnknownBlockType)arg5;
- (void)alertWithTitle:(id)arg1 content:(id)arg2 options:(id)arg3 colorfulIndexes:(id)arg4 withBlock:(CDUnknownBlockType)arg5;
- (void)alertWithTitle:(id)arg1 contentView:(id)arg2 options:(id)arg3 colorfulIndexes:(id)arg4 withDelegate:(id)arg5;
- (void)alertWithTitle:(id)arg1 content:(id)arg2 options:(id)arg3 colorfulIndexes:(id)arg4 withDelegate:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


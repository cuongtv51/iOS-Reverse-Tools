//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SSUIBaseShareActionSheet.h"

@class SSUIiPhoneShareActionSheetViewController, UIWindow;

@interface SSUIiPhoneShareActionSheet : SSUIBaseShareActionSheet
{
    long long _interfaceOrientation;
    UIWindow *_window;
    SSUIiPhoneShareActionSheetViewController *_viewCtr;
}

@property(retain, nonatomic) SSUIiPhoneShareActionSheetViewController *viewCtr; // @synthesize viewCtr=_viewCtr;
@property(retain, nonatomic) UIWindow *window; // @synthesize window=_window;
- (void).cxx_destruct;
- (void)dismiss;
- (void)onCancel:(CDUnknownBlockType)arg1;
- (void)onItemClick:(CDUnknownBlockType)arg1;
- (void)showInView:(id)arg1;
- (id)initWithItems:(id)arg1;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "BTGBaseViewController.h"

@class BTGSignInView, UIWindow;

@interface BTGSignInViewController : BTGBaseViewController
{
    BTGSignInView *_signInView;
    UIWindow *_window;
}

@property(retain, nonatomic) UIWindow *window; // @synthesize window=_window;
@property(retain, nonatomic) BTGSignInView *signInView; // @synthesize signInView=_signInView;
- (void).cxx_destruct;
- (void)dismiss;
- (void)show;
- (void)viewDidLoad;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

@end


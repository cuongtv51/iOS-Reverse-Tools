//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class UIViewController;

@protocol LoginManagerDelegate <NSObject>
- (void)loginManagerDidLoginWithAccountType:(long long)arg1 fromViewCtrl:(UIViewController *)arg2;
- (void)loginManagerTransition:(UIViewController *)arg1;
@end


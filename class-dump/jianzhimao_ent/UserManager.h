//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "AJAlertViewDelegate.h"

@class AccountBean, NSString;

@interface UserManager : NSObject <AJAlertViewDelegate>
{
    long long _account_type;
    AccountBean *_currentAccount;
}

+ (void)loginEaseMob;
+ (void)saveLoginAccountType:(long long)arg1;
+ (void)saveLoginAccount:(id)arg1 accountStr:(id)arg2 passwordStr:(id)arg3;
+ (void)loginFailHandler:(id)arg1 success:(_Bool)arg2 error:(id)arg3 callback:(CDUnknownBlockType)arg4;
+ (void)loginSuccessHandler:(id)arg1 pwStr:(id)arg2 account:(id)arg3 request:(id)arg4 success:(_Bool)arg5 error:(id)arg6 callback:(CDUnknownBlockType)arg7;
+ (void)loginWithCompany:(id)arg1 pwStr:(id)arg2 needHub:(_Bool)arg3 callback:(CDUnknownBlockType)arg4;
+ (void)loginWithLeader:(id)arg1 pwStr:(id)arg2 needHub:(_Bool)arg3 callback:(CDUnknownBlockType)arg4;
+ (void)loginWithAccountType:(long long)arg1 accountStr:(id)arg2 pwStr:(id)arg3 needHub:(_Bool)arg4 callback:(CDUnknownBlockType)arg5;
+ (_Bool)isLogin;
+ (void)deleteAccount;
+ (void)saveAccount:(id)arg1;
+ (id)currentAccount;
+ (long long)loginAccountType;
+ (long long)accountType;
+ (_Bool)isRememberPassword;
+ (void)setIsRememberPassword:(_Bool)arg1;
+ (id)sharedInstance;
@property(retain, nonatomic) AccountBean *currentAccount; // @synthesize currentAccount=_currentAccount;
@property(nonatomic) long long account_type; // @synthesize account_type=_account_type;
- (void).cxx_destruct;
- (void)alertView:(id)arg1 buttonClick:(long long)arg2;
- (id)findTabbarViewController;
- (void)deleteUserInfo:(CDUnknownBlockType)arg1;
- (void)cleanViews;
- (void)popToLoginViewController;
- (void)loginoutError;
- (void)remoteLogin;
- (void)loginout;
- (void)userLockHandler:(id)arg1;
- (void)showLoginErrorAlert;
- (void)showRemoteLoginAlert;
- (void)showUserLockAlert:(id)arg1;
- (_Bool)isLogin;
- (void)deleteAccount;
- (void)setupAccount_type:(long long)arg1;
- (id)init;
- (void)dealloc;
- (id)sharedInstance;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

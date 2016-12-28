//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "BaseNavViewController.h"

@class NSString, SecondCountDownTool, UIButton, UILabel, UITextField;

@interface ChangeEmailViewController : BaseNavViewController
{
    UILabel *_phoneLabel;
    UITextField *_verifyCodeTF;
    UIButton *_verifyCodeBtn;
    UITextField *_emailTF;
    NSString *_phone;
    NSString *_userID;
    SecondCountDownTool *_secondTool;
}

@property(retain, nonatomic) SecondCountDownTool *secondTool; // @synthesize secondTool=_secondTool;
@property(copy, nonatomic) NSString *userID; // @synthesize userID=_userID;
@property(copy, nonatomic) NSString *phone; // @synthesize phone=_phone;
@property(nonatomic) __weak UITextField *emailTF; // @synthesize emailTF=_emailTF;
@property(nonatomic) __weak UIButton *verifyCodeBtn; // @synthesize verifyCodeBtn=_verifyCodeBtn;
@property(nonatomic) __weak UITextField *verifyCodeTF; // @synthesize verifyCodeTF=_verifyCodeTF;
@property(nonatomic) __weak UILabel *phoneLabel; // @synthesize phoneLabel=_phoneLabel;
- (void).cxx_destruct;
- (void)dealloc;
- (void)getVerifyCode;
- (void)commitChange;
- (void)btnClick:(id)arg1;
- (void)refreshSecondDown:(id)arg1;
- (void)viewDidLoad;

@end


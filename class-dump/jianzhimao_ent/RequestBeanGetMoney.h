//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "RequestBeanHttpsBase.h"

@class NSString;

@interface RequestBeanGetMoney : RequestBeanHttpsBase
{
    NSString *_pwd;
    NSString *_money;
    NSString *_alipay_account;
    NSString *_alipay_name;
}

@property(retain, nonatomic) NSString *alipay_name; // @synthesize alipay_name=_alipay_name;
@property(retain, nonatomic) NSString *alipay_account; // @synthesize alipay_account=_alipay_account;
@property(copy, nonatomic) NSString *money; // @synthesize money=_money;
@property(retain, nonatomic) NSString *pwd; // @synthesize pwd=_pwd;
- (void).cxx_destruct;
- (double)timeout;
- (id)apiPath;

@end


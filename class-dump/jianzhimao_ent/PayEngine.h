//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "AlixPaylibDelegate.h"

@class NSString;

@interface PayEngine : NSObject <AlixPaylibDelegate>
{
    NSString *_schema;
    NSString *_notifyURL;
    NSString *_partnerKey;
    NSString *_sellerKey;
    NSString *_RSAPrivateKey;
    NSString *_RSAPublicKey;
    CDUnknownBlockType _finishBlock;
    SEL _resultSEL;
    NSString *_traceId;
    NSString *_timeStamp;
    NSString *_nonceStr;
    NSString *_package;
    NSString *_prepayid;
    NSString *_accessToken;
}

+ (void)paymentWithInfo:(id)arg1 result:(CDUnknownBlockType)arg2;
+ (void)connectAliPayWithSchema:(id)arg1 partner:(id)arg2 seller:(id)arg3 RSAPrivateKey:(id)arg4 RSAPublicKey:(id)arg5;
+ (id)sharePayEngine;
@property(copy) NSString *accessToken; // @synthesize accessToken=_accessToken;
@property(copy) NSString *prepayid; // @synthesize prepayid=_prepayid;
@property(copy) NSString *package; // @synthesize package=_package;
@property(copy) NSString *nonceStr; // @synthesize nonceStr=_nonceStr;
@property(copy) NSString *timeStamp; // @synthesize timeStamp=_timeStamp;
@property(copy) NSString *traceId; // @synthesize traceId=_traceId;
- (void).cxx_destruct;
- (void)wxPayAction;
- (id)generateTradeNO;
- (id)doRsa:(id)arg1;
- (void)paymentWithInfo:(id)arg1 result:(CDUnknownBlockType)arg2;
- (void)setAliPaySchema:(id)arg1 partner:(id)arg2 seller:(id)arg3 RSAPrivateKey:(id)arg4 RSAPublicKey:(id)arg5;
- (void)paymentResult:(id)arg1;
- (void)paymentResultDelegate:(id)arg1;
- (id)init;
- (_Bool)checkConfig;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


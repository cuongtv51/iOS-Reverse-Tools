//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JobBaseBean.h"

@class NSString;

@interface JobApplyBean : JobBaseBean
{
    long long _total_sign_counts;
    long long _today_sign_counts;
    long long _version;
    NSString *_cancel_cause;
    unsigned long long _is_offer;
}

@property(nonatomic) unsigned long long is_offer; // @synthesize is_offer=_is_offer;
@property(retain, nonatomic) NSString *cancel_cause; // @synthesize cancel_cause=_cancel_cause;
@property(nonatomic) long long version; // @synthesize version=_version;
@property(nonatomic) long long today_sign_counts; // @synthesize today_sign_counts=_today_sign_counts;
@property(nonatomic) long long total_sign_counts; // @synthesize total_sign_counts=_total_sign_counts;
- (void).cxx_destruct;

@end


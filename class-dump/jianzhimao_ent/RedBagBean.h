//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ObjectBeanBase.h"

@class NSString;

@interface RedBagBean : ObjectBeanBase
{
    long long _id;
    NSString *_end_time;
    NSString *_create_time;
    long long _status;
    NSString *_name;
    double _money;
    NSString *_desp;
    long long _min_money;
    long long _available;
}

@property(nonatomic) long long available; // @synthesize available=_available;
@property(nonatomic) long long min_money; // @synthesize min_money=_min_money;
@property(copy, nonatomic) NSString *desp; // @synthesize desp=_desp;
@property(nonatomic) double money; // @synthesize money=_money;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(nonatomic) long long status; // @synthesize status=_status;
@property(copy, nonatomic) NSString *create_time; // @synthesize create_time=_create_time;
@property(copy, nonatomic) NSString *end_time; // @synthesize end_time=_end_time;
@property(nonatomic) long long id; // @synthesize id=_id;
- (void).cxx_destruct;

@end


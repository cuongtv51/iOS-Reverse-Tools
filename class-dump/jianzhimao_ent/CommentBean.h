//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ObjectBeanBase.h"

@class NSString;

@interface CommentBean : ObjectBeanBase
{
    NSString *_create_time;
    NSString *_id;
    long long _league;
    NSString *_sex;
    NSString *_reason;
    NSString *_name;
    NSString *_user_id;
    long long _account_status;
    NSString *_resume_name;
}

@property(copy, nonatomic) NSString *resume_name; // @synthesize resume_name=_resume_name;
@property(nonatomic) long long account_status; // @synthesize account_status=_account_status;
@property(copy, nonatomic) NSString *user_id; // @synthesize user_id=_user_id;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(copy, nonatomic) NSString *reason; // @synthesize reason=_reason;
@property(copy, nonatomic) NSString *sex; // @synthesize sex=_sex;
@property(nonatomic) long long league; // @synthesize league=_league;
@property(copy, nonatomic) NSString *id; // @synthesize id=_id;
@property(copy, nonatomic) NSString *create_time; // @synthesize create_time=_create_time;
- (void).cxx_destruct;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ObjectBeanBase.h"

@class NSString;

@interface DutyInfo : ObjectBeanBase
{
    NSString *_job_id;
    NSString *_post_id;
    NSString *_salary;
    NSString *_title;
}

@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(copy, nonatomic) NSString *salary; // @synthesize salary=_salary;
@property(copy, nonatomic) NSString *post_id; // @synthesize post_id=_post_id;
@property(copy, nonatomic) NSString *job_id; // @synthesize job_id=_job_id;
- (void).cxx_destruct;

@end

//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ObjectBeanBase.h"

@class NSString;

@interface ApplyStatus : ObjectBeanBase
{
    NSString *_apply_id;
    NSString *_job_id;
    unsigned long long _current_status;
    unsigned long long _current_state;
}

@property(nonatomic) unsigned long long current_state; // @synthesize current_state=_current_state;
@property(nonatomic) unsigned long long current_status; // @synthesize current_status=_current_status;
@property(retain, nonatomic) NSString *job_id; // @synthesize job_id=_job_id;
@property(retain, nonatomic) NSString *apply_id; // @synthesize apply_id=_apply_id;
- (void).cxx_destruct;

@end


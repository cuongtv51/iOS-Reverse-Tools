//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "RequestBeanBase.h"

@interface RequestBeanGetJobDetailShareContent : RequestBeanBase
{
    long long _job_id;
    long long _tag;
}

@property(nonatomic) long long tag; // @synthesize tag=_tag;
@property(nonatomic) long long job_id; // @synthesize job_id=_job_id;
- (id)apiPath;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "RequestBeanBase.h"

@class NSString;

@interface RequestBeanUpdateJob : RequestBeanBase
{
    NSString *_job_id;
}

@property(copy, nonatomic) NSString *job_id; // @synthesize job_id=_job_id;
- (void).cxx_destruct;
- (double)timeout;
- (id)apiPath;

@end


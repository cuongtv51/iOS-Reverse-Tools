//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "RequestBeanBase.h"

@class NSString;

@interface RequestBeanSignininfo : RequestBeanBase
{
    NSString *_job_id;
    NSString *_code_id;
    NSString *_lat;
    NSString *_lon;
}

@property(retain, nonatomic) NSString *lon; // @synthesize lon=_lon;
@property(retain, nonatomic) NSString *lat; // @synthesize lat=_lat;
@property(retain, nonatomic) NSString *code_id; // @synthesize code_id=_code_id;
@property(retain, nonatomic) NSString *job_id; // @synthesize job_id=_job_id;
- (void).cxx_destruct;
- (id)apiPath;

@end


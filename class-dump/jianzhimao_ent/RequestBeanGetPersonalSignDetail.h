//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "RequestBeanBase.h"

@class NSString;

@interface RequestBeanGetPersonalSignDetail : RequestBeanBase
{
    _Bool _type;
    NSString *_apply_id;
    NSString *_dates;
}

@property(nonatomic) _Bool type; // @synthesize type=_type;
@property(retain, nonatomic) NSString *dates; // @synthesize dates=_dates;
@property(retain, nonatomic) NSString *apply_id; // @synthesize apply_id=_apply_id;
- (void).cxx_destruct;
- (id)apiPath;

@end


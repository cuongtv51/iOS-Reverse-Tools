//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ResponseBeanBase.h"

@class NSArray;

@interface ResponseBeanGetAliveSignedList : ResponseBeanBase
{
    NSArray *_list;
    long long _page_sum;
    long long _total_row;
}

@property(nonatomic) long long total_row; // @synthesize total_row=_total_row;
@property(nonatomic) long long page_sum; // @synthesize page_sum=_page_sum;
@property(retain, nonatomic) NSArray *list; // @synthesize list=_list;
- (void).cxx_destruct;

@end


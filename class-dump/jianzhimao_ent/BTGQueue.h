//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray;

@interface BTGQueue : NSObject
{
    NSMutableArray *_items;
    unsigned long long _capacity;
}

+ (id)queueWithCapacity:(unsigned long long)arg1;
@property(nonatomic) unsigned long long capacity; // @synthesize capacity=_capacity;
@property(retain, nonatomic) NSMutableArray *items; // @synthesize items=_items;
- (void).cxx_destruct;
- (unsigned long long)count;
- (id)componentsJoinedByString:(id)arg1;
- (void)empty;
- (id)dequeue;
- (void)enqueue:(id)arg1;
- (id)initWithCapacity:(unsigned long long)arg1;

@end


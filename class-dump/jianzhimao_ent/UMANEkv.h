//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UMANBaseEvent.h"

@class NSMutableDictionary, NSString;

@interface UMANEkv : UMANBaseEvent
{
    int du;
    NSString *_id;
    NSString *_key;
    NSMutableDictionary *_values;
}

@property(copy, nonatomic) NSString *key; // @synthesize key=_key;
@property(retain, nonatomic) NSMutableDictionary *values; // @synthesize values=_values;
@property(copy, nonatomic) NSString *id; // @synthesize id=_id;
@property(nonatomic) int du; // @synthesize du;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)outputUMLog;
- (id)attributes;
- (void)updateDu;
- (id)processDictionary:(id)arg1;
- (id)initWithId:(id)arg1 key:(id)arg2 values:(id)arg3 isGKV:(_Bool)arg4;
- (void)dealloc;

@end


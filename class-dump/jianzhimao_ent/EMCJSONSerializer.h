//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface EMCJSONSerializer : NSObject
{
    unsigned long long options;
}

+ (id)serializer;
+ (void)initialize;
@property(nonatomic) unsigned long long options; // @synthesize options;
- (id)serializeDictionary:(id)arg1 error:(id *)arg2;
- (id)serializeArray:(id)arg1 error:(id *)arg2;
- (id)serializeString:(id)arg1 error:(id *)arg2;
- (id)serializeNumber:(id)arg1 error:(id *)arg2;
- (id)serializeNull:(id)arg1 error:(id *)arg2;
- (id)serializeObject:(id)arg1 error:(id *)arg2;
- (_Bool)isValidJSONObject:(id)arg1;

@end


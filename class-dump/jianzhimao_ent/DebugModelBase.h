//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface DebugModelBase : NSObject
{
    NSString *_key_save;
}

+ (id)readWithKey:(id)arg1;
@property(retain, nonatomic) NSString *key_save; // @synthesize key_save=_key_save;
- (void).cxx_destruct;
- (void)save;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end


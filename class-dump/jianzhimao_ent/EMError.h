//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface EMError : NSObject
{
    long long errorCode;
    NSString *_description;
}

+ (id)errorWithNSError:(id)arg1;
+ (id)errorWithCode:(long long)arg1 andDescription:(id)arg2;
@property(copy, nonatomic) NSString *description; // @synthesize description=_description;
@property(nonatomic) long long errorCode; // @synthesize errorCode;
- (void).cxx_destruct;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface EMRobot : NSObject
{
    _Bool _activated;
    NSString *_username;
    NSString *_nickname;
}

+ (id)robotWithDictionary:(id)arg1;
@property(nonatomic) _Bool activated; // @synthesize activated=_activated;
@property(copy, nonatomic) NSString *nickname; // @synthesize nickname=_nickname;
@property(copy, nonatomic) NSString *username; // @synthesize username=_username;
- (void).cxx_destruct;
- (id)init;

@end

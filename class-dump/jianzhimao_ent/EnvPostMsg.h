//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface EnvPostMsg : NSObject
{
    _Bool _appRunBackGround;
    _Bool _bEnterNavi;
}

@property(nonatomic) _Bool bEnterNavi; // @synthesize bEnterNavi=_bEnterNavi;
@property(nonatomic) _Bool appRunBackGround; // @synthesize appRunBackGround=_appRunBackGround;
- (int)onUserCommand:(id)arg1;
- (void)userCommandThreadProcess:(id)arg1;
- (_Bool)PostMessage:(unsigned int)arg1 arg1:(void *)arg2 arg2:(int)arg3;
- (id)init;
- (void)dealloc;
- (void)exitNavi;
- (void)enterNavi;
- (void)appForground;
- (void)appBackground;

@end


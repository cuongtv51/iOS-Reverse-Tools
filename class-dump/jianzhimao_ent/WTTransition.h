//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class WTReCharacterBase, WTReLiteral, WTState;

@interface WTTransition : NSObject
{
    WTReCharacterBase *_node;
    WTReLiteral *_bypassNode;
    WTState *_nextState;
}

@property(retain, nonatomic) WTState *nextState; // @synthesize nextState=_nextState;
@property(nonatomic) __weak WTReLiteral *bypassNode; // @synthesize bypassNode=_bypassNode;
@property(nonatomic) __weak WTReCharacterBase *node; // @synthesize node=_node;
- (void).cxx_destruct;

@end


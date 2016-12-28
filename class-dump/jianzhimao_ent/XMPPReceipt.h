//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface XMPPReceipt : NSObject
{
    _Bool isGroup;
    _Bool _isAnonymous;
    NSString *fromJid;
    NSString *toJid;
    NSString *chatId;
    NSString *mid;
    long long timestamp;
    NSString *_anonymousNick;
}

@property(copy, nonatomic) NSString *anonymousNick; // @synthesize anonymousNick=_anonymousNick;
@property(nonatomic) _Bool isAnonymous; // @synthesize isAnonymous=_isAnonymous;
@property(nonatomic) long long timestamp; // @synthesize timestamp;
@property(nonatomic) _Bool isGroup; // @synthesize isGroup;
@property(copy, nonatomic) NSString *mid; // @synthesize mid;
@property(copy, nonatomic) NSString *chatId; // @synthesize chatId;
@property(copy, nonatomic) NSString *toJid; // @synthesize toJid;
@property(copy, nonatomic) NSString *fromJid; // @synthesize fromJid;
- (void).cxx_destruct;
- (id)toXMPPMessage;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDate, XMPPJID, XMPPPresence;

@protocol XMPPResource <NSObject>
- (long long)compare:(id <XMPPResource>)arg1;
- (NSDate *)presenceDate;
- (XMPPPresence *)presence;
- (XMPPJID *)jid;
@end


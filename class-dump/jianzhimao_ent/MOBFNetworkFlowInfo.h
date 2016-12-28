//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDate;

@interface MOBFNetworkFlowInfo : NSObject
{
    unsigned long long _receivedBytes;
    unsigned long long _sentBytes;
    NSDate *_lastChangeTime;
    unsigned long long _WIFIReceivedBytes;
    unsigned long long _WIFISentBytes;
    unsigned long long _WWANReceivedBytes;
    unsigned long long _WWANSentBytes;
}

+ (id)sharedInstance;
@property(nonatomic) unsigned long long WWANSentBytes; // @synthesize WWANSentBytes=_WWANSentBytes;
@property(nonatomic) unsigned long long WWANReceivedBytes; // @synthesize WWANReceivedBytes=_WWANReceivedBytes;
@property(nonatomic) unsigned long long WIFISentBytes; // @synthesize WIFISentBytes=_WIFISentBytes;
@property(nonatomic) unsigned long long WIFIReceivedBytes; // @synthesize WIFIReceivedBytes=_WIFIReceivedBytes;
@property(retain, nonatomic) NSDate *lastChangeTime; // @synthesize lastChangeTime=_lastChangeTime;
@property(nonatomic) unsigned long long sentBytes; // @synthesize sentBytes=_sentBytes;
@property(nonatomic) unsigned long long receivedBytes; // @synthesize receivedBytes=_receivedBytes;
- (void).cxx_destruct;
- (void)update;
- (id)init;

@end


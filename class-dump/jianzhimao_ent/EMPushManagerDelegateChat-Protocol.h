//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "EMPushManagerDelegateBase.h"

@class EMError, NSArray;

@protocol EMPushManagerDelegateChat <EMPushManagerDelegateBase>

@optional
- (void)didIgnoreGroupPushNotification:(NSArray *)arg1 error:(EMError *)arg2;
@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IUsernameConverter.h"

@class NSString;

@interface EMUsernameConverter : NSObject <IUsernameConverter>
{
}

- (id)key2Chatter:(id)arg1 info:(id)arg2;
- (id)groupId2Key:(id)arg1 nickname:(id)arg2 info:(id)arg3;
- (id)key2GroupId:(id)arg1 info:(id)arg2;
- (id)groupId2Key:(id)arg1 info:(id)arg2;
- (id)key2Username:(id)arg1 info:(id)arg2;
- (id)username2Key:(id)arg1 info:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

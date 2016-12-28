//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSFastEnumeration.h"

@interface DDList : NSObject <NSFastEnumeration>
{
    struct DDListNode *listHead;
    struct DDListNode *listTail;
}

- (void)dealloc;
- (id)reverseListEnumerator;
- (id)listEnumerator;
- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;
- (unsigned long long)count;
- (_Bool)contains:(void *)arg1;
- (void)removeAllElements;
- (void)removeAll:(void *)arg1;
- (void)remove:(void *)arg1;
- (void)remove:(void *)arg1 allInstances:(_Bool)arg2;
- (void)add:(void *)arg1;
- (id)init;

@end


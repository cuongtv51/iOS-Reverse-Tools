//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface GLEvent : NSObject
{
    NSString *_name;
    id _obj;
    id _data;
}

@property(retain, nonatomic) id data; // @synthesize data=_data;
@property(retain, nonatomic) id obj; // @synthesize obj=_obj;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (id)initWithName:(id)arg1 obj:(id)arg2 data:(id)arg3;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "RequestBeanBase.h"

@class NSData, NSString;

@interface RequestBeanUpload : RequestBeanBase
{
    NSData *_fileData;
    NSString *_fileName;
}

+ (id)mj_ignoredPropertyNames;
@property(retain, nonatomic) NSString *fileName; // @synthesize fileName=_fileName;
@property(retain, nonatomic) NSData *fileData; // @synthesize fileData=_fileData;
- (void).cxx_destruct;
- (double)timeout;
- (long long)httpMethod;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ViewModelBase.h"

#import "ViewModelResumeManagerProtocol.h"

@class NSString, UIImage;

@interface ViewModelResumeManagerCell : ViewModelBase <ViewModelResumeManagerProtocol>
{
    _Bool isRead;
    NSString *headPath;
    NSString *name;
    UIImage *sexImage;
    NSString *height;
    NSString *content;
    NSString *age;
    NSString *sex;
}

@property(nonatomic) _Bool isRead; // @synthesize isRead;
@property(copy, nonatomic) NSString *sex; // @synthesize sex;
@property(copy, nonatomic) NSString *age; // @synthesize age;
@property(copy, nonatomic) NSString *content; // @synthesize content;
@property(copy, nonatomic) NSString *height; // @synthesize height;
@property(retain, nonatomic) UIImage *sexImage; // @synthesize sexImage;
@property(copy, nonatomic) NSString *name; // @synthesize name;
@property(copy, nonatomic) NSString *headPath; // @synthesize headPath;
- (void).cxx_destruct;
- (id)formatAge:(id)arg1;
- (id)formatHeadPath:(id)arg1 img:(id)arg2;
- (id)formatHeight:(id)arg1;
- (id)formatName:(id)arg1;
- (void)buildViewModel:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


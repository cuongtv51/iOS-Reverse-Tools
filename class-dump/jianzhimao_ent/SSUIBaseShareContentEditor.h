//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSString, SSDKImage;

@interface SSUIBaseShareContentEditor : NSObject
{
    NSString *_content;
    SSDKImage *_image;
    NSArray *_platformTypes;
    CDUnknownBlockType _submitHandler;
    CDUnknownBlockType _cancelHandler;
}

@property(copy, nonatomic) CDUnknownBlockType cancelHandler; // @synthesize cancelHandler=_cancelHandler;
@property(copy, nonatomic) CDUnknownBlockType submitHandler; // @synthesize submitHandler=_submitHandler;
@property(retain, nonatomic) NSArray *platformTypes; // @synthesize platformTypes=_platformTypes;
@property(retain, nonatomic) SSDKImage *image; // @synthesize image=_image;
@property(copy, nonatomic) NSString *content; // @synthesize content=_content;
- (void).cxx_destruct;
- (void)onCancel:(CDUnknownBlockType)arg1;
- (void)onSubmit:(CDUnknownBlockType)arg1;
- (void)dismiss;
- (void)show;
- (id)initWithContent:(id)arg1 image:(id)arg2 platformTypes:(id)arg3;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class SSUIBaseShareContentEditor;

@interface SSUIShareContentEditorViewController : NSObject
{
    SSUIBaseShareContentEditor *_shareContentEditor;
}

@property(retain, nonatomic) SSUIBaseShareContentEditor *shareContentEditor; // @synthesize shareContentEditor=_shareContentEditor;
- (void).cxx_destruct;
- (void)onCancel:(CDUnknownBlockType)arg1;
- (void)onSubmit:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (void)dismiss;
- (void)show;
- (id)initWithContent:(id)arg1 image:(id)arg2 platformTypes:(id)arg3;

@end


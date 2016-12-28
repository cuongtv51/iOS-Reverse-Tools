//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "UITextFieldDelegate.h"
#import "UITextViewDelegate.h"

@class NSMutableSet, NSString;

@interface IQKeyboardReturnKeyHandler : NSObject <UITextFieldDelegate, UITextViewDelegate>
{
    NSMutableSet *textFieldInfoCache;
    long long _lastTextFieldReturnKeyType;
    id <UITextFieldDelegate><UITextViewDelegate> _delegate;
    long long _toolbarManageBehaviour;
}

@property(nonatomic) long long toolbarManageBehaviour; // @synthesize toolbarManageBehaviour=_toolbarManageBehaviour;
@property(nonatomic) __weak id <UITextFieldDelegate><UITextViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) long long lastTextFieldReturnKeyType; // @synthesize lastTextFieldReturnKeyType=_lastTextFieldReturnKeyType;
- (void).cxx_destruct;
- (void)dealloc;
- (_Bool)textView:(id)arg1 shouldInteractWithTextAttachment:(id)arg2 inRange:(struct _NSRange)arg3;
- (_Bool)textView:(id)arg1 shouldInteractWithURL:(id)arg2 inRange:(struct _NSRange)arg3;
- (void)textViewDidChangeSelection:(id)arg1;
- (void)textViewDidChange:(id)arg1;
- (_Bool)textView:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(id)arg3;
- (void)textViewDidEndEditing:(id)arg1;
- (void)textViewDidBeginEditing:(id)arg1;
- (_Bool)textViewShouldEndEditing:(id)arg1;
- (_Bool)textViewShouldBeginEditing:(id)arg1;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (_Bool)textFieldShouldClear:(id)arg1;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (void)textFieldDidEndEditing:(id)arg1;
- (_Bool)textFieldShouldEndEditing:(id)arg1;
- (void)textFieldDidBeginEditing:(id)arg1;
- (_Bool)textFieldShouldBeginEditing:(id)arg1;
- (void)goToNextResponderOrResign:(id)arg1;
- (void)updateReturnKeyTypeOnTextField:(id)arg1;
- (void)addTextFieldView:(id)arg1;
- (void)removeTextFieldView:(id)arg1;
- (void)removeResponderFromView:(id)arg1;
- (void)addResponderFromView:(id)arg1;
- (id)textFieldCachedInfo:(id)arg1;
- (id)initWithViewController:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


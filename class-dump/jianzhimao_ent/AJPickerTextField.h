//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITextField.h"

#import "UIPickerViewDataSource.h"
#import "UIPickerViewDelegate.h"

@class NSArray, NSString;

@interface AJPickerTextField : UITextField <UIPickerViewDataSource, UIPickerViewDelegate>
{
    id <AJPickerTextFieldDelegate> _privateDelegate;
    NSString *_tailContent;
    NSArray *_selectionArray;
    long long _selectedRow;
}

@property(nonatomic) long long selectedRow; // @synthesize selectedRow=_selectedRow;
@property(retain, nonatomic) NSArray *selectionArray; // @synthesize selectionArray=_selectionArray;
@property(copy, nonatomic) NSString *tailContent; // @synthesize tailContent=_tailContent;
@property(nonatomic) __weak id <AJPickerTextFieldDelegate> privateDelegate; // @synthesize privateDelegate=_privateDelegate;
- (void).cxx_destruct;
- (void)pickerView:(id)arg1 didSelectRow:(long long)arg2 inComponent:(long long)arg3;
- (id)pickerView:(id)arg1 titleForRow:(long long)arg2 forComponent:(long long)arg3;
- (double)pickerView:(id)arg1 rowHeightForComponent:(long long)arg2;
- (long long)pickerView:(id)arg1 numberOfRowsInComponent:(long long)arg2;
- (long long)numberOfComponentsInPickerView:(id)arg1;
- (void)confirmBarItemClick:(id)arg1;
- (void)cancelBarItemClick:(id)arg1;
- (void)refreshContent;
- (void)setupViews;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


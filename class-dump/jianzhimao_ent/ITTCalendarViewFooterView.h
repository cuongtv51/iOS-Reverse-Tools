//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIButton;

@interface ITTCalendarViewFooterView : UIView
{
    id <ITTCalendarViewFooterViewDelegate> _delegate;
    UIButton *_selectedButton;
}

+ (id)viewFromNib;
@property(nonatomic) id <ITTCalendarViewFooterViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) UIButton *selectedButton; // @synthesize selectedButton=_selectedButton;
- (void).cxx_destruct;

@end


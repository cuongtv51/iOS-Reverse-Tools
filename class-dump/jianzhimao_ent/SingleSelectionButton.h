//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIButton.h"

@class NSString, UIImageView;

@interface SingleSelectionButton : UIButton
{
    _Bool _hasSelected;
    NSString *_selectionNameStr;
    UIImageView *_checkboxImgView;
}

@property(retain, nonatomic) UIImageView *checkboxImgView; // @synthesize checkboxImgView=_checkboxImgView;
@property(nonatomic) _Bool hasSelected; // @synthesize hasSelected=_hasSelected;
@property(copy, nonatomic) NSString *selectionNameStr; // @synthesize selectionNameStr=_selectionNameStr;
- (void).cxx_destruct;
- (void)setupViews;
- (id)initWithFrame:(struct CGRect)arg1;

@end


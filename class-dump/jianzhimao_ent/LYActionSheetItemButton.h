//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIButton.h"

@class LYActionSheetItem, UIImageView;

@interface LYActionSheetItemButton : UIButton
{
    LYActionSheetItem *_item;
    UIImageView *_topLineView;
}

@property(retain, nonatomic) UIImageView *topLineView; // @synthesize topLineView=_topLineView;
@property(retain, nonatomic) LYActionSheetItem *item; // @synthesize item=_item;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)setupUI;
- (id)initWithItem:(id)arg1;

@end

